#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	int a,b,c;
	cin>>a>>b>>c;
	int ans =min({a,b,c});
	if(ans==a)
	cout<<ans*3+3<<endl;
	else if(ans==c)
		cout<<3*(ans-1)<<endl;
	else
		cout<<3*ans<<endl;
	return 0;
}