<div align="center">

<img src="https://capsule-render.vercel.app/api?type=waving&color=0:141E30,50:243B55,100:6C63FF&height=230&section=header&text=Hospital%20Queue%20Management%20System&fontSize=38&fontColor=ffffff&animation=twinkling&fontAlignY=38&desc=Priority-Based%20Patient%20Care%20Queue%20in%20C&descAlignY=60&descSize=18" width="100%"/>

<br>

## 🏥 Priority-Based Patient Care Queue

### Designed Using Singly Linked List & Priority Queue

<br>

<img src="https://img.shields.io/badge/👨‍🏫%20Faculty-Dr.%20Md.%20Atiqur%20Rahman-6C63FF?style=for-the-badge">
<br><br>

<img src="https://img.shields.io/badge/👥%20Team%20Member-S.M.%20Tanzim%20Hassan-243B55?style=for-the-badge">
<br>

<img src="https://img.shields.io/badge/👥%20Team%20Member-Sharmin%20Jahan%20Nijhum-243B55?style=for-the-badge">

<br><br>

<img src="https://img.shields.io/badge/💻%20Language-C-00599C?style=for-the-badge&logo=c&logoColor=white">
<img src="https://img.shields.io/badge/🚦%20Priority%20Queue-6C63FF?style=for-the-badge">
<img src="https://img.shields.io/badge/🔗%20Singly%20Linked%20List-243B55?style=for-the-badge">

</div>

---

## 🏥 About the Project

The **Hospital Queue Management System** is a simple and efficient **C-based priority queue application** designed to simulate patient management in a hospital.

The system uses a **Singly Linked List** to implement a **Priority Queue**, where patients are automatically arranged according to their medical urgency.

Patients are served according to the following priority:

**🔴 Emergency → 🟠 Serious → 🟢 Normal**

This project demonstrates the practical application of fundamental **Data Structures and Algorithms (DSA)** concepts in a real-world hospital scenario.

---

## 🎯 Project Objectives

* 🔗 Implement a **Priority Queue using a Singly Linked List**
* 🏥 Simulate a basic hospital patient management system
* 🚑 Prioritize patients according to medical urgency
* 🔍 Implement patient searching using ID
* ➕ Perform insertion operations
* ❌ Perform deletion operations
* 🔄 Demonstrate linked-list traversal
* 💾 Practice pointers and dynamic memory allocation
* 🧠 Apply DSA concepts to a practical problem

---

## ✨ Features

| Feature                 | Description                                |
| ----------------------- | ------------------------------------------ |
| ➕ **Add Patient**       | Register a new patient                     |
| 🚑 **Serve Patient**    | Serve the highest-priority patient         |
| 🔍 **Search Patient**   | Search patient using ID                    |
| 📋 **Display Patients** | Display the complete queue                 |
| ❌ **Remove Patient**    | Remove a specific patient                  |
| 🚦 **Priority System**  | Automatically organize patients by urgency |
| 🖥️ **Menu Interface**  | Simple console-based interface             |

---

## 🚦 Priority System

Patients are automatically arranged based on their priority level.

| Priority | Level     | Service Order |
| :------: | --------- | :-----------: |
| 🔴 **1** | Emergency |   **First**   |
| 🟠 **2** | Serious   |   **Second**  |
| 🟢 **3** | Normal    |   **Third**   |

### Example

If patients arrive in this order:

```text
Normal → Emergency → Serious → Emergency
```

The system automatically organizes them as:

```text
Emergency → Emergency → Serious → Normal
```

Therefore, the most urgent patient is always at the **front of the queue**.

---

## 🧠 Data Structure

### 🔗 Singly Linked List

The system uses a **Singly Linked List** to store patient information dynamically.

Each node contains:

```text
+--------------------------------+
|        Patient Information     |
+--------------------------------+
| Patient ID                     |
| Patient Name                   |
| Age                            |
| Disease                        |
| Priority                       |
| Next Pointer                   |
+--------------------------------+
```

Each node points to the **next patient node** in the queue.

---

## 🚑 Priority Queue Workflow

```text
                    FRONT
                      |
                      ▼
              +---------------+
              |   Emergency   |
              |   Priority 1  |
              +---------------+
                      |
                      ▼
              +---------------+
              |    Serious    |
              |   Priority 2  |
              +---------------+
                      |
                      ▼
              +---------------+
              |     Normal    |
              |   Priority 3  |
              +---------------+
                      |
                      ▼
                    NULL
```

When a new patient is added, the program checks the patient's priority and places them in the correct position.

---

## ⚙️ Main Operations

### ➕ 1. Add Patient

A new patient node is created and inserted into the correct position according to priority.

```text
New Patient
     │
     ▼
Check Priority
     │
     ├── 🔴 Emergency ──► Front
     │
     ├── 🟠 Serious ────► Correct Position
     │
     └── 🟢 Normal ─────► End
```

### 🚑 2. Serve Patient

The patient at the front of the queue is served and removed.

```text
Before:

[Emergency] → [Serious] → [Normal]

        ↓ Serve

After:

[Serious] → [Normal]
```

### 🔍 3. Search Patient

The program traverses the linked list and searches for a patient using their unique **Patient ID**.

### ❌ 4. Remove Patient

A specific patient can be removed from the queue using their **Patient ID**.

### 📋 5. Display Patients

The program displays all patients from the **front of the queue to the end**.

---

## 📊 Time Complexity

| Operation           | Time Complexity |
| ------------------- | :-------------: |
| ➕ Add Patient       |     **O(n)**    |
| 🚑 Serve Patient    |     **O(1)**    |
| 🔍 Search Patient   |     **O(n)**    |
| 📋 Display Patients |     **O(n)**    |
| ❌ Remove Patient    |     **O(n)**    |

