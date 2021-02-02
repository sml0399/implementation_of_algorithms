#include <iostream>
#define PI           3.14159265358979323846
using namespace std;
int main(void){
  cout << fixed;
  cout.precision(6);
  double radius=0;
  cin>>radius;
  cout<<PI*radius*radius<<endl<<radius*radius*2<<endl;
  return 0;
}
