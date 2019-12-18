#include <iostream>
#include <cstring> //memset()
using namespace std;

int main()
{
    char* buffer = new char[10];   // points to 1st byte of total 10 bytes
    memset(buffer,'t',10);   // memset(strat_ptr , value_to_set , no._of_bytes)

    cout << buffer << endl;

    char** ptr = buffer;  // double pointer (pointer to pointer)

    delete[] buffer;   //delete or free the memory
    cout << buffer << " <--- after deleting "<< endl;

}