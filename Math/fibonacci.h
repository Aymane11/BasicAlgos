#include <bits/stdc++.h>
using namespace std;
//this function evaluates fibonnaci's sequence in n
//F(0)=0 F(1)=1 F(n)=F(n-1)+F(n-2)

double fibonacci(int n){
    return ((n==0||n==1)? n:fibonacci(n-1)+fibonacci(n-2));
}