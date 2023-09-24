#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS]; // N_ELEMENTS NELEMENTS helyett
    std::cout << "1-100 ertekek duplazasa" << std::endl; // "" nem '' , a sor vegen hianyzik a ; es egy endl esetleg
    for (int i = 0; i < N_ELEMENTS; i++) // hibas ciklus : i < N_ELEMENTS ; i++
    {
        b[i] = (i+1) * 2; // igy 0-99 duplazza a szamokat
    }
    for (int i = 0; i < N_ELEMENTS; i++) // i < N_ELEMENTS, nem i
    {
        std::cout << i+1 << ". Ertek : " << b[i] << std::endl; // az erteket nem irja ki , hianyzik a sor vegerol a ; es egy endl esetleg
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    double atlag = 0; // atlagnal jobb lenne a double tipus , 0-val kell inicializalni, hogy ne valamilyen random ertek maradjon a valtozoban
    for (int i = 0; i < N_ELEMENTS; i++) // i++ elott ; nem sima ,
    {
        atlag += b[i]; // hianyzo ;
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    delete[] b; // hianyzik a b tomb felszabaditasa
    std::cout << "a kod lefutott" << std::endl;
    return 0; 
}
