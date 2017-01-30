#ifndef DEF_EMPLOYES
#define DEF_EMPLOYES
#include <string>
#include <void>

class Employes {
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