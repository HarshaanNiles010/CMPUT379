#include <iostream>
#include <fstream>
#include <string.h>
#include <unistd.h>

#define MAX_PT_ENTRIES 32
#define LINE_LENGTH 100
#define MAX_ARGS 7
#define MAX_LENGTH 20

void getjobs(){
    int pc = fork();
    if(pc < 0){
        std::cout<< "Segmentation" << std::endl;
    }
    else if(pc == 0){
        std::cout << getpid() << std::endl;
    }
    else{
        std::cout << getpid() << std::endl;
    }
}
int killJobs(int pid){
    std::cout << "pid recieved is : " <<pid;
    return 0;
}
int resumeJobs(int pid){
    std::cout << "Pid recieved is: " << pid;
    return 0;
}
int main(int argc, char *argv[]){
    std::string UserInput;
    std::cout << "Shell379: " ;
    int pid = 0;
    std::cin >> UserInput >> pid;
    if(UserInput == "jobs"){ getjobs();}
    else if(UserInput == "kill"){
        int killpid = 0;
        //std::cout << "Enter job pid: "; 
        //std::cin >> pid; 
        killpid = killJobs(pid);
        if(killpid == 0){
            std::cout << "\nJob killed" << std::endl;
        }
        else{
            std::cout << "Failed to kill the jobs" << std::endl;
        }
    }
    else if(UserInput == "resume"){ 
        int resumepid = 0;
        //std::cout <<"enter job pid: ";
        //std::cin >>  pid;
        resumeJobs(pid);
    }
    /*int rc = fork();
    if(rc < 0){
        std:: cout << "Failed to create child" ;
    }    
    else if(rc==0){
        std::cout << "The child ID is:" << getpid() << std::endl; 
    }
    else{
        std::cout << "The parent ID is:" << getpid() << std::endl;
    }*/
    /*while(1){   
    }*/
    return 0; 
}