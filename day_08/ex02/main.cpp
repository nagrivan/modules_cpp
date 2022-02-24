#include "MutantStack.hpp"
#include <list>

int main()
{
	std::cout << "\n\tTest Stack" << std::endl;
	{
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << "top: " << mstack.top() << std::endl;
		mstack.pop();
		std::cout << "size: " << mstack.size() << std::endl;
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
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
		std::cout << "top: " << s.top() << std::endl;
		std::cout << "size: " << s.size() << std::endl;		
	}

	std::cout << "\n\tTest List" << std::endl;
	{
		std::list<int> mlist;
		mlist.push_back(5);
		mlist.push_back(17);
		std::cout << "back: " << mlist.back() << std::endl;
		mlist.pop_back();
		std::cout << "size: " << mlist.size() << std::endl;
		mlist.push_back(3);
		mlist.push_back(5);
		mlist.push_back(737);
		mlist.push_back(0);
		std::list<int>::iterator itl = mlist.begin();
		std::list<int>::iterator itel = mlist.end();
		++itl;
		--itl;
		while (itl != itel)
		{
			std::cout << *itl << std::endl;
			++itl;
		}
		std::list<int> l(mlist);
		std::cout << "back: " << l.back() << std::endl;
		std::cout << "size: " << l.size() << std::endl;
	}

	return 0;
}