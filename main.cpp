#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS];						//typo
    std::cout << "1-100 ertekek duplazasa" << std::endl;//missing ;
    for (int i = 0; i < N_ELEMENTS; i++)				//missing statement
    {
        b[i] = (i+1) * 2;								//should be +
    }
    for (int i = 0; i < N_ELEMENTS; i++)				//missing statement
    {
        std::cout << "Ertek:" << b[i] <<std::endl;		//i output missing
    }
    std::cout << "Atlag szamitasa: " << std::endl;
    double atlag;										//should be double
    for (int i = 0; i < N_ELEMENTS, i++)
    {
        atlag += b[i]
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    std::cout << "Hello there!";                        //edited by johncodesalot
    return 0;
}