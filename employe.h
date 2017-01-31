#ifndef DEF_EMPLOYE
#define DEF_EMPLOYE
#include <string>

class Employe {
	public:
		string getName();
		void setName();

		string getFirstName();
		void setFirstName();

		int getAge();
		void setAge();
		
		int calculSalaire();
		void afficher();
	private:
		std::string name;
		std::string firstName;
		std::string age;
};
#endif
