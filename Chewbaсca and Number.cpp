#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	int n;
	cin>>n;
	stack<int> s1;
	while(n)
	{
		int x=n%10;
		if(x<=4)
		{
			s1.push(x);
		}
		else
		{
			x=9-x;
			s1.push(x);
		}
		n=n/10;
	}
	while(!s1.empty())
	{
		cout<<s1.top();
		s1.pop();

	}
	cout<<endl;
	return 0;
}