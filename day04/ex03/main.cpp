#include <iostream>
#include <string>
#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

void 			subject()
{
	std::cout << "\e[1;33m" << "> > > > > > > > > > SUBJECT < < < < < < < < < <" << "\e[0m" << std::endl;
	IMateriaSource		*src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter			*me = new Character("me");

	AMateria			*tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter			*bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;
}

void 			my()
{
	std::cout << "\e[1;33m" << "> > > > > > > > > >    MY   < < < < < < < < < <" << "\e[0m" << std::endl;
	IMateriaSource		*materia = new MateriaSource();
	Character			*julia = new Character("julia");
	Character			*bob = new Character("bob");
	AMateria			*tmp;

	materia->learnMateria(new Cure());
	materia->learnMateria(new Ice());
	materia->learnMateria(new Cure());
	materia->learnMateria(new Ice());
	std::cout << "\e[1;33m" << "I am now awaiting an overflow message" << "\e[0m" << std::endl;
	tmp = new Ice();
	materia->learnMateria(tmp);
	delete tmp;
	std::cout << "\e[1;33m" << "WORK!" << "\e[0m" << std::endl;
	std::cout << std::endl;

	std::cout << "\e[1;33m" << "I am now awaiting an null pointer message" << "\e[0m" << std::endl;
	materia->learnMateria(nullptr);
	std::cout << "\e[1;33m" << "WORK!" << "\e[0m" << std::endl;
	std::cout << std::endl;


	tmp = materia->createMateria("cure");
	julia->equip(tmp);
	tmp = materia->createMateria("ice");
	julia->equip(tmp);
	std::cout << "\e[1;33m" << "Now I want to delete item at index 1" << "\e[0m" << std::endl;
	julia->unequip(1);
	delete tmp;
	std::cout << "\e[1;33m" << "And add new item in index 1" << "\e[0m" << std::endl;
	tmp = materia->createMateria("ice");
	julia->equip(tmp);


	std::cout << "Count XP: " << tmp->getXP() << std::endl;
	julia->use(1, *bob);
	std::cout << "Count XP: " << tmp->getXP() << std::endl;

	std::cout << "Check operator= - *bob = *julia" << std::endl;
	std::cout << "BEFORE" << std::endl;
	std::cout << bob->getName() << std::endl;
	*bob = *julia;
	std::cout << "AFTER" << std::endl;
	std::cout << bob->getName() << std::endl;

	std::cout << "\e[1;33m" << "Bob use Julia's AMateria" << "\e[0m" << std::endl;
	bob->use(0, *julia);
	bob->use(1, *julia);

	std::cout << "\e[1;33m" << "Julia use Bob's AMateria" << "\e[0m" << std::endl;
	julia->use(0, *bob);
	julia->use(1, *bob);

	delete bob;
	delete julia;
	delete materia;
}

int				main()
{
	subject();
	my();
}