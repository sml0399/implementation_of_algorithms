#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main(void){
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  int target_number=0;
  cin>>target_number;
  int prime=2;
  if(target_number<2)
    return 0;
  while(1){
    while(target_number%prime==0){
      cout<<prime<<"\n";
      target_number/=prime;
    }
    if(prime>(sqrt(target_number)+1))
      break;
    prime++;
  }
  if(target_number>1)
    cout<<target_number<<"\n";
  return 0;
}
