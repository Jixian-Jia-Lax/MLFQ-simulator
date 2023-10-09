//
// Created by Jixian Jia on 2023-10-07.
//

#include "Process.h"

Process::Process(int name, int startTime, int runTime, int ioFrequency) {
    this->name = name;
    this->startTime = startTime;
    this->runTime = runTime;
    this->ioFrequency = ioFrequency;
    this->state = 0;
    this->completeTime = 0;
    this->ioTime = 0; //default
}

void Process::issue_io(int timer) {
    this->state = -1;
    this->ioTime ++;
    std::cout << "Job" << this->name<< "issuing IO at time" << timer <<std::endl;
}

// true for a successful run
// false for not
bool Process::run(int timer, int quantum) {
    if (this->state == -1){
        return false;
    }
    if(this->startTime< timer){
        return false;
    }
    int randomNumber = rand() %100;

    if (randomNumber < ioFrequency) {
        // issue IO
        issue_io(int timer);
        return true;
    }
    else{
        this->runTime += time;
        std::cout << "Job" << this->name<< "is running" << std::endl;
        return true;
    }

}
