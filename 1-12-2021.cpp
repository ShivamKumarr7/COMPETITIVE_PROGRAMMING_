// Q1) 703A   Mishka and Game :-


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
    int mis = 0;
    int chr = 0;
    while(n--)
    {
        int temp1,temp2;
        cin>>temp1>>temp2;
        if(temp1 > temp2)
        {
            mis++;
        }
        else if(temp2 > temp1)
        {
            chr++;
        }
    }
    if(mis > chr)
    {
        cout<<"Mishka";
    }
    else if(chr > mis)
    {
        cout<<"Chris";
    }
    else
    {
        cout<<"Friendship is magic!^^";
    }
    return 0;
}
*/



// Q2) 1399B  Gifts Fixing 



// need to solve this 


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
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>candy(n,0);
        vector<int>oranges(n,0);
        for(int i=0;i<n;i++)
        {
            cin>>candy[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>oranges[i];
        }
        sort(candy.begin(),candy.end());
        sort(oranges.begin(),oranges.end());
        // i will make a pointer to the last element of candy array and name it as 'i';
        // i will make a pointer to the last element of oranges array and name it as 'j'.
        int i = n-1;
        int j = n-1;
        int mini1 = candy[0];
        int mini2 = oranges[0];
        int ct = 0;
        while((i != 0) && (j != 0))
        {
            if(candy[i] > mini1 && oranges[j] > mini2)
            {
                ct++;
                candy[i] = candy[i] - 1;
                oranges[j] = oranges[j] - 1;
            }
            else if(candy[i] > mini1 && oranges[j] <= mini2)
            {
                ct++;
                candy[i] = candy[i] - 1;
                j--;
            }
            else if(candy[i] <= mini1 && oranges[j] > mini2)
            {
                ct++;
                oranges[j] = oranges[j] - 1;
                i--;
            }
        }
        while(i)
        {
            if(candy[i] > mini1)
            {
                ct++;
                candy[i] = candy[i] - 1;
            }
            else if(candy[i] <= mini1)
            {
                i--;
            }
        }
        while(j)
        {
            if(oranges[j] > mini2)
            {
                ct++;
                oranges[j] = oranges[j] - 1;
            }
            else if(oranges[j] <= mini2)
            {
                j--;
            }
        }
        cout<<ct<<"\n";
    }
    return 0;
}
*/

