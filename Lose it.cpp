#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int a1=0,a2=0,a3=0,a4=0,a5=0,a6=0;
    for(auto &c:arr)
    {
        cin>>c;
        if(c==4)
        {
            a1++;
        }
        else if(c==8 and a1>a2)
        {
            a2++;
        }
        else if(c==15 and a2>a3)
        {
            a3++;
        }
        else if(c==16 and a3>a4)
        {
            a4++;
        }
        else if(c==23 and a4>a5)
        {
            a5++;
        }
        else if(c==42 and a5>a6)
        {
            a6++;
        }

    }
    cout<<n-a6*6<<"\n";
    return 0;

}