#include <iostream>
#define ll long long
using namespace std;
int main(void){
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  ll number=0;
  cin>>number;
  while(1){
    cout<<number;
    if(number==1)
      break;
    if((number%2)==0)
      number/=2;
    else{
      number*=3;
      number+=1;
    }
    cout<<" ";
  }
  return 0;
}
