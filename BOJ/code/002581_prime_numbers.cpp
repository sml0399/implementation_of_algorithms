#include <iostream>
#include <vector>
using namespace std;
int main(void){
  int min_num, max_num;
  cin>>min_num>>max_num;
  vector<bool> is_prime (max_num+1,true);
  is_prime[0]=false;
  is_prime[1]=false;
  for(int i=2;i<max_num+1;i++){
    if(is_prime[i]==false)
      continue;
    for(int j=2*i;j<=max_num;j+=i){
      is_prime[j]=false;
    }
  }
  int first_prime=0;
  int prime_sum=0;
  bool first_prime_found=false;
  for(int i=min_num;i<=max_num;i++){
    if(is_prime[i]==false)
      continue;
    if(first_prime_found==false){
      first_prime=i;
      first_prime_found=true;

    }
    prime_sum+=i;
  }
  if(first_prime_found==false){
    cout<<-1<<endl;
    return 0;
  }
  cout<<prime_sum<<endl<<first_prime<<endl;

  return 0;
}
