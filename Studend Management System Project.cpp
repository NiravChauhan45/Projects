# Projects

#include <iostream>
//#include<string>
using namespace std;

string arr1[20], arr2[20], arr3[20], arr4[20], arr5[20];
int total = 0;

void Enter()
{
    int choice;
    cout << "\n\nHow many student do you want to enter :";
    cin >> choice;
    if (total == 0)
    {
        total = total + choice;
        for (int i = 0; i < choice; i++)
        {
            cout << "\nEnter data of student :" << i + 1 << endl
                 << endl;
            cout << "Enter name :";
            cin >> arr1[i];
            cout << "Enter rollno :";
            cin >> arr2[i];
            cout << "Enter course :";
            cin >> arr3[i];
            cout << "Enter class :";
            cin >> arr4[i];
            cout << "Enter contact :";
            cin >> arr5[i];
        }
    }
    else
    {
        for (int i = total; i < total + choice; i++)
        {
            cout << "\nEnter data of student :" << i + 1 << endl
                 << endl;
            cout << "Enter name :";
            cin >> arr1[i];
            cout << "Enter rollno :";
            cin >> arr2[i];
            cout << "Enter course :";
            cin >> arr3[i];
            cout << "Enter class :";
            cin >> arr4[i];
            cout << "Enter contact :";
            cin >> arr5[i];
        }
        total = total + choice;
    }
}
void Show()
{
    if (total == 0)
    {
        cout << "NO data is  entered" << endl;
    }
    else
    {
        for (int i = 0; i < total; i++)
        {
            cout << "Data of student: " << i + 1 << endl
                 << endl;
            cout << "Name: " << arr1[i] << endl;
            cout << "RollNo: " << arr2[i] << endl;
            cout << "Course: " << arr3[i] << endl;
            cout << "Class: " << arr4[i] << endl;
            cout << "Contact: " << arr5[i] << endl
                 << endl;
        }
    }
}

void Search()
{
    if (total == 0)
    {
        cout << "NO data is  entered" << endl;
    }
    else
    {
        string rollno;
        cout << "Enter rollno of student which you want to search: ";
        cin >> rollno;
        for (int i = 0; i < total; i++)
        {
            if (rollno == arr2[i])
            {
                cout << "Data of student :" << i + 1 << endl
                     << endl;
                cout << "Name :" << arr1[i] << endl;
                cout << "RollNo :" << arr2[i] << endl;
                cout << "Course :" << arr3[i] << endl;
                cout << "Class :" << arr4[i] << endl;
                cout << "Contact :" << arr5[i] << endl
                     << endl;
            }
        }
    }
}

void Update()
{
    if (total == 0)
    {
        cout << "NO data is  entered" << endl;
    }
    else
    {
        string rollno;
        cout << "Enter rollno of student which you want to search: ";
        cin >> rollno;
        for (int i = 0; i < total; i++)
        {
            if (rollno == arr2[i])
            {
                cout << "previous Data" << endl
                     << endl;
                cout << "Data of student :" << i + 1 << endl
                     << endl;
                cout << "Name :" << arr1[i] << endl;
                cout << "RollNo :" << arr2[i] << endl;
                cout << "Course :" << arr3[i] << endl;
                cout << "Class :" << arr4[i] << endl;
                cout << "Contact :" << arr5[i] << endl
                     << endl;
                cout << "\nEnter new data" << endl;
                cout << "Enter name :";
                cin >> arr1[i];
                cout << "Enter rollno :";
                cin >> arr2[i];
                cout << "Enter course :";
                cin >> arr3[i];
                cout << "Enter class :";
                cin >> arr4[i];
                cout << "Enter contact :";
                cin >> arr5[i];
            }
        }
    }
}

void DeleteRecord()
{
    int a;
    cout << "Press 1 to delete full record" << endl;
    cout << "Press 2 to delete specific record" << endl;
    cin >> a;
    if (a == 1)
    {
        total = 0;
        cout << "All record is deleted" << endl;
    }
    else

    {
        string rollno;
        cout << "Enter rollno which you want to delete" << endl;
        cin >> rollno;
        for (int i = 0; i < total; i++)
        {
            if (rollno == arr2[i])
            {
                for (int j = i; j < total; j++)
                {
                    arr1[j] = arr1[j + 1];
                    arr2[j] = arr2[j + 1];
                    arr3[j] = arr3[j + 1];
                    arr4[j] = arr4[j + 1];
                    arr5[j] = arr5[j + 1];
                }
                total--;
                cout << "Your required record is deleted...!! " << endl;
            }
        }
    }
}
int main()
{
    int value;
    while (true)
    {
        cout << "\n\npress 1 to Enter data : " << endl;
        cout << "press 2 to Show data : " << endl;
        cout << "press 3 to Search data : " << endl;
        cout << "press 4 to Update data : " << endl;
        cout << "press 5 to delete data : " << endl;
        cout << "press 6 to Exit : " << endl;
        cin >> value;
        switch (value)
        {
        case 1:
            Enter();
            break;
        case 2:
            Show();
            break;
        case 3:
            Search();
            break;
        case 4:
            Update();
            break;
        case 5:
            DeleteRecord();
            break;
        case 6:
            exit(0);
            break;
        default:
            cout << "Invalid input" << endl;
            break;
        }
    }
    return 0;
}
