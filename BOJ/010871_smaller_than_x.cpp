#include <iostream>
#include <vector>
using namespace std;
int main(void){
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  int num_of_inputs=0, x=0;
  cin>>num_of_inputs>>x;
  for(int i=0;i<num_of_inputs;i++){
    int temp=0;
    cin>>temp;
    if(temp<x) {
      cout<<temp;
      if(i!=(num_of_inputs-1)) cout<<" ";
    }
  }
  cout<<"\n";
  return 0;
}
