#include <iostream>
#include <fstream>
#include <string>
#include <unistd.h>
#define MAX_PT_ENTRIES 32
#define LINE_LENGTH 100
#define MAX_ARGS 7
#define MAX_LENGTH 20
int main(int argc, char *argv[]){
    std::string UserInput;
    std::cout << "Shell379: ";
    std::cin >> UserInput;
    while(1){
        if(UserInput == "Exit"){
            break;
        }
        else if(UserInput == "Jobs"){}
        else if(UserInput == "Kill"){}
        else if(UserInput == "resume"){}
        else if(UserInput == "sleep"){}
        else if(UserInput == "suspend"){}
        else if(UserInput == "wait"){}
          
    }
    return 0; 
}