#include <bits/stdc++.h>
using namespace std;
/*
    Summary:
        Sorting an array using selection sort algortihm
    Arguments:
        [vector<int>] -- [initial array]
    Returns:
        [vector<int>] -- [sorted array]
*/
vector<int> selectionSort(vector<int> arr){
    for (int i = 0; i < arr.size()-1; ++i){
        int index_min = i;
        for (int j = i; j < arr.size(); j++){
            if (arr[j] < arr[index_min]){
            index_min = j;
            }
        }
        if (index_min != i) 
            swap(arr[i], arr[index_min]);
    }
    return arr;
}