#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;
int main()
{
	int n;
	cin>>n;
	cout<<n/100+(n%100)/20+(n%20)/10+(n%10)/5+(n%5);
	cout<<"\n";
	return 0;
}