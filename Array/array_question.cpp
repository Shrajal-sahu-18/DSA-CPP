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

//Question - 2
//Smallest Value In Array
#include <iostream>
using namespace std;
int main(){
    int arr[] = {5,4,3,9,12};
    int min = arr[0];
    int n = sizeof(arr) / sizeof(int);
    for(int i=0; i<n; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    cout << "Smallest is :"<< min;
    return 0;
}