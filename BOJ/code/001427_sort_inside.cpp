#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(void){
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  int number;
  cin>>number;
  vector<int> numbers={};
  while(number>9){
    numbers.push_back(number%10);
    number/=10;
  }
  numbers.push_back(number);
  sort(numbers.begin(),numbers.end(),greater<int>() );
  for(int i=0;i<numbers.size();i++){
    cout<<numbers[i];
  }
  cout<<"\n";
  return 0;
}
