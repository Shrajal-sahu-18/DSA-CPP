#include <iostream>
#include <climits>
using namespace std;
void maxsubarraysum(int *arr,int n){
    int maxsum = INT_MIN;
    for(int start = 0; start < n; start++){
        for(int end = start; end < n; end ++){
            int currentsum = 0;
            for(int i = start; i <= end; i++){
                currentsum += arr[i];
            }
            cout << currentsum<<",";
            maxsum = max(maxsum,currentsum);
            
        }
        cout << endl;
    }
    cout << "Maximum Subarray Sum =" << maxsum << endl;
    
}