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
 
bool is_prime(int a)
{
    for(int i=2;i<=sqrt(a);i++)
    {
        if(a % i == 0)
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
            if(l < 4)
            {
                cout<<(-1);
            }
            else 
            {
                if(l & 1)
                {
                    // odd hai dono toh 
                    // 5,5 
                    if(is_prime(l))
                    {
                        cout<<(-1);
                    }
                    else 
                    {
                        int first_divisor = 0;
                        for(int i=3;i<=sqrt(l);i++)
                        {
                            if(l % i == 0)
                            {
                                first_divisor = i;
                                break;
                            }
                        }
                        cout<<(first_divisor)<<" "<<(l - first_divisor);
                    }
                }
                else 
                {
                    cout<<(2)<<" "<<(l-2);
                }
            }
        }
        else 
        {
            if(r < 4)
            {
                cout<<(-1);
            }
            else
            {
                // r is 4 or more 
                if(r & 1)
                {
                    cout<<(2)<<" "<<(r-3); 
                }
                else 
                {
                    // r is even 
                    cout<<(2)<<" "<<(r-2);
                }
            }
        }
        cout<<"\n";
    }
    return 0;
}
