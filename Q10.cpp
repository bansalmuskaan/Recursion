#include<iostream>
#include<string>
using namespace std;
string r(string s)
{
	if(s.length()==0)
		return "";
	char c=s[0];	
	string ros=r(s.substr(1));
	//r(ros);
	if(c=='x')
		return (ros+c);
	else
		return (c+ros);
}
int main()
{
	string s=r("xxxmuskaan");
	cout<<s;
	return 0;
}