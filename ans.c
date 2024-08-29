#include <stdio.h>
// Function to apply the operation cumulatively to the array
int arrFunction(int *arr, int size, int (*operation)(int, int)) {
    int result = arr[0];  // Initialize result with the first element

    for(int i = 1; i < size; i++) {
        result = operation(result, *(arr + i)); // // this *(arr + i) access the element and move to the next element in array using pointer arithmetic as you said me :)
    }

    return result;
}
// as you said me to write single like function declaration like this :)

// This function returns the sum of two integers
int sum(int a, int b) { return a + b; }

// This function returns the product of two integers.
int multiply(int a, int b) { return a * b; }

// This function returns the difference between two integers like (a - b).
int subtract(int a, int b) { return a - b; }

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]); // calculates the size of array


    // In this Chunk of code The function pointer pass a specific operation like (sum, multiply, subtract) 
    int sumResult = arrFunction(arr, size, sum);
    int productResult = arrFunction(arr, size, multiply);
    int subtractResult = arrFunction(arr, size, subtract);


    // Here We print the Final Answer as you said
    printf("Sum is: %d\n", sumResult);
    printf("Product is: %d\n", productResult);
    printf("Subtraction is: %d\n", subtractResult);

    return 0;
}