#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s,result="";
    cin>>s;
    int cc=count(s.begin(),s.end(),s[0]);
    if(cc==n)
    {
        for(int i=0;i<n-1;i++)
        {
            cout<<s[i];
        }
        cout<<"\n";
        exit(0);
    }
    bool flag=false;
    for(int i=1;i<n;i++)
    {
        if(s[i-1]>s[i])
        {
        //     for(int j=0;j<n-1;j++)
        //     {
        //         if(j!=(i-1))
        //         {
        //             result+=s[j];
        //         }
        //     }
        //     cout<<result<<"\n";
        //     exit(0);
                s.erase(i-1,1);
                flag=true;
                break;        
        }
    }
    if(flag)
    {
        cout << s << "\n";
    }
    else
    {
        s.erase(n-1,1);
        cout<<s<<"\n";
    }
    
    return 0;

}