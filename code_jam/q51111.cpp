
#include <iostream>
#include <fstream>
#include <algorithm>
#include <list>
#include <set>
#include <unordered_set>
#include <vector>
#include <string>
#include <map>
#include <stack>
#include <queue>

#include <stdexcept>
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <climits>
#include <cstring>
#include <cmath>
// #include <windows.h>  // Sleep()

// #include <bits/stdc++.h>

#define XLR8 ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define MOD 1000000007
#define PI   3.141592653589
#define int long long
#define INF LLONG_MAX
#define NINF LLONG_MIN
#define INT_SIZE sizeof(long long) * 8
#define fo(i, a, b) for(int i=a;i<b;i++)
#define rfo(i, a, b) for(int i=a;i>=b;i--)
#define GCD(a, b) __gcd(a,b)
#define sn(n) cin >> n;
#define endl '\n'
#define pwel(n) cout << n << endl;
#define vi vector<int>
#define vi2d vector<vector<int>>
#define v2d(n,m) (n,vector<int>(m));       // vi2d v v2d(n,m)
#define vpii vector<pair<long long, long long> >
#define mii map<long long, long long>
#define pii pair<long long, long long>
#define si set<long long>
#define qi queue<long long>
#define pb push_back
#define pf push_front
#define FOR_EACH_TESTCASE int t;sn(t);while(t--)
#define TESTCASES 1

using namespace std;



bool sortbysec(const pair <pair<int,int>,pair<int,char>> &a, 
              const pair <pair<int,int>,pair<int,char>> &b) 
{ 
    return (a.second.first < b.second.first); 
} 

char biju(char a)
{
    if(a=='C') return 'J';
    else return 'C';
}

signed main()
{
    int t;sn(t)
    fo(i,0,t)
    {
        int n,k;sn(n)sn(k)
        vi2d v v2d(n,n);
       
        {
            // pwel("Case #"<<(i+1)<<": POSSIBLE") 
            int m = (k/n);
            
            int a=1,b=2,c=3,d=4,e=5;
            if(m==2)   {a=2;b=1;}
            else if(m==3)   {a=3;c=1;}
            else if(m==4)   {a=4;d=1;}
            else if(m==5)   {a=5;e=1;}
            
            if(n==2)
            {
                cout<<a<<" "<<b<<'\n';
                cout<<b<<" "<<a<<'\n';
            }
            else if(n==3)
            {
                cout<<a<<" "<<b<<" "<<c<<'\n';
                cout<<c<<" "<<a<<" "<<b<<'\n';
                cout<<b<<" "<<c<<" "<<a<<'\n';
            }
            else if(n==4)
            {
                cout<<a<<" "<<b<<" "<<c<<" "<<d<<'\n';
                cout<<b<<" "<<a<<" "<<d<<" "<<c<<'\n';
                cout<<c<<" "<<d<<" "<<a<<" "<<b<<'\n';
                cout<<d<<" "<<c<<" "<<b<<" "<<a<<'\n';
            }
            else if(n==5)
            {
                cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<'\n';
                cout<<c<<" "<<a<<" "<<e<<" "<<b<<" "<<d<<'\n';
                cout<<b<<" "<<d<<" "<<a<<" "<<e<<" "<<c<<'\n';
                cout<<e<<" "<<c<<" "<<d<<" "<<a<<" "<<b<<'\n';
                cout<<d<<" "<<e<<" "<<b<<" "<<c<<" "<<a<<'\n';
            }

            
        }
        
    }

}
