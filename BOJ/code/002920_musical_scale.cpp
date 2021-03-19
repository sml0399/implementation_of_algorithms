#include <iostream>
using namespace std;
int main(void){
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  int in_num=0,i;
  cin>>in_num;
  if(in_num==1){
    for(i=2;i<9;i++){
      cin>>in_num;
      if(in_num==i)
	continue;
      cout<<"mixed\n";
      return 0;
    }
    cout<<"ascending\n";
  }else if(in_num==8){
    for(i=7;i>0;i--){
      cin>>in_num;
      if(in_num==i)
	continue;
      cout<<"mixed\n";
      return 0;
    }
    cout<<"descending\n";

  }else{
    cout<<"mixed\n";
  }

  return 0;
}
