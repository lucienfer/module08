#include "Span.hpp"

span::span() : n(0), lst(NULL), index(0) {}

span::span(unsigned int n) : n(n), lst(new int[n]), index(0) {}

span::~span() {
	delete [] lst;
}

void	span::addNumber(unsigned int i) {
	if (index >= (int)n){
		std::cout << "expection addnumber" << std::endl;
		throw std::exception();
	}
	lst[index] = i;
	index++;
}

unsigned int	span::shortestSpan() {
	int	span = std::numeric_limits<int>::max();

	if (!lst){
		throw std::exception();
	}
	for (unsigned int i = 0; i < n; i++) {
		for (unsigned int j = i + 1; j < n; j++) {
			int tmp = lst[j] - lst[i];
			if (tmp < 0)
				tmp *= -1;
			if ( tmp < span)
				span = tmp;
		}
	}
	if (span == 0) {
		std::cout << "expection shortestSpan" << std::endl;
		throw std::exception();
	}
	return span;
}

unsigned int	span::longestSpan() {
	int	span = 0;

	if (!lst){
		throw std::exception();
	}
	for (unsigned int i = 0; i < n; i++) {
		for (unsigned int j = i + 1; j < n; j++) {
			int tmp = lst[i] - lst[j];
			if (tmp < 0)
				tmp *= -1;
			if ( tmp > span)
				span = tmp;
		}
	}
	if (span == 0) {
		std::cout << "expection longestSpan" << std::endl;
		throw std::exception();
	}
	return span;
}
