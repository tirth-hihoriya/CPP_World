#include <iostream>
#include <fstream>
#include <chrono>
#include <set>
#include <algorithm>

using std::cout;
using std::cin;
using std::endl;
using std::chrono::high_resolution_clock;
using std::chrono::nanoseconds;
using std::chrono::duration_cast;

using namespace std;

int main()
{
    auto start = high_resolution_clock::now();
   
    int t=1;;while(t--)
    {
     int a=3,b=67,c=78;
       
        int  x = max(max(a,b),c);
        int z = min(min(a,b),c);
        int y = (a+b+c)-(x+z);

        if(a==b && a==c) { cout << 0 << endl; continue;}
        if(z!=y) z++;
        else {z++; y++;}
        if(x==y && x==z) { cout << 0 << endl; continue;}
        if(x!=y) x--; 
        else {x--; y--;}

        cout << (x-y)+(x-z)+(y-z) << endl;
    }

    auto end = high_resolution_clock::now();
    cout << duration_cast<nanoseconds>(end - start).count() << " in nanosec" << endl;
}

//  *******************************  Template  *******************************

// #include <iostream>
// #include <chrono>

// using std::cout;
// using std::cin;
// using std::endl;
// using std::chrono::high_resolution_clock;
// using std::chrono::milliseconds;
// using std::chrono::duration_cast;

// int main()
// {
//     auto start = high_resolution_clock::now()
//     /* Program */
//     auto end = high_resolution_clock::now();
//     cout << duration_cast<milliseconds>(end - start).count() << endl;
// }