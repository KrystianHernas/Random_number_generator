#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    int y, n;
    do {
        srand(time(NULL));
        std::cout << "Wprowadz twoj traf: " << std::endl;
        std::cin >> y;
        int x = (rand() % 10 + 1);
        if (y <= 10)
            n = 0;
        else
            n = 1;
        if (y <= 10)
        {
            if (x == y)
            {
                std::cout << "Wylosowana liczba: " << x << std::endl;
                std::cout << "Twoja liczba: " << y << std::endl;
                std::cout << "wow, trafiles" << std::endl;
            }
            else
            {
                std::cout << "Probuj dalej" << std::endl;
                std::cout << "Wylosowana liczba: " << x << std::endl;
                std::cout << "Twoja liczba: " << y << std::endl;
            }
        }
        else if (y > 10)
        {
            std::cout << "Wybrales liczbe spoza zakresu \n";
        }
    } while (n == 1);

    return 0;
}
