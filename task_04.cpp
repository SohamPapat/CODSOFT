/*
Task 04

Simple TO-DO-LIST CONSOLE BASED Program Using C++.

Name- Soham Papat

*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<pair<string, bool>> todoList; 
    int choice;

    while (true)
    {
        cout << "  1. Add task\n  2. View tasks\n  3. Delete task\n  4. Mark as done\n  5. Exit\n";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            cout << "Enter task: " << endl;
            string task;
            cin.ignore(); 
            getline(cin, task);
            todoList.push_back(make_pair(task, false)); 
            cout << "Task added!\n"
                 << endl;
            break;
        }

        case 2:
        {
            cout << "To-Do List:\n"
                 << endl;
            for (size_t i = 0; i < todoList.size(); ++i)
            {
                cout << i + 1 << ". ";
                if (todoList[i].second)
                {
                    cout << "[Done] " << endl;
                }
                cout << todoList[i].first << "\n"
                     << endl;
            }
            break;
        }

        case 3:
        {
            cout << "Enter task number to delete: " << endl;
            int taskNumber;
            cin >> taskNumber;

            if (taskNumber >= 1 && taskNumber <= static_cast<int>(todoList.size()))
            {
                todoList.erase(todoList.begin() + taskNumber - 1);
                cout << "Task deleted!\n"
                     << endl;
            }
            else
            {
                cout << "Invalid task number. Please try again.\n"
                     << endl;
            }
            break;
        }

        case 4:
        {
            cout << "Enter task number to mark as done: ";
            int taskNumber;
            cin >> taskNumber;

            if (taskNumber >= 1 && taskNumber <= static_cast<int>(todoList.size()))
            {
                todoList[taskNumber - 1].second = true;
                cout << "Task marked as done!\n"
                     << endl;
            }
            else
            {
                cout << "Invalid task number. Please try again.\n"
                     << endl;
            }
            break;
        }

        case 5:
            cout << "Exiting program. Goodbye!\n"
                 << endl;
            return 0;

        default:
            cout << "Invalid choice. Please try again.\n"
                 << endl;
        }
    }

    return 0;
}