//Added by Adam Weizman, 2/20/2018
class Controller {
public:

	void playTrack() { //checks value of playing variable when play button is clicked in GUI. Accessed by main fxn.

	}

	void tempoSetter(int tempo) { //sets tempo via user input
		this.tempo = tempo;
	}

	int tempoGetter() { //returns tempo in bpm
		return tempo;
	}

	void playingSetter() { //sets play to be true or false. Accessed by GUI
		if (playing) {
			playing = false;
			
		}
		else {
			playing = true;
		}
		
	}
	bool playingGetter() { //returns status of play variable
		return play;
	}

private:
	const bool[][] track;
	int playheadIndex; //
	bool playing = false; //if play is true, track is playing. if false, stops at current position.
	int tempo = 100; //determines speed of playback in bpm. If stopped, tempo retains its value for future playback. 100 bpm is standard, used in CPR and "Staying Alive"
};
//Added by Adam Weizman, 2/20/2018
