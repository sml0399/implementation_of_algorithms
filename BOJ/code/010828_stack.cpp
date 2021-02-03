#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(void){
  int iter_count=0, push_num=0, result=0;
  vector<int> my_stack;
  string option="";
  cin>>iter_count;
  for(int i=0;i<iter_count;i++){
    cin>>option;
    if(option=="push"){cin>>push_num; my_stack.push_back(push_num); continue;}
    else if(option=="top")result=my_stack.empty()?-1:my_stack.back();
    else if(option=="empty")result=my_stack.empty()?1:0;
    else if(option=="size")result=my_stack.size();
    else if(option=="pop"){result=my_stack.empty()?-1:my_stack.back(); if(result!=-1)my_stack.pop_back();}
    cout<<result<<endl;
  }
  return 0;
}
