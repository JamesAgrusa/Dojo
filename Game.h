class Game
{
public:
	// Variables ( Has A )
	int gamePoints{};
	int victoryPoints{};


	// constructor
	Game();

	// functions ( Can Do )
	void instructions();
	void runGame();
	char playerSettings();
	int roundCount();
	void gamePlay();
	void gameDecision();
	void gestureComparrisonPlayers();
	void gestureComparrisonVsComputer();
	char playAgain();

};