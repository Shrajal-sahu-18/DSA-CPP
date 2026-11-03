#include <iostream>
#include <climits>
using namespace std;
int trap(int *height , int n){
    int leftmax[20000],rightmax[20000];
    leftmax[0] = height[0];//INT_MIN;
    rightmax[n-1] = height[n-1]; //INT_MIN;
    //cout << rightmax[n-1] << ",";
    //cout << leftmax[0] << ",";
    for(int i = 1; i < n; i++){
        leftmax[i] = max(leftmax[i-1], height[i -1]);
        //cout << leftmax[i] << ",";
    }
    for(int i = n-2; i >= 0; i--){
        rightmax[i] = max(rightmax[i+1], height[i+1]);
        //cout << rightmax[i] << ",";
    }

    int watertrap = 0;
    for(int i = 0; i < n; i++){
        int currwater = min(leftmax[i] , rightmax[i])- height[i];
        if (currwater > 0){
            watertrap += currwater;
        }
    }
    cout << "Water Trapped ==>" << watertrap << endl;

    return watertrap;

    

}
int main(){
    int height[] = {4,2,0,6,3,2,5};
    int n = sizeof(height) / sizeof(int);
    trap(height, n);
    return 0;
}