#include<iostream>
using namespace std;
bool isPrime(int number) {
    if (number < 2) {
        return false;
    }
    for (int i = 2; i * i <= number; ++i) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}
int main() {
    int N;
    // Input the value of N
    cout<<"Enter a positive integer N: ";
    cin>>N;
    // Find the largest prime number less than or equal to N
    while (N > 1 && !isPrime(N)) {
        --N;
    }
    // Display the result
    if (N > 1) {
        cout<<"The largest prime number less than or equal to "<<N <<" is: "<<N<<endl;
    } else {
        cout<<"No prime numbers found less than or equal to "<<N<<endl;
    }
    return 0;
}




