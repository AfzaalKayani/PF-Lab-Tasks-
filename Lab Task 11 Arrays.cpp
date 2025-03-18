Program to initialize and print an array
#include<iostream>
using namespace std;
int main()
{
	int i;
	int marks[5] = {1,2,3,4,5};
	for(i=0; i<5; i++)
	{
		cout<<marks[i]<<" \n";
	}
	return 0;
}

program to print an array in Reverse order
#include<iostream>
using namespace std;
int main()
{
	int n , i;
	cout<<"Enter The Length of array \n";
	cin>>n;
	int marks[n];
	cout<<"Enter "<<n<<" integers \n";
	for(i=0; i<n; i++)
	{
	cin>>marks[i];
	}
	for(i=n-1;i>=0;i--)
	cout<<marks[i]<<" ";
	return 0;
}

Program to Compute Sum And Average Of an Array
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double average;
	int sum, i;
	int marks[5] = {1,2,3,4,5};
	for(i=0; i<5; i++)
	{
		sum += marks[i];
	}
	cout<<"Sum of all Elements in Array = "<<sum<<endl;
	average = sum/5;
	cout<<"Average of all Elements in The Array = "<<fixed<<average;
}

program to find Length of an Array
#include<iostream>
using namespace std;
int main()
{
	int marks[6]={1,2,3,4,5,6};
	int length = sizeof(marks)/sizeof(marks[0]);
	cout<<"Length of An Array is = "<<length;
}

Program to Find The Largest Number in an Array
#include<iostream>
using namespace std;
int main()
{
	int i,n;
	int marks[n];
	cout<<"Enter Number of Elements of Array "<<endl;
	cin>>n;
	cout<<"Enter "<<n<<" Elements of The Array \n";
	for(i=0; i<n; i++)
	{
		cin>>marks[i];
	}
	int max = marks[0];
	for(i=1; i<n; i++)
	{
		if(marks[i]>max){
			max = marks[i];
		}
	}
	cout<<"Display The Largest Number: "<<max;
}



























































