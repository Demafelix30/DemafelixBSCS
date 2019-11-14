#include <iostream>
#include <stdlib.h>
using namespace std;

int inputArraySize();
void inputArray(string[],string[],int[],int[],string[],string[]);
void DisplayArray(string[],string[],int[],int[],string[],string[]);

int arrSize;

int main()
{
    string Firstname[10];
    string Lastname[10];
    string Email[10];
    string Address[10];
    int Age [10];
    int Contacts [10];
    inputArray(Firstname,Lastname,Age,Contacts,Email,Address);
    DisplayArray(Firstname,Lastname,Age,Contacts,Email,Address);
    return 0;
}

int inputArraySize ()
{
    int age [arrSize];

    cout << "Enter Array Size : ";
    cin >> arrSize;

    return arrSize;
}

void inputArray (string Firstname[], string Lastname[], int Age[], int Contacts[], string Email[], string Address[])
{
    inputArraySize();

    for (int i=0; i<=arrSize-1;i++){
        cout << "Enter First Name: ";
        cin >> Firstname[i];
    }

    for (int i=0; i<=arrSize-1;i++){
        cout << "Enter Last Name: ";
        cin >> Lastname[i];
    }

    for (int i=0; i<=arrSize-1;i++){
        cout << "Enter Age: ";
        cin >> Age[i];
    }

    for (int i=0; i<=arrSize-1;i++){
        cout << "Enter Contact No.: ";
        cin >> Contacts[i];
    }

    for (int i=0; i<=arrSize-1;i++){
        cout << "Enter Your Email: ";
        cin >> Email[i];
    }

    for (int i=0; i<=arrSize-1;i++){
        cout << "Enter Your Address: ";
        cin >> Address[i];
    }
}

void DisplayArray (string Firstname[], string Lastname[], int Age[], int Contacts[], string Email[], string Address[])

{

system("CLS");
    cout << "FIRSTNAME" << "|" << "LASTNAME" << "|" << "AGE" << "|" << "CONTACTS" << "|" << "EMAIL" << "|" << "ADDRESS" << endl;
    for (int i=0; i<=arrSize-1;i++){

        cout << " \n "<< Firstname[i]<< "|" << Lastname[i] << "|" << Age[i] << "|" << Contacts[i] << "|" << Email[i] << "|" << Address[i] << endl;
    }
}
