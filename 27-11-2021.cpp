// Q)  723A   The New Year : Meeting Friends 


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
    vector<int>s(3,0);
    for(int i=0;i<3;i++)
    {
        cin>>s[i];
    }
    sort(s.begin(),s.end());
    int case1 = (s[1] - s[0]) + (s[2] - s[1]);
    int mid_value = (s[0] + s[2])/2;
    int case2 = abs(mid_value-s[0]) + abs(mid_value - s[1]) + abs(mid_value - s[2]);
    cout<<min(case1,case2);
    return 0;
}
*/



// Q)  432A  CHOOSING TEAMS 


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
    int n,k;
    cin>>n>>k;
    vector<int>s(n,0);
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    int ct = 0;
    for(int i=0;i<n;i++)
    {
        if(s[i] + k <= 5)
        {
            ct++;
        }
    }
    cout<<(ct / 3);
    return 0;
}
*/

