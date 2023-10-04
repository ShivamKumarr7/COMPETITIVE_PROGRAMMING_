/* shivam */
 
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
#define MOD 1000000007
#define all(x) (x).begin(), (x).end()
 
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
 
int main() 
{
    fastio();
    ll no_of_elements = 200002;
    vector<ll>v(no_of_elements,0);
    for(int i=0;i<200002;i++)
    {
        v[i] = i;
    }
    vector<ll>forward_prefix(no_of_elements,0);
    forward_prefix[0] = 0;
    for(int i=1;i<200002;i++)
    {
        forward_prefix[i] = forward_prefix[i-1] + v[i];
    }
    // debug(v)
    // debug(forward_prefix)
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k,x;
        cin>>n>>k>>x;
        if(x > forward_prefix[n])
        {
            cout<<"NO\n";
        }
        else 
        {
            // 1 <= x <= forward_prefix[n] 
            if(x >= forward_prefix[k] && x <= (forward_prefix[n] - forward_prefix[n-k]))
            {
                cout<<"YES\n";
            }
            else 
            {
                cout<<"NO\n";
            }
        }
    }
    return 0;
}
