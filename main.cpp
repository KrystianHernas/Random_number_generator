#include <iostream>
#include <ctime>

int main()
{
    int generated_Number, guess, limit;
    bool logic = false;

    std::cout << "Enter max number: " << std::endl;
    std::cin >> limit;
    do {
        srand(time(NULL));
        std::cout << "Enter your guess: " << std::endl;
        std::cin >> guess;
        generated_Number = (rand() % limit);
        if (guess <= limit){
            if (generated_Number == guess){
                std::cout << "Generated number: " << generated_Number << std::endl;
                std::cout << "Your number: " << guess << std::endl;
                std::cout << "Wow, you won" << std::endl; 
                logic = true;
            }
            else{
                std::cout << "Keep trying" << std::endl;
                std::cout << "Generated number: " << generated_Number << std::endl;
                std::cout << "Your number: " << guess << std::endl;
            }
        }
        else if (guess > limit){
            std::cout << "Number out of range, enter data again \n";
        }
    } while (logic == false);

    return 0;
}
