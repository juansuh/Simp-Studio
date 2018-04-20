#include "Sound.h"
#include <Windows.h>
#include <MMsystem.h>
#define mciSendString
#pragma comment(lib, "Winmm.lib")

using namespace std;

Sound::Sound(int filetype)
{
	buffer = to_string(filetype);
}

void Sound::play(vector<bool> bitArray) {

	string playQueue = buffer;
	for (int i = 0; i < bitArray.size(); i++) {
		if (bitArray[i]) { playQueue = playQueue + "1"; }
		else             { playQueue = playQueue + "0"; }
	}
	playQueue = playQueue + ".wav";

	PlaySound(playQueue.c_str(), NULL, SND_SYNC);
}

Sound::~Sound()
{
}

int main(){
	return 0;
}

