#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;
int main()
{
	ios_base::sync_with_stdio(false);
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int number_of_25=0;
	int number_of_50=0;
	bool flag=true;
	for(int i=0;i<n;i++)
	{
		if(arr[i]==25)
		{
			number_of_25++;
		}
		else if(arr[i]==50 and number_of_25>=1)
		{
			number_of_25-=1;
			number_of_50+=1;
		}
		else if(arr[i]==50 and number_of_25<1)
		{
			flag=false;
			cout<<"NO\n";
			break;
		}
		else if(arr[i]==100 and(number_of_25>=1))
		{
			if(number_of_25>=1 and number_of_50>=1)
			{
				number_of_25-=1;
				number_of_50-=1;
			}
			else if(number_of_25>=3)
			{
				number_of_25-=3;
			}
			else
			{
				cout<<"NO\n";
				break;
				flag==false;
			}
		}
		else
		{
			cout<<"NO\n";
			break;
			flag=false;
		}

	}
	if(flag)
	{
		cout<<"YES\n";
	}
	return 0;

}