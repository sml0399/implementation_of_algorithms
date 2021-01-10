#include <iostream>
using namespace std;
int main(void){
  int hour=0,minute=0;
  cin>>hour>>minute;
  minute-=45;
  if(minute<0){minute+=60;hour-=1;}
  if(hour<0){hour+=24;}
  cout<<hour<<" "<<minute<<endl;
  return 0;
}
