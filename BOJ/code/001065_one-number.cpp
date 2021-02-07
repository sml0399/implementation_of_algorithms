#include <iostream>
using namespace std;
bool is_one_number(int number){
  if(number>=1000)
    return false;
  if(number<100)
    return true;
  int digit[3]={-1,-1,-1};
  for(int i=0;i<3;i++){
    digit[i]=number%10;
    number/=10;
  }
  if((digit[0]+digit[2])==2*digit[1])
    return true;
  return false;
}

int main(void){
  int number,counter=0;
  cin>>number;
  for(int i=1;i<=number;i++){
    if(is_one_number(i))
      counter++;
  }
  cout<<counter<<endl;
  return 0;
}
