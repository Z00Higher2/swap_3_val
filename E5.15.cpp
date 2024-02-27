// Author: Zuhayer Tashin
// Course: CSCI-135
// Instructor: Tong Yi
// Assignment: HW E5.14
// Write a function sort3(int& a, int& b, int& c) that swaps its three arguments to
// arrange them in sorted order. For example,
// int v = 3;
// int w = 4;
// int x = 1;
// sort3(v, w, x); // v is now 1, w is now 3, x is now 4


#include <iostream>
#include <math.h>
using namespace std;

void sort3(int& a, int& b, int& c){
    if (a > b) {
            swap(a, b); // swap a and b
        }

        if (b > c) {
            swap(b, c); // swap b and c
        }

        if (a > b) {
            swap(a, b); // swap a and b
        }
} 

int main() {
    int v, w , x;

    cout << "Enter the number: ";
    cin >> v;

    cout << "Enter the number: ";
    cin >> w;

    cout << "Enter the number: ";
    cin >> x;

    sort3(v , w , x);

    return 0;
}