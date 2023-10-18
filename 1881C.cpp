/* shivam */
 
// Codeforces Round 903 (Div. 3)
// 1881 B - Perfect Square
 
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
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<char>>v(n,vector<char>(n,'.'));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>v[i][j];
            }
        }
        // pehle matrix ko 90 degree rotate krde 
        vector<vector<char>>rotated(n,vector<char>(n,'.'));
        int ans = 0;
        int i,j,k,l;
        for(i=0,k=0;i<n && k<n;i++,k++)
        {
            for(j=0,l=n-1;j<n && l>=0;j++,l--)
            {
                if(v[i][j] != v[l][k])
                {
                    if(v[i][j] < v[l][k])
                    {
                        ans += (v[l][k] - v[i][j]);
                        v[i][j] = v[l][k];
                    }
                    else 
                    {
                        ans += (v[i][j] - v[l][k]);
                        v[l][k] = v[i][j];
                    }
                }
            }
        }
        for(i=0,k=0;i<n && k<n;i++,k++)
        {
            for(j=0,l=n-1;j<n && l>=0;j++,l--)
            {
                if(v[i][j] != v[l][k])
                {
                    if(v[i][j] < v[l][k])
                    {
                        ans += (v[l][k] - v[i][j]);
                        v[i][j] = v[l][k];
                    }
                    else 
                    {
                        ans += (v[i][j] - v[l][k]);
                        v[l][k] = v[i][j];
                    }
                }
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}
