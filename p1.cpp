#include<iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int t;
	cin>>t;
	while(t--)
	{
		long long int n;
		cin>>n;
		if(n%10 == 0 && n>=90)
			cout<<"10\n";
		else if(n%10 == 1 && n>=81)
			cout<<"9\n";
		else if(n%10 == 2 && n>=72)
			cout<<"8\n";
		else if(n%10 == 3 && n>=63)
			cout<<"7\n";
		else if(n%10 == 4 && n>=54)
			cout<<"6\n";
		else if(n%10 == 5 && n>=45)
			cout<<"5\n";
		else if(n%10 == 6 && n>=36)
			cout<<"4\n";
		else if(n%10 == 7 && n>=27)
			cout<<"3\n";
		else if(n%10 == 8 && n>=18)
			cout<<"2\n";
		else if(n%10 == 9 && n>=9)
			cout<<"1\n";
		else
			cout<<"-1\n";
	}

	return 0;
}