#ifndef TRACK_H
#define TRACK_H
#pragma once
#include <vector>

using namespace std;

class Track
{
public:
	vector < vector < bool > > beatList; //2D array which will store where notes have been selected
	
	vector < vector < bool > > getBeatList();
	Track(int tempo, int timeSig);
	void setTempo(int tempo);
	int getTempo();
	void beatTap(int instrument, int location);
	void clear();
	~Track();

private:
	int tempo;
	int timeSig;
	int NUM_INSTRUMENTS;
};
#endif
