#include <iostream>
#include <cmath>

bool czySumaKwadratow(int liczba) {

    bool sumaKwadratowZnaleziona = false;
    for(int i=1; i<sqrt(liczba); ++i) {
        for (int j = 1; j<sqrt(liczba); ++j) {
            if (i*i + j*j == liczba) {
                std::cout << "(" << i << "*" << i << ") + (" << j << "*" << j << ") = " << liczba << std::endl;
                sumaKwadratowZnaleziona = true;

            }


        }

    }
    if (sumaKwadratowZnaleziona == false) {
        std::cout << "Liczba nie posiada rozkladow ktorych zsumowane potegi zwroca podana liczbe\n";

    }
    return sumaKwadratowZnaleziona;


}



    int main(){
        int liczba;
        std::cout<<"Podaj liczbe dla ktorej chcesz sprawdzic mozliwe rozklady na sumy dwoch kwadratow.\n ";
        std::cin>>liczba;

        czySumaKwadratow(liczba);


    }


