#include <iostream>
using namespace std;

int main()
{
    int N,K,arr[50],sum=0;
    cin>>N>>K;
    for(int i=1;i<=N;i++){
        cin>>arr[i];
        if(i<=K){
            sum+=arr[i];
        }
    }
    cout<<sum;
}
