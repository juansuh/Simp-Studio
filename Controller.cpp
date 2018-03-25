//Added by Adam Weizman, 2/20/2018
class Controller {
public:
	void resetSetter() { //sets sets playback to beginning of track
		
	}

	void tempoSetter(int tempo) { //sets tempo via user input
		this.tempo = tempo;
	}

	int tempoGetter() { //returns tempo in bpm
		return tempo;
	}

	void playSetter() { //sets play to be true or false
		if (play) {
			play = false;
			
		}
		else {
			play = true;
		}
		
	}
	bool playGetter() { //returns status of play variable
		return play;
	}

private:
	bool play = false; //if play is true, track is playing. if false, stops at current position.
	int tempo = 100; //determines speed of playback in bpm. If stopped, tempo retains its value for future playback. 100 bpm is standard, used in CPR and "Staying Alive"
};
//Added by Adam Weizman, 2/20/2018
