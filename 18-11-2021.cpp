// Q1) 996A  HIT THE LOTTERY 


// I wrote a recursive solution for this problem...but its time complexity is O(5^n) which is really large...and wont work for
// numbers greater than 30 ig.

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
int help(int n)
{
    if(n < 0)
    {
        return INT_MAX-20000;
    }
    if(n == 0)
    {
        return 0;
    }
    int a = 1 + help(n-100);
    int b = 1 + help(n-20);
    int c = 1 + help(n-10);
    int d = 1 + help(n-5);
    int e = 1 + help(n-1);
    return min({a,b,c,d,e});
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    cout<<help(n);
    return 0;
}
*/


// So we will have to write a bottom up dp solution so that it can handle numbers upto 10^9.





// Q2) 141A   AMUSING JOKE 


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
    string guest,host,final;
    cin>>guest>>host>>final;
    int s1 = guest.size();
    int s2 = host.size();
    int s3 = final.size();
    if(s3 > (s1+s2))
    {
        cout<<"NO";
    }
    else if(s3 < (s1+s2))
    {
        cout<<"NO";
    }
    else
    {
        string add = guest + host;
        sort(add.begin(),add.end());
        sort(final.begin(),final.end());
        bool check = true;
        for(int i=0;i<add.size();i++)
        {
            if(add[i] != final[i])
            {
                check = false;
                cout<<"NO";
                break;
            }
        }
        if(check == true)
        {
            cout<<"YES";
        }
    }
    return 0;
}
*/
