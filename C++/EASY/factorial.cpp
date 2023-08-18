//factorial of N number using recursion - C++
#include <iostream>
using namespace std;

// This function calculates the factorial of a given number 'n'
int factorial(int n){
     // Base case: If n is 1, factorial of 1 is 1
    if(n == 1){
        return n;
    }
    // Recursive case: Multiply n by the factorial of (n-1)
   return n* factorial(n-1);
}
int main() {
    
    // Declare and initialize variables
    int n = 5;       // User input: calculate factorial of 5
    int res = 1;     // Store the result of the factorial
    
    res=factorial(n); // Call the factorial function to calculate the factorial of 'n'
    
    
    cout<<"Factorial of "<<n<<":"<<res;

    return 0;
}