#include "Fixed.hpp"

Fixed::Fixed() : frac(8){
	this->setRawBits(0);
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int n) : frac(8){
	this->setRawBits(n);
}

Fixed::Fixed(Fixed const & src) : frac(8){
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

int	Fixed::getRawBits() const{
	std::cout << "getRawBits member function called" << std::endl;
	return this->fixed;
}

void	Fixed::setRawBits(int const raw){
	this->fixed = raw << this->frac;
}

Fixed & Fixed::operator=(Fixed const & src){
	std::cout << "Assignation operator called" << std::endl;
	this->fixed = src.getRawBits();
	return *this;
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
	return;
}


