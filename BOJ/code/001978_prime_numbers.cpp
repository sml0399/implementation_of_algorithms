#include <iostream>
using namespace std;
int main(void){
  bool prime[1001];
  int num_inputs,new_input,counter=0;
  int i=0;
  int j=0;
  for(i=0;i<=1001;i++){
    prime[i]=true ;
  }
  for(i=2;i<=1001;i++){
    if(prime[i]==false){continue;}
    for(j=2*i;j<=1001;j+=i){
      prime[j]=false;
    }
  }
  prime[0]=false;
  prime[1]=false;
  cin>>num_inputs;
  for(i=0;i<num_inputs;i++){
    cin>>new_input;
    if(prime[new_input])
      counter++;
  }
  cout<<counter<<endl;
  return 0;
}
