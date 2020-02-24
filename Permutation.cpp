#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	set<int> s1;
	for(int i=0;i<n;i++)
	{
		int a;
		cin>>a;
		if(a<=n)
			s1.insert(a);

	}
	int x=s1.size();
	cout<<abs(n-x)<<endl;
}