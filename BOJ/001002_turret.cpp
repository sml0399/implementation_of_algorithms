#include <iostream>
#include <cmath>
using namespace std;

int num_common(double d, int ra, int rb,int status){
  if(status==0){
    if((ra+rb)>d)return 2;
    if((ra+rb)==d)return 1;
    if((ra+rb)<d)return 0;
  }else{
    int abs_val=abs(ra-rb);
    if(abs_val<d)return 2;
    if(abs_val==d)return 1;
    if(abs_val>d)return 0;
  }
  return -2;
}


int main(void){
  int num_test=0;
  int a_x=0,a_y=0,a_r=0, b_x=0,b_y=0,b_r=0;
  int status=0;
  cin>>num_test;
  for(int i=0;i<num_test;i++){
    cin>>a_x>>a_y>>a_r>>b_x>>b_y>>b_r;
    double d=sqrt(pow(a_x-b_x,2)+pow(a_y-b_y,2));
    status=((a_r<d)&&(b_r<d))?0:1;
    if((a_x==b_x)&&(a_y==b_y)&&(a_r==b_r)){cout<<-1<<endl;continue;}
    cout<<num_common(d,a_r,b_r,status)<<endl;
  }

  return 0;
}
