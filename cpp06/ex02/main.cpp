#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Base.hpp"

/**
 * @brief dynamic_cast
 * dynamic_cast casts up and down class hierarchies only,
 * it is always checking that the conversion requested is valid.
 */
Base * generate(void)
{
    int	seed = std::chrono::system_clock::now().time_since_epoch().count();

    std::srand(seed);

    switch (rand() % 3)
    {
        case 0:
            std::cout << "Created new class A" << std::endl << std::endl;
            return (new A());

        case 1:
            std::cout << "Created new class B" << std::endl << std::endl;
            return (new B());

        case 2:
            std::cout << "Created new class C" << std::endl << std::endl;
            return (new C());

        default:
            return (NULL);
    }

}

void identify(Base* p)
{
    if (dynamic_cast<A*>(p) != NULL)
        std::cout << "CLASS A" << std::endl << std::endl;
    else if (dynamic_cast<B*>(p) != NULL)
        std::cout << "CLASS B" << std::endl << std::endl;
    else if (dynamic_cast<C*>(p) != NULL)
        std::cout << "CLASS C" << std::endl << std::endl;
    else
        std::cout << "Error in dynamic casting" << std::endl; 
}

void identify(Base& p)
{
	try
	{
		(void)dynamic_cast<A&>(p);
		std::cout << "A" << std::endl << std::endl;
	}
	catch(std::exception &e)
	{
		e.what();
	}
    
	try
	{
		(void)dynamic_cast<B&>(p);
		std::cout << "B" << std::endl << std::endl;
	}
	catch(std::exception &e)
	{
		e.what();
	}

	try
	{
		(void)dynamic_cast<C&>(p);
		std::cout << "C" << std::endl << std::endl;
	}
	catch(std::exception &e)
	{
		e.what();
	}
	return ;
}

int main()
{
    Base* random = generate();
    std::cout << "Pointer Cast: "; 
    identify(random);
    std::cout << std::endl;

    std::cout << "Reference Cast: "; 
    identify(*random);
    std::cout << std::endl;
    delete random;
    return (0);
}