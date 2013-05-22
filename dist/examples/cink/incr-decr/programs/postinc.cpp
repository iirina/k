/*
  This example exhibits different uses of the prefixed increment operator.
*/
#include <iostream>
using namespace std;

int main() {
  int x = 1,y, z;
  y = x++;
  cout << "y = " << y << endl;
  z = (x++) + x + (y++);
  cout << "x = " << x << endl;
  cout << "y = " << y << endl;
  cout << "z = " << z << endl;
  return 0;
} 
