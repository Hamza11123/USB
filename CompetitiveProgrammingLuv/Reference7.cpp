#include<bits/stdc++.h>
using namespace std;
void getArray(int );
void getArray(int arr[]){
    arr[0 ]= 100;
}
int main(void){
    int n;
    int sumOfDigits = 0;
    // cin>>n;   
    // 1. getting sum of Digits..
    while(n){
        sumOfDigits += n % 10;
        n /= 10;
    }
    cout<<sumOfDigits;

    // 2. Array kabhi bhi [Pass-by-Value] nhi.. hoty y [pass-by-reference] hoty hn..
    int a[10]={2, 34, 34, 8};

    cout<<"Before-passing: "<<a[0]<<endl;
    getArray(a);
    cout<<"After-passing: "<<a[0]<<endl;

    // 3. When it comes to 2-D Arrays, it's neccessary to Write SizeOf2nd Dimension in Function-Definition, 
    // 4. oOk.. it's right! But How will we get the size of the array's 2nd-Dimension, Hence the Solution: Declare Them as [Global-Variables]
    
    return 0;
}