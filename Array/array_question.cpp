//Question - 1
//largest value In Array
#include <iostream>
using namespace std;
int main(){
    int arr[] = {5,4,3,9,12};
    int n = sizeof(arr) / sizeof(int);
    int max = arr[0];
    for(int i = 0; i < n; i++){
            if(max < arr[i]){
                max = arr[i];
            }
    }
    cout << "maximum is :"<< max;
    return 0;
}