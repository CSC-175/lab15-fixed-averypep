#include <iostream>
using namespace std;
/*******************************************************************
* getInfo *
* Gets and validates lottery info from the user and places it in   *
* reference parameters referencing variables in the main function. *
*******************************************************************/
void getInfo(int & pickFrom, int & numPicks){

}

/******************************************************************
* computeWays                                                     *
* Computes and returns the number of different possible sets      *
* of k numbers that can be chosen from a set of n numbers.        *
* The formula for this is     k!(n- k)!                           *
*                             --------                            *
*                                 n!                              *
*******************************************************************/
// Note that the computation is done in a way that does not require
// multiplying two factorials together. This is done to prevent any
// intermediate result becoming so large that it causes overflow.
double computeWays(int n, int k){
    
}

// This function computes factorials recursively. It is called by computeWays.
double factorial(int n){

int main(){
  int pickFrom, numPicks;
  getInfot(pickFrom, numPicks);
  double ways = computeWays(pickFrom, numPicks);
  cout << "Number of possible combinations: " << ways << endl;
  return 0;
}
void getInfo(int & pickFrom, int & numPicks){
  cout << "Enter the total of numbers to pick from: ";
  cin >> pickFrom;
  cout << "Enter the number of numbers to pick: ";
  cin >> numPicks;
}
double computeWays(int n, int k){
  double ways = factorial(n) / (factorial(k) * factorial(n - k));
  return ways;
}
double factorial(int n){
  if (n == 0){
    return 1;
  }
  else{
    return n * factorial(n - 1);
  }
}
}
