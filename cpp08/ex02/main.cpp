#include "MutantStack.hpp"

int main()
{
    std::cout << "_______________ TEST 1 _______________" << std::endl;
    {   
        MutantStack<int>    mstack;

        mstack.push(5);
        mstack.push(17);

        std::cout << std::endl;
        std::cout << "The top item of array " << mstack.top() << std::endl;
        std::cout << std::endl;
        mstack.pop();

        std::cout << "The size after pop " << mstack.size() << std::endl;
        std::cout << "The new top item of array " << mstack.top() << std::endl;
        std::cout << std::endl;

        mstack.push(3);
        mstack.push(5);
        mstack.push(737);
        mstack.push(0);

        MutantStack<int>::iterator it = mstack.begin();
        MutantStack<int>::iterator ite = mstack.end();

        ++it;
        --it;
        while (it != ite)
        {
            std::cout << "Array items: " << *it << std::endl;
            ++it;
        }
        std::cout << std::endl;
        std::stack<int> s(mstack);
    }
    std::cout << std::endl;

    std::cout << "_______________ TEST 2 _______________" << std::endl;
    {
        MutantStack<int> mstack;
        mstack.push(5);
        mstack.push(17);

        std::cout << std::endl;
        std::cout << "The top item of array " << mstack.top() << std::endl;
        std::cout << std::endl;
        mstack.pop();
        
        mstack.push(3);
        mstack.push(5);
        mstack.push(737);
        mstack.push(0);

        MutantStack<int>::reverse_iterator it = mstack.rbegin();
        MutantStack<int>::reverse_iterator ite = mstack.rend();

        ++it;
        --it;
        while (it != ite)
        {
            std::cout << "reversed: " << *it << std::endl;
            ++it;
        }
    }
    std::cout << std::endl;
    return (0);
}