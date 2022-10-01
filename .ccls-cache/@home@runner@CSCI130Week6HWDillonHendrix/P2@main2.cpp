/*****************************************
  Programmer: Dillon Hendrix
  Discription: Exercise 3 in 6.2 Function work
  Date: 9/27/22
*****************************************/

#include <cmath>
#include <iostream>

using namespace std;

int main() {

  // Function 1
  void check(int a, double b, double c);

  /***** Function 2 *****/
  // Initializing variables
  double x = 0;
  // Initialize Function
  // double getXvalue(double x);
  double MyAbs(double x);

  // Prompt user to get x input
  // x = getXvalue(x);

  // Calculate abs of x
  // MyAbs(x);

  /**********  Function 3 *********/
  // 2 floating numbers that multiply by each other to and returns the results
  // Initialize variable
  float d = 0;
  float e = 0;
  double answer;

  // Initialize function
  float mult(float d, float e);

  /********** Function 4 **********/
  // Returns a square of the integer value input
  int y = 0;

  int sqrIt(int y);
}
/************ Function 2 *****************/
// Function to get x value
double getXvalue(double X) {
  cout << "Input x value to convert: ";
  cin >> x;
  return x;
}

// Function to convert x value
double MyAbs(double x) {
  if (x < 0)
    x = -x;
  cout << endl << "The values have been converted. " << endl;
  cout << "x = " << x << endl;

  return x;
}

// Function to display new x value
void displayX(double x) { cout << "x = " << x << endl; }
/*********** Function 3 **************/
double answer;
float mult(float d, float e) {
  answer = d * e;
  cout << answer << endl;
}

/************ Function ************/
int sqrIt(int y) {
  y = pow(y, 2);
  cout << y << endl;
}
