#include<bits/stdc++.h>
using namespace std;
long long int smallestDivisor(long long int n) 
{ 
    // if divisible by 2 
    if (n % 2 == 0) 
        return 2; 
  
    // iterate from 3 to sqrt(n) 
    for (long long int i = 3; i * i <= n; i += 2) { 
        if (n % i == 0) 
            return i; 
    } 
  
    return n; 
}
int main()
{
    long long int n;
    cin>>n;
    long long int count=0;
    while(n!=0)
    {
        long long int p=smallestDivisor(n);
        n-=p;
        count++;
    }
    cout<<count<<"\n";
    return 0;
}