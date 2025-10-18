#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	private:
		int	fixed_point;
		static const int fractional_bits;
	public:
		Fixed();
		Fixed(const Fixed& copy);
		Fixed(const int number);
		Fixed(const float number);
	
		Fixed&	operator=(const Fixed& copy);
	
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
	
		int		toInt( void ) const;
		float	toFloat( void ) const;
	
		bool	operator>(const Fixed& other) const;
		bool	operator<(const Fixed& other) const;
		bool	operator>=(const Fixed& other) const;
		bool	operator<=(const Fixed& other) const;
		bool	operator==(const Fixed& other) const;
		bool	operator!=(const Fixed& other) const;
	
		Fixed	operator+(const Fixed& other) const;
		Fixed	operator-(const Fixed& other) const;
		Fixed	operator*(const Fixed& other) const;
		Fixed	operator/(const Fixed& other) const;
	
		Fixed&	operator++(void);
		Fixed	operator++(int);
		Fixed&	operator--(void);
		Fixed	operator--(int);
	
		static Fixed&       min(Fixed& fixed_1, Fixed& fixed_2);
		static const Fixed& min(const Fixed& fixed_1, const Fixed& fixed_2);
		static Fixed&       max(Fixed& fixed_1, Fixed& fixed_2);
		static const Fixed& max(const Fixed& fixed_1, const Fixed& fixed_2);

		~Fixed(void);
	};
	std::ostream&	operator<<(std::ostream& os, const Fixed& other);
#endif
