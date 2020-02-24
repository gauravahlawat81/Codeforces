#include <bits/stdc++.h>
using namespace std;
#define taskname "C"
#define N 1000000007
long long int power(long long int x,  long long int y) 
{ 
    long long int res = 1;      // Initialize result 
    x = x % N;  // Update x if it is more than or  
                // equal to p 
  
    while (y > 0) 
    { 
        // If y is odd, multiply x with result 
        if (y & 1) 
            res = (res*x) % N; 
  
        // y must be even now 
        y = y>>1; // y = y/2 
        x = (x*x) % N;   
    } 
    return res; 
}
int exponentMod(int A, int B, int C) 
{ 
    // Base cases 
    if (A == 0) 
        return 0; 
    if (B == 0) 
        return 1; 
  
    // If B is even 
    long y; 
    if (B % 2 == 0) { 
        y = exponentMod(A, B / 2, C); 
        y = (y * y) % C; 
    } 
  
    // If B is odd 
    else { 
        y = A % C; 
        y = (y * exponentMod(A, B - 1, C) % C) % C; 
    } 
  
    return (int)((y + C) % C); 
} 
int main()
{
#ifdef Gaurav
    if (fopen(taskname ".in", "r"))
        freopen(taskname ".in", "r", stdin);
#endif // Gaurav
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            arr[i][j]=3;
        }
    }
    int rows[n];
    int col[m];
    for(int i=0;i<n;i++)
    {
        cin>>rows[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>col[i];
    }
    for(int i=0;i<n;i++)
    {
        int j=0;
        for(;j<rows[i];j++)
        {
            arr[i][j]=1;
        }
        if(j<m)
        {
            arr[i][j]=-1;    
        }
        
    }
    for(int i=0;i<m;i++)
    {
        int j=0;
        for(;j<col[i];j++)
        {
            if(arr[j][i]!=-1)
            {
                arr[j][i]=1;
            }
            else if(arr[j][i]==-1)
            {
                //cout<<"Conflict at "<<i+1<<" and "<<j+1<<"\n";
                //cout<<arr[j][i]<<" "<<"at "<<i<<" and  "<<j<<"\n";
                cout<<"0\n";
                exit(0);
            }
        }
        if(j<n)
        {
            if(arr[j][i]==1)
            {
                cout<<"0\n";
                exit(0);
            }
            arr[j][i]=-1;
        }
    }
    unsigned long long int count=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr[i][j]==3)
            {
                count=(count+1);
            }
        }
    }
    //count=10000;
    //int res=((((count%N)*((count+1)%N))%N)/2)%N;
    //cout<<"Value of count "<<count<<"\n";
    //int res=(count*(count+1))/2;
    //cout<<power(2,10)<<"\n";
    int res=1;
    for(int i=1;i<=count;i++)
    {
        res=(res*2)%N;
    }
    cout<<res<<"\n";
    return 0;


}