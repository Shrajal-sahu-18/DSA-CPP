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