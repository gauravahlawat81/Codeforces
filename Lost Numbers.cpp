#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[6]={4,8,15,16,23,42};
	int mul[43][43];
	for(int i=0;i<6;i++)
	{
		for(int j=0;j<6;j++)
		{
			mul[arr[i]][arr[j]]=arr[i]*arr[j];
		}
	}
	bool marked[43];
	memset(marked,false,sizeof(marked));
	int received1,received2,received3,received4;
	cout<<"? 1 1\n";
	fflush(stdout);
	cin>>received1;
	int num1,num2,num3,num4,num5,num6;
	for(int i=0;i<6;i++)
	{
		if(received1==(arr[i]*arr[i]))
		{
			num1=arr[i];
			marked[num1]=true;
			break;
		}
	}
	cout<<"? 2 2"<<"\n";
	fflush(stdout);
	cin>>received2;
	for(int i=0;i<6;i++)
	{
		if(received2==(arr[i]*arr[i]))
		{
			num2=arr[i];
			marked[num2]=true;
			break;
		}
	}
	cout<<"? 3 4\n";
	fflush(stdout);
	cin>>received3;
	 int pos3[2];
	// for(int i=0,j=0;i<6 and j<2;i++)
	// {
	// 	if(received3%arr[i]==0 and arr[i]==false)
	// 	{
	// 		pos3[j]=arr[i];
	// 		j++;
	// 	}
	// }
	for(int i=0;i<43;i++)
	{
		for(int j=0;j<43;j++)
		{
			if(mul[i][j]==received3)
			{
				pos3[0]=i;
				pos3[1]=j;
			}
		}
	}
	//cout<<"pos3[0] and pos3[1] are "<<pos3[0]<<" "<<pos3[1]<<"\n";	
	cout<<"? 3 6\n";
	fflush(stdout);
	cin>>received4;
	for(int i=0;i<6;i++)
	{
		if(received4%arr[i]==0 and arr[i]!=pos3[0] and arr[i]!=pos3[1] and marked[arr[i]]==false)
		{
			num6=arr[i];
			//cout<<"Number 6 is "<<num6<<"\n";
			marked[num6]=true;
			break;
		}
	}
	for(int i=0;i<6;i++)
	{
		if(received4%arr[i]==0 and arr[i]!=num6 and num6*arr[i]==received4)
		{
			num3=arr[i];
			marked[num3]=true;
		}
	}
	received3/=num3;
	for(int i=0;i<6;i++)
	{
		if(arr[i]==received3)
		{
			num4=arr[i];
			marked[num4]=true;
		}
	}
	if(marked[4]==false)
	{
		num5=4;
	}
	else if(marked[8]==false)
	{
		num5=8;
	}
	else if(marked[15]==false)
	{
		num5=15;
	}
	else if(marked[16]==false)
	{
		num5=16;
	}
	else if(marked[23]==false)
	{
		num5=23;
	}
	else
	{
		num5=42;
	}
	cout<<"! "<<num1<<" "<<num2<<" "<<num3<<" "<<num4<<" "<<num5<<" "<<num6<<"\n";
	fflush(stdout);
	return 0;

}