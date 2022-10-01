/*****************************************
  Programmer: Dillon Hendrix
  Discription: Exercise 7 in 6.2 manipulating factors to determine hydroelectric power. 
  Date: 9/27/22
*****************************************/

#include <iostream>
#include <cmath>

using namespace std;

  // Function declaration
  double getHvalue(double H);
  double getQvalue(double Q);
  double powerGen(double H, double Q);

int main() {

  // Initialize variables
  double H; // The distance the water falls in meter.
  double Q; // The volume flow rate in m^3/s.
  double P;
  const double p = 997; // The density of water in kg/m^3.
  const double g = 9.81; // The acceleration due to gravity in m/s^2

  // Prompt user to get inputs
  H = getHvalue(H);
  Q = getQvalue(Q);

  // Calculate power generated in watts
  P = powerGen(H, Q);
  
}

  double getHvalue(double H){
    cout << "Input the fall height (H): ";
    cin >> H;
    return H;
  }
  double getQvalue(double Q){
    cout << "Input the volume flow rate (Q): ";
    cin >> Q;
    return Q;
  }
  double powerGen(double H, double Q){
    P = p * q * H * g;
    cout << "The power generated in watts is " << P << endl;
    return P;
  }
  
  