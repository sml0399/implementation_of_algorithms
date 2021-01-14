#include <iostream>
using namespace std;
int main(void){
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  int input_a,input_b,input_c,cal_result;
  int numbers[10]={0,0,0,0,0,0,0,0,0,0};
  cin>>input_a>>input_b>>input_c;
  cal_result=input_a*input_b*input_c;
  while(1){
    numbers[cal_result%10]++;
    cal_result=cal_result/10;
    if(cal_result==0) break;
  }
  for(int i=0;i<10;i++){
    cout<<numbers[i]<<endl;
  }
  return 0;
}
