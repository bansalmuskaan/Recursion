//Check if Array is Sorted [Strictly increasing]
//Objective: Check if the array is in strictly increasing order or not.
//Time Complexity: O(N)
//Space Complexity: O(N) for function call stack


#include<iostream>
using namespace std;
bool sort(int a[],int n)
	{
		if(n==1)
			return true;
		bool restarray=sort(a+1,n-1);
		if(a[0]<a[1] && restarray)
			return true;
		else
			return false;
	}

int main()
	{
		int n,key,i=0;
		cout<<"enter the number of elements:";
		cin>>n;
		int *a=new int(n);
		for(int i=0;i<n;i++)
		cin>>a[i];
		cout<<sort(a,n);
		return 0;
	}