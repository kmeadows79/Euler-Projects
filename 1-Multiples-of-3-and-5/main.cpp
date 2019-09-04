#include <iostream>

using namespace std;

int main() {
    int multiples_sum {};
    for (int i {}; i < 1000; ++i){
        if (i % 3 == 0 || i % 5 == 0)
            multiples_sum += i;
    }
    cout << "----- Project Euler -----\n"
        << "Problem 1 - Multiples of 3 and 5\n"
        << "If we list all the natural numbers below 10 that are multiples "
        << "of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.\n"
        << "Find the sum of all the multiples of 3 or 5 below 1000.\n"
        << "Answer: " << multiples_sum
        << endl;
    
    return 0;
}