
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

bool conflict(int a,int b,int c, int d)
{
    if(c<b) return false;
}

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
        int n;sn(n)
        vector< pair <pair<int,int>,pair<int,char>> > v(n); 

        fo(i,0,n)
        {
            sn(v[i].first.first)
            sn(v[i].first.second)
            v[i].second.first=i;
        }
        sort(v.begin(), v.end());
        // fo(i,0,n)
        // {
        //     pwel(v[i].first.first << " "<<v[i].first.second<< " "<<v[i].second)
        //     // pwel(v[i].first.second)
        //     // pwel(v[i].second)
        // }

        // if(conflict(v[0].first.first,v[0].first.second,v[1].first.first,v[1].first.second))
            // {
                v[0].second.second='C';
                v[1].second.second='J';
            // }


            int cc=1,jj=1;
            bool flag=false,possi=true;
        fo(i,2,n)
        {
            if(cc>jj)
                v[i].second.second = 'J';
            else
                v[i].second.second = 'C';
            for(int j=i-1;j>=0;j--)
            {
                
                if(conflict(v[i].first.first,v[i].first.second,v[j].first.first,v[j].first.second) && flag==false)
                {
                        flag=true;
                        v[i].second.second = biju(v[j].second.second);
                        if(v[i].second.second=='C')
                            cc++;
                        else
                            jj++;       
                 

                }
                 if(conflict(v[i].first.first,v[i].first.second,v[j].first.first,v[j].first.second) && flag==true)
                 {
                     possi  = false;
                 }
                
                
            }
        }


        if(possi == false)
            {pwel("Case #"<<(i+1)<<": IMPOSSIBLE")   continue;   }    

     
        sort(v.begin(), v.end(), sortbysec);
        // fo(i,0,n)
        // {
        //     pwel(v[i].first.first << " "<<v[i].first.second<< " "<<v[i].second)
        //     // pwel(v[i].first.second)
        //     // pwel(v[i].second)
        // }



        


        cout<<"Case #"<<(i+1)<<": ";
        fo(j,0,n)
        {
            cout<<v[i].second.second;
        }        
        cout<<'\n';
    }

}
