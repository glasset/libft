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
};

std::ostream &	operator<<(std::ostream & o, Fixed const & f);
#endif
