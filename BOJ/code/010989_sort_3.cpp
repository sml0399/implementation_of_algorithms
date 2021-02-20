#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(void){
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  int numbers[10001];
  int i=0, input_count=0, temp_input=0;
  for(i=0;i<10001;i++){
    numbers[i]=0;
  }
  cin>>input_count;
  for(i=0;i<input_count;i++){
    cin>>temp_input;
    numbers[temp_input]++;
  }
  for(i=0;i<10001;i++){
    while(1){
      if(numbers[i]>0){
	cout<<i<<"\n";
	numbers[i]--;
	continue;
      }
      break;
    }
  }
  return 0;
}
