#include <iostream>
#include <string>

using namespace std;

struct Student
{
    string name;
    string id;
    Student *next;
};

struct Subject
{
    string name;
    string code;
    Subject *next;
    Student *student;
};

void addSubject(Subject **h) {
    Subject *newSubject = new Subject;
    cout << "Enter subject name: ";
    cin >> newSubject->name;
    cout << "Enter subject code: ";
    cin >> newSubject->code;
    newSubject->next = NULL;
    newSubject->student = NULL;
    if (*h == NULL)
    {
        *h = newSubject;
    }
    else
    {
        Subject *temp = *h;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newSubject;
    }
}

void addStudent(Subject **h) {
    string code;
    cout << "Enter subject code: ";
    cin >> code;
    Subject *temp = *h;
    while (temp != NULL && temp->code != code)
    {
        temp = temp->next;
    }
    if (temp == NULL)
    {
        cout << "Subject not found" << endl;
    }
    else
    {
        Student *newStudent = new Student;
        cout << "Enter student name: ";
        cin >> newStudent->name;
        cout << "Enter student id: ";
        cin >> newStudent->id;
        newStudent->next = NULL;
        if (temp->student == NULL)
        {
            temp->student = newStudent;
        }
        else
        {
            Student *tempStudent = temp->student;
            while (tempStudent->next != NULL)
            {
                tempStudent = tempStudent->next;
            }
            tempStudent->next = newStudent;
        }
    }
}

void removeSubject(Subject **h) {
    string code;
    cout << "Enter subject code: ";
    cin >> code;
    Subject *temp = *h;
    Subject *prev = NULL;
    while (temp != NULL && temp->code != code)
    {
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL)
    {
        cout << "Subject not found" << endl;
    }
    else
    {
        if (prev == NULL)
        {
            *h = temp->next;
        }
        else
        {
            prev->next = temp->next;
        }
        free (temp);
        cout << "Subject removed" << endl;
    }
}

void removeStudent(Subject **h) {
    string code;
    cout << "Enter subject code: ";
    cin >> code;
    Subject *temp = *h;
    while (temp != NULL && temp->code != code)
    {
        temp = temp->next;
    }
    if (temp == NULL)
    {
        cout << "Subject not found" << endl;
    }
    else
    {
        string id;
        cout << "Enter student id: ";
        cin >> id;
        Student *tempStudent = temp->student;
        Student *prev = NULL;
        while (tempStudent != NULL && tempStudent->id != id)
        {
            prev = tempStudent;
            tempStudent = tempStudent->next;
        }
        if (tempStudent == NULL)
        {
            cout << "Student not found" << endl;
        }
        else
        {
            if (prev == NULL)
            {
                temp->student = tempStudent->next;
            }
            else
            {
                prev->next = tempStudent->next;
            }
            free (tempStudent);
            cout << "Student removed" << endl;
        }
    }
}

void editSubject(Subject **h) {
    string code;
    cout << "Enter subject code: ";
    cin >> code;
    Subject *temp = *h;
    while (temp != NULL && temp->code != code)
    {
        temp = temp->next;
    }
    if (temp == NULL)
    {
        cout << "Subject not found" << endl;
    }
    else
    {
        cout <<"1. Edit subject code" << endl;
        cout <<"2. Edit subject name" << endl;
        cout << "Enter your choice: ";
        int choice;
        cin >> choice;
        if (choice == 1)
        {
            cout << "Enter new subject code: ";
            cin >> temp->code;
        }
        else if (choice == 2)
        {
            cout << "Enter new subject name: ";
            cin >> temp->name;
        }
        else
        {
            cout << "Invalid choice" << endl;
        }
    }
}

void editStudent(Subject **h) {
    string code;
    cout << "Enter subject code: ";
    cin >> code;
    Subject *temp = *h;
    while (temp != NULL && temp->code != code)
    {
        temp = temp->next;
    }
    if (temp == NULL)
    {
        cout << "Subject not found" << endl;
    }
    else
    {
        string id;
        cout << "Enter student id: ";
        cin >> id;
        Student *tempStudent = temp->student;
        while (tempStudent != NULL && tempStudent->id != id)
        {
            tempStudent = tempStudent->next;
        }
        if (tempStudent == NULL)
        {
            cout << "Student not found" << endl;
        }
        else
        {
            cout <<"1. Edit student id" << endl;
            cout <<"2. Edit student name" << endl;
            cout << "Enter your choice: ";
            int choice;
            cin >> choice;
            if (choice == 1)
            {
                cout << "Enter new student id: ";
                cin >> tempStudent->id;
            }
            else if (choice == 2)
            {
                cout << "Enter new student name: ";
                cin >> tempStudent->name;
            }
            else
            {
                cout << "Invalid choice" << endl;
            }
        }
    }
}

void searchSubject(Subject *h) {
    string code;
    cout << "Enter subject code: ";
    cin >> code;
    Subject *temp = h;
    while (temp != NULL && temp->code != code)
    {
        temp = temp->next;
    }
    if (temp == NULL)
    {
        cout << "Subject not found" << endl;
    }
    else
    {
        cout << "Subject Name: " << temp->name << ", Code: " << temp->code << endl;
        int count = 0;
        Student *tempStudent = temp->student;
        while (tempStudent != NULL)
        {
            count++;
            tempStudent = tempStudent->next;
        }
        cout << "Number of students: " << count << endl;
    }
}


void sortStudentsByNames(Student **head) {
    
        Student *i, *j;
        for (i = *head; i != NULL; i = i->next) {
            for (j = i->next; j != NULL; j = j->next) {
                if (i->name > j->name) {
                    string tempName = i->name;
                    i->name = j->name;
                    j->name = tempName;

                    string tempId = i->id;
                    i->id = j->id;
                    j->id = tempId;
                }
            }
        }
    
}

void printEverything(Subject *h) {
    Subject *temp = h;
    for (int i = 1; temp != NULL; i++)
    {
        cout << i << ". " << "Subject Name: " << temp->name << " , Code: " << temp->code << endl;
        Student *tempStudent = temp->student;
        sortStudentsByNames(&tempStudent);
        for (int j = 1; tempStudent != NULL; j++)
        {
            cout << "\t" << j << ". " << "Name: " << tempStudent->name << " , ID: " << tempStudent->id << endl;
            tempStudent = tempStudent->next;
        }
        temp = temp->next;
    }
}

void menu(){
    cout << "\n1. Add subject" << endl;
    cout << "2. Add student to a subject" << endl;
    cout << "3. Search a subject and find its details and how many students are in it" << endl;
    cout << "4. Remove a subject" << endl;
    cout << "5. Remove a student from a subject" << endl;
    cout << "6. Edit a subject" << endl;
    cout << "7. Edit a student" << endl;
    cout << "8. Print everything" << endl;
    cout << "9. Exit\n" << endl;
}

int main(){
    Subject *head = NULL;
    int choice;
    do
    {
        menu();
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            addSubject(&head);
            break;
        case 2:
            addStudent(&head);
            break;
        case 3:
            searchSubject(head);
            break;
        case 4:
            removeSubject(&head);
            break;
        case 5:
            removeStudent(&head);
            break;
        case 6:
            editSubject(&head);
            break;
        case 7:
            editStudent(&head);
            break;
        case 8:
            printEverything(head);
            break;
        case 9:
            cout << "Goodbye!" << endl;
            break;
        default:
            cout << "Invalid choice" << endl;
            break;
        }
    } while (choice != 9);
    return 0;
}