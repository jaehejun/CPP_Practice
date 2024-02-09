#include <iostream>
#include "Sam5.hpp"

int	main()
{
	Sam5	instance;

	instance.setFoo(42);
	std::cout << "instance.getfoo(): " << instance.getFoo() << std::endl;
	instance.setFoo(-42);
	std::cout << "instance.getfoo(): " << instance.getFoo() << std::endl;

	return 0;
}