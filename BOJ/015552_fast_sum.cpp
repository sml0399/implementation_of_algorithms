#include <iostream>
using namespace std;
int main(void){
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  int lines=0;
  int a=0,b=0;
  cin>>lines;
  for(int i=0;i<lines;i++){
    cin>>a>>b;
    cout<<a+b<<"\n";
  }
  return 0;
}
