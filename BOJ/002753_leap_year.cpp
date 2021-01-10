#include <iostream>
using namespace std;
int main(void){
  int year=0;
  int result=-1;
  cin>>year;
  
  result=((year%4==0)&&(year%100!=0))?1:0;
  result=(((year%400==0)&&(result==0))||(result==1))?1:0;
  cout<<result<<endl;
  return 0;
}
