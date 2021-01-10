#include <iostream>
using namespace std;
int main(void){
  int score;
  string final_score="";
  cin>>score;
  if((score>=90)&&(score<=100)) final_score="A";
  else if((score>=80)&&(score<=89)) final_score="B";
  else if((score>=70)&&(score<=79)) final_score="C";
  else if((score>=60)&&(score<=69)) final_score="D";
  else final_score="F";
  cout<<final_score<<endl;
  return 0;
}
