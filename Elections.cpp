#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int sum=0;
    int max_element=INT_MIN;
    for(auto &c:arr)
    {
        cin>>c;
        sum+=c;
        if(c>max_element)
        {
            max_element=c;
        }
    }
    while(true)
    {
        for(int i=max_element;;i++)
        {
            int result=0;
            for(int j=0;j<n;j++)
            {
                result+=(i-arr[j]);
            }
            if(result>sum)
            {
                cout<<i<<"\n";

                exit(0);
            }
        }
    }

}