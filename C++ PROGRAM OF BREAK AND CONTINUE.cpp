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
    // check whether the number is prime or not 
    /*
    int num;
    cout << "Enter the number:" << endl;
    cin >> num;
    
    bool flag = true;
    for(int i = 2; i < num; i++)
    {
        if(num % i == 0)
        {
            flag = false;
            break;
        }
    }
    if(flag == true)
    {
        cout << "Number is Prime:" << num << endl;
    }
    else
    {
        cout << "Number is not Prime:" << num << endl;
    }
   
    */
    
    // To skip all the numbers divisible by 3 
    int nums;
    cout << "Enter the number:" << endl;
    cin >> nums;
    
    for(int i = 1; i <= nums; i++)
    {
        if(i % 3 == 0)
        {
            continue;
        }
        cout << i << endl;
    }
    
    return 0;
}