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
 
bool is_prime(int n)
{
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n % i == 0)
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
        string s;
        cin>>s;
        int n = s.size();
        int number = stoi(s);
        if(is_prime(number))
        {
            cout<<number<<"\n";
        }
        else 
        {
            // kuch operations krke hoga kya kuch 
            unordered_set<int>us;
            for(int i=11;i<=99;i++)
            {
                bool check = true;
                for(int j=2;j<=sqrt(i);j++)
                {
                    if(i % j == 0)
                    {
                        check = false;
                        break;
                    }
                }
                if(check)
                {
                    us.insert(i);
                }
            }
            // debug(us);
            bool final_check = false;
            for(int i=0;i<=7;i++)
            {
                bool main_check = false;
                for(int j=i+1;j<=8;j++)
                {
                    bool check = false;
                    string number = "";
                    number.pb(s[i]);
                    number.pb(s[j]);
                    int two_digit_formed = stoi(number);
                    if(us.find(two_digit_formed) != us.end())
                    {
                        cout<<number<<"\n";
                        check = true;
                        main_check = true;
                        break;
                    }
                }
                if(main_check)
                {
                    final_check = true;
                    break;
                }
            }
            if(final_check == false)
            {
                cout<<(-1)<<"\n";
            }
        }
    }
    return 0;
}