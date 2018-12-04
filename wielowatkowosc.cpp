#include <iostream>
#include <ctime>
#include <chrono>
#include <thread>
#include <string>
#include <mutex>


int getRandom(int max){
    srand(time(NULL));
    return rand() % max;
}

std::string getTime(){
    auto nowTime = std::chrono::system_clock::now();
    std::time_t sleepTime = std::chrono::system_clock::to_time_t(nowTime);
    return std::ctime(&sleepTime);
}



std::mutex accountLock;

//SYMULACJA WYCIAGANIA PIENIEDZY Z KONTA PRZEZ ROZNE WATKI
void getMoney(int id, double withdrawal, double& accountBalance){
    std::lock_guard<std::mutex> lock(accountLock);
    std::this_thread::sleep_for(std::chrono::seconds(3));
    std::cout<< id << " tries to withdraw $"<<withdrawal <<" on "<<getTime()<<"\n";
    if((accountBalance - withdrawal) >= 0){
        accountBalance -= withdrawal;
        std::cout<<"New balance is "<<accountBalance<<"\n";
    }else{
        std::cout<<"Not enough money in account\n";
        std::cout<< "Current balance is $"<<accountBalance<<"\n";
    }
}

//   FUNKCJA KTORA POZWALA NA SPRAWDZENIE CZASU USPIENIA I PRZEBUDZENIA WATKU
//void executeThread(int id){
//    auto nowTime = std::chrono::system_clock::now();
//    std::time_t sleepTime = std::chrono::system_clock::to_time_t(nowTime);
//
//
//    std::cout<< "Thread "<<id<< " Sleep time: "<<std::ctime(&sleepTime)<<"\n";
//
//    std::this_thread::sleep_for(std::chrono::seconds(getRandom(3)));
//    nowTime = std::chrono::system_clock::now();
//    sleepTime = std::chrono::system_clock::to_time_t(nowTime);
//
//    std::cout<< "Thread "<<id<< " Awake time: "<<std::ctime(&sleepTime)<<"\n";
//}
int main(){


//    WATKI UTWORZONE DLA WYKORZYSTANIA FUNKCJI executeThread
//    std::thread th1 (executeThread, 1);
//    th1.join();
//    std::thread th2 (executeThread, 2);
//    th2.join();

    double accountBalance = 100;

    std::thread threads[10];
    for(int i = 0; i <10; ++i){
        threads[i] = std::thread(getMoney, i, 15, std::ref(accountBalance));
    }
    for (auto &thread : threads) {
        thread.join();
    }

}