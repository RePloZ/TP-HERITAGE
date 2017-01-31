#ifndef DEF_EMPLOYE
#define DEF_EMPLOYE
#include <string>

class Employe {
	public:
		Employe();

		getName();
		setName();

		int calculSalaire();
		void afficher();
	private:
		std::string name;
		std::string firstName;
		std::string age;
};
#endif
