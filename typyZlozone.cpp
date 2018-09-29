#include <iostream>
#include <cmath>
void wartosc(int& a){
    a+= 7;
}
int main(){

//  int a{3};
//  int& b{a};
//  std::cout<<"a = "<<a<<" b = "<<b<<std::endl;
//  std::cout<<"Podaj wartosc dla a\n";
//  std::cin>>a;
//  std::cout<<"a = "<<a<< " b = "<<b<<std::endl;

//int c{3};
//int& d{c};
//int& e{d};
//int& f{e};
//int& g{f};
//int& h{g};
//std::cout<<c<<" "<<d<<" "<<e<<" "<<f<<" "<<g<<" "<<h<<std::endl;
//c+= 7;
//std::cout<<c<<" "<<d<<" "<<e<<" "<<f<<" "<<g<<" "<<h<<std::endl;

//std::cout<<a<<std::endl;
//wartosc(a);
//std::cout<<a<<std::endl;


//zwykly string czyta do spacji
//std::string coto;
//std::cin>>coto;
//std::cout<<"coto = "<<coto<<std::endl;

//getline ignoruje spacje
std::string coto2;
getline(std::cin, coto2);
std::cout<<"coto2 = "<< coto2<<std::endl;
}
