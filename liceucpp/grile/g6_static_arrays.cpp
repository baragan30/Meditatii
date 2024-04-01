#include <iostream>
#include <limits>
#include <cstdlib>
using namespace std;

// int relDiagPrinc(int i,int j){
//     if(i < j)
//         return 1;
//     if(i > j)
//         return -1;
//     return 0;// i == j
// }
// int relDiagSec(int i, int j, int n){
//     return 0;//i + j == n - 1;
// }

void function0() {
    int arr[] = {11, 12, 13, 14, 15};

    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void function1() {
    int arr[10];
    for (int i = 0; i < 10; i++) {
        arr[i] = i * i;
    }
    for(int i = 9 ; i >= 0; i--){
        cout << arr[i] << " ";
    }
}

void function2() {
    int arr[] = {12, 768, 23, 900, 300, 244, 588};
    int n = sizeof(arr)/sizeof(int); //n=7
    int left = 0, right = n - 1;
    while (left < right) {
        cout << arr[left]<< " "<<arr[right]<<" ";
        left++;
        right--;
    }
    if(left == right){
        cout << arr[left];
    }
}

void function3() {
    int arr[] = {2,6,2,7,3,4,2,7};
    int n = sizeof(arr)/sizeof(int), num = 7;
    bool found = false;
    for (int i = 0; i < n; i++) {
        if (arr[i] == num) {
            cout << "Number found at index " << i << endl;
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Number not found!" << endl;
    }
}

void function4() {
    int arr[] = {5, 7, 2, 9, 4};
    int val[] = {0, 2, 4, 6, 8};
    int n = sizeof(arr) / sizeof(int);
    int max = arr[0], maxVal = val[0];
    for (int i = 1; i < 5; i++) {
        if (arr[i] > max) {
            max = arr[i];
            maxVal = val[i];
        }
    }
    cout << "Maximum value in array: " << maxVal << endl;
}

void function5() {
    int arr1[] = {23, 12, 56, -1, 78};
    int arr2[] = {-6, 7, 78, 9, 10, 89};
    int n1 = sizeof(arr1)/sizeof(int);// n1 = 5
    int n2 = sizeof(arr2)/sizeof(int);// n2 = 6
    int merged[n1+n2];
    for (int i = 0; i < n1; i++) {
        merged[i] = arr1[i];
    }
    for(int i = 0; i < n2; i ++){
        merged[i + n1] = arr2[i];
    }
    cout << "Merged array: ";
    for (int i = 0; i < n1 + n2; i++) {
        cout << merged[i] << " ";
    }
    cout << endl;
}

void function6() {

    int arr[] = {2,6,2,7,3,4,2,7};
    //2 2 2 7 6 4 3
    int n = sizeof(arr)/sizeof(int);
    for (int i = 0; i < n - 1; i++) {     
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                // Swap arr[i] and arr[j]
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

void function7() {
    int arr[] = {6,5,1,5,0,3};
    int n = sizeof(arr)/sizeof(int);//n = 6
    for (int i = 0; i < n - 1; i++) {
        int j = i + 1;
        int x = arr[j];
        while(j > 0 && x < arr[j-1]){
            arr[j] = arr[j-1];
            j--;
        } 
        arr[j] = x;
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

void function8() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int rotations = 2;
    for (int i = 0; i < rotations; i++) {
        int last = arr[n - 1];
        for (int j = n - 1; j > 0; j--) {
            arr[j] = arr[j - 1];
        }
        arr[0] = last;
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void function9() {
    int v[]= {0,1,2,3,1,2,3,5,3,5,2,5,3,5,7,4,2};
    int n = sizeof(v) / sizeof(v[0]);
    int f[10] = {0,0,0,0,0,0,0,0,0,0};
    for(int i = 0 ; i < n ; i ++){
        f[v[i]]++;
    }
    for(int i = 0 ; i < 10 ; i ++){
        cout <<f[i]<<" ";
    }
}

int main(){
    using Function = void (*)();
    const int NR_FUNCTIONS = 10;
    Function functions[NR_FUNCTIONS] = {
        function0,
        function1,
        function2,
        function3,
        function4,
        function5,
        function6,
        function7,
        function8,
        function9,
    };
    for(int i = 0; i < NR_FUNCTIONS; i ++){
        system("cls");
        Function func = functions[i];
        cout << "Function " << i  << " output is";
        std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
        func();
        std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
}