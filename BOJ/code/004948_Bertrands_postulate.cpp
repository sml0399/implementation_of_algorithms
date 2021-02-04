#include <iostream>
#include <vector>
using namespace std;
int main(void){
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  int max_index=123456*2;
  vector<bool> is_prime (max_index+1,true);
  is_prime[0]=false;
  is_prime[1]=false;
  for(int i=2;i<=max_index;i++){
    if(is_prime[i]){
      for(int j=2*i;j<=max_index;j+=i){
	is_prime[j]=false;
      }
    }
  }
  while(1){
    int target=0;
    cin>>target;
    if(target==0)
      break;
    int counter=0;
    for(int i=(target+1);i<=(2*target);i++){
      if(is_prime[i])
	counter++;
    }
    cout<<counter<<"\n";
  }

  return 0;
}