### Why?

**Add Patient — O(n)**
The program may need to traverse the linked list to find the correct priority position.

**Serve Patient — O(1)**
The highest-priority patient is always at the front.

**Search / Remove — O(n)**
The program may need to check every node to find the required patient.

---

## 🖥️ Menu Interface

```text
╔══════════════════════════════════════╗
║      HOSPITAL QUEUE MANAGEMENT       ║
╠══════════════════════════════════════╣
║                                      ║
║  1. Add Patient                      ║
║  2. Serve Patient                    ║
║  3. Search Patient                   ║
║  4. Display Patients                 ║
║  5. Remove Patient                   ║
║  6. Exit                             ║
║                                      ║
╚══════════════════════════════════════╝
```

---

## 👤 Patient Information

Each patient record contains:

```text
Patient ID
Patient Name
Age
Disease
Priority
```

### Example

```text
--------------------------------
Patient ID : 101
Name       : Rahim
Age        : 45
Disease    : Heart Problem
Priority   : Emergency
--------------------------------
```

---

## 🔄 Example Queue

Suppose these patients are added:

```text
Rahim      → Normal
Karim      → Emergency
Nusrat     → Serious
Sakib      → Emergency
```

The queue becomes:

```text
                 FRONT
                   │
                   ▼
        ┌──────────────────┐
        │ Sakib            │
        │ 🔴 Emergency     │
        └──────────────────┘
                   │
                   ▼
        ┌──────────────────┐
        │ Karim            │
        │ 🔴 Emergency     │
        └──────────────────┘
                   │
                   ▼
        ┌──────────────────┐
        │ Nusrat           │
        │ 🟠 Serious       │
        └──────────────────┘
                   │
                   ▼
        ┌──────────────────┐
        │ Rahim            │
        │ 🟢 Normal        │
        └──────────────────┘
                   │
                   ▼
                  NULL
```

---

## 🧩 DSA Concepts Demonstrated

* 🔗 **Singly Linked List**
* 🚦 **Priority Queue**
* 🔍 **Linear Search**
* ➕ **Insertion**
* ❌ **Deletion**
* 🔄 **Traversal**
* 👉 **Pointers**
* 💾 **Dynamic Memory Allocation**
* 🏗️ **Structures in C**
* 🔁 **Menu-Driven Programming**

---

## 🛠️ Technology Stack

| Technology             | Purpose                |
| ---------------------- | ---------------------- |
| **C**                  | Programming Language   |
| **Singly Linked List** | Patient Data Storage   |
| **Priority Queue**     | Patient Prioritization |
| **GCC**                | Compilation            |
| **GitHub**             | Version Control        |

---

## 📁 Project Structure

```text
Hospital-Queue-Management-System/
│
├── 📄 hospital_queue_compact.c
├── 📄 README.md
└── 📄 LICENSE
```

---

## 🚀 Getting Started

### Prerequisites

Make sure you have a C compiler installed.

Recommended:

```text
GCC
Code::Blocks
VS Code + GCC
Dev-C++
```

### Clone the Repository

```bash
git clone https://github.com/<your-username>/<repo-name>.git
```

### Enter the Project Directory

```bash
cd Hospital-Queue-Management-System
```

### Compile

```bash
gcc hospital_queue_compact.c -o hospital_queue
```

### Run

#### Windows

```bash
hospital_queue.exe
```

#### Linux / macOS

```bash
./hospital_queue
```

---

## 🖥️ Sample Workflow

```text
========================================
           ADD PATIENT
========================================

Enter Patient ID : 101
Enter Name       : Rahim
Enter Age        : 45
Enter Disease    : Fever

Select Priority:
1. Emergency
2. Serious
3. Normal

Enter choice : 3

Patient added successfully!
```

### Serve Patient

```text
========================================
           SERVE PATIENT
========================================

Serving Patient...

Patient ID : 101
Name       : Rahim
Priority   : Normal

Patient served successfully!
```

---

## 🔮 Future Improvements

* 💾 File-based patient record storage
* 🔐 Admin login and authentication
* 📊 Patient statistics
* ⏱️ Estimated waiting time
* 🏥 Multiple hospital departments
* 👨‍⚕️ Doctor assignment
* 🖥️ Graphical User Interface
* 🌐 Web-based version
* 📱 Mobile application
* 🗄️ Database integration
* 🔔 Emergency notification system

---

## 🎓 Learning Outcomes

After completing this project, students can understand:

* How a **Singly Linked List** works
* How a **Priority Queue** can be implemented using linked lists
* How nodes are dynamically created and deleted
* How pointers connect different nodes
* How data can be searched and traversed
* How priority-based systems solve real-world problems

---

## 📜 License

This project is open-source and available under the **MIT License**.

---

<div align="center">

## ⭐ Thanks for Visiting!

### 🏥 Hospital Queue Management System

**Priority-Based Patient Care using Singly Linked List**

<br>

🔴 **Emergency**   →  
🟠 **Serious**   →  
🟢 **Normal**

<br><br>

### ⚽ Football • Code • Passion
<br>
<br><br>
**Keep Coding ⚡ Keep Learning 🚀**
<br>

<img src="https://capsule-render.vercel.app/api?type=waving&color=0:6C63FF,50:243B55,100:141E30&height=160&section=footer&text=LEGENDS%20NEVER%20STOP%20%F0%9F%90%90&fontSize=28&fontColor=ffffff&animation=twinkling&fontAlignY=65" width="100%"/>

</div>
