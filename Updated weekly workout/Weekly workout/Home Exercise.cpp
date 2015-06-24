#include "Home exercise.h"
#include "User.h"
#include <fstream>
#include <iostream>
#include <ctime>
using namespace std;

void HomeExerciseP::assignHomeWorkoutc(User user1){
	string Hcardio = "C:\\Users\\Noelle\\Documents\\Home cardio.txt";
	
	ifstream inHc;
	inHc.open(Hcardio);//opens txt file that stores a varitey of at home cardio exercises
	if (inHc.fail()){
		cout << "can't open file for reading." << endl;
	}
	string line;
	while (getline(inHc, line)){
		Homeworkoutc.push_back(line);//stors the lines from the text file into a vector
	}
	for (int i = 1; i < weekday.size(); i++){
		timeDay.push_back(user1.time / 6);//calculates the time in min. each day for exercise based on user input
	}
	srand(time(NULL));

	if (user1.skill == "Advanced" || user1.skill == "advanced"){//gives cardio exercises for advanced
		for (int i = 1; i < 10; i++){
			int r = i + rand() % (10 - i);
			swap(Homeworkoutc.at(i), Homeworkoutc.at(r));
			
		}
		if (timeDay.at(1) <= 30){
			cout << Homeworkoutc.at(1) << endl;
		}
		else
			for (int i = 1; i <= 3; i++){
			cout << Homeworkoutc.at(i) << endl;
			}
	}
	else if (user1.skill == "Intermediate" || user1.skill == "intermediate"){//gives cardio exercises for intermediate
		for (int i = 3; i < 10; i++){
			int r = i + rand() % (10 - i);
			swap(Homeworkoutc.at(i), Homeworkoutc.at(r));
			
		}
		if (timeDay.at(1) <= 30){
			cout << Homeworkoutc.at(5) << endl;
		}
		else
			for (int i = 3; i <= 5; i++){
			cout << Homeworkoutc.at(i) << endl;
			}
	}
	else if (user1.skill == "Beginer" || user1.skill == "beginer"){//gives cardio exercises for beginer
		for (int i = 7; i < 11; i++){
			int r = i + rand() % (11 - i);
			swap(Homeworkoutc.at(i), Homeworkoutc.at(r));
			
		}
		if (timeDay.at(1)<= 30){
			cout << Homeworkoutc.at(9) << endl;
		}
		else
			for (int i = 7; i < 9; i++){
			cout << Homeworkoutc.at(i) << endl;
			}
	}

	inHc.close();
}
	void HomeExerciseP::assignHomeWorkouts(User user1){
		string Hstrength = "C:\\Users\\Noelle\\Documents\\Home strength training.txt";

	ifstream inHs;
	inHs.open(Hstrength);//opens text file for at home strength training exercises
	if (inHs.fail()){
		cout << "can't open file for reading." << endl;
	}
	string L;
	while (getline(inHs, L)){
		Homeworkouts.push_back(L);//adds lines from file to vector
	}
	for (int i = 1; i < weekday.size(); i++){
		timeDay.push_back(user1.time / 6);//calculates min. a day for exercise based on user input
	}
	srand(time(NULL));
	calculateReps(user1);
	if (user1.skill == "Advanced" || user1.skill == "advanced"){//gives at home strength training exercises for advanced
		for (int i = 1; i < 9; i++){
			int ra = i + rand() % (9 - i);
			swap(Homeworkouts.at(i), Homeworkouts.at(ra));
			
		}
		if (timeDay.at(1) <= 30){
			for (int i = 1; i < 7; i++){
				cout <<reps.at(i)<<" "<< Homeworkouts.at(i) << endl;
			}
		}
		else
			for (int i = 1; i < 9; i++){
			cout <<reps.at(i)<<" "<< Homeworkouts.at(i) << endl;
			}
	}
	else if (user1.skill == "Intermediate" || user1.skill == "intermediate"){//gives at home strength training exercises for intermediate
		for (int i = 6; i < 13; i++){
			int ra = i + rand() % (13 - i);
			swap(Homeworkouts.at(i), Homeworkouts.at(ra));
			
		}
		if (timeDay.at(1) <= 30){
			for (int i = 6; i < 11; i++){
				cout << reps.at(i)<<" "<<Homeworkouts.at(i) << endl;
			}
		}
		else
			for (int i = 6; i < 13; i++){
			cout <<reps.at(i)<<" "<< Homeworkouts.at(i) << endl;
			}
	}
	else if (user1.skill == "Beginer" || user1.skill == "beginer"){//gives at home strength training exercises for beginer
		for (int i = 14; i < 18; i++){
			int ra = i + rand() % (18 - i);
			swap(Homeworkouts.at(i), Homeworkouts.at(ra));
			
		}
		if (timeDay.at(1) <= 30){
			for (int i = 14; i < 17; i++){
				cout <<reps.at(i)<<" "<< Homeworkouts.at(i) << endl;
			}
		}
		else
			for (int i = 14; i < 18; i++){
			cout <<reps.at(i)<<" "<< Homeworkouts.at(i) << endl;
			}
	}
	inHs.close();


}
void HomeExerciseP::assignWeekday(User user1){ //assigns a day of the week to a workout from ither the cardo workout function or the strength training workout function
	
	weekday.push_back("Monday");
	weekday.push_back("Tuesday");
	weekday.push_back("Wednesday");
	weekday.push_back("Thursday");
	weekday.push_back("Friday");
	weekday.push_back("Saturday");
	
	cout << weekday.at(0) << "'s workout" << endl;
	assignHomeWorkoutc(user1);
	cout << endl;
	
	cout << weekday.at(1) << "'s workout" << endl;
	assignHomeWorkouts(user1);
	cout << endl;

	cout << weekday.at(2) << "'s workout" << endl;
	assignHomeWorkoutc(user1);
	cout << endl;

	cout << weekday.at(3) << "'s workout" << endl;
	assignHomeWorkouts(user1);
	cout << endl;

	cout << weekday.at(4) << "'s workout" << endl;
	assignHomeWorkoutc(user1);
	cout << endl;

	cout << weekday.at(5) << "'s workout" << endl;
	assignHomeWorkouts(user1);
	cout << endl;
}
void HomeExerciseP::calculateReps(User user1){//gives reps based on the gender of the user
	for (int i = 1; i < Homeworkouts.size(); i++){
		if (user1.gender == 'm' || user1.gender == 'M'){
			reps.push_back(20);
		}
		else if (user1.gender == 'f' || user1.gender == 'F'){
			reps.push_back(10);
		}
	}
}