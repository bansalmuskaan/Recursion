#include<iostream>
#include<string>
using namespace std;
void r(string s)
{
	if(s.length()==0)
		return;
	if(s[0]=='p' && s[1]=='i')
	{
		cout<<"3.14";
		r(s.substr(2));
	}	
	else
	{
		cout<<s[0];
		r(s.substr(1));
	}
}
int main()
{
	r("pippppiipi");
	return 0;
}