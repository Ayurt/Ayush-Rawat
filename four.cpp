/*
Ayush Rawat,
Section = M,
Student ID = 21011141, 
Program = Swapping program using Call by pointer 
Btech 3rd sem.
*/


#include <iostream>
using namespace std;

int swaap(int * , int *);

int main()
{
	int a = 4, b = 5;
	cout<<"The  value of a is : "<<a<<" and b is : "<<b<<endl;
	swaap(&a , &b);
	cout<<"The value of is a : "<<a<<" and b is : "<<b<<endl;
}
int swaap(int*x, int*y)
{
	int temp= *x;
	*x = *y;
	*y = temp;
}