#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <iostream>
# include <list>

// std::stack est un contenteur adapter, il utilise un autre contenteur (par défaut std::deque) pour stocker les éléments
// Vu qu'on herite de std::stack, on a accès à tous les attributs et méthodes de std::stack donc on peut utiliser std::stack<T>::c pour accéder au container_type

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		using std::stack<T>::stack;

		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator begin(void) { return (std::stack<T>::c.begin()); }
		iterator end(void) { return (std::stack<T>::c.end()); }
};

#endif
