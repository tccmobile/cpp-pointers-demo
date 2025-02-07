#include <iostream>
#include <memory>
using namespace std;

// Function to be used with function pointer
void printNumber(int x) {
    cout << "Number is: " << x << endl;
}

int main() {
    // 1. Basic pointer declaration and usage
    cout << "\n=== Basic Pointers ===\n";
    int num = 42;
    int* ptr = &num;
    cout << "Value: " << *ptr << ", Address: " << ptr << endl;

    // 2. Dynamic memory allocation
    cout << "\n=== Dynamic Memory ===\n";
    int* dynamicPtr = new int(100);
    cout << "Dynamic value: " << *dynamicPtr << endl;
    delete dynamicPtr;  // Prevent memory leak

    // 3. Pointer arithmetic
    cout << "\n=== Pointer Arithmetic ===\n";
    int arr[] = {1, 2, 3, 4, 5};
    int* arrPtr = arr;
    cout << "First element: " << *arrPtr << endl;
    arrPtr++;  // Move to next element
    cout << "Second element: " << *arrPtr << endl;

    // 4. Common pitfalls
    cout << "\n=== Pitfalls ===\n";
    
    // Dangling pointer
    int* danglingPtr = new int(50);
    delete danglingPtr;
    // Dangerous: cout << *danglingPtr << endl;  // Using after delete
    
    // Null pointer
    int* nullPtr = nullptr;
    if (nullPtr == nullptr) {
        cout << "Null pointer detected" << endl;
    }

    // 5. Smart pointers
    cout << "\n=== Smart Pointers ===\n";
    unique_ptr<int> smartPtr = make_unique<int>(200);
    cout << "Smart pointer value: " << *smartPtr << endl;
    // No need to delete - automatically managed

    // 6. Function pointers
    cout << "\n=== Function Pointers ===\n";
    void (*funcPtr)(int) = printNumber;
    funcPtr(300);  // Calling function through pointer

    return 0;
}