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
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,n;
        cin>>x>>y>>n;
        int max_array_size = y - x;
        if(n > max_array_size)
        {
            cout<<(-1)<<"\n";
        }
        else 
        {
            // array toh bann skta hai 
            vector<int>a(n,0);
            a[0] = x;
            a[n-1] = y;
            int start = 1;
            for(int i=n-1;i>1;i--)
            {
                a[i-1] = a[i] - start;
                start += 1;
            }
            bool check = true;
            for(int i=1;i<n;i++)
            {
                if(a[i] <= a[i-1])
                {
                    check = false;
                    break;
                }
            }
            if(check)
            {
                vector<int>b;
                for(int i=1;i<n;i++)
                {
                    b.push_back(a[i] - a[i-1]);
                }
                for(int i=0;i<b.size()-1;i++)
                {
                    if(b[i] <= b[i+1])
                    {
                        check = false;
                        break;
                    }
                }
                if(check)
                {
                    for(int i=0;i<n;i++)
                    {
                        cout<<a[i]<<" ";
                    }
                    cout<<"\n";
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
