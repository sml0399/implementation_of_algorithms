#include <iostream>
using namespace std;
int main(void){
  bool is_prime[10001];
  int i,j,in_num,count_case,target,current;
  for(i=2;i<=10000;i++){
    is_prime[i]=true;
  }
  is_prime[0]=false;
  is_prime[1]=false;
  for(i=2;i<=10000;i++){
    if(is_prime[i]){
      for(j=2*i;j<=10000;j+=i){
	is_prime[j]=false;	
      }
    }
  }
  cin>>count_case;
  for(i=0;i<count_case;i++){
    cin>>in_num;
    target=in_num;
    current=in_num/2;
    while(1){
      if((is_prime[current])&&(is_prime[target-current])){
	cout<<current<<" "<<(target-current)<<endl;
	break;
      }
      current-=1;
    }
  }
  return 0;
}
