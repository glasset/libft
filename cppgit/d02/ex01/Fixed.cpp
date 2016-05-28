#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed() : frac(8){
	this->setRawBits(0);
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int n) : frac(8){
	this->setRawBits(n);
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float n) : frac(8){
	this->setRawBits(n);
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & src) : frac(8){
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

int	Fixed::getRawBits() const{
	return this->fixed;
}

void	Fixed::setRawBits(int const raw){
	this->fixed = raw << this->frac;
}

void	Fixed::setRawBits(float const raw){
	float fra = raw;
	for (int i = 0; i < this->frac; i++){
		fra *= 2.0f;
	}
	this->fixed = roundf(fra);
}

int		Fixed::toInt(void) const{
	return this->fixed >> this->frac;
}

float	Fixed::toFloat(void) const{
	float fra = (float)this->fixed;
	for (int i = 0; i < this->frac; i++){
		fra /= 2.0f;
	}
	return fra;
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


std::ostream &	operator<<(std::ostream & o, Fixed const & f){

	o << f.toFloat();
	return o;
}
