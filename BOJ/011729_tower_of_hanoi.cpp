#include <iostream>
#include <cmath>
using namespace std;
void moving(int num_rings,int source, int dest){
  if(num_rings>1)
    moving(num_rings-1,source,6-source-dest);
  cout<<source<<" "<<dest<<'\n';
  if(num_rings>1)
    moving(num_rings-1,6-source-dest,dest);
}
int main(void){
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  int num_rings=0;
  cin>>num_rings;
  cout<<((int)pow(2,num_rings)-1)<<'\n';
  moving(num_rings,1,3);
  return 0;
}
