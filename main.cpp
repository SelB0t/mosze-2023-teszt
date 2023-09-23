#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; // N_ELEMENTS NELEMENTS helyett
    std::cout << '1-100 ertekek duplazasa' // "" nem '' , a sor vegen hianyzik a ; es egy endl esetleg
    for (int i = 0;) // hibas ciklus : i < N_ELEMENTS ; i++
    {
        b[i] = i * 2; // igy 0-99 duplazza a szamokat
    }
    for (int i = 0; i; i++) // i < N_ELEMENTS, nem i
    {
        std::cout << "Ertek:" // az erteket nem irja ki , hianyzik a sor vegerol a ; es egy endl esetleg
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag; // atlagnal jobb lenne a double tipus , 0-val kell inicializalni, hogy ne valamilyen random ertek maradjon a valtozoban
    for (int i = 0; i < N_ELEMENTS, i++) // i++ elott ; nem sima ,
    {
        atlag += b[i] // hianyzo ;
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0; // hianyzik a b felszabaditasa
}
