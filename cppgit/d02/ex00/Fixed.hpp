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
		Fixed(int n);
		~Fixed();
		int	getRawBits() const;
		void	setRawBits(int const raw);
		Fixed &	operator=(Fixed const & src);
};

#endif
