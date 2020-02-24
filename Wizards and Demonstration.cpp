#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,x,y;
	cin>>n>>x>>y;
	int result=ceil((n-y)/100);
	int final=max(0,result-x);
	cout<<final<<endl;
	return 0;
}