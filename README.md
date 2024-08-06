# To study and implement C++ Bitwise Operators

Aim -> To study and implement C++ Bitwise Operators.

Theory -> Bitwise Operators are the operators that are used to perform operations on the bit level on the integers. While performing this operation integers are considered as sequences of binary digits.
Its symbols and functions are as follows:
1. Bitwise AND (&)
2. Bitwise OR (|)
3. Bitwise XOR (^)
4. Bitwise NOT (~)
5. Left Shift (<<)
6. Right Shift (>>)

CODE:
```
#include<iostream> 
using namespace std; 
int main()  
{ 
int a, b, x, y;
cout<<"Enter a number: ";                        // OUTPUT - Enter a number: 4      
cin>>a; 
cout<<"Enter another number: ";                  // Enter another number: 7
cin>>b; 
cout<<"Binary AND: "<<(a&b)<<"\n";               // Binary AND: 4
cout<<"Binary OR: "<<(a|b)<<"\n";                // Binary OR: 7
cout<<"Binary XOR: "<<(a^b)<<"\n";               // Binary XOR: 3
cout<<"Left Shift: "<<(a<<b)<<"\n";              // Left Shift: 512
cout<<"Right Shift: "<<(a>>b)<<"\n";             // Right Shift: 0
cout<<"Complement of a: "<<(x=~a)<<"\n";         // Complement of a: -5
cout<<"Complement of b is: "<<(y=~b)<<"\n";      // Complement of b is: -8 
return 0;
}
```
Output:
![image](https://github.com/user-attachments/assets/c690291b-8135-44f2-bf7a-74ecbe54fa86)

Conclusion -> I learnt about bitwise operators.
