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
 
bool is_prime(ll n) 
{
    if(n <= 1) return false;
    if (n <= 3)  return true; 
        
    if (n % 2 == 0 || n % 3 == 0) 
    {
        return false; 
    }
    int range = sqrt(n);
    for(int i=5;i<=range;i+=6)
    {
        if(n % i == 0 || n % (i + 2) == 0) 
        {
            return false;
        }
    }
    return true;
}
int main()
{
    fastio();
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(n,0);
        unordered_map<int,int>umap;
        int max_value = INT_MIN;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            max_value = max(v[i],max_value);
            if(umap.find(v[i]) == umap.end())
            {
                umap.insert({v[i],1});
            }
            else
            {
                umap[v[i]] += 1;
            }
        }
        // debug(n)
        // debug(v);
        // debug(umap);
        // debug(max_value);
        if(umap.size() == 1)
        {
            cout<<(-1)<<"\n";
            continue;
        }
        else
        {
            // answer hoga maximum element ka koi sa index 
            if(v[0] == max_value)
            {
                if(v[0] > v[1])
                {
                    cout<<(1)<<"\n";
                    continue;
                }
            }
            if(v[n-1] == max_value)
            {
                if(v[n-1] > v[n-2])
                {
                    cout<<(n)<<"\n";
                    continue;
                }
            }
            for(int i=1;i<n-1;i++)
            {
                if(v[i] == max_value)
                {
                    if(v[i] > v[i-1] || v[i] > v[i+1])
                    {
                        cout<<(i+1)<<"\n";
                        break;
                    }
                }
            }
        }
    }
    return 0;
}
