#include <iostream>     // std::cout  
#include <algorithm>    // std::next_permutation, std::sort  
  
using namespace std;  
  
int main () {  
  int myints[] = {0,1,2,3};  
  
  sort (myints,myints+3);  
  
  cout << "The 3! possible permutations with 3 elements:\n";  
  do {  
    cout << myints[0] << ' ' << myints[1] << ' ' << myints[2] << '\n';  
  } while ( next_permutation(myints,myints+4) );  
  
  cout << "After loop: " << myints[0] << ' ' << myints[1] << ' ' << myints[2] << '\n';  
  
  return 0;  
}  