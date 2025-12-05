#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	std::cout << "=== Correct Animals ===" << std::endl;
	const Animal *A = new Animal();
	const Animal *D = new Dog();
	const Animal *C = new Cat();

	std::cout << D->getType() << " " << std::endl;
	std::cout << C->getType() << " " << std::endl;
	C->makeSound();
	D->makeSound();
	A->makeSound();

	delete A;
	delete D;
	delete C;

	std::cout << std::endl;

	std::cout << "=== Wrong Animals ===" << std::endl;
	const WrongAnimal *wrong_A = new WrongAnimal();
	const WrongAnimal *wrong_C = new WrongCat();

	std::cout << wrong_C->getType() << " " << std::endl;
	wrong_C->makeSound();
	wrong_A->makeSound();

	delete wrong_A;
	delete wrong_C;

	return 0;
}
