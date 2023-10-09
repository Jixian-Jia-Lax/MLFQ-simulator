//
// Created by Jixian Jia on 2023-10-07.
//

#ifndef MLFQ_SIMULATOR_PROCESS_H
#define MLFQ_SIMULATOR_PROCESS_H
#include <cstdlib>
#include<iostream>

class Process {
    public:
        int name;
        int startTime;
        int runTime;
        int ioFrequency;
        int state; // 0 = ready, 1 = running, -1 = blocked
        int ioTime ;
        int completeTime;

        Process(int name, int startTime, int runTime, int ioFrequency);
        void issue_io(int timer);
        int getState(void);
        bool run(int timer, int quantum);
};


#endif //MLFQ_SIMULATOR_PROCESS_H
