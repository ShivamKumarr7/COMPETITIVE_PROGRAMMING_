// Q1) 1520A   Not To Be Distracted 


/*
#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define pb push_back
#define mp make_pair
#define mod 1000000007
#define setbits(x) __builtin_popcount(x)
#define zerobits1(x) __builtin_clz(x)
#define zerobits2(x) __builtin_ctz(x)
const int Max = 100005;
const int BMax = 10000005;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        unordered_set<int>us;
        char firstu = s[0] - 'A';
        int firstuu = firstu;
        us.insert(firstuu);
        bool smartness = false;   // as of now not suspicious 
        for(int i=1;i<n;i++)
        {
            char temp = s[i] - 'A';
            int lol = temp;
            if(us.find(lol) != us.end())
            {
                if(s[i] == s[i-1])
                {
                    ;
                }
                else
                {
                    cout<<"NO\n";
                    smartness = true;
                    break;
                }
            }
            else
            {
                us.insert(lol);
            }
        }
        if(smartness == false)
        {
            cout<<"YES\n";
        }
    }
    return 0;
}
*/



// Q2) 1360B  Honest Coach



/*
#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define mp make_pair
#define pb push_back
#define setbits(x) __builtin_popcount(x)
#define zerobits1(x) __builtin_clz(x)
#define zerobits2(x) __builtin_ctz(x)
const int Max = 100005;
const int BMax = 10000005;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>s(n,0);
        for(int i=0;i<n;i++)
        {
            cin>>s[i];
        }
        sort(s.begin(),s.end());
        int ans = INT_MAX;
        for(int i=1;i<n;i++)
        {
            if((s[i] - s[i-1]) < ans)
            {
                ans = (s[i]-s[i-1]);
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}
*/


