#include <iostream>
#include <string>
using namespace std;
int main(void){
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  string num1="",num2="",result_num="";
  int length1=0,length2=0,base=0,num_length=0,num1_digit,num2_digit;
  cin>>num1>>num2;
  if(num1.length()>=num2.length()){
    while(num1.length()>num2.length()){
      num2="0"+num2;
    }
  }else{
    while(num2.length()>num1.length()){
      num1="0"+num1;
    }
  }
  num_length=num1.length();
  for(int i=0;i<num_length;i++){
    num1_digit=stoi(num1.substr(num_length-1-i,1));
    num2_digit=stoi(num2.substr(num_length-1-i,1));
    int sum_r=base+num1_digit+num2_digit;
    base=sum_r/10;
    string resulting_new=to_string(sum_r%10);
    result_num=resulting_new+result_num; 
  }
  if(base>0){
    result_num="1"+result_num;
  }
  cout<<result_num<<"\n";
  return 0;
}
