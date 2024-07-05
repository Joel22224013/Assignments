
#include <iostream>
using namespace std;
#include <cmath>
#include <algorithm>

// function to return minimum value 
int minOfThree(int a, int b, int c) {
  return min({a, b, c});
}
//function to return maximum value 
int maxOfThree(int a, int b, int c) {
  return max({a, b, c});
}
// function to return the absolute value
int absValue(int num) {
  return abs(num);
}

int main() {
  int a, b, c;
  cout << "Enter three numbers: ";
  cin >> a >> b >> c;

  cout << "Minimum: " << minOfThree(a, b, c) << endl;
  cout << "Maximum: " << maxOfThree(a, b, c) << endl;
  cout << "Absolute value of " << a << ": " << absValue(a) << endl;
  return 0;
}