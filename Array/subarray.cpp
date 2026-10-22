// Sub Array
#include <iostream>
using namespace std;
void printsubarray(int *arr,int n){ //n
    for(int start = 0; start  < n; start++){  //n
        for(int end = start; end<n;end++){ //n
            cout <<"(" << start << "," << end << ")";
        for(int i =  start; i <= end; i++){
                cout << arr[i];
            }
            cout << ",";
        }
        cout << endl;
    }
}
int main(){
    int main(){
    int arr[] = {1,2,3,4,5};
    int n = 5;
    printsubarray(arr,n);

    return 0;
}
    return 0;
}