#include <iostream>
#include <vector>
using namespace std;
int main(void){
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  int min_num,max_num;
  cin>>min_num>>max_num;
  vector<bool> is_prime (max_num+1,true);
  is_prime[0]=false;
  is_prime[1]=false;
  int i,j;
  for(i=2;i<=max_num;i++){
    if(is_prime[i]){
      for(j=2*i;j<=max_num;j+=i){
	is_prime[j]=false;
      }
    }
  }
  for(i=min_num;i<=max_num;i++){
    if(is_prime[i])
      cout<<i<<'\n';
  }

  return 0;
}
