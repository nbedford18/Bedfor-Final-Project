#ifndef HOME_H
#define HOME_H
#include <vector>
#include <string>
#include "User.h"
using namespace std;
class HomeExerciseP{//class for at home workout
public:
	vector<string> Homeworkoutc;//for cardio exercises
	vector<string> Homeworkouts;//for strength training exercises
	vector<string> weekday;//vector that stores the days of the week
	vector<double> timeDay;
	vector<int> reps;
	void assignHomeWorkoutc(User user1);
	void assignHomeWorkouts(User user1);
	void assignWeekday(User user1);
	void calculateReps(User user1);
};
#endif