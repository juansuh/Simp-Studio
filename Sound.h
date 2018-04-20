#pragma once
#include <string>
#include <vector>

using namespace std;

class Sound
{
public:
	Sound(int fileType);
	void play(vector<bool> bitArray);
	~Sound();

private:
	string buffer;
};

