#include <iostream>
#include "Sam5.hpp"

Sam5::Sam5(void)
{
	std::cout << "Constructor called" << std::endl;

	this->setFoo(0);
	std::cout << "this->getFoo(): " << this->getFoo() << std::endl;

	return;
}

Sam5::~Sam5(void)
{
	std::cout << "Destructor called" << std::endl;
	return;
}

int	Sam5::getFoo(void) const
{
	return this->_foo;
}

void	Sam5::setFoo(int v)
{
	if (v >= 0)
		this->_foo = v;
	return;
}

