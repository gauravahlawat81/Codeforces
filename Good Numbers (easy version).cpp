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
struct custom_hash {
    static uint64_t splitmix64(uint64_t x) {
        // http://xorshift.di.unimi.it/splitmix64.c
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }

    size_t operator()(uint64_t x) const {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};
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
vector<ull> printSubsequences(vector<ull>v, ull n) 
{ 
    /* Number of subsequences is (2**n -1)*/
    ull opsize = pow(2, n); 
    vector<ull>res;
    /* Run from counter 000..1 to 111..1*/
    ull x;
    for (ull counter = 1; counter < opsize; counter++) 
    { ull sum=0;
        for (ull j = 0; j < n; j++) 
        { //ull sum=0;
            /* Check if jth bit in the counter is set 
                If set then prull jth element from arr[] */
            if (counter & (1<<j))
            {
                sum+=v[j];
            } 
        } 
        res.pb(sum);
        //cout << endl; 
    }
    return res; 
} 
bool isPrime(ull n)
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

    for (ull i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;

    return true;
}
#define taskname "C"
int main()
{
#ifdef Gaurav
    if (fopen(taskname ".in", "r"))
        freopen(taskname ".in", "r", stdin);
#endif // Gaurav
    int t;
    read(t);
    while(t--)
    {
    	ull num;
    	read(num);
    	vector<int>v;
    	int pos2=-1;
    	while(num)
    	{
    		v.pb(num%3);
    		if(v.back()==2)
    		{
    			pos2=int(v.size())-1;
    		}
    		num/=3;
    	}
    	v.push_back(0);
    	cout<<"in base 3\n";
    	for(auto c:v)
    	{
    		cout<<c;
    	}
    	cout<<"\n";
    	if(pos2!=-1)
    	{
    		int pos0=find(v.begin()+pos2,v.end(),0)-v.begin();
    		v[pos0]=1;
    		for(int i=pos0-1;i>=0;i--)
    		{
    			v[i]=0;
    		}
    	}
    	ull ans=0;
    	ull pw=1;
    	cout<<"final bits\n";
    	for(auto c:v)
    	{
    		cout<<c;
    	}
    	cout<<"\n";
    	for(int i=0;i<int(v.size());i++)
    	{
    		ans+=pw*v[i];
    		pw*=3;
    	}
    	if(v.back()==1)
    	{
    		ans=pw/3;
    	}
    	writeln(ans);
    }
    return 0;

}