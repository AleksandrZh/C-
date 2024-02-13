#include <iostream>
#include <string>
#include <cmath>

bool isPrime(int n){  // checking for a prime number (bool type is enough)
    int i;
    bool isPrime = true;
    for (i=2; i<= (n/2); i++){
        if (n%i==0){
        isPrime = false;
        break;
        }
    }
    if(isPrime)
        return true;
    else
        return false;
}


int PositionPrime(int n){  // getting the position and checking the position number for a prime number (int type is enough)
    int position, i;
    position = 0;
    for (i = 1; i < n; i++){
        if (isPrime(i))
            position += 1;
    }
    return position;
}

int main(){

    int n;
    std::cout << "Enter digit: " << std::endl;
    std::cin >> n;
    if (isPrime(n)){
        if (isPrime(PositionPrime(n))){
            std::cout << "super prime";
        }
        else
        {
            std::cout << "not a super prime" << std::endl;
        }
    }
    else
    {
        std::cout << "not a prime" << std::endl;
    }
}

