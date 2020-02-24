#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int count1=count(s.begin(),s.end(),s[0]);
    if(count1==s.length())
    {
        cout<<"NO\n";
        return 0;
    }
    else
    {
        for(int i=0;i<s.length()-1;i++)
        {
            if(s[i]!=s[i+1])
            {
                cout<<"YES\n"<<s[i]<<s[i+1]<<"\n";
                exit(0);
            }
        }
    }
    
}