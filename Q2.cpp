//print the number in increasing and decreasing order till n 

#include<iostream>
using namespace std;
void incresing(int n)
	{
		if(n==1)
		{
			cout<<"1"<<endl;
			return;
		}
		incresing(n-1);
		cout<<n<<endl;
		
		
	}
void decresing(int n)
	{
	
		if(n==1)
		{
			cout<<"1"<<endl;
			return;
		}
		
		cout<<n<<endl;
		decresing(n-1);
	}
int main()
	{
		int n;	
		cout<<"enter the number";
		cin>>n;
		incresing(n);
		decresing(n);
		return 0;
	}