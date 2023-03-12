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
    // Loops
    
    // 1. For Loop
    
    int num;
    cout << "Enter the number:" << endl;
    cin >> num;
    
    int fact = 1;
    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    cout << "Factorial of the number is:" << fact << endl;
    
    // 2. While Loop 
    
    int n;
    cout << "Enter the number:" << endl;
    cin >> n;
    
    int rev = 0;
    
    int x = n;
    
    while(x != 0)
    {
        int rem = x % 10;
        rev = (rev * 10) + rem;
        x = x / 10;
    }
    if(rev == n)
    {
        cout << "Number is Palindrome:" << n << endl;
    }
    else
    {
        cout << "Number is not Palindrome:" << n << endl;
    }
    
    
    // 3. Do- While Loop
    int n1;
    cout << "Enter the number:" << endl;
    cin >> n1;
    
    do{
        cout << "Number is : "  << n1 << endl;
    }while(n1 > 0);
    
    return 0;
}
