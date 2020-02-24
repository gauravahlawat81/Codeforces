#include<bits/stdc++.h>
using namespace std;
int main()
{
	int answer=0;
	int a,b,c;
	cin>>a>>b>>c;
	int expr1=a+b+c;
	int expr2=a*b*c;
	int expr3=(a+b)*c;
	int expr4=(a*b)+c;
	int expr5=a+(b*c);
	int expr6=a*(b+c);
	answer=max({expr1,expr2,expr3,expr4,expr5,expr6});
	cout<<answer<<endl;
}