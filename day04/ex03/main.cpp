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
	ICharacter			*julia = new Character("julia");
	ICharacter			*bob = new Character("bob");
	AMateria			*tmp;

	materia->learnMateria(new Cure());
	materia->learnMateria(new Ice());
	materia->learnMateria(new Cure());
	materia->learnMateria(new Ice());
	std::cout << "I am now awaiting an overflow message" << std::endl;
	tmp = new Ice();
	materia->learnMateria(tmp);
	delete tmp;
	std::cout << "Waited" << std::endl;
	std::cout << std::endl;

	std::cout << "I am now awaiting an null pointer message" << std::endl;
	materia->learnMateria(nullptr);
	std::cout << "Waited" << std::endl;
	std::cout << std::endl;


	tmp = materia->createMateria("cure");
	julia->equip(tmp);
	tmp = materia->createMateria("ice");
	julia->equip(tmp);
	std::cout << "Now I want to delete item at index 1" << std::endl;
	julia->unequip(1);
	delete tmp;
	std::cout << "And add new item in index 1" << std::endl;
	tmp = materia->createMateria("ice");
	julia->equip(tmp);


	std::cout << "Count XP: " << tmp->getXP() << std::endl;
	julia->use(1, *bob);
	std::cout << "Count XP: " << tmp->getXP() << std::endl;

	delete bob;
	delete julia;
	delete materia;
}

int				main()
{
	subject();
	my();
}