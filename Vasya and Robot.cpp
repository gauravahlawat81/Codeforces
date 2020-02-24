#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int x;
    int y;
    cin>>x>>y;
    int posx=0;
    int posy=0;
    unordered_map<char,int>umap;
    for(auto c:s)
    {
        umap[c]++;
        if(c=='R')
        {
            posx++;
        }
        else if(c=='L')
        {
            posx--;
        }
        else if(c=='U')
        {
            posy++;
        }
        else
        {
            posy--;
        }
    }
    if(posx==x and posy==y)
    {
        cout<<"0\n";
        exit(0);
    }
    int minIndex=INT_MAX,maxIndex=INT_MIN;
    if(posx<x)
    {
        int newposx=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='L' and newposx<x)
            {
                s[i]='R';
                newposx++;
                if(i>maxIndex)
                {
                    maxIndex=i+1;
                }
                if(i<minIndex)
                {
                    minIndex=i+1;
                }
            }
            if(s[i]=='R' and newposx<x)
            {
                newposx++;
            }
            if(s[i]=='R' and newposx>=x)
            {
                s[i]='L';
                
            }

            
        }
    }
    else
    {
        for (int i = 0; i < n and posx > x; i++)
        {
            if (s[i] == 'R')
            {
                s[i] = 'L';
                posx--;
                if (i > maxIndex)
                {
                    maxIndex = i + 1;
                }
                if (i < minIndex)
                {
                    minIndex = i + 1;
                }
            }
        }
    }
    

}