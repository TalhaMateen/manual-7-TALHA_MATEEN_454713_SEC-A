//-------------------------------------------------------------------------------------------\\
Write a program to find the sum and product of all elements of an array with 5 integer elements

#include <iostream>
using namespace std;
int main()
{
//declaring the array with number of 5 elemets :
int arr[5];
//input values from user :
cout<<"Please enter five integers :\n";

for(int i=0; i<5; i++)	
	{cout<<"Enter number of array at "<<i+1<<endl;
	cin>>arr[i];}
//for sum & product of integers :
	int array_sum=0;
	int array_product=1;
	
	for(int i=0; i<5; i++)
	{array_sum+=arr[i];
	 array_product*=arr[i];
	}
//output results :
	cout << "Sum of elements: " << array_sum << endl;
	cout << "Product of elements: " << array_product << endl;
return 0;	
}
