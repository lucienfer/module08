#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <limits>
# include <vector>
# include <cstdlib>

class	span {
private:
	unsigned int	n;
	int		*lst;
	int		index;

public:
	span();
	span(unsigned int n);
	~span();

	void		addNumber(unsigned int i);
	unsigned int	shortestSpan();
	unsigned int	longestSpan();
	
	template<typename iterator>
	void		addNumbers(iterator begin, iterator end) {
		for (iterator it = begin; it != end; it++) {
			addNumber(*it);
			std::cout << *it << std::endl;
		}
	}
};

#endif
