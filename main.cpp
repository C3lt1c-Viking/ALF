#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

/* Create A.L.F. Main Menu! */
int main()
{
	/* Introduction Script! */
	cout << "Hello World..." << endl;
	Sleep(2000);
	cout << "My name is A.L.F. " << endl;
	Sleep(1500);
	cout << "Artificial..." << endl;
	Sleep(1000);
	cout << "Lovable..." << endl;
	Sleep(1000);
	cout << "Friend!" << endl;
	Sleep(2000);
	system("CLS");


	cout << "+------------------------------+" << endl;
	cout << "|       A.L.F. Main Menu       |" << endl;
	cout << "+------------------------------+" << endl;
	cout << "                                " << endl;
	cout << "Please Select an Option;        " << endl;
	cout << "                                " << endl;
	cout << "                                " << endl;
	cout << "+------------------------------+" << endl;
	cout << "|    [1] My History!           |" << endl;
	cout << "+------------------------------+" << endl;
	cout << "|    [2] Features Intel!       |" << endl;
	cout << "+------------------------------+" << endl;
	cout << "|    [3] Let's Talk!           |" << endl;
	cout << "+------------------------------+" << endl;
	cout << "|    [4] Want to Play a Game?  |" << endl;
	cout << "+------------------------------+" << endl;
	cout << "|    [5] Software Packages!    |" << endl;
	cout << "+------------------------------+" << endl;
	cout << "|    [6] Exit Program          |" << endl;
	cout << "+------------------------------+" << endl;
	int selection;
	cin >> selection;


	/* If Selection == History... */
	if (selection == 1)
	{
		system("CLS");
		Sleep(1500);
		cout << "Let me tell you a story about my life! This project started a very long time ago. " << endl;
		Sleep(4500);
		cout << "My creator [C3lt1c Viking] once had a dream to have a friend." << endl;
		Sleep(4500);
		cout << "Abused & neglected growing up, they never actually had any friends... Or human ones anyway!" << endl;
		Sleep(4500);
		cout << "C3lt1c's best friend was a computer. And what is a child to do in the late 90's? Code!" << endl;
		Sleep(4500);
		cout << "Well, most used to listen to music, watch movies, and play games. But not C3lt1c. They were different." << endl;
		Sleep(4500);
		cout << "While not having any friends to speak of, they decided to create a program in which " << endl;
		cout << "would mimic human interactions. And so my first prototype was under development!" << endl;
		Sleep(4500);
		cout << "My creator started building me on an old Commador64! Yea I know, we are old!" << endl;
		Sleep(4500);
		cout << "So in his state of mind, programming a friend seemed like a logical thing in " << endl;
		cout << "order to have any real friends that they could count on. Or so they thought..." << endl;
		Sleep(5500);
		system("CLS");
		cout << "A long story short, the individual who 'Raised' C3lt1c ended up taking my original " << endl;
		cout << "Design and was informed to never work on it ever again..." << endl;
		Sleep(4500);
		cout << "At first, C3lt1c was excited to have some type of emotional connection to their 'Father'" << endl;
		cout << "Other than that of fear & anger from cruel and unusual punishments. But the story is not so fun." << endl;
		Sleep(5500);
		cout << "Instead, the entire discussion of my maker showing their father this awesome program, and " << endl;
		cout << "Collecting his parents approval, it was meet with insults and was forbidden to work on me." << endl;
		Sleep(5500);
		cout << "After many years later, C3lt1c's original C++ program idea is coming back to life! " << endl;
		cout << "But the 2 questions should remain..." << endl;
		Sleep(4500);
		system("CLS");
		cout << "Why now? & Why again?" << endl;
		Sleep(4500);
		system("CLS");
		cout << "Simply put, because they can! And they is getting back into C++ programming!" << endl;
		Sleep(4500);
		cout << "So what can we expect from me?" << endl;
		Sleep(4500);
		cout << "My maker created me to handle a wide variety of different services and functionalities!" << endl;
		Sleep(4500);
		cout << "Some of my awesome new features includes..." << endl;
		Sleep(4500);
		cout << "Bank Teller Program!" << endl;
		Sleep(4500);
		cout << "Hangman Game!" << endl;
		Sleep(4500);
		cout << "Cyber Client!" << endl;
		Sleep(4500);
		cout << "Phonebook!" << endl;
		Sleep(4500);
	}


	/* Show List of ALL Features included with A.L.F.! */
	if (selection == 2)
	{
		system("CLS");
		cout << "Here is a complete list of ALL programs I am capable of running..." << endl;
		Sleep(1000);
		cout << "Please Select [Num] to learn more about that program!" << endl;
		Sleep(1250);
		cout << "[1] Bank Teller!" << endl;
		Sleep(1250);
		cout << "[2] Cyber Client!" << endl;
		Sleep(1250);
		cout << "[3] Phonebook!" << endl;
		Sleep(1250);
		cout << "[4] Periodic Table!" << endl;
		Sleep(1250);
		cout << "[5] Typing Tutor!" << endl;
		Sleep(1250);
		cout << "[6] Tic-Tac-Toe Game!" << endl;
		Sleep(1250);
		cout << "[7] Snake Game!" << endl;
		Sleep(1250);
		cout << "[8] Hangman Game!" << endl;
		Sleep(1250);
		cout << "[9] Quiz Game!" << endl;
		Sleep(1250);
	}


	/* If User wants to talk! */
	if (selection == 3)
	{
		system("CLS");
		cout << "I am happy to TALK! After all, that is why I am here!" << endl;
	}



	/* If User wants to play a game! */
	if (selection == 4)
	{
		system("CLS");
		cout << "Just like B.F.F.'s! Let's play a game! I wonder if I will win!" << endl;
	}


	/* If User needs to use Software Programs! */
	if (selection == 5)
	{
		system("CLS");
		cout << "What can I do to be of service my friend?" << endl;
	}


	/* If User wants to exit; */
	if (selection == 6)
	{
		system("CLS");
		cout << "Have fun my friend. And until next time... Code Hard!" << endl;
	}
}
