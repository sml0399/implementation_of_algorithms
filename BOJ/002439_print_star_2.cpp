#include <iostream>
using namespace std;
int main(void){
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  int N=0;
  cin>>N;
  for(int i=1;i<(N+1);i++){
    for(int j=0;j<(N-i);j++){
      cout<<" ";
    }
    for(int j=0;j<i;j++){
      cout<<"*";
    }
    cout<<"\n";
  }
  return 0;


}
