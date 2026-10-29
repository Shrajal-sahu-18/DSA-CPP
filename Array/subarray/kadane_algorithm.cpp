#include <iostream>
#include <climits>
using namespace std;
void kadanealgorithm(int *arr,int n){
    int currentsum = 0;
    int maxsum = INT_MIN;
    for(int i = 0; i < n; i++){
        currentsum += arr[i];
        maxsum = max(maxsum,currentsum);
        if(currentsum < 0){
            currentsum = 0;
        }

    }
}
int main(){
    int arr[] = {2,-3,6,-5,4,2};
    int n = sizeof(arr) / sizeof(int);
    return 0;
}