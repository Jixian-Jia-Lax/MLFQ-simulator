//
// Created by Jixian Jia on 2023-10-07.
//

#ifndef MLFQ_SIMULATOR_QUEUE_H
#define MLFQ_SIMULATOR_QUEUE_H

#include <queue>
#include <utility>
#include "Process.h"
typedef pair<Process,int> processInQueue

class ProcessQueue {
    public:
        queue<processInQueue> myQueue;
        int quantum;
        int allotment;
        int priority;

        ProcessQueue(int priority,int quantum, int allotment);
        bool isEmpty();
        bool run(int timer)
        void enqueueOldProcess(processInQueue,int);
        void enqueueNewProcess(Process);
        processInQueue dequeue(void);
};


#endif //MLFQ_SIMULATOR_QUEUE_H
