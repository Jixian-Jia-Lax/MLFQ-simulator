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

Process ProcessQueue::dequeue() {
    return this->myQueue.pop().first;
}

bool ProcessQueue::run() {

}