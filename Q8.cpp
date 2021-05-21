#include<iostream>
#include<string>
using namespace std;
void r(string s)
{
	if(s.length()==0)
		return;
	r(s.substr(1));
	cout<<s[0];
}
int main()
{
	r("binodS");
	return 0;
}