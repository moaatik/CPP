#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	private:
		int	fixed_point;
		static const int fractional_bits;
	public:
		Fixed();
		Fixed(const Fixed& copy);
		Fixed(const int number);
		Fixed&	operator=(const Fixed& copy);
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		~Fixed(void);
};

#endif
