#include<string>
#include <ctime>
#include <fstream>
#include<iostream>
using namespace std;

//original version
/*cout << "          _______  _        _______  _______  _______  _______   _________ _______   _________ _______  _______  _______  _______  _______  ______           " << endl;
  cout << "|\     /|(  ____ \( \      (  ____ \(  ___  )(       )(  ____ \  \__   __/(  ___  )  \__    _/(  ____ \(  ___  )(  ____ )(  ___  )(  ____ )(  __  \ |\     /|" << endl;
  cout << "| )   ( || (    \/| (      | (    \/| (   ) || () () || (    \/     ) (   | (   ) |     )  (  | (    \/| (   ) || (    )|| (   ) || (    )|| (  \  )( \   / )"<< endl;
  cout << "| | _ | || (__    | |      | |      | |   | || || || || (__         | |   | |   | |     |  |  | (__    | |   | || (____)|| (___) || (____)|| |   ) | \ (_) / " << endl;
  cout << "| |( )| ||  __)   | |      | |      | |   | || |(_)| ||  __)        | |   | |   | |     |  |  |  __)   | |   | ||  _____)|  ___  ||     __)| |   | |  \   /  " << endl;
  cout << "| || || || (      | |      | |      | |   | || |   | || (           | |   | |   | |     |  |  | (      | |   | || (      | (   ) || (\ (   | |   ) |   ) (   " << endl;
  cout << "| () () || (____/\| (____/\| (____/\| (___) || )   ( || (____/\     | |   | (___) |  |\_)  )  | (____/\| (___) || )      | )   ( || ) \ \__| (__/  )   | |   " << endl;
  cout << "(_______)(_______/(_______/(_______/(_______)|/     \|(_______/     )_(   (_______)  (____/   (_______/(_______)|/       |/     \||/   \__/(______/    \_/   " << endl;*/



int main() {
	
	srand(time(NULL));

	string arr[30];
	string questionsString;

	bool question1Answered = false;
	bool question2Answered = false;
	bool question3Answered = false;

	int questionsLeft = 10;
	string selectedQuestion;
	int correctAnswers = 0;
	int money;
	int arrPosition = 0;
	int questionNumber;
	string question;
	string answer;
	string answer1;
	string playerAnswer;
	
	ifstream questions("JEOPARDY_QUESTIONS.txt");
	
	if (questions.is_open()) {
		
		while (getline(questions, arr[arrPosition]))
		{
			
			//cout << arr[arrPosition] << endl;
			
			arrPosition++;
		}
		questions.close();
		
	}

	else {  cout << "Unable to load file JEOPARODY_QUESTIONS.txt" << endl; }
	

	
	
	//version that displays correctly
	cout << "                              _______  _        _______  _______  _______  _______   _________ _______   _________ _______  _______  _______  _______  _______  ______           " << endl;
	cout << "                    |\\     /|(  ____ \\( \\      (  ____ \\(  ___  )(       )(  ____ \\  \\__   __/(  ___  )  \\__    _/(  ____ \\(  ___  )(  ____ )(  ___  )(  ___  )(  __  \\ |\\     /|" << endl;
	cout << "                    | )   ( || (    \\/| (      | (    \\/| (   ) || () () || (    \\/     ) (   | (   ) |     )  (  | (    \\/| (   ) || (    )|| (   ) || (   ) || (  \\  )( \\   / )" << endl;
	cout << "                    | | _ | || (__    | |      | |      | |   | || || || || (__         | |   | |   | |     |  |  | (__    | |   | || (____)|| (___) || (____)|| |   ) | \\ (_) / " << endl;
	cout << "                    | |( )| ||  __)   | |      | |      | |   | || |(_)| ||  __)        | |   | |   | |     |  |  |  __)   | |   | ||  _____)|  ___  ||     __)| |   | |  \\   /  " << endl;
	cout << "                    | || || || (      | |      | |      | |   | || |   | || (           | |   | |   | |     |  |  | (      | |   | || (      | (   ) || (\\ (   | |   ) |   ) (   " << endl;
	cout << "                    | () () || (____/\\| (____/\\| (____/\\| (___) || )   ( || (____/\\     | |   | (___) |  |\\_)  )  | (____/\\| (___) || )      | )   ( || ) \\ \\__| (__/  )   | |   " << endl;
	cout << "                    (_______)(_______/(_______/(_______/(_______)|/     \\|(_______/     )_(   (_______)  (____/   (_______/(_______)|/       |/     \\||/   \\__/(______/    \\_/   " << endl;


	cout << "Welcome To Jeoparody" << endl;

	cout << "Please Full-Screen The Game" << endl;

	while (1) {
		//exit game if all questions have been answered
		if (questionsLeft == 0) {

			cout << "Thank you for playing Jeopardy, and, we'll see you next week!" << endl;

			return 0;

		}
		//collect input
		cout << "Would You Like A Question?(y/n) ";
		cin >> selectedQuestion;
		
		if (selectedQuestion == "y") {
			

			questionNumber = 0;
			
			questionNumber = rand() % 10;
			
			questionNumber = questionNumber * 3;

			question = arr[questionNumber];
			
			answer = arr[questionNumber + 1];
			
			answer1 = arr[questionNumber + 2];
			
			cout << question << endl;

			cout << "What Is: ";
			
			cin.ignore();
			getline(cin, playerAnswer);

			if(playerAnswer == answer || playerAnswer == answer1) {
			
				cout << "Congradulations You Answered Correctly" << endl;
				correctAnswers++;


			}

			else {
			
				cout << "Oh, that's not the correct answer. The correct answer was " << answer << endl;

			}

			questionsLeft--;

		}
	
		
		
		//tell user if question selection input is invalid
		else {
		
			cout << "Invalid Input" << endl;

			selectedQuestion = "";

		}

		money = correctAnswers * 500;

		cout << "You ended the round with " << money << " dollars!" << endl;

	}
}