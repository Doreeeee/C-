#include <iostream>

using namespace std;

void SwapNumber(varA, varB);

cout<< "swap before" <<endl;
cout<< "swap after" <<endl;


int temp = varA;
varA = varB;
varB = temp;

int main() {
  int varA = 20;
  int varB = 50;
  swap(varA, varB);
  cout << " varA is: "<< varA <<endl;

  << cout" varB is : "<< varB<< endl;
  return 0;
}
