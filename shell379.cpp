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
int suspendJobs(int pid){
    std::cout << "Pid recieved is: " << pid;
    return 0;
}
int waitJobs(int pid){
    std::cout << "Pid recieved is: " << pid;
    return 0;
}
int main(int argc, char *argv[]){
    std::string UserInput;
    std::cout << "Shell379: " ;
    int pid = 0;
    std::cin >> UserInput >> pid;
    if(UserInput == "jobs"){ getjobs();}
    else if(UserInput == "kill" && pid != 0){
        int killpid = 0;
        killpid = killJobs(pid);
        if(killpid == 0){
            std::cout << "\nJob killed" << std::endl;
        }
        else{
            std::cout << "Failed to kill the jobs" << std::endl;
        }
    }
    else if(UserInput == "resume" && pid != 0){ 
        int resumepid = 0;
        resumepid = resumeJobs(pid);
        if(resumepid == 0){
            std::cout << "\n job resumed" << std::endl;
        }
        else{
            std::cout << "Failed to resume the jobs" <<std::endl;
        }
    }
    else if(UserInput == "suspend" && pid != 0){
        int suspendpid = 0;
        suspendpid = suspendJobs(pid);
        if(suspendpid == 0){
            std::cout << "\n job suspended" << std::endl;
        }
        else{
            std::cout << "Failed to suspend the jobs" <<std::endl;
        }
    }
    else if(UserInput == "wait" && pid != 0){
        int waitpid = 0;
        waitpid = waitJobs(pid);
        if(waitpid == 0){
            std::cout << "\n job put on wait" << std::endl;
        }
        else{
            std::cout << "Failed to put the jobs on hold" <<std::endl;
        }
    }
    else if(UserInput == "exit" && (pid == '\n' || pid == 0)){
        return 0;
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