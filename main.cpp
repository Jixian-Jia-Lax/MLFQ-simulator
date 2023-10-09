//
// Created by Jixian Jia on 2023-10-09.
//

#include "MLFQ.h"


int main(){

    int numOfLevels;
    cout << "Enter the number of levels: ";
    cin >> numOfLevels;

    int boostInterval;
    cout << "Enter the boot interval: ";
    cin >> boostInterval;

    int quantums[numOfLevels];
    int allotments[numOfLevels];

    cout << "Enter " << numOfLevels << " integers for quantums, separated by spaces:" << endl;
    for (int i = 0; i < numOfLevels; ++i) {
        cin >> quantums[i];
    }

    cout << "Enter " << numOfLevels << " integers for allotments, separated by spaces:" << endl;
    for (int i = 0; i < numOfLevels; ++i) {
        cin >> allotments[i];
    }

    //initialize a new MLFQ
    MLFQ myMLFQ = new MLFQ(numOfLevels,allotments,quantums,boostInterval);

    int numOfJobs;
    cout << "Enter the number of jobs: ";
    cin >> numOfJobs;

    Process jobs[numOfJobs];

    int startTime;
    int runTime;
    int ioFrequency;

    for(int i = 0; i<numOfJobs; i++){
        cout << "Enter the start time for job" << i<< endl;
        cin >> startTime;
        cout << "Enter the runt time for job" << i<< endl;
        cin >> runTime;
        cout << "Enter the io frequency for job" << i<< endl;
        cin >> ioFrequency;

        job[i] = new Process(i,startTime,runTime,ioFrequency);
        myMLFQ.enqueue(Process)
    }
    for(int timer = 0, timer< 10, i++){
        myMLFQ.run(timer);
    }

    return 0;





}