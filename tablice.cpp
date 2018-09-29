#include <iostream>
#include <cmath>
#include <iomanip>

constexpr int rozmiar{10};
void wypelnijChoinke(char choinka[rozmiar][rozmiar+1]) {

    for (int indeksRz = 0; indeksRz < rozmiar; ++indeksRz) {

        for (int indeksKol = 0; indeksKol < rozmiar; ++indeksKol) {
            choinka[indeksRz][indeksKol] = '*';
        }
        choinka[indeksRz][rozmiar] = '\0';
    }
}
void wyswietlChoinke(char choinka[rozmiar][rozmiar+1]){
    constexpr int rzedyGwiazdki{4};
    char gwiazdka[rzedyGwiazdki][3+1] = {
            {'*',' ','*','\0'},
            {'*','*',' ','\0'},
            {'*','*',' ','\0'},
            {'*',' ','*','\0'},

    };
    for (int indRz =0; indRz<rzedyGwiazdki; ++indRz){
        std::cout<<gwiazdka[indRz]<<std::endl;
    }


    for(int indeksRz=0; indeksRz<rozmiar; ++indeksRz){
        std::cout<<choinka[indeksRz]<<std::endl;
    }
}


int main(){

//zadanie choinka


char choinka[rozmiar][rozmiar+1];
    wypelnijChoinke(choinka);
    wyswietlChoinke(choinka);





//    constexpr int rozmiarTabeli{20};


    //wyswietl kwadraty dla indeksu tablicy
//    int kwadraty[rozmiarTabeli];
//
//    for(int i =0; i < rozmiarTabeli; ++i ){
//        kwadraty[i] = pow(i,2);
//    }
//    for(int i = 0; i < rozmiarTabeli; ++i){
//        std::cout<<kwadraty[i]<<std::endl;
//    }



// wyswietl male litery w randze tablicy
//     char znaki[rozmiarTabeli];
//
//     for(int i =0; i < rozmiarTabeli; ++i){
//
//         znaki[i] = 97 + i;
//     }
//    for(int i = 0; i < rozmiarTabeli; ++i){
//        std::cout<<znaki[i]<<std::endl;
//   }

//sprawdz co sie stanie gdy chcesz zwrocic spoza zakresu tablicy
//    int kwadraty[rozmiarTabeli];
//    for(int i =0; i < 10000; ++i ){
//       kwadraty[i] = pow(i,2);
//    }
//    for(int i = 0; i < 100; ++i){
//        std::cout<<kwadraty[i]<<std::endl;
//    }


//tabliczka mnozenia 15x15

//    constexpr int rozmiar{15};
//    int tabelaMnozenia[rozmiar][rozmiar];
//
//    for(int indeksRzedu = 0; indeksRzedu < rozmiar; ++indeksRzedu){
//
//        for(int indeksKolumny = 0; indeksKolumny < rozmiar; ++ indeksKolumny){
//            tabelaMnozenia[indeksRzedu][indeksKolumny] = (indeksRzedu+1) * (indeksKolumny+1);
//
//
//        }
//
//    }
//
//    for(int indeksRzedu = 0; indeksRzedu < rozmiar; ++indeksRzedu){
//        std::cout<<std::setw(2)<<tabelaMnozenia[indeksRzedu][0];
//
//        for(int indeksKolumny = 1; indeksKolumny < rozmiar; ++ indeksKolumny){
//
//            std::cout<<std::setw(4)<<tabelaMnozenia[indeksRzedu][indeksKolumny];
//
//        }
//        std::cout<<std::endl;
//    }




}
