#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed() : frac(8){
	this->setRawBits(0);
}

Fixed::Fixed(const int n) : frac(8){
	this->setRawBits(n);
}

Fixed::Fixed(const float n) : frac(8){
	this->setRawBits(n);
}

Fixed::Fixed(Fixed const & src) : frac(8){
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
	this->fixed = src.getRawBits();
	return *this;
}

Fixed  Fixed::operator+(Fixed const & src)const{
	Fixed f;
	f.fixed = src.getRawBits() + this->getRawBits();
	return f;
}

Fixed  Fixed::operator-(Fixed const & src)const{
	Fixed f;
	f.fixed = this->getRawBits() - src.getRawBits();
	return f;
}

Fixed  Fixed::operator*(Fixed const & src)const{
	Fixed f;
	f.fixed = (this->getRawBits() * src.getRawBits()) >> this->frac;
	return f;
}

Fixed  Fixed::operator/(Fixed const & src)const{
	Fixed f;
	if (src.getRawBits() == 0)
		return f;
	f.fixed = (this->getRawBits() << this->frac) / src.getRawBits();
	return f;
}

bool Fixed::operator<(Fixed const & src)const{
	if (this->fixed < src.getRawBits())
		return true;
	return false;
}

bool Fixed::operator<=(Fixed const & src)const{
	if (this->fixed <= src.getRawBits())
		return true;
	return false;
}

bool Fixed::operator>=(Fixed const & src)const{
	if (this->fixed >= src.getRawBits())
		return true;
	return false;
}

bool Fixed::operator==(Fixed const & src)const{
	if (this->fixed == src.getRawBits())
		return true;
	return false;
}

bool Fixed::operator!=(Fixed const & src)const{
	if (this->fixed != src.getRawBits())
		return true;
	return false;
}

bool Fixed::operator>(Fixed const & src)const{
	if (this->fixed > src.getRawBits())
		return true;
	return false;
}

Fixed & Fixed::operator++(){
	this->fixed++;
	return *this;
}

Fixed Fixed::operator++(int){
	Fixed cp(*this);
	this->fixed++;
	return cp;
}

Fixed & Fixed::operator--(){
	this->fixed--;
	return *this;
}

Fixed Fixed::operator--(int){
	Fixed cp(*this);
	cp.fixed--;
	return cp;
}

Fixed::~Fixed(){
	return;
}


std::ostream &	operator<<(std::ostream & o, Fixed const & f){

	o << f.toFloat();
	return o;
}

Fixed	&	Fixed::min(Fixed & a, Fixed & b){
	if (a.getRawBits() < b.getRawBits())
		return a;
	return b;
}

Fixed	&	Fixed::max(Fixed & a, Fixed & b){
	if (a.getRawBits() > b.getRawBits())
		return a;
	return b;
}

Fixed	const &	Fixed::min(Fixed const & a, Fixed const & b){
	if (a.getRawBits() < b.getRawBits())
		return a;
	return b;
}

Fixed	const &	Fixed::max(Fixed const & a, Fixed const & b){
	if (a.getRawBits() > b.getRawBits())
		return a;
	return b;
}
