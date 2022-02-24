#include "whatever.hpp"
#include "Awersome.hpp"

int main(void){
	std::cout << "\n\tTest 1" << std::endl;
	{
		int int_a = 2;
		int int_b = 3;

		std::cout << "a = " << int_a << ", b = " << int_b << std::endl;
		std::cout << "& a: " << &int_a << "\t& b:" << &int_b << std::endl;
		::swap( int_a, int_b );
		std::cout << "a = " << int_a << ", b = " << int_b << std::endl;
		std::cout << "& a: " << &int_a << "\t& b:" << &int_b << std::endl;
		std::cout << "min( a, b ) = " << ::min( int_a, int_b ) << std::endl;
		std::cout << "& min( a, b ) = " << &::min( int_a, int_b ) << std::endl;
		std::cout << "max( a, b ) = " << ::max( int_a, int_b ) << std::endl;
		std::cout << "& max( a, b ) = " << &::max( int_a, int_b ) << std::endl;

		std::string c = "chaine1";
		std::string d = "chaine2";

		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "& c: " << &c << "\t& d:" << &d << std::endl;
		::swap(c, d);
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "& c: " << &c << "\t& d:" << &d << std::endl;
		std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
		std::cout << "& min( c, d ) = " << &::min( c, d ) << std::endl;
		std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
		std::cout << "& max( c, d ) = " << &::max( c, d ) << std::endl;
	}
	std::cout << "\n\tTest 2" << std::endl;
	{
		Awersome a(2), b(4);

		std::cout << a << " " << b << std::endl;

		::swap(a, b);

		std::cout << a << " " << b << std::endl;
		std::cout << ::max(a, b) << std::endl;
		std::cout << ::min(a, b) << std::endl;
	}

    
    return 0;
}
