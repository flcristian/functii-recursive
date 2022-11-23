#include "functii.h"

int sumaCifrelor(int n) {
	if (n == 0) {
		return 0;
	}
	return n % 10 + sumaCifrelor(n / 10);
}