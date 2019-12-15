#include <iostream>
#include <list>
#include <set>
#include <algorithm>
#include <vector>
#include <cmath>
#include <string>
// #include <climits>
#include <map>
#include <stack>
#include <queue>
// #include <bits/stdc++.h>
#define MOD 1000000007
#define int long long
#define inf LLONG_MAX
#define ninf LLONG_MIN
#define INT_SIZE sizeof(long long) * 8
#define yo(i, a, b) for(int i=a;i<b;i++)
using namespace std;

// template<typename T>
// void swap(T* a, T* b) {
//     T temp = *a;
//     *a = *b;
//     *b = temp;
// }

signed main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        // Scan n, k, d
        int n, k, d;
        cin >> n >> k >> d;

        // vector
        vector<int> v(n); // n = size of the vector...
        // vector = dynamic arrays
        // int arr[n] = {0,0,...,0};
        // vector is the first type of STL container
        // vector.push_back(i) -> O(1)
        // vector.push_front(i) -> O(1)
        // vector.emplace(i, pointer) -> esoteric and slow O(n)
        // vector.erase(i) -> O(n)
        // container -> container.begin() = pointer to the first element
        // container.begin() points at the first element.
        // container.end() points at the position one after the last element.
        // v = {1, 2, 3, 4, }
        //      |          |
        //   begin()     end()
        // memory.h
        // allocator<int> alloc;
        // alloc.allocate(8);
        // v = {0,0,0,...,0}
        // vector<int>::iterator
        // int* p = container.begin() x
        // containter<dtype>::iterator p = container.begin()
        // vector allows [] operator. -> not for all containers. there are ways to 
        // access elements differently in each container
        yo(i,0,n) cin >> v[i]; // [] is O(1) time
        set<int> s; // sorted, one elemtent can occur only once and if
        // we insert the same element twice, it doesn't do anything.
        // {1,2,3,4} -> s.insert(4) -> {1,2,3,4}
        // doesn't support [] operator.
        // set internally is implemented as Red Black Trees.
        // Read Black Trees are really close to AVl trees.
        // set.insert(i) -> O(log n)
        // set.erase(i)  -> O(log n)
        // set.find(i)   -> O(log n)
        // for each loop on set traveres the set 
        // according to inorder traversal.
        
    }
}
