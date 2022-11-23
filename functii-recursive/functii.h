#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Factorialul unui numar.

int factorial(int x) {
	if (x == 1) {
		return 1;
	}
	else {
		return x * factorial(x - 1);
	}
}

// Exercitiul 1 - stiva de apelare.

//int h(int y) {
//	return y - 2;
//}
//
//int g(int x) {
//	return x + h(x);
//}
//
//int f(int a, int b) {
//	a = g(a) - 5;
//	b = g(b) + 2;
//	return h(a) + h(b);
//}

// Exercitiul 2 - stiva de apelare.

//int p(int x, int y) {
//	x = x + (y % 2);
//	y = y - 1;
//	return x + y;
//}
//
//int o(int x) {
//	return x - (x % 2);
//}
//
//int h(int x) {
//	return o(x) - pow(o(x), 2);
//}
//
//int g(int x) {
//	return x - h(2 * x);
//}
//
//int f(int a, int b) {
//	int r = a;
//	a = b + g(b);
//	b = r + g(r);
//	return p(a, b);
//}

// Exercitiu 3 - stiva de apelare. (Pb. 6)

int logaritm(int a, int b) {
	if (b < 1) {
		return -1;
	}
	else {
		if (a % b == 0) {
			return 1 + logaritm(a / b, b);
		}
		else {
			return 0;
		}
	}
}

// Exercitiu 4 - stiva de apelare. (Pb. 7)

void numerePareDeLaCoada(int n) {
	if (n != 0) {
		if (n % 2 == 0) {
			cout << n % 10;
		}
		numerePareDeLaCoada(n / 10);
	}
}

// Exercitiu 5 - stiva de apelare. (Pb. 20)

int problema5(int n) {
	if (n == 0) {
		return 0;
	}
	else {
		return n % 2 + problema5(n / 2);
	}
}

// Exercitiu 6 - stiva de apelare. (Pb. 31)

int problema6(int x, int y) {
	if (x < y) {
		return 1 + problema6(x + 1, y);
	}
	if (y < x) {
		return 1 + problema6(y + 1, x);
	}
	return 1;
}