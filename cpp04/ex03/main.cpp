#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

int main()
{
    std::cout << "=== Basic Creation & Equip ===" << std::endl;

    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    ICharacter* alice = new Character("Alice");

    AMateria* tmp;

    tmp = src->createMateria("ice");
    alice->equip(tmp);

    tmp = src->createMateria("cure");
    alice->equip(tmp);

    alice->use(0, *alice);
    alice->use(1, *alice);

    delete alice;
    delete src;
    return 0;
}

// int main()
// {
// 	std::cout << "\n=== Unequip & Floor Test ===" << std::endl;

// 	Character bob("Bob");
// 	Ice		 *ice  = new Ice();
// 	Cure	 *cure = new Cure();

// 	bob.equip(ice);
// 	bob.equip(cure);

// 	bob.unequip(0);
// 	bob.unequip(1);

// 	bob.use(0, bob);
// 	bob.use(1, bob);

// 	return 0;
// }
