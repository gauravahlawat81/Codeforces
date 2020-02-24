#include<bits/stdc++.h>
using namespace std;
int binaryToDecimal(int n,int num3) 
{ 
    int num = n; 
    int dec_value = 0; 
  
    // Initializing base value to 1, i.e 2^0 
    int base = 1; 
  
    int temp = num; 
    while (temp and num3) { 
        int last_digit = temp % 10; 
        temp = temp / 10; 
  
        dec_value += last_digit * base; 
  
        base = base * 2;
        num3--; 
    } 
  
    return dec_value; 
}
int main()
{
	int n,x,y;
	cin>>n>>x>>y;
	unsigned long long int number;
	cin>>number;
	int power=pow(10,x);
	//cout<<"power is "<<power<<"\n";
	int num1=number%power;
	int num2=pow(10,y);
	//cout<<"Number 1 and 2 are "<<num1<<" "<<num2<<"\n";
	int result=num1^num2;
	//cout<<"Result is "<<result<<"\n";
	int num3;
	string s1=to_string(num1);
	string s2=to_string(num2);
	if(s1.size()>s2.size())
	{
		num3=s2.size();
	}
	else
	{
		num3=s1.size();
	}
	cout<<binaryToDecimal(result,num3)<<"\n";
	exit(0);
	
	// string s1=to_string(num1);
	// string s2=to_string(num2);
	int i=s1.size()-1;
	int j=s2.size()-1;
	unsigned long long int count=0;
	while(i>=0 and j>=0)
	{
		if(s1[i]!=s2[j])
		{
			count++;
			//cout<<"The value of the count is "<<count<<"\n";
		}
		i--;j--;
	}
	//cout<<"Value of i and j is "<<i<<" "<<j<<"\n";
	if(i>=0)
	{
		//cout<<"Going into ith loop\n";
		// while(i>=0)
		// {
		// 	count++;
		// 	i--;
		// }
		count+=i+1;
		//cout<<"Count value is "<<count<<"\n";
	}
	if(j>=0)
	{
		//cout<<"Going into the jth loop\n";
		// while(j>=0)
		// {
		// 	count++;
		// 	i--;
		// }
		count=count+j+1;
		//cout<<"Count value is "<<count<<"\n";
	}
	cout<<count<<"\n";
	return 0;
}