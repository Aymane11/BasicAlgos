#include <bits/stdc++.h>
using namespace std;
//This function calculates the sum of integers in [m,n]
//sum(1,n)=n*(n+1)/2
double sumofintegers(int m,int n){
    return (n*(n+1)/2) - (m*(m-1)/2);
}