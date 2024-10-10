/******************************************************************************
Author: Dylan Pallasigui
Date: 2/16/2023
*******************************************************************************/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    //initialize variable
    int size;
    
    //ask the user what size they would like the pattern to be
    cout << "Hello welcome to pattern maker!" << endl;
    cout << "What size would you like the pattern to be?" << endl;
    
    cin >> size;
    
    //error checking, if not number then error else continue
    if (!(size)) {
        cout << "Error. Please enter a valid number." << endl;
        cin >> size;
    } else {
        
    }
    
    //print the solid square pattern
    cout << "\nSolid Square Pattern" << endl;
    //prints base as many times as the user wants
    for (int i = 0; i < size; i++) {
        for (int i = 0; i < size; i++) {
           cout << "*"; 
        }
        cout << " " << endl;
    }
    
    //print the square outline pattern
    cout<<"\nSquare Outline Pattern"<<endl;
    //print top line
    for (int i = 0; i < size; i++) {
        cout << "*";
    }
    cout << endl;

    //print sides 
    for (int i = 0; i < size - 2; i++) {
        cout << "*";
        for (int j = 0; j < size - 2; j++) {
            cout << " ";
        }
        cout << "*" << endl;
    }

    //print bottom line
    for (int i = 0; i < size; i++) {
        cout << "*";
    }
    cout << endl;
    
    //print solid triangle pattern
    cout<<"\nSolid Triangle Pattern"<<endl;
    //print from 1 * to size from least to max
    for (int i = 1; i <= size; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    
    //print x pattern
    cout << "\nLetter X Pattern" << endl;
    //prints x based on user input like 5x5, prints first * then max
    //gradually reduce till they meet at the middle, then increase to max input
    for (int i = 1; i <= size; i++) {
        for (int j = 1; j <= size; j++) {
            if (j == i || j == (size - i + 1)) {
                cout << " *";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
    
    //print z pattern
    cout << "\nLetter Z Pattern" << endl;
    //same as square, print base line till max input
    //apply same logic from x pattern to z, but add extra conditional
    //so it goes from max to first * decreasing
    for (int i = 1; i <= size; i++) {
        for (int j = 1; j <= size; j++) {
            if (i == 1 || i == size || j == (size - i + 1)) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}