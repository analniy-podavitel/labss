#include <iostream>

int func(int* arr, int length) {
    if (length <= 0) return 0; 
    
    int max = arr[0];
    for (int i = 1; i < length; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

double func(double* arr, int length) {
    if (length <= 0) return 0.0;
    
    double max = arr[0];
    for (int i = 1; i < length; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int i_arr[] = {1, 5, 8, 2};
    double d_arr[] = {3.5, 9.1, 2.4, 7.8};

    std::cout << "Max int: " << func(i_arr, 4) << std::endl;
    std::cout << "Max double: " << func(d_arr, 4) << std::endl;

    return 0;
}