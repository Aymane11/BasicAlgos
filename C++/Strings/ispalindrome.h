#include <bits/stdc++.h>
using namespace std;
/*
    Summary:
        Checking if a string is a palindrome or not
    Arguments:
        [string] -- [initial string]
    Returns:
        [bool] -- [true if palindrome, false otherwise]
*/
bool ispalindrome(string str){
    for(int i=0;i<str.length()/2;++i){
        if(str[i]!=str[str.length()-1-i]) return false;
    }
    return true;
}
