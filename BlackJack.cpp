#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	if(n<=10)
	{
		cout<<"0\n";
		return 0;
	}
	else if(n==11)
	{
		cout<<"4\n";
		return 0;
	}
	else if(n>=12 and n<=19)
	{
		cout<<"4\n";
		return 0;
	}
	else if(n==20)
	{
		cout<<"15\n";
	}
	else if(n==21)
	{
		cout<<"4\n";
		return 0;
	}
	else if(n>=22)
	{
		cout<<"0\n";
		return 0;
	}
	return 0;
}