#include <bits/stdc++.h>
using namespace std;
//this function recieves an vector of int as input, sorts it using bubble sort then returns it
vector<int> bubblesort(vector<int> arr){
    bool sorted=false;
    int comps=arr.size() - 1;
    while(!sorted){
        sorted=true;
        for (int j = 0; j < comps; j++){
            if (arr[j] > arr[j + 1]){
                swap(arr[j], arr[j + 1]);
                sorted=false;
            }
        }
        comps--;
    }
    return arr;
}