#include <bits/stdc++.h>
using namespace std;
//this function evaluates n! (n! = n*(n-1)*(n-2)...*2*1)
double factorial(int n){
     return ((n<=1)? 1:n*factorial(n-1));
}