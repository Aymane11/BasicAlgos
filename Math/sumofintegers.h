#include <bits/stdc++.h>
using namespace std;
/*
    Summary:
        Calculating the sum of integers in [m,n]
        sum from 1 to n =n*(n+1)/2
    Arguments:
        [int,int] -- [m,n such as m<=n]
    Returns:
        [double] -- [sum of integers between m and n (both inclusive)]
*/
double sumofintegers(int m,int n){
    if(m>n) {
        cout << "Invalid Inputs, ensure that m <= n";
        return;
    }
    return (n*(n+1)/2) - (m*(m-1)/2);
}