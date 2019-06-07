//
//  main.cpp
//  helloWorld
//
//  Created by Admin on 6/3/19.
//  Copyright © 2019 Admin. All rights reserved.
//

#include <iostream>
#include <string>
#include <math.h>
using namespace std;

bool simulateDoorPick(bool willSwitch){
    const int doorChosen = rand() % 3;
    const int winningDoor = rand() % 3;
    if(willSwitch){
        return doorChosen != winningDoor;
    }else{
        return doorChosen == winningDoor;
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int sampleSize;
    string phrase = "What is your prefered sample size?" ;
    cout << phrase << endl;
    cin >> sampleSize;
    int switchWins = 0;
    int noSwitchWins = 0;
    for(int i = 0; i < sampleSize; i++){
        if(simulateDoorPick(true)) switchWins++;
        if(simulateDoorPick(false)) noSwitchWins++;
    }
    const double switchProportion = (double)switchWins/(double)sampleSize;
    const double noSwitchProportion = (double)noSwitchWins/(double)sampleSize;
    cout << "Switch Stats" << endl << "Proportion: " << switchProportion << endl << "No Switch Stats" << endl << "Proportion: " << noSwitchProportion << endl;
    return 0;
}



