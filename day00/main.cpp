#include "iostream"
#include "Sample.class.hpp"

Sample::Sample(int v)
{
	std:: cout << "Constructor called" << std::endl;
	this->_foo = v;
	return;
}

Sample::~Sample(void) {
	std:: cout << "Destructor called" << std::endl;
	return;
}

int		Sample::getFoo(void) const {return this->_foo;}

void	Sample::setFoo(int v) {this->_foo = v;}

int		Sample::compare(Sample * other) const {

	if (this->_foo < other->getFoo())
		return (-1);
	else if (this->_foo > other->getFoo())
		return (1);
	return (0);
}

int main(void)
{
	Sample newSampe(0);
	newSampe.setFoo(42);
	std:: cout << newSampe.getFoo() << std::endl;


	return (0);
}
