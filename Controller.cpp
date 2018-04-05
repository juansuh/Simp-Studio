//Added by Adam Weizman, 2/20/2018
class Controller {
public:

	void playTrack(); //checks value of playing variable when play button is clicked in GUI. Accessed by main fxn.



	void tempoSetter(int tempo); //sets tempo via user input

	int tempoGetter(); //returns tempo in bpm

	void playingSetter(); //sets play to be true or false based on current status of play variable. Accessed by GUI
		
	bool playingGetter(); //returns status of play variable


private:
	const bool[][] track;
	int playheadIndex; //
	bool playing = false; //if play is true, track is playing. if false, stops at current position.
	int tempo = 100; //determines speed of playback in bpm. If stopped, tempo retains its value for future playback. 100 bpm is standard, used in CPR and "Staying Alive"
};

void Controller::tempoSetter(int tempo) {
	this.tempo = tempo;
}

int Controller::tempoGetter() {
	return tempo;
}

bool Controller::playingGetter() {
	return play;
}

void Controller::playingSetter() {
	if (playing) {
		playing = false;

	}
	else {
		playing = true;
	}
}

void Controller::playTrack() {
	if (Controller::playingGetter()) { //may need to be fixed.
		//if play button is already playing, stop
	}
	else {
		//if play button is not playing, start playing
	}
}
//Added by Adam Weizman, 2/20/2018
