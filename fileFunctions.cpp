#include<string>
#include <processenv.h>
#include <dirent.h>
#include <iostream>
#include <fstream>




std::string workingdir(){
    char buf[256];
    GetCurrentDirectoryA(256,buf);
    return std::string(buf) + std::string(1,'\\');
   }

void printWhatsInADir(){
    DIR *dir;
    struct dirent *ent;
    if((dir = opendir(workingdir().c_str()))!= nullptr){
        while((ent = readdir(dir))!= nullptr){
            printf("%s\n",ent->d_name);
        }
        closedir(dir);
    }
    else{
        std::cout<<"Couldn't print what's in "<<workingdir()<<std::endl;
    }
}

void writeInAFile(std::string filename){
    std::ofstream file(filename,std::ios::out | std::ios::app);
    std::string text;
    if(file.is_open()){
        std::cout<<"Write what you want to add to your file: \n";
        std::cin >> text;
        file <<text<<std::endl;
        file.close();
    }
    else
    {
        std::cout<<"Couldn't open this file to change it"<<std::endl;
    }
}

void readAFile(const std::string& filename){

    std::ifstream file(filename);
    if(!file.is_open()){
        std::cout<<"Couldn't open this file."<<std::endl;
        return;
    }
    char data[256];
    while(!file.eof()){
        file.getline(data,255);
        std::cout<<data<<std::endl;
    }
    file.close();
}

void removeAFile(std::string filename){
    if(std::remove(filename.c_str()) != 0){
        std::cout<<"Couldn't remove this file."<<std::endl;
    }
    else {
        std::cout<<"Removed file random_file.txt"<<std::endl;
    }
}

void readSpecificValues(const std::string& filename){
    std::ifstream file(filename);
    if (!file.is_open()) {
        std::cout << "couldn't open the file" << std::endl;
        return;
    }
    std::string text;
    double value;

    while(!(file>>std::ws).eof()){


        if (std::isdigit(file.peek())) {
            file >> value;
            std::cout << "Value " << value << " was read from file" << std::endl;
        }
        else {
            file >> text;
            std::cout << "Text: " << text << " was read from file" << std::endl;
        }

    }

    file.close();
}
std::string giveAName(){
    std::string filename;
    std::cout<<"Please give a name of a file you would like to work on.\n";
    std::getline(std::cin,filename);
    return filename;
}
void interface(){
    workingdir();
    int choice{0};
    std::string filename = giveAName();
    do{

        std::cout<<"What would you like to do?\n Choose: \n";
        std::cout<<"1 to print what files are in your working directory\n";
        std::cout<<"2 to read chosen file\n";
        std::cout<<"3 to write in a chosen file\n";
        std::cout<<"4 to read specific values in a chosen file\n";
        std::cout<<"5 to remove a specific file\n";
        std::cout<<"6 to quit\n";
        std::cin>>choice;

        switch(choice){

        case 1: printWhatsInADir();
                break;
        case 2: readAFile(filename);
                break;
        case 3: writeInAFile(filename);
                break;
        case 4: readSpecificValues(filename);
                break;
        case 5: removeAFile(filename);
                break;
        case 6: std::cout<<"Have a good day!\n";
                break;
        default: std::cout<<"Please choose one of the options\n";
        }
    } while(choice != 6);
}

int main(){

    interface();

}