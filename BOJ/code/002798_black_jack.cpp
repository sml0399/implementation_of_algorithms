#include <iostream>
#include <vector>
using namespace std;
int main(void){
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  int iter=0,target=0,in_num=0;
  cin>>iter>>target;
  vector<int> numbers={};
  for(int i=0;i<iter;i++){
    cin>>in_num;
    numbers.push_back(in_num);
  }
  int max_num=0,temp=0;
  for(int i=0;i<(numbers.size()-2);i++){
    for(int j=i+1;j<(numbers.size()-1);j++){
      for(int k=j+1;k<numbers.size();k++){
	temp=numbers[i]+numbers[j]+numbers[k];
	if((temp>max_num)&&(temp<=target))
	  max_num=temp;
      }
    }
  }
  cout<<max_num<<"\n";
  return 0;
}
