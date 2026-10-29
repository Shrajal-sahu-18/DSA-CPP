#include <iostream>
#include <climits>
using namespace std;
void printsubarraymax(int *arr,int n){
    int maxsum = INT_MIN;
    for(int start = 0; start < n; start++){
        int currentsum = 0;
        for(int end = start; end < n; end++){
            currentsum += arr[end];
            maxsum = max(maxsum,currentsum);
        }
    }
    cout << "Max subarray ="<<maxsum;
}
int main(){
    int arr[] = {2,-3,6,-5,4,2};
    int n = sizeof(arr) / sizeof(int);
    printsubarraymax(arr,n);
    return 0;
}