#include "iter.hpp"

#include <string>

int main(void)
{
	std::string str[4] = {"marameo", "scooby", "fragolino", "rampampam"};
	iter(str, 4, print);
	std::cout << "━━━━━━━━━▲━━━━━━━━━" << std::endl;
	int num[4] = {42, 420, -42, -420};
	iter(num, 4, print);
	std::cout << "━━━━━━━━━▲━━━━━━━━━" << std::endl;
	return 0;
}

/* class Awesome
{
	public:
		Awesome( void ) : _n( 42 ) { return; } 
		int get( void ) const { return this->_n; }
	private:
		int _n;
}; 

std::ostream & operator<<( std::ostream & o, Awesome const & rhs )
{
	o << rhs.get();
	return o; 
} 

template< typename T >
void 
print( T const & x ) 
{
	std::cout << x << std::endl; return;
}

int main() 
{
	int tab[] = { 0, 1, 2, 3, 4 }; // <--- I never understood why you can't write int[] tab. Wouldn't that make more sense? 
	Awesome tab2[5];
	iter( tab, 5, print );
	iter( tab2, 5, print );
	return 0; 
} */