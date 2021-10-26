// NumberGuesser.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
/*#include <random>
std::random_device rd;  //Will be used to obtain a seed for the random number engine
std::mt19937 gen(rd()); //Standard mersenne_twister_engine seeded with rd()

int randomNumber2(const int min, const int max) {
    const std::uniform_int_distribution<int> distribution(min, max);
    return distribution(gen);
}*/

int randomNumber(const int min, const int max) {
    const int range = max - min + 1;
    return rand() % range + min;
}


int main()
{
    srand(time(0));
    int min, max;
    std::cout << "Min: ";
    std::cin >> min;
    std::cout << "Max: ";
    std::cin >> max;

    for(int i = 0; i < 100; i++) {
        std::cout << randomNumber(min, max) << "\n";
    }

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
