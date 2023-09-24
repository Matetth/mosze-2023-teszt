#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS];
    std::cout << "1-100 ertekek duplazasa";
    for (int i = 1; i <= N_ELEMENTS; i++)
    {
        b[i-1] = i * 2;
    }
    for (int i = 0; i < N_ELEMENTS; i++)
    {
        std::cout << "Ertek: " << b[i] << " ";
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;
    for (int i = 0; i < N_ELEMENTS; i++)
    {
        atlag += b[i];
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;

    std::cout << "a cpp a legjobb" << std::endl; //ezt irtam hozzaa igy jo?
    return 0;
}
