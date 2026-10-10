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
#include <iostream>
using namespace std;
int main(){
    int a = 5;
    int *ptr = &a;
    cout << ptr<<endl;
    int arr[] = {1,2,3,4,5};
    cout << arr<<endl;
    cout <<&arr[1]<<endl;
    cout << &arr;
    return 0;
}