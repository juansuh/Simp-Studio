#include <iostream>
#include <vector>
#include "pch.h"
#include "Track1.h"

using namespace std;


Track1::Track1(int tempo, int timeSig)
{
	NUM_INSTRUMENTS = 6;
	this->tempo = tempo;
	this->timeSig = timeSig;
	
	//Time Signature values: 0 = 3/4, 1 = 4/4, 2 = 6/8

	//WARNING: number of instruments undefined so don't forget to set
	if (timeSig == 0) { //initializes the beat sequence based on the time signature
		beatList.resize(12);
		for (int i = 0; i < 12; i++) {
			for (int j = 0; j < NUM_INSTRUMENTS; j++) {
				beatList[i].push_back(false);
			}
		}
	}
	else if (timeSig == 1) {
		beatList.resize(16);
		for (int i = 0; i < 16; i++) {
			for (int j = 0; j < NUM_INSTRUMENTS; j++) {
				beatList[i].push_back(false);
			}
		}
	}
	else if (timeSig == 2) {
		beatList.resize(16);
		for (int i = 0; i < 12; i++) {
			for (int j = 0; j < NUM_INSTRUMENTS; j++) {
				beatList[i].push_back(false);
			}
		}
	}
}

void Track1::setTempo(int tempo) {
	this->tempo = tempo;
}

int  Track1::getTempo() {

	return tempo;
}

/**
* This method will check whether a selected square has already been selected
*/
void Track1::beatTap(int instrument, int location) {

	//each instrument will have an int assigned to it, which we will put in the .h file
	//for now assume there are 4 instruments assigned to 0,1,2, and 3

	if (instrument == 0) {
		for (int j = 0; j < this->beatList[instrument].size(); j++) {
			if (j == location) {
				this->beatList[instrument][location] = !beatList[instrument][location];
			}
		}
	}
	else if (instrument == 1) {
		for (int j = 0; j < beatList[instrument].size(); j++) {
			if (j == location) {
				beatList[instrument][location] = !beatList[instrument][location];
			}
		}
	}
	else if (instrument == 2) {
		for (int j = 0; j < beatList[instrument].size(); j++) {
			if (j == location) {
				beatList[instrument][location] = !beatList[instrument][location];
			}
		}
	}
	else if (instrument == 3) {
		for (int j = 0; j < beatList[instrument].size(); j++) {
			if (j == location) {
				beatList[instrument][location] = !beatList[instrument][location];
			}
		}
	}
	else if (instrument == 4) {
		for (int j = 0; j < beatList[instrument].size(); j++) {
			if (j == location) {
				beatList[instrument][location] = !beatList[instrument][location];
			}
		}
	}
	else if (instrument == 5) {
		for (int j = 0; j < beatList[instrument].size(); j++) {
			if (j == location) {
				beatList[instrument][location] = !beatList[instrument][location];
			}
		}
	}
}

vector < vector < bool > > Track1::getBeatList() { return beatList; }

void Track1::clear() {

	for (int i = 0; i < beatList.size(); i++) {
		for (int j = 0; j < beatList[0].size(); j++) {
			beatList[i][j] = false;
		}
	}
}

Track1::~Track1()
{
}
