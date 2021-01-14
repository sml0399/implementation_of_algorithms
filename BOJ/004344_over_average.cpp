#include <iostream>
#include <vector>
using namespace std;
int main(void){
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  cout << fixed;
  cout.precision(3);
  int lines,inputs;
  cin>>lines;
  for(int i=0;i<lines;i++){
    double average=0;
    vector<int> my_array={};
    cin>>inputs;
    int new_input;
    for(int j=0;j<inputs;j++){
      cin>>new_input;
      my_array.push_back(new_input);
      average+=new_input;
    }
    average/=inputs;
    double counter=0;
    for(int j=0;j<inputs;j++){
      if(average<my_array[j])
	counter++;
    }
    cout<<(counter/inputs*100)<<"%\n";
  }


  return 0;
}
