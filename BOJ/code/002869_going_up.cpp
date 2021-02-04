#include <iostream>
using namespace std;
int main(void){
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  int a,b,h,step;
  cin>>a>>b>>h;
  step=(h-a)/(a-b)+1;
  if(((h-a)%(a-b))!=0)
    step+=1;
  cout<<step<<"\n";
  return 0;
}
