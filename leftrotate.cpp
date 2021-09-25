/*
Ayush Rawat,
Section = M,
Student ID = 21011141, 
Btech 3rd sem.
Program = left rotate of array elements
*/c

#include<iostream>
using namespace std;
int n;

void leftshift(int array[])
{
	int temp = array[0];
	for(int i=1; i<n; i++)
	{
		int j = i-1;
		int copy = array[i];
		array[j] = copy;
	}
	array[n-1] = temp;
	for(int j=0; j<n; j++)
	{ 
		cout<<array[j];
	}

}

int main()
{
	cout<<"enter the size of array";
	cin>>n;
	int array[n];
	cout<<"enter the elements of array";
	for(int i=0; i<n; i++)
	{
		cin>>array[i];
	}
	leftshift(array);


    	
	return 0;
}
