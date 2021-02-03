#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

long long sum(std::vector<int> &a){
  return accumulate(a.begin(),a.end(),(long long)0);
}
