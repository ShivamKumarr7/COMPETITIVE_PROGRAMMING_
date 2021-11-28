// Q) 758A  Holiday of Equality


/*
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
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
    vector<int>s(n,0);
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    long long res = 0;
    sort(s.begin(),s.end());
    for(int i=0;i<n;i++)
    {
        res += (s[n-1] - s[i]);
    }
    cout<<res;
    return 0;
}
*/



// Q) 490A  TEAM OLYMPIAD


/*
#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define pb push_back
#define mp make_pair
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
    int prog = 0;
    int maths = 0;
    int pe = 0;
    vector<int>arr_prog;
    vector<int>arr_maths;
    vector<int>arr_pe;
    int ct = 1;
    while(n--)
    {
        int temp;
        cin>>temp;
        if(temp == 1)
        {
            prog++;
            arr_prog.pb(ct);
        }
        else if(temp == 2)
        {
            maths++;
            arr_maths.pb(ct);
        }
        else
        {
            pe++;
            arr_pe.pb(ct);
        }
        ct++;
    }
    int w = min({prog,maths,pe});
    if(w == 0)
    {
        cout<<0;
    }
    else
    {
        cout<<w<<"\n";
        int lol = 0;
        while(w--)
        {
            cout<<arr_prog[lol]<<" "<<arr_maths[lol]<<" "<<arr_pe[lol]<<"\n";
            lol++;
        }
    }
    return 0;
}
*/

