/*
Ayush Rawat,
Section = M,
Student ID = 21011141, 
Btech 3rd sem.
*/


#include<iostream>
using namespace std;


int area(int x);
int area(int y,int z);
float area(float p);

int main()
{
int a,b,c;
float d;
cout<<"\nenter the length of square";
cin>>a;
area(a);

cout<<"\nenter the dimenssion of rectangle";
cin>>b>>c;
area(b,c);

cout<<"\nenter the r of circle";
cin>>d;
area(d);

return 0;
} 

int area(int x)
{
int square = x*x;
cout<<"\n"<<square;
}

int area(int y, int z)
{
int rectangle = y * z;
cout<<"\n"<<rectangle;
}

float area(float p)
{
int circle = 3.14 * p * p;
cout<<"\n"<<circle;
}

