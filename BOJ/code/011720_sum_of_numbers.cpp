#include <iostream>
#include <string>
using namespace std;
int main(void){
  int lines;
  int sum=0;
  string given_number;
  string temp_string;
  cin>>lines>>given_number;
  for(size_t i=0;i<lines;i++){
    temp_string=given_number[i];
    sum+=stoi(temp_string,nullptr);
  }
  cout<<sum<<endl;
  return 0;

}
