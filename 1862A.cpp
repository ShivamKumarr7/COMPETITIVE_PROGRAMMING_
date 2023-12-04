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
        int n,m;
        cin>>n>>m;
        vector<vector<char>>carpet(n,vector<char>(m,'.'));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>carpet[i][j];
            }
        }
        // debug(carpet);
        vector<int>v_occurences;
        vector<int>i_occurences;
        vector<int>k_occurences;
        vector<int>a_occurences;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(carpet[i][j] == 'v')
                {
                    v_occurences.pb(j);
                }
                if(carpet[i][j] == 'i')
                {
                    i_occurences.pb(j);
                }
                if(carpet[i][j] == 'k')
                {
                    k_occurences.pb(j);
                }
                if(carpet[i][j] == 'a')
                {
                    a_occurences.pb(j);
                }
            }
        }
        if(v_occurences.size() == 0 || i_occurences.size() == 0 || k_occurences.size() == 0 || a_occurences.size() == 0)
        {
            cout<<"NO\n";
        }
        else 
        {
            // abb order me hoga toh like "vika"  
            sort(all(v_occurences));
            sort(all(i_occurences));
            sort(all(k_occurences));
            sort(all(a_occurences));
            // debug(v_occurences);
            // debug(i_occurences);
            // debug(k_occurences);
            // debug(a_occurences);
            int start = v_occurences[0];
            // debug(start);
            bool check = false;
            for(int i=0;i<i_occurences.size();i++)
            {
                if(i_occurences[i] > start)
                {
                    start = i_occurences[i];
                    check = true; 
                    break;
                }
            }
            if(check == false)
            {
                cout<<"NO\n";
            }
            else 
            {
                bool temp = false;
                for(int i=0;i<k_occurences.size();i++)
                {
                    if(k_occurences[i] > start)
                    {
                        start = k_occurences[i];
                        temp = true;
                        break;
                    }
                }
                check = temp;
                if(check == false)
                {
                    cout<<"NO\n";
                }
                else
                {
                    bool temp = false;
                    for(int i=0;i<a_occurences.size();i++)
                    {
                        if(a_occurences[i] > start)
                        {
                            start = a_occurences[i];
                            temp = true;
                            break;
                        }
                    }
                    check = temp;
                    if(check == false)
                    {
                        cout<<"NO\n";
                    }
                    else 
                    {
                        cout<<"YES\n";
                    }
                }
            }
        }
    }
    return 0;
}
