//
// Created by Jixian Jia on 2023-10-07.
//

#include "ProcessQueue.h"


ProcessQueue::ProcessQueue(int priority, int quantum, int allotment) {
    this->priority = priority;
    this->quantum = allotment;
    this->allotment = allotment;

}

bool ProcessQueue::isEmpty() {
    return this->myQueue.empty();
}

void ProcessQueue::enqueueOldProcess(processInQueue oldProcess, int newAllotment){
    oldProcess.second = newAllotment;
    this->myQueue.push(oldProcess);
}

void ProcessQueue::enqueueNewProcess(Process) {
    //make a new processInQueue
    processInQueue newProcessInQueue;
    newProcessInQueue.first = process;
    newProcessInQueue.second = this->allotment;
    this->myQueue.push(newProcessInQueue);
}

processInQueue ProcessQueue::dequeue() {
    return this->myQueue.pop();
}

bool ProcessQueue::run(int timer) {
    if (this->isEmpty())
        return false;
    int counter = 0;
    int size = myQueue.size()
    processInQueue temp;
    while(counter < size){
        temp = this->dequeue();
        if (temp.second < allotment) {
            if(temp.first.run(timer,quantum)){
                enqueueOldProcess(temp,temp.second - quantum);
                return true;
            }
            else{
                enqueueOldProcess(temp,temp.second);
                counter ++;
            }
        }
        else{
            //move this process to lower priority

            //todo
        }
    }
    return false;
}