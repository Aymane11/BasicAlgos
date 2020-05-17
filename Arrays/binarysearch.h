#include <bits/stdc++.h>
using namespace std;
/*
    Summary:
        Recursive binary search
    Arguments:
        [vector<int>] -- [intial array]
        [int,int,int] -- [left,right,element]
    Returns:
        [int] -- [position of element in arr[l..r] (if not found returns -1)]
*/
int binarysearch(vector<int> arr, int left, int right, int x){
    if (right >= left){
        int middle = left + (right - left) / 2; 
        if (arr[middle] == x) 
            return middle; 
        if (arr[middle] > x) 
            return binarysearch(arr, left, middle - 1, x); 
        return binarysearch(arr, middle + 1, right, x); 
    }
    return -1; 
}