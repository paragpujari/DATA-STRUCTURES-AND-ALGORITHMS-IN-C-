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
    //  Arithmetic Operators 
    int a = 10, b = 5;
    
    cout << (a + b) << endl;
    cout << (a - b) << endl;
    cout << (a * b) << endl;
    cout << (a / b) << endl;
    cout << ( a % b) << endl;
   
   // Relational Operators 
   
   cout << (a < b) << endl;
   cout << (a > b) << endl;
   cout << (a <= b) << endl;
   cout << (a >= b) << endl;
   cout << (a == b) << endl;
   cout << (a != b) << endl;
   
   // Logical Operators
   cout << ((a <= b) && (b <= a)) << endl;
   cout << ((a == b)  || !(b <= a)) << endl;
   cout << ((a >= b) && !(b != a)) << endl;
   
   
   // Bitwise Operators
   int c = a & b ;
   int d = a | b ;
   int e = a ^ b ;
   int f = ~a | b ;
   int g = a << 2;
   int h = a >> 2;
   
   cout << c << endl;
   cout << d << endl;
   cout << e << endl;
   cout << f << endl;
   cout << g << endl;
   cout << h << endl;
   
   // Assignment Operators
   int a1 = a += 10;
   int b1 = a -= 10;
   int c1 = a *= 10;
   int d1 = a /= 10;
   int e1 = a %= 10;
   
   cout << a1 << endl;
   cout << b1 << endl;
   cout << c1 << endl;
   cout << d1 << endl;
   cout << e1 << endl;
   
   //  Operators
   int r1 = ++a + a++ - --b + b--;
   cout << r1 << endl;
   
   
   // Ternary Operator 
   int max = (a >= b)? a : b;
   cout << max << endl;
   
   return 0;
}