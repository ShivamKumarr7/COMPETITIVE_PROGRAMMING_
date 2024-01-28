// shivam_7ms

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
 
// ll gcd(ll a, ll b) { if (b == 0) return a; return gcd(b, a % b);}
 
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
        int l,r;
        cin>>l>>r;
        if(l == r)
        {
            cout<<r<<"\n";
        }
        else
        {
            if(l > r)
            {
                swap(l,r);
            }
            if(r <= 9)
            {
                cout<<r<<"\n";
            }
            else if(r == 10 || r == 11)
            {
                cout<<(10)<<"\n";
            }
            else if(r <=  19)
            {
                cout<<(r)<<"\n";
            }
            else if(r == 20)
            {
                cout<<(19)<<"\n";
            }
            else
            {
                string start = to_string(l);
                string end = to_string(r);
                int start_size = start.size();
                int end_size = end.size();
                if(end_size - start_size >= 2)
                {
                    if(end_size == 3)
                    {
                        cout<<(90)<<"\n";
                    }
                    else if(end_size == 4)
                    {
                        cout<<(900)<<"\n";
                    }
                    else if(end_size == 5)
                    {
                        cout<<(9000)<<"\n";
                    }
                    else if(end_size == 6)
                    {
                        cout<<(90000)<<"\n";
                    }
                    else
                    {
                        cout<<(900000)<<"\n";
                    }
                }
                else
                {
                    // sab ka nikal le manually 
                    if(r - l <= 100)
                    {
                        sort(all(start));
                        int max_luck = start[start_size-1] - start[0];
                        int ans = l;
                        for(int i=l+1;i<=r;i++)
                        {
                            string temp = to_string(i);
                            sort(all(temp));
                            int sizze = temp.size();
                            int value = temp[sizze-1] - temp[0];
                            if(value > max_luck)
                            {
                                max_luck = value;
                                ans = i;
                            }
                        }
                        cout<<ans<<"\n";
                    }
                    else
                    {
                        sort(all(start));
                        int max_luck = start[start_size-1] - start[0];
                        int ans = l;
                        for(int i=l+1;i<=l+100;i++)
                        {
                            string temp = to_string(i);
                            sort(all(temp));
                            int sizze = temp.size();
                            int value = temp[sizze-1] - temp[0];
                            if(value > max_luck)
                            {
                                max_luck = value;
                                ans = i;
                            }
                        }
                        cout<<ans<<"\n";
                    }
                }
            }
        }
    }
    return 0;
}
