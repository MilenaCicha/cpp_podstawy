#include <iostream>
#include <cmath>

// alternatywne rozwiazanie przy uzyciu Twierdzenia Fermata o sumie dwoch kwadratow

bool czySumaKwadratow(int liczba){

    for(int i = 2; i*i <= liczba; ++i){
        int policz{1};

        if(liczba % i == 0){

            while (liczba % i == 0) {
                ++policz;
                liczba /= i;
                std::cout<<"liczba "<<liczba<<" policz "<<policz<<" i "<<i<<std::endl;
            }
        }
        if(i % 4 == 3 && policz % 2 != 0){

            return false;
        }
    }

return liczba % 4 != 3;

}






int main(){

    int liczba;
    std::cout<<"Podaj liczbe dla ktorej chcesz sprawdzic mozliwe rozklady na sumy dwoch kwadratow.\n";
    std::cin>>liczba;
    if (czySumaKwadratow(liczba)){
        std::cout<<"Liczba moze byc utworzona z sumy dwoch kwadratow\n";

    }else {
        std::cout<<"Podana liczba nie moze zostac utworzona z sumy kwadratow dwoch liczb calkowitych\n";
    }


}

