#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;
ll sum(ll cost,ll number_of_bananas)
{
	ll result=number_of_bananas*(2*cost+((number_of_bananas-1)*cost));
	return result/2;
}

int main()
{
	ll cost,number_of_dollars,number_of_bananas;
	cin>>cost>>number_of_dollars>>number_of_bananas;
	ll a=sum(cost,number_of_bananas);
	ll result=a-number_of_dollars;
	if(number_of_dollars>a)
	{
		cout<<"0\n";
	}
	else	
		cout<<result<<"\n";
	return 0;
}