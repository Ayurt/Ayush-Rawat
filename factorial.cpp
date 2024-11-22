/*
Ayush Rawat,
Section = M,
Student ID = 21011141, 
Btech 3rd sem.
*/

#include<iostream>
using namespace std;

int fact (int n)
{
if(n<=1)
{
return 1;
}
return n*fact(n-1);

}

int main()
{
int a;
cout<<"enter the no. for factorial";
cin>>a;
cout<<"the factorial of "<<a<<" is : "<<fact(a);

return 0;
}

