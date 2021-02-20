#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(void){
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  int input_count=0;
  cin>>input_count;
  vector<int> numbers={};
  int i=0;
  for(i=0;i<input_count;i++){
    int temp_input=0;
    cin>>temp_input;
    numbers.push_back(temp_input);
  }
  sort(numbers.begin(),numbers.end(),less<int>() );
  for(i=0;i<input_count;i++){
    cout<<numbers[i]<<"\n";
  }
  return 0;
}
