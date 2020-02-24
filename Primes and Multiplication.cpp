#include <bits/stdc++.h>
using namespace std;
#define N 1000000007
#define FOR(i, j, k) for (int i = (j); i <= (k); i++)
#define FFOR(i, j, k) for (int i = (j); i < (k); i++)
#define DFOR(i, j, k) for (int i = (j); i >= (k); i--)
#define bug(x) cerr << #x << " = " << (x) << '\n'
#define pb push_back
#define mp make_pair
#define bit(s, i) (((s) >> (i)) & 1LL)
#define mask(i) ((1LL << (i)))
#define builtin_popcount __builtin_popcountll
#define __builtin_popcount __builtin_popcountll
using ll = long long;
using ld = long double;
using ull=unsigned long long int;
mt19937_64 rng(chrono::high_resolution_clock::now().time_since_epoch().count());
const ld pi = acos(0) * 2;
template <typename T>
inline void read(T &x)
{
    char c;
    bool nega = 0;
    while ((!isdigit(c = getchar())) && (c != '-'))
        ;
    if (c == '-')
    {
        nega = 1;
        c = getchar();
    }
    x = c - 48;
    while (isdigit(c = getchar()))
        x = (x<<1)+(x<<3) + c - 48;
    if (nega)
        x = -x;
}
template <typename T>
inline void writep(T x)
{
    if (x > 9)
        writep(x / 10);
    putchar(x % 10 + 48);
}
template <typename T>
inline void write(T x)
{
    if (x < 0)
    {
        putchar('-');
        x = -x;
    }
    writep(x);
}
template <typename T>
inline void writeln(T x)
{
    write(x);
    putchar('\n');
}
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
bool isPrime(int n)
{
    // Corner cases
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;

    // This is checked so that we can skip
    // middle five numbers in below loop
    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;

    return true;
}
vector<int> primeFactors(ull n)  
{  
    set<int>res;
    std::vector<int> v;
    // Print the number of 2s that divide n  
    while (n % 2 == 0)  
    {  
        //cout << 2 << " ";
        if(res.find(2)==res.end())
        {
            v.push_back(2);
        }  
        n = n/2;  
    }  
  
    // n must be odd at this point. So we can skip  
    // one element (Note i = i +2)  
    for (int i = 3; i <= sqrt(n); i = i + 2)  
    {  
        // While i divides n, print i and divide n  
        while (n % i == 0)  
        {  
            //cout << i << " ";
            if(res.find(i)==res.end())
            {
                v.push_back(i);
            }    
            n = n/i;  
        }  
    }  
  
    // This condition is to handle the case when n  
    // is a prime number greater than 2  
    if (n > 2)
    {
        if(res.find(n)==res.end())
        {  
            v.push_back(n);
        }
    }
    return v;
}
int gg(int j,int c)
{
    int val=1;
    for(int i=1;;i++)
    {
        val=power(c,i);
        if(j%val!=0)
        {
            i=i-1;
            //cout<<"Biggest power of "<<c<<" that divides "<<j<<" is "<<i-1<<"\n";
            if(i<0)
            {
                //cout<<"Returning 1\n";
                return 1;
            }
            val=power(c,i);
            //cout<<"Returning "<<val<<"\n";
            return val;
        }
    }
}  
#define taskname "C"
ull ff(ull x,int i)
{
    vector<int>res=primeFactors(x);
    ull ans=1;
    for(auto c:res)
    {
        ull val=gg(i,c);
        val%=N;
        ans=(ans*val)%N;
    }
    return ans;
}
int main()
{
#ifdef Gaurav
    if (fopen(taskname ".in", "r"))
        freopen(taskname ".in", "r", stdin);
#endif // Gaurav
    int x,n;
    cin>>x>>n;
    ull res=1;
    for(int i=1;i<=n;i++)
    {
        int yy=ff(x,i);
        cout<<"Value of f("<<x<<","<<i<<") is "<<yy<<"\n";
        res=(res*((ff(x,i)%N))%N)%N;
    }
    cout<<res%N<<"\n";
    return 0;

}