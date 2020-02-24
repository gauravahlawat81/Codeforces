#include<bits/stdc++.h>
using namespace std;
int main()
{
	int number_of_boys;
	cin>>number_of_boys;
	int array_of_boys[number_of_boys];
	for(int i=0;i<number_of_boys;i++)
	{
		cin>>array_of_boys[i];
	}
	sort(array_of_boys,array_of_boys+number_of_boys);
	int number_of_girls;
	cin>>number_of_girls;
	int array_of_girls[number_of_girls];
	for(int i=0;i<number_of_girls;i++)
	{
		cin>>array_of_girls[i];
	}
	sort(array_of_girls,array_of_girls+number_of_girls);
	int maximum_size=max(number_of_girls,number_of_boys);
	bool paired_boy[number_of_boys];
	bool paired_girl[number_of_girls];
	memset(paired_boy,false,sizeof(paired_boy));
	memset(paired_girl,false,sizeof(paired_girl));
	int number_of_pairs=0;
	for(int i=0;i<number_of_boys;i++)
	{
		for(int j=0;j<number_of_girls;j++)
		{
			if((abs(array_of_girls[j]-array_of_boys[i])==1 or(abs(array_of_girls[j]-array_of_boys[i])==0 ))and paired_boy[i]==false and paired_girl[j]==false)
			{
				number_of_pairs+=1;
				paired_boy[i]=true;
				paired_girl[j]=true;
				break;

			}
			else
			{
				continue;
			}
		}
	}
	cout<<number_of_pairs<<endl;

}