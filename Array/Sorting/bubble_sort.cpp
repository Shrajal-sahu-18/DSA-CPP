//Bubble-Sort
// #include <iostream>
// using namespace std;
// void print(int *arr,int n){
//     for(int i = 0; i < n; i++){
//         cout << arr[i] << " ";
//     }
//     cout <<endl;
// }
// void Bubblesort(int *arr, int n){
//     for(int i = 0; i < n-1; i++){
//         for(int j = 0; j < n-i-1; j++){
//             if(arr[j] > arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//             }
//         }
//     }
//     print(arr,n);
// }
// int main(){
//     int arr[] = {5,4,1,3,2};
//     int n = sizeof(arr) / sizeof(int);
//     Bubblesort(arr,n);

//     return 0;
// }


//Optimize Bubble-Sort
#include <iostream>
using namespace std;
void optimizebubblesort(int*arr,int n){
    for(int i = 0; i <n-1; i++){
        cout << "Outter Loop";
        int isswap = false;
        for(int j = 0; j < n-i-1; j++){
            cout << "inner loop";
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
                isswap = true;
            }
        }

        if(!isswap){ // iswap == false
            //Array is sorted
            return;
        }
    }

}
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr) / sizeof(int);
    optimizebubblesort(arr,n);

    return 0;
}