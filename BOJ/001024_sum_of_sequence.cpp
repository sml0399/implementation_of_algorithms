#include <iostream>
using namespace std;
int main(void){
  double target_sum=0;
  cin>>target_sum;
  double length_of_sequence=0;
  cin>>length_of_sequence;
  double result=0;
  while(1){
    result=2*target_sum/length_of_sequence+1-length_of_sequence;
    result/=2;
    if(result==int(result)) break;
    else length_of_sequence+=1;
    if(length_of_sequence>100) break;
  }
  if(length_of_sequence>100){ cout<<-1<<endl;return 0;}
  if(result<0){cout<<-1<<endl;return 0;}
  for(int i=0;i<length_of_sequence;i++){
    cout<<(i+int(result))<<" ";

  }
  cout<<endl;
  return 0;
}
