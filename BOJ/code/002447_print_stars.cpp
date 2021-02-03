#include <iostream>
#include <vector>
#include <cmath>
#include <string>
using namespace std;

void remove_star(int step, int range[4],vector<string> &drawing){
  int r_start=range[0];
  int r_end=range[1];
  int r_mid1=(2*r_start+r_end)/3;
  int r_mid2=(r_start+r_end*2)/3;
  int c_start=range[2];
  int c_end=range[3];
  int c_mid1=(2*c_start+c_end)/3;
  int c_mid2=(c_start+c_end*2)/3;
  int i,j;
  for(i=r_mid1;i<r_mid2;i++){
    for(j=c_mid1;j<c_mid2;j++){
      drawing[i][j]=' ';
    }
  }
  if(step>1){
    int range1[4]={r_start,r_mid1,c_start,c_mid1};
    int range2[4]={r_start,r_mid1,c_mid1,c_mid2};
    int range3[4]={r_start,r_mid1,c_mid2,c_end};
    int range4[4]={r_mid1,r_mid2,c_start,c_mid1};
    int range5[4]={r_mid1,r_mid2,c_mid2,c_end};
    int range6[4]={r_mid2,r_end,c_start,c_mid1};
    int range7[4]={r_mid2,r_end,c_mid1,c_mid2};
    int range8[4]={r_mid2,r_end,c_mid2,c_end};
    remove_star(step-1,range1,drawing);
    remove_star(step-1,range2,drawing);
    remove_star(step-1,range3,drawing);
    remove_star(step-1,range4,drawing);
    remove_star(step-1,range5,drawing);
    remove_star(step-1,range6,drawing);
    remove_star(step-1,range7,drawing);
    remove_star(step-1,range8,drawing);
  }
}

int stepper(int target){
  int step=1;
  int number=3;
  while(target!=number){
    step++;
    number*=3;
  }
  return step;
}

int main(void){
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  int size;
  cin>>size;
  int steps=stepper(size);
  vector<string> drawing={};
  int i=0;
  int j=0;
  for(i=0;i<size;i++){
    string new_string="";
    for(j=0;j<size;j++){
      new_string+="*";
    }
    drawing.push_back(new_string);
  }
  int init_range[4]={0,size,0,size};
  remove_star(steps,init_range,drawing);
  for(i=0;i<size;i++){
    cout<<drawing[i]<<"\n";
  }
  return 0;
}
