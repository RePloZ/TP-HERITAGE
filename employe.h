#ifndef DEF_EMPLOYE
#define DEF_EMPLOYE
#include <string>

class Employe {
	public:
		std::string getName();
		void setName(std::string value);

		std::string getFirstName();
		void setFirstName(std::string value);

		int getAge();
		void setAge();

		int calculSalaire();
		void afficher();
	private:
		std::string name;
		std::string firstName;
		int age;
};
#endif
