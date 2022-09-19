#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; //int* b, N_ELEMENTS
    std::cout << '1-100 ertekek duplazasa' //dupla "" és ; a sor végére és egy sortörés
    for (int i = 0;)
    {
        b[i] = i * 2; // b[i-1]
    }
    for (int i = 0; i; i++)
    {
        std::cout << "Ertek:" // felesleges ciklus, konkrét érték kiiratasa sortoressel es ; a vegere
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;
    for (int i = 0; i < N_ELEMENTS, i++)
    {
        atlag += b[i] // pontosvesszo
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
