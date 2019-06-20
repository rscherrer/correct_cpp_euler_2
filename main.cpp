#include <iostream>
#include <vector>
#include <numeric>


/// Program to find the sum of even Fibonacci number up to 4 millions
int main()
{

    std::vector<int> evenFibonnaci{ 2 };
    std::vector<int> fibonnaciNumbers{ 1, 2 };

    // Find Fibonacci numbers and put them in a vector up to 4 millions
    for (int index = 0; fibonnaciNumbers[index] + fibonnaciNumbers[index + 1] <= 4e6; ++index) {

        fibonnaciNumbers.push_back(fibonnaciNumbers[index] + fibonnaciNumbers[index + 1]);

        // Every time a Fibonacci number is even, put it in a separate vector of even Fibonacci numbers
        if (fibonnaciNumbers.back() % 2 == 0) {
            evenFibonnaci.push_back(fibonnaciNumbers.back());
        }
    }

    // Sum the all even Fibonacci numbers
    int sumEvenFibonacci = std::accumulate(evenFibonnaci.begin(), evenFibonnaci.end(), 0);

    // Show the result
    std::cout << sumEvenFibonacci << '\n';

}