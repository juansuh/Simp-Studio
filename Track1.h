#pragma once
#include <vector>
using namespace std;

class Track1
{
public:
	vector < vector < bool > > beatList; //2D array which will store where notes have been selected

	vector < vector < bool > > getBeatList();
	Track1(int tempo, int timeSig);
	void setTempo(int tempo);
	int getTempo();
	void beatTap(int instrument, int location);
	void clear();
	~Track1();

private:
	int tempo;
	int timeSig;
	int NUM_INSTRUMENTS;
};


