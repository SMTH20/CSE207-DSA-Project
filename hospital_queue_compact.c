#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define EMERGENCY 1
#define SERIOUS   2
#define NORMAL    3

struct Patient {
    int id, age, priority;
    char name[50], disease[50];
};

struct Node {
    struct Patient data;
    struct Node *next;
};

struct Node *front = NULL;

int getPriorityChoice() {
    int choice, valid = 0;
    do {
        printf("\nSelect Priority Level:\n1. Emergency\n2. Serious\n3. Normal\nEnter your choice (1-3): ");
        scanf("%d", &choice);
        if (choice == EMERGENCY || choice == SERIOUS || choice == NORMAL) valid = 1;
        else printf("Invalid choice! Enter 1, 2, or 3.\n");
    } while (!valid);
    return choice;
}

const char* priorityLabel(int p) {
    if (p == EMERGENCY) return "Emergency";
    if (p == SERIOUS) return "Serious";
    return "Normal";
}

void addPatient() {
    struct Node *newNode = (struct Node *) malloc(sizeof(struct Node));

    printf("Enter Patient ID: ");
    scanf("%d", &newNode->data.id);
    printf("Enter Name: ");
    scanf(" %[^\n]", newNode->data.name);
    printf("Enter Age: ");
    scanf("%d", &newNode->data.age);
    printf("Enter Disease: ");
    scanf(" %[^\n]", newNode->data.disease);
    newNode->data.priority = getPriorityChoice();
    newNode->next = NULL;

    if (front == NULL || newNode->data.priority < front->data.priority) {
        newNode->next = front;
        front = newNode;
        printf("Patient added successfully!\n");
        return;
    }

    struct Node *temp = front;
    while (temp->next != NULL && temp->next->data.priority <= newNode->data.priority)
        temp = temp->next;
    newNode->next = temp->next;
    temp->next = newNode;
    printf("Patient added successfully!\n");
}

void servePatient() {
    if (front == NULL) { printf("Queue is empty. No patient to serve.\n"); return; }
    struct Node *temp = front;
    printf("\nServing Patient:\nID: %d | Name: %s | Age: %d | Disease: %s | Priority: %s\n",
           temp->data.id, temp->data.name, temp->data.age, temp->data.disease, priorityLabel(temp->data.priority));
    front = front->next;
    free(temp);
}

void searchPatient() {
    int id;
    printf("Enter Patient ID to search: ");
    scanf("%d", &id);
    struct Node *temp = front;
    while (temp != NULL) {
        if (temp->data.id == id) {
            printf("\nPatient Found:\nID: %d | Name: %s | Age: %d | Disease: %s | Priority: %s\n",
                   temp->data.id, temp->data.name, temp->data.age, temp->data.disease, priorityLabel(temp->data.priority));
            return;
        }
        temp = temp->next;
    }
    printf("Patient with ID %d not found.\n", id);
}

void removePatient() {
    int id;
    printf("Enter Patient ID to remove: ");
    scanf("%d", &id);
    struct Node *temp = front, *prev = NULL;

    while (temp != NULL && temp->data.id != id) {
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL) { printf("Patient with ID %d not found.\n", id); return; }

    if (prev == NULL) front = temp->next;
    else prev->next = temp->next;

    free(temp);
    printf("Patient with ID %d removed successfully.\n", id);
}

void displayPatients() {
    if (front == NULL) { printf("Queue is empty.\n"); return; }
    struct Node *temp = front;
    int position = 1;
    printf("\n---- Patient Queue ----\n");
    while (temp != NULL) {
        printf("%d. ID: %d | Name: %s | Age: %d | Disease: %s | Priority: %s\n",
               position, temp->data.id, temp->data.name, temp->data.age, temp->data.disease, priorityLabel(temp->data.priority));
        temp = temp->next;
        position++;
    }
}

int main() {
    int choice;
    do {
        printf("\n===== HOSPITAL QUEUE MENU =====\n1. Add Patient\n2. Serve Patient\n3. Search Patient\n4. Display Patients\n5. Remove Patient\n6. Exit\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: addPatient(); break;
            case 2: servePatient(); break;
            case 3: searchPatient(); break;
            case 4: displayPatients(); break;
            case 5: removePatient(); break;
            case 6: printf("Exiting program. Goodbye!\n"); break;
            default: printf("Invalid choice. Try again.\n");
        }
    } while (choice != 6);
    return 0;
}
