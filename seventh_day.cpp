#include <iostream>
#include <string>
#include <algorithm>


void math(std::string entry,std::size_t equation){
    std::size_t equation2 = equation + 8;

    int num1 = stoi(entry.substr(equation2+1,1));
    int num2 = stoi(entry.substr(equation2+3,1));
    int result = stoi(entry.substr(equation2+5));
    char sign = entry[equation2+2];

    if(sign == '+'){

        int solution = num1 + num2;
        if(solution == result){
            std::cout<<"Gratulacje, prawidlowe rownanie.\n";
        }else
            std::cout<<"Prawidlowe rownanie to: "<<num1<<" + "<<num2<<" = "<<solution<<std::endl;
    }else if(sign == '-'){
        int solution1 = num1 - num2;
        if(solution1 == result){
            std::cout<<"Gratulacje. Prawidlowe dzialanie.\n";
        }else
            std::cout<<"Prawidlowe rownanie to:"<<num1<<" - "<<num2<<" = "<<solution1<<std::endl;
    }else
        std::cout<<"Sprawdzamy poprawnosc tylko dla + lub -.\n";
}
int main(){

    std::string entry;

    std::cout<<"Wpisz ciag znakow\n";
    getline(std::cin, entry);
    std::transform(entry.begin(),entry.end(),entry.begin(), ::tolower);

    std::size_t found = entry.find("hej");
    std::size_t found1 = entry.find("pa");
    std::size_t equation = entry.find("rownanie:");


    if(found != std::string::npos){
        std::cout<<"Dzien Dobry!\n";
    }
    else if(found1 != std::string::npos){
        std::cout<<"Do widzenia\n";
    }else if(equation != std::string::npos){

        math(entry,equation);
    }

    else
        std::cout<<"Ciag znakow wczytany\n";

}
