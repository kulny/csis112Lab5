//pig latin -- translate words to pig latin
//CSIS 112-<Section Number>
//<Sources if necessary>


//Include statements
#include "stdafx.h"
#include <iostream>
#include <string>
#include <limits>

using namespace std;

//Global declarations: Constants and type definitions only -- NO variables

//Function prototypes
bool GetRepeat();
void PrintLatinWord(char* token);

int main()
{
	//In cout statement below substitute your name and lab number
	cout << "Cody Moore -- Lab Number 5" << endl << endl;

	//Variable declarations
	char tokenInput[1000];
	char separators[]{ " \n\t" };
	char* item = nullptr;
	char* nextItem = nullptr;

	//Program logic
	
	do
	{
		std::cout << "Please input the statement you would like to translate." << std::endl;

		cin.getline(tokenInput, 1000, '\n');

		item = strtok_s(tokenInput, separators, &nextItem); // initializes tokens

		while (item != NULL)
		{
			if (item != NULL)
			{
				PrintLatinWord(item);

				item = strtok_s(NULL, separators, &nextItem); // gets next token
			}
			
		}
		cout << endl << endl;

	} while (GetRepeat());
	//Closing program statements
	system("pause");
	return 0;
}

//Function definitions

bool GetRepeat()
{
	string inp;

	cout << "Would you like to enter another sentence to translate? (y / n)" << endl;

	cin >> inp;

	if (inp == "y")
	{
		cin.ignore(); // needed to flush null char so that getline will read in latin func
		return true;
	}
	else if (inp == "n")
	{
		return false;
	}
}

void PrintLatinWord(char * item)
{
	int index = 0; // keeps track of how number of loops
	while (*item != '\0') // iterates through individual chars in token
	{
		index++; // keeps track of where the array is, to reset it to allow the first item to be printed later

		item++; // starts array at second value

		if (*item != '\0') // prevents null character from being printed
		{
			cout << *item;
		}
	}
	item -= index;
	cout << *item << "ay "; // prints first letter of array and ay
}
