#include <iostream>
#include <cmath>
using namespace std;

double finddistance(double u,double a,double t){
  double s = u*t + 0.5*a*pow(t,2);
  return s;
}
int main(){
  double distance1 = finddistance(0,0.5,1);
  cout << "s1 = " << distance1 << endl;
  double distance2 = finddistance(1.5,-1,2);
  cout << "s2 = " << distance2 << endl;
  double distance3 = finddistance(5,4,3);
  cout << "s3 = " << distance3 << endl;
  return 0;
}
