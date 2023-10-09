//
// Created by Jixian Jia on 2023-10-08.
//

#ifndef MLFQ_SIMULATOR_MLFQ_H
#define MLFQ_SIMULATOR_MLFQ_H
#include <array>
#include "ProcessQueue.h"
#


class MLFQ {
public:
    int numOfLevels;
    array<ProcessQueue,numOfLevels> arrOfQueues;
    int boostInterval;
    int timer;

    MLFQ(int numOfLevels, int allotments[], int quantums[],int boostInterval);
    void enqueue(Process);
    void reducePriority(Process,int);
    void boost();
    void run(int);

};


#endif //MLFQ_SIMULATOR_MLFQ_H
