#include <iostream>
using namespace std;

int combination(int n, int k){
    int bigger=((n-k)>k)?(n-k):k;
    int smaller=((n-k)<k)?(n-k):k;
    long long int result=1;
    for(int i=(bigger+1);i<=n;i++){
        result*=i;
    }
    for(int i=2;i<=smaller;i++){
        result/=i;
    }
    return result;
}

int main(void){
    int test_case_num=0,k_num=0,n_num=0;
    cin>>test_case_num;
    for(int i=0;i<test_case_num;i++){
        cin>>k_num>>n_num;
        long long int print_val=combination(k_num+n_num,n_num-1);
        cout<<print_val<<endl;
    }

    return 0;
}
