
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


signed main()
{
    int t;sn(t)
    fo(i,0,t)
    {
        int n;sn(n)
        vector< pair <pair<int,int>,int >> v; 

        vector<pair<int,char>> r;

        bool possi = true;
        int conf = 0;

        fo(i,0,n)
        {
            int a,b;sn(a)sn(b)
            v.push_back(make_pair(make_pair(a,b),i));
        }
        sort(v.begin(), v.end());
     
        
        int cc=0,jj=0;
        
        char last='C';

        fo(i,0,n){

            if(v[i].first.first>=cc)  {r.push_back(make_pair(v[i].second,'C')); cc=v[i].first.second;}
            else if(v[i].first.first>=jj)  {r.push_back(make_pair(v[i].second,'J')); jj=v[i].first.second;}
            else {possi=false; break;}

        }



        if(possi == false)
            {pwel("Case #"<<(i+1)<<": IMPOSSIBLE")   }  
        else
        {
            sort(r.begin(),r.end());
            cout<<"Case #"<<(i+1)<<": ";
            fo(j,0,n)
            {
                cout<<r[j].second;
            }        
            cout<<'\n';
        }
        

        
    }

}
