#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b;
	cin>>a>>b;
	int t=0;
	while(a>0 and b>0)
	{
		if(a==1 and b==1)
		{
			break;
		}
		if(a<b)
		{
			a--;
			b-=2;
		}
		else
		{
			a-=2;
			b--;
		}
		t++;
	}
	cout<<t<<endl;
	return 0;
}