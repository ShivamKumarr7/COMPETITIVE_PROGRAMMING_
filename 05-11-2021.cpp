// Q1) 228A   Is your horseshoe on the other hoof? 


/*
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mp make_pair
#define pb push_back
#define mod 1000000007
#define pi 3.1415
#define setbits(x) __builtin_popcount(x)
#define zerobits1(x) __builtin_clz(x)
#define zerobits2(x) __builtin_ctz(x)
const int Max = 100005;
const int BMax = 10000005;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int ans = 4;
    set<int>s;
    s.insert(a);
    s.insert(b);
    s.insert(c);
    s.insert(d);
    cout<<(ans - s.size());
    return 0;
}
*/



// Q2) 469A   I Wanna Be The Guy 


/*
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mp make_pair
#define pb push_back
#define mod 1000000007
#define pi 3.1415
#define setbits(x) __builtin_popcount(x)
#define zerobits1(x) __builtin_clz(x)
#define zerobits2(x) __builtin_ctz(x)
const int Max = 100005;
const int BMax = 10000005;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<bool>s(n+1,0);
    int p;
    cin>>p;
    while(p--)
    {
        int temp;
        cin>>temp;
        s[temp] = true;
    }
    int q;
    cin>>q;
    while(q--)
    {
        int temp;
        cin>>temp;
        s[temp] = true;
    }
    bool check = true;
    for(int i=1;i<=n;i++)
    {
        if(s[i] == false)
        {
            check = false;
            cout<<"Oh, my keyboard!";
            break;
        }
    }
    if(check == true)
    {
        cout<<"I become the guy.";
    }
    return 0;
}
*/

