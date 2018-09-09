#include <iostream>
#include <cmath>

int main(){
   double a, b, c;
    std::cout<<"Podaj cyfry a, b i c dla funkcji kwadratowej ktorej miejsca zerowe chcesz sprawdzic."<<std::endl;
    std::cin>>a>>b>>c;

    if(a == 0){
        std::cout<<"Funkcja jest liniowa"<< std::endl;
        if(b == 0){
            if( c == 0){
                std::cout<<"Funkcja ma nieskonczenie wiele miejsc zerowych"<< std::endl;
            }
            else{
                std::cout<<"Funkcja nie ma miejsc zerowych"<<std::endl;
            }
        }
        std::cout<<"Miejsce zerowe to: "<< -c/b<< std::endl;
        return 0;
    }




    double d{pow(b,2)- 4*a*c};



    if(d == 0) {
        std::cout<<"Ta funkcja kwadratowa ma jedno miejsce zerowe. Miejsce zerowe to: "<<(-b / (2 *a))<<std::endl;

    }
    else if(d > 0) {
        std::cout<<"Ta funkcja ma dwa miejsca zerowe."<<std::endl<<"Pierwsze miejsce zerowe to: "<< (-b - sqrt(d)) / (2*a)
        <<std::endl<<"Drugie miejsce zerowe to : "<< ((-b + sqrt(d)) / (2 *a))<<std::endl;
    }
    else {
        std::cout<<"Ta funkcja nie ma miejsc zerowych"<<std::endl;
    }

    return 0;
}


