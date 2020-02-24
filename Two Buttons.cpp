#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int number=0;
	if(n>=m)
	{
		cout<<n-m<<endl;
		return 0;
	}
	while(n!=m)
	{
		if(m%2==0 and m>n)
		{
			m/=2;
		}
		else
		{
			m++;
		}
		number++;
	}
	
	cout<<number<<endl;
}