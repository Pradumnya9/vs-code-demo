/*
 * C++ Program to implement Sieve of Eratosthenes
 */
 
#include <iostream>
const int len = 100;
using namespace std;
int main(){
    int arr[100] = {0};
 
    for (int i = 2; i < 100; i++){
        for (int j = i * i; j < 100; j+=i){
            arr[j - 1] = 1;
        }
    }
    for (int i = 1; i < 100; i++){
        if (arr[i - 1] == 0)
            std::cout << i << "\t";
    }
}