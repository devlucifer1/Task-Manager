#include <iostream>
#include <string>
#include <fstream>
#include <cstdio>
using namespace std;

void addtask() {
    cout << "Enter the task you want to add: ";
    cin >> ws; // To ignore any leading whitespace
    string task;
    getline(cin, task);
    ofstream file("tasks.txt", ios::app);
    file << "[ ] " << task << endl;
    file.close();
    cout << "Task added: " << task << endl;
}

void viewtasks() {
    ifstream file("tasks.txt");
    string task;
    cout << "Your tasks:" << endl;
    while (getline(file, task)) {
        cout << "- " << task << endl;
    }
    file.close();
}

void deletetask() {
    cout << "Enter the task you want to delete: ";
    cin >> ws; // To ignore any leading whitespace
    string taskToDelete;
    getline(cin, taskToDelete);
    ifstream file("tasks.txt");
    ofstream tempFile("temp.txt");
    string task;
    bool found = false;

    while (getline(file, task)) {
        if (task != "[ ] " + taskToDelete && task != "[✓] " + taskToDelete) {
            tempFile << task << endl;
        } else {
            found = true;
        }
    }

    file.close();
    tempFile.close();
    remove("tasks.txt");
    rename("temp.txt", "tasks.txt");

    if (found) {
        cout << "Task deleted: " << taskToDelete << endl;
    } else {
        cout << "Task not found: " << taskToDelete << endl;
    }
}

void completeTask() {
    cout << "Enter the task you want to mark as complete: ";
    cin >> ws; // To ignore any leading whitespace
    string taskToComplete;
    getline(cin, taskToComplete);
    ifstream file("tasks.txt");
    ofstream tempFile("temp.txt");
    string task;
    bool found = false;

    while (getline(file, task)) {
        if (task == "[ ] " + taskToComplete) {
            tempFile << "[✓] " << taskToComplete << endl;
            found = true;
        } else {
            tempFile << task << endl;
        }
    }

    file.close();
    tempFile.close();
    remove("tasks.txt");
    rename("temp.txt", "tasks.txt");

    if (found) {
        cout << "Task marked as complete: " << taskToComplete << endl;
    } else {
        cout << "Task not found: " << taskToComplete << endl;
    }
}

void viewCompletedTasks() {
    ifstream file("tasks.txt");
    string task;
    cout << "Your completed tasks:" << endl;
    while (getline(file, task)) {
        if (task.rfind("[✓]", 0) == 0) { // Check if the task starts with "[✓]"
            cout << "- " << task << endl;
        }
    }
    file.close();
}

void viewIncompleteTasks() {
    ifstream file("tasks.txt");
    string task;
    cout << "Your incomplete tasks:" << endl;
    while (getline(file, task)) {
        if (task.rfind("[ ]", 0) == 0) { // Check if the task starts with "[ ]"
            cout << "- " << task << endl;
        }
    }
    file.close();
}

void unremarkTask() {
    cout << "Enter the task you want to unmark as complete: ";
    cin >> ws; // To ignore any leading whitespace
    string taskToUnmark;
    getline(cin, taskToUnmark);
    ifstream file("tasks.txt");
    ofstream tempFile("temp.txt");
    string task;
    bool found = false;

    while (getline(file, task)) {
        if (task == "[✓] " + taskToUnmark) {
            tempFile << "[ ] " << taskToUnmark << endl;
            found = true;
        } else {
            tempFile << task << endl;
        }
    }

    file.close();
    tempFile.close();
    remove("tasks.txt");
    rename("temp.txt", "tasks.txt");

    if (found) {
        cout << "Task unmarked as complete: " << taskToUnmark << endl;
    } else {
        cout << "Task not found: " << taskToUnmark << endl;
    }
}

void quit() {
    cout << "Exiting Task Manager. Goodbye!" << endl;
}

int main() {
    int choice;
cout << R"(████████╗ █████╗ ███████╗██╗  ██╗    ███╗   ███╗ █████╗ ███╗   ██╗ █████╗  ██████╗ ███████╗██████╗
╚══██╔══╝██╔══██╗██╔════╝██║ ██╔╝    ████╗ ████║██╔══██╗████╗  ██║██╔══██╗██╔════╝ ██╔════╝██╔══██╗
   ██║   ███████║███████╗█████╔╝     ██╔████╔██║███████║██╔██╗ ██║███████║██║  ███╗█████╗  ██████╔╝
   ██║   ██╔══██║╚════██║██╔═██╗     ██║╚██╔╝██║██╔══██║██║╚██╗██║██╔══██║██║   ██║██╔══╝  ██╔══██╗
   ██║   ██║  ██║███████║██║  ██╗    ██║ ╚═╝ ██║██║  ██║██║ ╚████║██║  ██║╚██████╔╝███████╗██║  ██║
   ╚═╝   ╚═╝  ╚═╝╚══════╝╚═╝  ╚═╝    ╚═╝     ╚═╝╚═╝  ╚═╝╚═╝  ╚═══╝╚═╝  ╚═╝ ╚═════╝ ╚══════╝╚═╝  ╚═╝

                         powered by lucifer)" << endl;
    while (true)
    {
        cout << "1. Add Task" << endl;
        cout << "2. View Tasks" << endl;
        cout << "3. Delete Task" << endl;
        cout << "4. Mark Task as Complete" << endl;
        cout << "5. Unmark Task as Complete" << endl;
        cout << "6. View Completed Tasks" << endl;
        cout << "7. View Incomplete Tasks" << endl;
        cout << "8. Quit" << endl;
        cout << "Enter your choice: ";

        cin >> choice;

        switch (choice) {
            case 1:
                addtask();
                break;

            case 2:
                viewtasks();
                break;

            case 3:
                deletetask();
                break;

            case 4:
                completeTask();
                break;

            case 5:
                unremarkTask();
                break;

            case 6:
                viewCompletedTasks();
                break;

            case 7:
                viewIncompleteTasks();
                break;

            case 8:
                quit();
                return 0;

            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}