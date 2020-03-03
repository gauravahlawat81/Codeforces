#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        string s;
        cin>>s;
        int arr[m];
        for(auto &c:arr)
        {
            cin>>c;
        }
        int keys[26];
        for(int i=0;i<26;i++)
        {
            keys[i]=0;
        }
        for(int i=0;i<m;i++)
        {
            string copy = s.substr(0,arr[i]);
            for(int j=0;j<copy.length();j++)
            {
                keys[copy[j]-'a']++;
            }
        }
        for(int i=0;i<s.length();i++)
        {
            keys[s[i]-'a']++;
        }
        for(auto c:keys)
        {
            cout<<c<<" ";
        }
    }
    return 0;
}