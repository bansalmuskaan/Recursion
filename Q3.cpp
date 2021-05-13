//print fibbonaaci series

#include<iostream>
using namespace std;
int fibbonaaci(int n)
	{
		if(n==0 || n==1)
			return n;
		return fibbonaaci(n-1)+fibbonaaci(n-2);
		
	}
int main()
	{
		int n;	
		cout<<"enter the number";
		cin>>n;
		cout<<fibbonaaci(n);
		return 0;
	}