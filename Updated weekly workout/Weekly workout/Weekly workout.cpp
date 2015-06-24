#include <iostream>
#include "Gym exercise.h"
#include "Home exercise.h"
#include "User.h"
using namespace std;
int main(){
	User user1;

	cout << "Enter First Name: ";
	cin >> user1.name;
	cout << "Welcom to your Weekly Workout Calculator!" << endl;
	cout << "What is your gender? (M for male and F for female)" << endl;
	cin >> user1.gender;
	cout << "What is your skill level? (Beginer, Intermediate, or Advanced)" << endl;
	cin >> user1.skill;
	cout << "Do you prefer to workout at a gym or at home?(G for gym or H for home)" << endl;
	cin >> user1.gym;
	cout << "How much time to you have to exercise during the week?" << endl;
	cin >> user1.time;
	HomeExerciseP h1;
	GymExerciseP G1;
	if (user1.gym == 'G' || user1.gym == 'g'){//gives the week workout for user if they workout at the gym
		G1.assignWeekday(user1);
	}
	else if (user1.gym == 'H' || user1.gym == 'h'){//gives the week workout for user if they workout at Home
		h1.assignWeekday(user1);
	}


}