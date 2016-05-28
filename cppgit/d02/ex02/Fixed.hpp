#ifndef __FIXED_HPP__
# define __FIXED_HPP__
#include <iostream>

class Fixed{
	private:
		int		fixed;
		const int frac;
	public:
		Fixed();
		Fixed(Fixed const & src);
		Fixed(const int n);
		Fixed(const float n);
		~Fixed();
		int	getRawBits() const;
		void	setRawBits(int const raw);
		void	setRawBits(float const raw);

		float toFloat( void ) const;
		int toInt( void ) const;

		Fixed &	operator=(Fixed const & src);
		Fixed	operator+(Fixed const & src) const;
		Fixed	operator-(Fixed const & src) const;
		Fixed	operator*(Fixed const & src) const;
		Fixed	operator/(Fixed const & src) const;
		bool	operator<(Fixed const & src) const;
		bool	operator>(Fixed const & src) const;
		bool	operator<=(Fixed const & src) const;
		bool	operator>=(Fixed const & src) const;
		bool	operator==(Fixed const & src) const;
		bool	operator!=(Fixed const & src) const;

		Fixed &	operator++();
		Fixed	operator++(int);
		Fixed &	operator--();
		Fixed	operator--(int);
		static Fixed	&	min(Fixed & a, Fixed  & b);
		static Fixed	&	max(Fixed & a, Fixed & b);
		static Fixed const	&	min(Fixed const & a, Fixed const & b);
		static Fixed const	&	max(Fixed const & a, Fixed const & b);

};

std::ostream &	operator<<(std::ostream & o, Fixed const & f);

#endif
