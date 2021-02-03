#include <iostream>
using namespace std;
int main(void){
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  int numbers[42];
  int new_num;
  int i=0;
  for(i=0;i<42;i++){
    numbers[i]=0;
  }
  for(i=0;i<10;i++){
    cin>>new_num;
    numbers[new_num%42]++;    
  }
  int counter=0;
  for(i=0;i<42;i++){
    if(numbers[i]>0)
      counter++;
  }
  cout<<counter<<"\n";
  return 0;
}
