#include <iostream>
using namespace std;

//**********************   using reference ...!!!  *************************

void Increment(int& value)
{
    value++;
}

int main()
{
    int a=11;
    int& ref = a;
    cout << a << endl;

    ref = 2;
    cout << a << endl;

    Increment(a);
    cout << a << endl;


}

//**********************   using pointer ...!!!  *************************

// void Increment(int* value)
// {
//     (*value)++;
// }

// int main()
// {
//     int a=11;
//     int& ref = a;
//     cout << a << endl;

//     ref = 2;
//     cout << a << endl;

//     Increment(&a);
//     cout << a << endl;


// }