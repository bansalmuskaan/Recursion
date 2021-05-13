//calculate np using Recursion

//Objective: To calculate pth power of n i.e. np

#include<iostream>
using namespace std;
int ppower(int n,int p)
	{
		if(p==0 )
			return 1;
		return n*ppower(n,p-1);
		
	}
int main()
	{
		int n,p;	
		cout<<"enter the number";
		cin>>n;
		cout<<"enter the power:";
		cin>>p;
		cout<<ppower(n,p);
		return 0;
	}