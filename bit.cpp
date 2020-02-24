#include<bits/stdc++.h>
using namespace std;
int main()
{
	unsigned long long int l,r,v;
	cin>>l>>r>>v;
	int low_lim;
	if(log2(l)-int(log2(l)))
	low_lim=int(log2(l))+1;
	else
	low_lim=int(log2(l));		
	int high_lim;
	if(log2(r)-int(log2(r)))
		high_lim=int(log2(r))-1;
	else
		high_lim=int(log2(r));
	
}