#include <iostream>
#include <cmath>

bool czySumaKwadratow(int liczba) {
    for(int i=1; i*i <= liczba; ++i) {
        for (int j = i; j * j <= liczba; ++j) {
            if (i*i + j*j == liczba) {
                std::cout << "(" << i << "*" << i << ") + (" << j << "*" << j << ") = " << liczba << std::endl;
                return true;
            }


        }

    }
    std::cout<<"Liczba nie posiada rozkladow ktorych zsumowane potegi zwroca podana liczbe\n";
    return false;


}



    int main(){
        int liczba;
        std::cout<<"Podaj liczbe dla ktorej chcesz sprawdzic mozliwe rozklady na sumy dwoch kwadratow.\n ";
        std::cin>>liczba;

        czySumaKwadratow(liczba);


    }


