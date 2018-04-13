#include "Sound.h"
#include <Windows.h>
#include <MMsystem.h>
#define mciSendString
#pragma comment(lib, "Winmm.lib")

using namespace std;

Sound::Sound(string fileName)
{
	buffer = fileName;
}

void Sound::play() {
	PlaySound(buffer.c_str(), NULL, SND_SYNC);
}

Sound::~Sound()
{
}

