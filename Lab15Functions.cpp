#include <iostream>
using namespace std;

void getInfo(int & pickFrom, int & numPicks);
double computeWays(int n, int k);
double factorial(int n);

void getInfo(int & pickFrom, int & numPicks){
  cout << "How many balls (1-12) are in the pool to pick from? ";
  cin >> pickFrom;
  cout << "How many balls (1-7) will be drawn? ";
  cin >> numPicks;
  while (numPicks > pickFrom){
    cout << "Input Error!";
    cout << "\nHow many balls (1-7) will be drawn? ";
    cin >> numPicks;
  }
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
int main(){
  int pickFrom, numPicks;
  getInfo(pickFrom, numPicks);
  double ways = computeWays(pickFrom, numPicks);
  return 0;
}
