#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(void){
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  int i,input_1,input_2,num_inputs;
  vector<vector<int>> coordinates={};
  cin>>num_inputs;
  for(i=0;i<num_inputs;i++){
    cin>>input_1>>input_2;
    vector<int> coordinate={};
    coordinate.push_back(input_1);
    coordinate.push_back(input_2);
    coordinates.push_back(coordinate);
  }
  struct{
    bool operator() (vector<int> a, vector<int> b) const {
      if(a[0]<b[0])
        return true;
      else if(a[0]==b[0]){
        if(a[1]<b[1])
          return true;
        else
          return false;
      }
      else
        return false;
    }
  } comparison;
  sort(coordinates.begin(), coordinates.end(), comparison);  
  for(i=0;i<num_inputs;i++){
    cout<<coordinates[i][0]<<" "<<coordinates[i][1]<<"\n";
  }
  return 0;
}
