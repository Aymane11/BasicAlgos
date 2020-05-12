#include <bits/stdc++.h>
using namespace std;
/*
    Summary:
        Evaluating fibonnaci's sequence in n
        F(0)=0 , F(1)=1 , F(n)=F(n-1)+F(n-2)
    Arguments:
        [int] -- [n]
    Returns:
        [double] -- [F(n)]
*/
double fibonacci(int n){
    if (n<0){
        cout << "Invalid Input, ensure that n >= 0";
        return;
    }
    return ((n==0||n==1)? n:fibonacci(n-1)+fibonacci(n-2));
}