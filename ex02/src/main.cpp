#include "MutantStack.hpp"

int main()
{
	MutantStack<int>	mstack;
	std::list<int>		lst;

	mstack.push(5);
	lst.push_back(5);
	mstack.push(17);
	lst.push_back(17);
	std::cout << "mstack: " << mstack.top() << std::endl;
	std::cout << "lst: " << lst.back() << std::endl;
	mstack.pop();
	lst.pop_back();
	std::cout << "mstack: " << mstack.size() << std::endl;
	std::cout << "lst: " << lst.size() << std::endl;
	mstack.push(3);
	lst.push_back(3);
	mstack.push(5);
	lst.push_back(5);
	mstack.push(737);
	lst.push_back(737);
	//[...]
	mstack.push(0);
	lst.push_back(0);
	MutantStack<int>::iterator it = mstack.begin();
	std::list<int>::iterator it_ = lst.begin();
	MutantStack<int>::iterator ite = mstack.end();
	std::list<int>::iterator ite_ = lst.end();
	++it;
	++it_;
	--it;
	--it_;
	std::cout << "mstack: " << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::cout << "lst: " << std::endl;
	while (it_ != ite_)
	{
		std::cout << *it_ << std::endl;
		++it_;
	}
	std::stack<int> s(mstack);
	return 0;
}
