#include "Span.hpp"

int	main() {
	span	sp(10000);
	std::vector<int>	v(10000);

	for (std::vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		*it = rand() % 10000;
	}
	sp.addNumbers(v.begin(), v.end());
	try {
	std::cout << "shortestSpan: " << sp.shortestSpan() << std::endl;
	std::cout << "longestSpan: " << sp.longestSpan() << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}
