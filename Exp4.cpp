// NAME - Pranjal Panwar
// PRN - 23070123164
// EXPERIMENT - 4   
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
