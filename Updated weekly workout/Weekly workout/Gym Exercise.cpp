#include "Gym exercise.h"
#include "User.h"
#include <fstream>
#include <iostream>
#include <ctime>
using namespace std;

void GymExerciseP::assignGymWorkoutc(User user1){
	string Gcardio = "C:\\Users\\Noelle\\Documents\\Gym cardio.txt";
	
	ifstream inGc;
	inGc.open(Gcardio);//opens text file for gym cardo exercises
	if (inGc.fail()){
		cout << "can't open file for reading" << endl;
	}
	string line;
	while (getline(inGc, line)){
		Gymworkoutc.push_back(line);//adds lines from text file to vector
	}
	for (int i = 1; i < weekday.size(); i++){
		timeDay.push_back(user1.time / 6);
	}
	srand(time(NULL));

	if (user1.skill == "Advanced" || user1.skill == "advanced"){//gives cardo gym workout for advanced
		for (int i = 1; i < 8; i++){
			int r = i + rand() % (8 - i);
			swap(Gymworkoutc.at(i), Gymworkoutc.at(r));
			
		}
		if (timeDay.at(1) <= 30){
			cout << Gymworkoutc.at(2) << endl;
		}
		else
			for (int i = 1; i < 3; i++){
			cout << Gymworkoutc.at(i) << endl;
			}
	}
	else if (user1.skill == "Intermediate" || user1.skill == "intermediate"){//gives cardio gym workout for intermediate
		for (int i = 5; i < 12; i++){
			int r = i + rand() % (12 - i);
			swap(Gymworkoutc.at(i), Gymworkoutc.at(r));
			
		}
		if (timeDay.at(1) <= 30){
			cout << Gymworkoutc.at(6) << endl;
		}
		else
			for (int i = 5; i < 7; i++){
			cout << Gymworkoutc.at(i) << endl;
			}

	}
	else if (user1.skill == "Beginer" || user1.skill == "beginer"){//gives cardio gym workout for beginer
		for (int i = 12; i < 18; i++){
			int r = i + rand() % (18 - i);
			swap(Gymworkoutc.at(i), Gymworkoutc.at(r));
			
		}
		if (timeDay.at(1) <= 30){
			cout << Gymworkoutc.at(13) << endl;
		}
		else
			for (int i = 12; i < 14; i++){
			cout << Gymworkoutc.at(i) << endl;
			}
	}

	inGc.close();
}
void GymExerciseP::assignGymWorkouts(User user1){
	string Gstrength = "C:\\Users\\Noelle\\Documents\\Gym strength training.txt";
	ifstream inGs;
	inGs.open(Gstrength);//opens text file for gym strength training exercises
	if (inGs.fail()){
		cout << "can't open file for reading" << endl;
	}

	string L;
	while (getline(inGs, L)){
		Gymworkouts.push_back(L);//adds lines from file to vector
	}
	for (int i = 1; i < weekday.size(); i++){
		timeDay.push_back(user1.time / 6);
	}
	srand(time(NULL));
	
	if (user1.skill == "Advanced" || user1.skill == "advanced"){//gives gym strength training workout for advanced
		for (int i = 1; i < 6; i++){
			int ra = i + rand() % (6 - i);
			swap(Gymworkouts.at(i), Gymworkouts.at(ra));
			
		}
		if (timeDay.at(1) <= 30){
			for (int i = 1; i < 4; i++){
				cout <<Gymworkouts.at(i) << endl;
			}
		}
		else
			for (int i = 1; i < 6; i++){
			cout << Gymworkouts.at(i) << endl;
			}
	}
	else if (user1.skill == "Intermediate" || user1.skill == "intermediate"){//gives gym strength training workout for intermediate
		for (int i = 3; i < 10; i++){
			int ra = i + rand() % (10 - i);
			swap(Gymworkouts.at(i), Gymworkouts.at(ra));
			
		}
		if (timeDay.at(1) <= 30){
			for (int i = 3; i < 7; i++){
				cout <<Gymworkouts.at(i) << endl;
			}
		}
		else
			for (int i = 3; i < 9; i++){
			cout <<Gymworkouts.at(i) << endl;
			}
	}
	else if (user1.skill == "Beginer" || user1.skill == "beginer"){//gives gym strenth training workout for beginer
		for (int i = 11; i < 15; i++){
			int ra = i + rand() % (15 - i);
			swap(Gymworkouts.at(i), Gymworkouts.at(ra));
			
		}
		if (timeDay.at(1) <= 30){
			for (int i = 11; i < 14; i++){
				cout <<Gymworkouts.at(i) << endl;
			}
		}
		else
			for (int i = 11; i < 15; i++){
			cout <<Gymworkouts.at(i) << endl;
			}
	}
	inGs.close();
}
void GymExerciseP::assignWeekday(User user1){//assigns a weekday for each workout
	
	weekday.push_back("Monday");
	weekday.push_back("Tuesday");
	weekday.push_back("Wednesday");
	weekday.push_back("Thursday");
	weekday.push_back("Friday");
	weekday.push_back("Saturday");
	for (int i = 1; i < weekday.size(); i++){
		timeDay.push_back(user1.time / 6);
	}
	cout << weekday.at(0) << "'s workout" << endl;
	assignGymWorkoutc(user1);
	cout << endl;

	cout << weekday.at(1) << "'s workout" << endl;
	assignGymWorkouts(user1);
	cout << endl;

	cout << weekday.at(2) << "'s workout" << endl;
	assignGymWorkoutc(user1);
	cout << endl;

	cout << weekday.at(3) << "'s workout" << endl;
	assignGymWorkouts(user1);
	cout << endl;

	cout << weekday.at(4) << "'s workout" << endl;
	assignGymWorkoutc(user1);
	cout << endl;

	cout << weekday.at(5) << "'s workout" << endl;
	assignGymWorkouts(user1);
	cout << endl;

}
