//Added by Adam Weizman, 2/20/2018
//Edited by Geneva Anderson on 4-11-2018
#include <vector>
using namespace std;
class Controller
{
public:
	void playTrack(); //checks value of playing variable when play button is clicked in GUI. Accessed by main fxn.
	void setTempo(int tempo); //sets tempo via user input
	bool setPlaying(); //returns status of play variable
	void controlSetTrack(vector<vector<bool>> track);
	int getBeat();
	void stop();
private:
	vector<vector<bool>> track;
	int beat;
	int instru;
	bool playing = false; //if play is true, track is playing. if false, stops at current position.
	int tempo = 100; //determines speed of playback in bpm. If stopped, tempo retains its value for future playback. 100 bpm is standard, used in CPR and "Staying Alive"
};
void Controller::controlSetTrack(vector<vector<bool>> track)
{
	this->track = track;
}
void Controller::setTempo(int tempo)
{
	this->tempo = tempo;
}
int getBeat()
{
		return beat;
}
void stop()
{
		beat = 0;
		instru = 0;
		playing = false;
}
void Controller::setPlaying()
{
	if (!playing)
	{
		playing = true;
	}
	else
	{
		playing = false;
	}
}
void Controller::playTrack()
{
	if (playing)
	{
			for(beat; beat < track.size(); beat++)
			{
					
					for(instru; instru <track.at(beat).size(); instru++)
					{

					}
			}
	}
	else {

	}
}
//Added by Adam Weizman, 2/20/2018
//G-Q: Do we need a deconstructor?
