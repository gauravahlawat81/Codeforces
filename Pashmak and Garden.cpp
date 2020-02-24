#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x1,y1,x2,y2;
	cin>>x1>>y1>>x2>>y2;
	double slope=(y2-y1)/(x2-x1);
	if(tan(slope)==tan(90))
	{
		int distance=y2-y1;
		cout<<x1+distance<<" "<<y1<<" "<<x2+distance<<" "<<y2;
	}
	else if(sin(slope)==sin(0))
	{
		int distance=
	}
}