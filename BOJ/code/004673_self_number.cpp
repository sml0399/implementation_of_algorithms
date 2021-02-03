#include <iostream>
#include <vector>
using namespace std;
int sum_of_component(int number){
  int sum=0;
  while(number>=10){
    sum+=number%10;
    number/=10;
  }
  sum+=number;
  return sum;
}

int main(void){
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  vector<bool> is_self_number (10001,true);
  for(int i=1;i<10001;i++){
    if(is_self_number[i]){
      int handling_number=i;
      while(1){
	handling_number+=sum_of_component(handling_number);
	if(is_self_number[handling_number]==false)
	  break;
	if(handling_number>=10001)
	  break;
	is_self_number[handling_number]=false;
      }
      
    }
  }
  for(int i=1;i<10001;i++){
    if(is_self_number[i])
      cout<<i<<"\n";
      }
  return 0;
}
