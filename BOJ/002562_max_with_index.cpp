#include <iostream> 
using namespace std;
int main(void){
  int init_index=1;
  int max_val=-1;
  int new_num=1;
  for(int i=0;i<9;i++){
    cin>>new_num;
    if(new_num>max_val){
      init_index=i+1;
      max_val=new_num;
    }
  }
  cout<<max_val<<"\n";
  cout<<init_index<<"\n";
  return 0;
}
