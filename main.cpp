#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int* b = new int[N_ELEMENTS]; //int* b, N_ELEMENTS
    std::cout << "1-100 ertekek duplazasa"; //dupla "" és ; a sor végére és egy sortörés
    for (int i = 1; i<=N_ELEMENTS; i++) //i=1, határ és a növekvés beirasa
    {
        b[i-1] = i * 2; // b[i-1]
    }
    for (int i = 0; i; i++)
    {
        std::cout << "Ertek:" << b[i - 1] << std::endl; // felesleges ciklus, konkrét érték kiiratasa sortoressel es ; a vegere
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    double atlag = 0; // kezdoertek legyen 0 és az atlag miatt legyen double 
    for (int i = 0; i < N_ELEMENTS, i++)
    {
        atlag += b[i]; // pontosvesszo
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    std::cout << "Helloka";
    return 0;
}
