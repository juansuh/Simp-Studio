#include "Sound.h"
#include <mmsystem.h>
#include <mciapi.h>
#define PlaySound 
#pragma comment(lib, "winmm.lib")

using namespace std;

Sound::Sound(string fileName)
{
	buffer = fileName;
	filePath = ""; //this is where the filepath will go, where all sound files are stored
}

void Sound::play() {
	PlaySound(filePath + buffer, NULL, SND_FILENAME);
}

Sound::~Sound()
{
}
