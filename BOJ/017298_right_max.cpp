#include <iostream>
#include <vector>
using namespace std;
int main(void){
  int lines,new_num;
  cin>>lines;
  vector<int> num={};
  vector<int> index={};
  int i=0;
  for(i=0;i<lines;i++){
    cin>>new_num;
    num.push_back(new_num);
    index.push_back(i+1);
  }
  num.push_back(-1);
  int max_index=0;
  for(i=(lines-1);i>=0;i--){
    max_index=index[i];
    while(1){
      if ((num[max_index]>num[i])||(num[max_index]==-1)){
	index[i]=max_index;
	break;
      }
      max_index=index[max_index];
    }
  }
  for(i=0;i<lines;i++){
    cout<<num[index[i]];
    if(i==(lines-1)){cout<<"\n";}
    else{cout<<" ";}
  }
  return 0;
}
