#ifndef GYM_H
#define GYM_H
#include<vector>
#include<string>
#include "User.h"
using namespace std;
class GymExerciseP{//class for gym exercise plan
public:
	vector<string> Gymworkoutc;//for cardo gym workouts
	vector<string> Gymworkouts;//for strength training gym workouts
	vector<string> weekday;
	vector<double> timeDay;
	vector<int> reps;
	void assignGymWorkoutc(User user1);
	void assignGymWorkouts(User user1);
	void assignWeekday(User user1);
	
};
#endif