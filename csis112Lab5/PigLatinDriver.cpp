//pig latin -- translate words to pig latin
//CSIS 112-<Section Number>
//<Sources if necessary>


//Include statements
#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

//Global declarations: Constants and type definitions only -- NO variables

//Function prototypes

int main()
{
	//In cout statement below substitute your name and lab number
	cout << "Cody Moore -- Lab Number 5" << endl << endl;

	//Variable declarations
	std::string input;
	char tokenInput[100];
	char* item = nullptr;
	char* nextItem = nullptr;

	//Program logic

	std::cout << "Please input the statement you would like to translate." << std::endl;

	cin.getline(tokenInput, 100);

	item = strtok_s(tokenInput, "/n", &nextItem);

	while (item != NULL)
	{
		if (item!= NULL)
		{
			cout << *item;
			item = strtok_s(NULL, "/n", &nextItem);
		}

	}

	




	//Closing program statements
	system("pause");
	return 0;
}

//Function definitions

