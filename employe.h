#ifndef DEF_EMPLOYE
#define DEF_EMPLOYE
#include <string>
#include <void>

class Employe {
	public:
		string getName(string name);
		void setName(string name);
		string getFirstName(string firstName);
		void setFirstName(string firstName);
		string getAge(string age);
		void setAge(string age);
	private:
		std::string name;
		std::string firstName;
		std::string age;
}
