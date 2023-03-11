/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    // if statements
    int age;
    
    cout<<"Enter the age:"<<endl;
    cin >> age;
    
    if(age >= 18)
    {
        cout << "You are eligible to vote:" << age << endl;
    }
    
    // if else statement 
    int num;
    
    cout << "Enter the number:" << endl;
    cin >> num;
    
    if(num > 0)
    {
        cout << "Number is Positive:" << num << endl;
    }
    else
    {
        cout << "Number is negative:" << num << endl;
    }
    
    // if else if statements
    int marks;
    
    cout << "Enter the marks:" << endl;
    cin  >> marks;
    
    if(marks >= 90)
    {
        cout <<"S Grade:" << endl;
    }
    else if((marks >= 80) && (marks < 90))
    {
        cout << "A Grade:" << endl;
    }
    else if((marks >= 70) && (marks < 80))
    {
        cout << "B Grade:" << endl;
    }
    else if((marks >= 60) && (marks > 70))
    {
        cout << "C Grade:" << endl;
    }
    else if((marks >= 50) && (marks < 60))
    {
        cout << "D Grade:" << endl;
    }
    else
    {
        cout << "Fail:" << endl;
    }
    
    // Switch statement 
   int day;
   
   cout << "Enter the days of the week:" << endl;
   cin >> day;
   
   switch(day)
   {
       case 1:
         cout << "Day is Monday:" << endl;
         break;
         
       case 2:
         cout << "Day is Tuesday:" << endl;
         break;
         
       case 3:
         cout << "Day is Wednesday:" << endl;
         break;
         
       case 4 :
         cout << "Day is Thursday:" << endl;
         break;
         
       case 5:
         cout << "Day is Friday:" << endl;
         break;
         
        case 6:
         cout << "Day is Saturday:" << endl;
         break;
         
        case 7:
         cout << "Day is Sunday:" << endl;
         break;
         
         default:
         cout << "Choice is Wrong or invalid:" << endl;
         
   }

    return 0;
}