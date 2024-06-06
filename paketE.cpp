#include <iostream>
#include <algorithm>
using namespace std;

bool isPrime(int num){
    if(num<=1) return false;
    for (int i=2;i*i<=num; i++){
        if(num%i==0)return false;
    }
    return true;
}

int linearSearch(int arr[], int n, int x){
    for(int i=0; i<n; i++){
        if(arr[i]==x){
            return i;
        }
    }
    return -1;
}

int main(){
    int n, m;
    cin>>n>>m;
    
    int array_A[n];
    int array_B[m];
    
    for(int i=0; i<n; i++){
        cin>>array_A[i];
    }
    
    for(int i=0; i<n; i++){
        cin>>array_A[i];
    }
    
    int results[n+m];
    int result_count=0;
    
    for (int i = 0; i<n;i++){
        if(isPrime(array_A[i])){
            
        }
    }
    
    sort(results, results + result_count);
    
    if(result_count==0){
        cout<<"tidak ada"<<endl;
    }else{
        for(int i=0; i<n; i++){
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}