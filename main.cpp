#include <iostream>
#include <stdlib.h>

using namespace std;

int inputArrSize();
void inputArray(int[]);
void displayArray(int[]);
void selectArray(int[]);

int arrSize;

int main()
{

    int new_age[arrSize];
    inputArray (new_age);
    displayArray (new_age);

    return 0;
}

int inputArrSize()
{
    cout << "Enter Array size 3-4: ";
    cin >> arrSize;

    return arrSize;
}

void inputArray (int age []){

    inputArrSize();
    for(int i=0; i<= arrSize-1; i++){
        cout << "Enter a value for position " << i+1 << " : ";
        cin >> age [i];
    }
}

void displayArray(int age[]){
    system ("CLS");

    for (int i=0; i<=arrSize-1; i++){
        cout << "The value at position" << i+1<< "is :" << age[i]<< endl;
        }
        selectArray(age);
    }
void selectArray(int age[]){

    int choice;

    cout << "Select Array that you want to call :"<< endl;
    cin >> choice;

    if (choice==1){
        cout << "The value at position 1 is :" << age[0]<< endl;
    }
     if (choice==2){
        cout << "The value at position 2 is :" << age[1]<< endl;
    }
     if (choice==3){
        cout << "The value at position 3 is :" << age[2]<< endl;
    }
     if (choice==4){
        cout << "The value at position 4 is :" << age[3]<< endl;
    }
    }
