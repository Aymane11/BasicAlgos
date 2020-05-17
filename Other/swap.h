#include <bits/stdc++.h>
using namespace std;
/*
    Summary:
        Swapping values between two integers
    Arguments:
        [int*,int*] -- [reference to the two elements to swap]
    Returns:
        [none] -- []
*/
//Standard swapping using temporary variable
void swap(int* a,int* b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
//Swapping using addition and substraction
void swap1(int* a,int* b){
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
}