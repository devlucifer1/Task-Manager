📝 Task Manager

A simple and lightweight Command-Line Task Manager built with C++.

Task Manager allows you to create, manage, complete, and organize your daily tasks directly from the terminal.

---

✨ Features

- ➕ Add new tasks
- 📋 View all tasks
- 🗑️ Delete tasks
- ✅ Mark tasks as completed
- ↩️ Unmark completed tasks
- 📌 View completed tasks
- ⏳ View incomplete tasks
- 💾 Automatically save tasks to a text file
- 🖥️ Simple and easy-to-use command-line interface

---

🛠️ Built With

- C++
- "iostream"
- "string"
- "fstream"
- "cstdio"

The project mainly uses file handling to save and manage tasks.

---

📂 Project Structure

Task-Manager/
│
├── manage.cpp    # Source code
├── manage        # Compiled executable
├── tasks.txt     # Stores your tasks
└── README.md     # Project documentation

---

⚙️ Requirements

Before running the project, you need:

- Linux / Unix-based system
- C++ compiler such as "g++"
- Terminal

---

🚀 Installation & Running

1. Clone the repository

git clone https://github.com/devlucifer1/Task-Manager.git

2. Enter the project directory

cd Task-Manager

3. Compile the program

g++ manage.cpp -o manage

4. Run the program

./manage

---

🎮 How to Use

When you start the program, you will see the main menu:

1. Add Task
2. View Tasks
3. Delete Task
4. Mark Task as Complete
5. Unmark Task as Complete
6. View Completed Tasks
7. View Incomplete Tasks
8. Quit

Choose a number from "1" to "8" to perform an action.

➕ Add Task

Choose:

1

Then enter the task you want to add.

Example:

Enter the task you want to add: Learn C++

The task will be saved as:

[ ] Learn C++

---

📋 View Tasks

Choose:

2

This displays all saved tasks.

Example:

- [ ] Learn C++
- [✓] Finish project

---

🗑️ Delete Task

Choose:

3

Enter the task name you want to delete.

Example:

Enter the task you want to delete: Learn C++

The task will be removed from "tasks.txt".

---

✅ Mark Task as Complete

Choose:

4

Enter the task name.

Example:

Enter the task you want to mark as complete: Learn C++

The task changes from:

[ ] Learn C++

to:

[✓] Learn C++

---

↩️ Unmark Task

Choose:

5

Enter the completed task name.

The task will change from:

[✓] Learn C++

back to:

[ ] Learn C++

---

📌 View Completed Tasks

Choose:

6

This displays only completed tasks.

Example:

Your completed tasks:
- [✓] Finish C++ project
- [✓] Study fstream

---

⏳ View Incomplete Tasks

Choose:

7

This displays only unfinished tasks.

Example:

Your incomplete tasks:
- [ ] Learn functions
- [ ] Practice file handling

---

🚪 Quit

Choose:

8

to exit the program.

---

💾 Data Storage

Tasks are stored locally in:

tasks.txt

The program automatically reads and updates this file whenever you add, delete, complete, or unmark a task.

No database is required.

---

📚 What This Project Demonstrates

This project was built to practice fundamental C++ concepts, including:

- Functions
- Strings
- Loops
- Conditional statements
- "switch"
- "fstream"
- Reading and writing files
- Temporary files
- "remove()"
- "rename()"
- Command-line applications

---

👨‍💻 Author

LUCIFER

Built with C++ and ❤️

---

📄 License

This project is open source and available for learning and personal use.