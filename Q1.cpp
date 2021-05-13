//Sum till n

#include<iostream>
using namespace std;
int sum(int n)
	{
		if(n==0)
			return 0;
		return n + sum(n-1);
	}
int main()
	{
		int n;	
		cout<<"enter the number u want the sum for :";
		cin>>n;
		cout<<"the sum ="<<sum(n);
		return 0;
	}