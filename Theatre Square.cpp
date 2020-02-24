#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;
int main()
{
	ios_base::sync_with_stdio(false);
	ll n,m,a,answer;
	cin>>n>>m>>a;
	answer=(((m+a-1)/a)*((n+a-1)/a));
	cout<<answer<<endl;;
}