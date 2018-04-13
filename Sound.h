#pragma once
#include <string>

using namespace std;

class Sound
{
public:
	Sound(string fileName);
	void play();
	~Sound();

private:
	string buffer;
};

