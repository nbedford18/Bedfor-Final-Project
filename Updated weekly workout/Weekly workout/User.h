#ifndef USER_H
#define USER_H
#include <string>
using namespace std;
class User{//class for the user 
public:
	string name;
	char gender;
	char gym;
	int time;
	string skill;
	string getname();
	char getgender();
	char getgym();
	string getskill();
	int gettime();

};
#endif