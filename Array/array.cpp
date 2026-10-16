// Create First Array
// #include <iostream>
// using namespace std;
// int main(){
//     int marks[50];
//     cout << marks[49];
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int marks[50] = {1,2,3};
//     cout << marks[2];
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int marks[] = {1,2,3};
//     cout << sizeof(marks) << endl;
//     cout << marks[2];
//     return 0;
// }

//Input & output array

// #include <iostream>
// using namespace std;
// int main(){
//     int marks[25] = {7,5,2,1,3};
//     int length = sizeof(marks) / sizeof(int);
//     for(int i = 0; i <= length - 1; i++){//i < length
//         cout << marks[i]<< " ";

//     }
//     cout << endl;
//     return 0;
// }

//Input Value In Array
// #include <iostream>
// using namespace std;
// int main(){
//     int marks[5];
//     int length = sizeof(marks) / sizeof(int);
//     for(int i = 0; i < length; i++){
//         cin >> marks[i];
//     }
//     for(int i = 0; i < length; i++){
//         cout << marks[i]<< ",";
//     }
    
//     return 0;
// }

//Input Array Length
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "Enter Array Length:";
//     cin >> n;
//     int arr[n];
//     for(int i = 0; i < n; i++){
//         cout << arr[i]<< " ";
//     }
//     return 0;
// }

//Array are passed by refrence
// #include <iostream>
// using namespace std;
// int main(){
//     int a = 5;
//     int *ptr = &a;
//     cout << ptr<<endl;
//     int arr[] = {1,2,3,4,5};
//     cout << arr<<endl;
//     cout <<&arr[1]<<endl;
//     cout << &arr;
//     return 0;
// }

//Array passed by reference
// #include <iostream>
// using namespace std;
// void func(int arr[]){
//     arr[0] = 1000;
// }
// void func2(int *ptr){
//     ptr[0] = 1000;
// }
// int main(){
//     int arr[] = {2,3,4,5,6};
//     // func(arr);
//     // cout << arr[0];
//     func2(arr);
//     cout << arr[0];

//     return 0;
// }

// #include <iostream>
// using namespace std;
// void printArr(int nums[],int n){
//     // cout << sizeof(nums);
//     for(int i = 0; i < n; i++){
//         cout << nums[i]<< ",";
//     }
// }
// int main(){
//     int arr[] = {2,3,6,4,7};
//     int n = sizeof(arr) / sizeof(int);
//     printArr(arr,n);

//     return 0;
// }

//Pointer Arithematic
// #include <iostream>
// using namespace std;
// int main(){
//     // int a = 10;
//     // int *ptr = &a;
//     // cout << ptr << endl;
//     // ptr++;
//     // cout <<ptr <<endl;
//     char ch = 'a';
//     char *ptr = &ch;
//     cout << ptr << endl;
//     ptr++ ;
//     cout << ptr << endl;
//     return 0;
//}

//Arithematic Operation
// #include <iostream>
// using namespace std;
// int main(){
//     int a = 10;
//     int *ptr = &a;
//     cout << ptr <<endl;
//     ptr++;
//     cout << ptr << endl;
//     ptr--;
//     cout << ptr << endl;
//     return 0;


// }


//Substraction and Addition
// #include <iostream>
// using namespace std;
// int main(){
//     int a = 10;
//     int *ptr = &a;
//     cout << ptr<<endl;
//     ptr = ptr + 3;
//     cout << ptr << endl;
//     return 0;
// }


// #include <iostream>
// using namespace std;
// void printarr(int *ptr , int n){
//     for(int i = 0; i<n; i++){
//         cout << *ptr<<endl;
//         ptr = ptr + 1; //ptr +i 
//     }
// }
// int main(){
//     int arr[] = {1,2,3,4,5};
//     int n = sizeof(arr)/ sizeof(int);
//     printarr(arr,n);
//     return 0;
// }


//  #include <iostream>
//  using namespace std;
//  int main(){
//     int a = 5;
//     int *ptr1 = &a;
//     int *ptr2 = ptr1 + 3;

//     cout << ptr1 <<endl;
//     cout << ptr2 << endl;
//     cout << ptr2 - ptr1 << endl;
//     return 0;
//  }

//Array
#include <iostream>
using namespace std;
int main(){
    int arr[20] = {1,2,3,4,5,6};
    int *ptr1 = arr;
    int *ptr2 = ptr1 + 3;
    cout << *ptr2 << endl;
    cout << *ptr1<<endl;
    cout << ptr2 - ptr1 << endl;
    cout << (ptr2  > ptr1) <<endl;
    cout << (ptr1 == arr)<<endl;
    return 0;
}
// Pointer Arithematic
#include <iostream>
using namespace std;
int main(){

}