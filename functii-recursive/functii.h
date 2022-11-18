#include "libraries.h"

// Factorialul unui numar

int factorial(int x) {
	if (x == 1) {
		return x;
	}
	return x * factorial(x - 1);
}