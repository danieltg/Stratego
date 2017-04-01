#ifndef _GAMETRACKER_H_
#define _GAMETRACKER_H_

using namespace std;


class GameTracker {

public:
	bool isGameFinished();
	GameTracker() {}
	~GameTracker();
	
	void step();
	//void initGameTracker(House _house, KeyboardAlgo* _algo);
	

private:

	/*bool checkIfStepValid(Direction direction);
	void moveByDirection(Direction direction);
	void restartGameTracker();*/
};
#endif