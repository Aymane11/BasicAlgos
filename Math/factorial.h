#include <bits/stdc++.h>
using namespace std;
/*
    Summary:
          Evaluating n! (n! = n*(n-1)*(n-2)...*2*1)
    Arguments:
        [int] -- [n]
    Returns:
        [double] -- [n!]
*/
double Factorial(int n){
    if (n<0){
        cout << "Invalid Input, ensure that n >= 0";
        return;
    }
     return ((n<=1)? 1:n*Factorial(n-1));
}