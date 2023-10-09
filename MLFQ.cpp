//
// Created by Jixian Jia on 2023-10-08.
//

#include "MLFQ.h"


MLFQ::MLFQ(int numOfLevels, int *allotments, int *quantums, int boostInterval) {
    this->numOfLevels = numOfLevels;
    this->boostInterval = boostInterval;
    this->timer = 0;

    for(int i =0; i< numOfLevels; i++){
        arrOfQueues[i] = new ProcessQueue(i,quantums[i], allotments[i]);
    }

}

void MLFQ::reducePriority(Process p,int currPriority) {
    if(currPriority == numOfLevels){
        return;
    }
    else{
        arrOfQueues[currPriority+1].enqueueNewProcess(p);
    }
    return;
}

void MLFQ::boost() {
    for(int i =0; i<numOfLevels; i++){
        while(!arrOfQueues[i].isEmpty()){
            arrOfQueues[0].enqueueNewProcess(arrOfQueues[i].dequeue());
        }
    }
    return;
}

void MLFQ::enqueue(Process p) {
    this->arrOfQueues[0].enqueueNewProcess(p);
    return;
}

void MLFQ::run(int timer) {
    int i=0;
    while((this->arrOfQueues[i].run(timer) == false) &&( i<this.numOfLevels)){
        i++;
    }
    return;
}