#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; // no '_' in 'NELEMENTS'
    std::cout << '1-100 ertekek duplazasa' // wrong quotation, '' instead of "";
    for (int i = 0;) // for loop missing ' i; i++'
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++)  // for loop missing condition: i < N_ELEMENTS
    {
        std::cout << "Ertek:" //missing ';'
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;  //missing initialization
    for (int i = 0; i < N_ELEMENTS, i++) // ',' instead of ';'
    {
        atlag += b[i]  //missing ';'
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
