#include<bits/stdc++.h>
using namespace std;
const double pi=acos(-1.0);
int main()
{
	int n,r;
	cin>>n>>r;
	float f=(sin(pi/n)*r)/(1-(sin(pi/n)));
	cout<<setprecision(7)<<f<<endl;
	return 0;
}