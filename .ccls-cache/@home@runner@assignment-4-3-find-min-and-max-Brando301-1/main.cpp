#include<iostream>
using namespace std;

int main()
{
	int num1,num2,num3;
	int arr[3];
	cout<<"Enter input:\n";
	cin>>num1>>num2>>num3;
	if(num1<num2 && num1<num3)
	{
		arr[0]=num1;
		if(num2<num3)
		{
			arr[1]=num2;
			arr[2]=num3;
		}
		else
		{
			arr[1]=num3;
			arr[2]=num2;
		}
	}
	else if(num2<num3 && num2<num1)
	{
		arr[0]=num2;
		if(num3<num1)
		{
			arr[1]=num3;
			arr[2]=num1;
		}
		else
		{
			arr[1]=num1;
			arr[2]=num3;
		}
	}
	else
	{
		arr[0]=num3;
		if(arr[1]<arr[2])
		{
			arr[1]=num1;
			arr[2]=num2;
		}
		else
		{
			arr[1]=num2;
			arr[2]=num1;
		}
	}
	cout<<"Minimum:"<<arr[0]<<endl;
	cout<<"Maximum:"<<arr[2]<<endl;
	cout<<"Numbers in ascending order:\n";
	cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2];
}



// Make a program that finds the minimum and maximum values among three integer values.

// int num1, num2, num3;
// cin >> num1 >> num2 >> num3;
// Find the min and max among three values.
// Display the numbers with ascending order ( min, other, max).

