#include <bits/stdc++.h>
#define fast 			ios::sync_with_stdio(0); cin.tie(NULL);cout.tie(NULL)
#define sz(x)			(int)((x).size())
#define pb				push_back
#define vi				vector<int>
#define vb				vector<bool>
#define vvb				vector<vb>
#define pi				pair<int,int>
#define vpi				vector<pi>
#define vvi				vector<vi>
#define vc				vector<char>
#define all(x)			x.begin(), x.end()
#define rall(x)			x.rbegin(), x.rend()
#define pbb()			pop_back()
#define f				first
#define s				second
#define ll				long long
#define int				long long
#define ull				unsigned long long
#define forr(i, a, b)	for(int i=a; i<b; i++)
#define hash                cout<<"################"<<endl;

const int N=100000+1, mod=1e9 + 9, inf=1e27+1;
using namespace std;
//vi dx= { 0, 1, 0 , -1} , dy= {-1,0, 1, 0};
bool comp(int& a, int& b)
{
    return a>b;
}
void task()
{
    int n;
    cin>>n;
    vvi b(n+1);
    forr(i, 0, n)
    {
        int t1, t2;
        cin>>t1>>t2;
        b[t1].pb(t2);
    }
    int rem=0, ans=0;
    forr(i, 1, n+1) if(sz(b[i])!=0)
    {
        sort(all(b[i]), comp);
        int can_add= i;
        forr(j, 0, min(can_add, sz(b[i])) ) ans+=b[i][j];
        rem= max(0ll, can_add-sz(b[i]));
    }
    cout<<ans<<endl;
}

signed main()
{
    fast;
    int t;
    t=1;
     cin>>t;
    while(t--) task();
}
