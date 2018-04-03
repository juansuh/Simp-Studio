#include "Track.h"
#include <iostream>
#include <vector>


using namespace std;


Track::Track(int tempo, int timeSig)
{
	this->tempo = tempo;
	this->timeSig = timeSig; 
	beatList.resize(NUM_INSTRUMENTS);
	//Time Signature values: 0 = 3/4, 1 = 4/4, 2 = 6/8

	//WARNING: number of instruments undefined so don't forget to set
	if (timeSig == 0) { //initializes the beat sequence based on the time signature
		for (int i = 0; i < NUM_INSTRUMENTS; i++) {
			for (int j = 0; j < 12; j++) {
				beatList[i].push_back(false);
			}
		}
	}
	else if (timeSig == 1) {
		for (int i = 0; i < NUM_INSTRUMENTS; i++) {
			for (int j = 0; j < 16; j++) {
				beatList[i].push_back(false);
			}
		}
	}
	else if (timeSig == 2) {
		for (int i = 0; i < NUM_INSTRUMENTS; i++) {
			for (int j = 0; j < 12; j++) {
				beatList[i].push_back(false);
			}
		}
	}
}

void Track::setTempo(int tempo) {
	this->tempo = tempo;
}

int  Track::getTempo() {

	return tempo;
}

/**
* This method will check whether a selected square has already been selected
*/
void Track::beatTap(int instrument, int location) {

	//each instrument will have an int assigned to it, which we will put in the .h file
	//for now assume there are 4 instruments assigned to 0,1,2, and 3

	if (instrument == 0) {
		for (int j = 0; j < beatList[instrument].size(); j++) {
			if (j == location) {
				if (!beatList[instrument][location]) { beatList[instrument][location] = true; }
				else { beatList[instrument][location] = false; }
			}
		}
	}
	else if (instrument == 1) {
		for (int j = 0; j < beatList[instrument].size(); j++) {
			if (j == location) {
				if (!beatList[instrument][location]) { beatList[instrument][location] = true; }
				else { beatList[instrument][location] = false; }
			}
		}
	}
	else if (instrument == 2) {
		for (int j = 0; j < beatList[instrument].size(); j++) {
			if (j == location) {
				if (!beatList[instrument][location]) { beatList[instrument][location] = true; }
				else { beatList[instrument][location] = false; }
			}
		}
	}
	else if (instrument == 3) {
		for (int j = 0; j < beatList[instrument].size(); j++) {
			if (j == location) {
				if (!beatList[instrument][location]) { beatList[instrument][location] = true; }
				else { beatList[instrument][location] = false; }
			}
		}
	}
}

void Track::clear() {

	for (int i = 0; i < beatList.size(); i++) {
		for (int j = 0; j < beatList[0].size(); j++) {
			beatList[i][j] = false;
		}
	}
}

int main() {
	
	return 0;
}

Track::~Track()
{
}
