// updated cp template 

// shivam

#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define setbits(x) __builtin_popcount(x)
#define zerobits(x) __builtin_ctz(x)
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define INF 1e18
#define PI 3.141592653589793238462
// #define MOD 1000000007
#define all(x) (x).begin(), (x).end()
const ll mod = 1e9 + 7;
 
#define debug(x)  cout<<#x<<" : "; _print(x); cout<<"\n";
 
void _print(ll t) {cout << t;}
void _print(int t) {cout << t;}
void _print(string t) {cout << t;}
void _print(char t) {cout << t;}
void _print(double t) {cout << t;}
void _print(bool t) {cout << t;}
 
template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T> void _print(unordered_set <T> v);
template <class T,class V> void _print(unordered_map <T,V> v);

template <class T, class V> void _print(pair <T, V> p) {_print(p.ff); cout<<" "; _print(p.ss);}
template <class T> void _print(vector <T> v) {for (T i : v) {_print(i); cout << " ";}}
template <class T> void _print(set <T> v) {for (T i : v) {_print(i); cout << " ";}}
template <class T> void _print(multiset <T> v) {for (T i : v) {_print(i); cout << " ";}}
template <class T, class V> void _print(map <T, V> v) {for (auto i : v) {_print(i); cout << " ";}}
template <class T> void _print(unordered_set <T> v)  {for(T i : v) {_print(i); cout<< " ";}}
template <class T,class V> void _print(unordered_map <T,V> v) {for (auto i : v) {_print(i.ff); cout<<"->"; _print(i.ss); cout<<"\n";}}

ll inv(ll i) {if (i == 1) return 1; return (mod - ((mod / i) * inv(mod % i)) % mod) % mod;}
 
ll mod_mul(ll a, ll b) {a = a % mod; b = b % mod; return (((a * b) % mod) + mod) % mod;}
 
ll mod_add(ll a, ll b) {a = a % mod; b = b % mod; return (((a + b) % mod) + mod) % mod;}
 
ll gcd(ll a, ll b) { if (b == 0) return a; return gcd(b, a % b);}
 
ll ceil_div(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}
 
ll pwr(ll a, ll b) {a %= mod; ll res = 1; while (b > 0) {if (b & 1) res = res * a % mod; a = a * a % mod; b >>= 1;} return res;}
 
 
int main()
{
    fastio();
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,x;
        cin>>n>>k>>x;
        vector<int>v(n,0);
        if(n == 1)
        {
            if(k == 1)
            {
                cout<<(0)<<"\n";
            }
            else
            {
                cout<<(-1)<<"\n";
            }
            continue;
        }
        int idx = -1;
        for(int i=0;i<n;i++)
        {
            if(i < k)
            {
                v[i] = i;
            }
            else
            {
                idx = i;
                break;
            }
        }
        if(idx == -1)
        {
            if(k == n)
            {
                bool check = true;
                for(int i=0;i<n;i++)
                {
                    if(v[i] > x)
                    {
                        check = false;
                        break;
                    }
                }
                if(check)
                {
                    int sum = 0;
                    for(int i=0;i<n;i++)
                    {
                        sum += v[i];
                    }
                    cout<<sum<<"\n";
                }
                else
                {
                    cout<<(-1)<<"\n";
                }
            }
            else
            {
                cout<<(-1)<<"\n";
            }
        }
        else
        {
            if(x == k)
            {
                for(int i=idx;i<n;i++)
                {
                    v[i] = k-1;
                }
            }
            else
            {
                for(int i=idx;i<n;i++)
                {
                    v[i] = x;
                }
            }
            sort(all(v));
            // debug(v);
            bool check = true;
            for(int i=0;i<n;i++)
            {
                if(v[i] > x)
                {
                    check = false;
                    break;
                }
            }
            if(check)
            {
                // lets calculate the mex of the array 
                int mex = -1;
                for(int i=0;i<n;i++)
                {
                    if(v[i] != i)
                    {
                        mex = i;
                        break;
                    }
                }
                if(mex == -1)
                {
                    mex = n;
                }
                // debug(mex);
                if(mex == k)
                {
                    int sum = 0;
                    for(int i=0;i<n;i++)
                    {
                        sum += v[i];
                    }
                    cout<<sum<<"\n";
                }
                else
                {
                    cout<<(-1)<<"\n";
                }
            }
            else
            {
                cout<<(-1)<<"\n";
            }
        }
    }
    return 0;
}
