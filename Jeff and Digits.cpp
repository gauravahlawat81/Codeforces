#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n],number_of_5=0,number_of_0=0;;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		if(arr[i]==5)
		{
			number_of_5++;
		}
		else
		{
			number_of_0++;
		}
	}
	if(number_of_0==0)
	{
		cout<<"-1\n";
		return 0;
	}
	else
	{
		number_of_5=floor(number_of_5/9);
		string answer="";
		for(int i=0;i<(number_of_5);i++)
		{
			answer+="555555555";
		}
		for(int i=1;i<=number_of_0;i++)
		{
			if(answer.length()==0)
			{answer+="0";
			break;}
			else
			{
			answer+="0";	
			}
		}
		cout<<answer<<endl;
	}
	return 0;
}