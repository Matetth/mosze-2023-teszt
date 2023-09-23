#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    // NELEMENTS az inkább N_ELEMENTS
    int *b = new int[NELEMENTS];
    // '' helyett "" kell és ; a végére
    std::cout << '1-100 ertekek duplazasa'
    // for ciklus hibásan van megadva
    for (int i = 0;)
    {
    // b[i] helyett b[i-1] legyen
        b[i] = i * 2;
    }
    // for ciklus hibásan van megadva
    for (int i = 0; i; i++)
    {
    // érték kiiratása hiányzik
        std::cout << "Ertek:"
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;
    // , helyett ; kell
    for (int i = 0; i < N_ELEMENTS, i++)
    {
    // sor végén a ; hiányzik
        atlag += b[i]
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
