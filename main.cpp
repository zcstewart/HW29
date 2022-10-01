//Homework 29

/* 
 * Filename:        main.cpp
 * Purpose:         The purpose of this program 
 * 
 * Author:          Zachary Charles Stewart
 * Student ID:      105903414
 * Created on       March 20, 2017, 12:40 PM
 */

//Preprocessor Directives
#include <iostream>
#include <cstdlib>

//Namespace
using namespace std;

//Function Prototype
int Ackerman(int m, int n);


//--------------------------------------------------------------------------//
//
//Main Function
//
//Inputs:       int argc, char** argv
//Outputs:      int
//
//Purpose:      Main program file to demonstrate functionality of 
//              Ackerman(int, int) function.
int main(int argc, char** argv) 
{
    //Declare variables
    int m = 0;
    int n = 0;
    int answer = 0;
    
    //Prompt user for input
    cout << "Enter first number: " << endl;
    cin >> m;
    cout << "Enter second number: " << endl;
    cin >> n;
    
    //Call Function
    answer = Ackerman(m, n);
    //Output results    
    cout << "Result: " << answer << "." << endl;
    
    //Terminate program upon successful execution
    exit(EXIT_SUCCESS);
}

//--------------------------------------------------------------------------//


//Function:     Ackerman(int, int)
//
//Inputs:       int m, int n
//Outputs:      Return type int
//Purpose:      The purpose of this function is to demonstrate the Ackerman
//              function using a recursive approach.
int Ackerman(int m, int n)
{
    //base case
    if(m == 0)
    {
        return (n + 1);
    }
    else if(n == 0)
    {
        return (Ackerman(m-1, 1));
    }
    else
    {
        return (Ackerman(m-1, Ackerman(m, n-1)));
    }
}