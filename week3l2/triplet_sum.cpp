#include "iostream"
#include "vector"

using namespace std;

//brute force approach

int main() {
    int arr[] = {1,2,3,4,5,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);

    int sum = 7;

    for(int i=0; i<n-2; i++){
        for(int j=i+1; j<n-1;j++){
            for(int k=j+1; k<n;k++){
                if(arr[i]+arr[j]+arr[k] == sum){
                    cout <<arr[i]<<" "<<arr[j]<<" "<<arr[k] << endl;
                    break;
                }
            }
        }
    }
            
    }
