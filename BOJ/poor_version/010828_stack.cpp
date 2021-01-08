#include <iostream>
#include <vector>
#include <string>
using namespace std;



int main(void){
  vector<int> my_stack={};
  int iteration=0;
  int target_number=0;
  int result=0;
  string operation_type="";
  cin>>iteration;
  for(size_t i=0;i<iteration;i++){
    cin>>operation_type;
    if(operation_type=="push"){
      cin>>target_number;
      my_stack.push_back(target_number);
      continue;
    }else if(operation_type=="pop"){
      if(my_stack.empty()){result=-1;}
      else{
	result=my_stack.back();
	my_stack.pop_back();
      }
    }else if(operation_type=="top"){
      if(my_stack.empty()){result=-1;}
      else{
	result=my_stack.back();
      }
    }else if(operation_type=="size"){
      if(my_stack.empty()){result=0;}
      else{
	result=my_stack.size();
      }
    }else if(operation_type=="empty"){
      result=(my_stack.empty())?1:0;
    }
    cout<<result;
    if( i!=(iteration-1)){
      cout<<endl;
    }
  }



  return 0;
}
