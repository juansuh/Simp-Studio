//Added by Adam Weizman, 2/20/2018
//Edited by Geneva Anderson on 4-11-2018
class Controller {
public:

	void playTrack(); //checks value of playing variable when play button is clicked in GUI. Accessed by main fxn.
	void setTempo(int tempo); //sets tempo via user input
	bool setPlaying(); //returns status of play variable


private:
	const bool[][] track;
	int playheadIndex; //
	bool playing = false; //if play is true, track is playing. if false, stops at current position.
	int tempo = 100; //determines speed of playback in bpm. If stopped, tempo retains its value for future playback. 100 bpm is standard, used in CPR and "Staying Alive"
};

void Controller::setTempo(int tempo)
{
	this.tempo = tempo;
}
void Controller::setPlaying()
{
	if (playing) {
		playing = false;

	}
	else {
		playing = true;
	}
}
void Controller::playTrack() {
	if (playing) { //may need to be fixed.
		//if play button is already playing, stop
	}
	else {
		//if play button is not playing, start playing
	}
}
//Added by Adam Weizman, 2/20/2018
//G-Q: Do we need a deconstructor?
