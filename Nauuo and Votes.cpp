#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,z;
    cin>>x>>y>>z;
    if(x==y and z==0)
    {
        cout<<"0\n";
    }
    else if(x>y and x>(z+y))
    {
        cout<<"+\n";
    }
    else if(y>x and y>(z+x))
    {
        cout<<"-\n";
    }
    else
    {
        cout<<"?\n";
    }
    return 0;
    
}