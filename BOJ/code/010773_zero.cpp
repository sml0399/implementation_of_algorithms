#include <iostream>
#include <stack>
using namespace std;
int main(void){
  int count_inputs=0,number=0;
  stack<int> inputs;
  cin>>count_inputs;
  for(int i=0;i<count_inputs;i++){
    cin>>number;
    if(number>0)
      inputs.push(number);
    else
      inputs.pop();
  }
  int sum=0;
  while(inputs.empty()==false){
    sum+=inputs.top();
    inputs.pop();
  }
  cout<<sum<<endl;
}
