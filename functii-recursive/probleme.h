#include "functii.h"

int sumaCifrelor(int n) {
	if (n == 0) {
		return 0;
	}
	return n % 10 + sumaCifrelor(n / 10);
}

// Problema 1 a)

int countCifre(int n) {
	if (n != 0) {
		return 1 + countCifre(n / 10);
	}
	return 0;
}

// Problema 1 b)

int countCifrePare(int n) {
	if (n != 0) {
		if (n % 2 == 0) {
			return 1 + countCifrePare(n / 10);
		}
		return countCifrePare(n / 10);
	}
	return 0;
}

int countCifreImpare(int n) {
	if (n != 0) {
		if (n % 2 == 1) {
			return 1 + countCifreImpare(n / 10);
		}
		return countCifreImpare(n / 10);
	}
	return 0;
}

// Problema 2

bool contineX(int n, int x) {
	if (n != 0) {
		if (n % 10 == x) {
			return true;
		}
		return contineX(n / 10, x);
	}
	return false;
}

// Problema 3

bool cifreIdentice(int n) {
	if (n / 10 != 0) {
		if (n % 10 == n / 10 % 10) {
			return cifreIdentice(n / 10);
		}
		return false;
	}
	return true;
}

// Problema 4

int cifraMax(int n) {
	if (n != 0) {
		if (n % 10 > cifraMax(n / 10)) {
			return n % 10;
		}
		return cifraMax(n / 10);
	}
}

int cifraMin(int n) {
	if (n != 0) {
		if (n % 10 < cifraMin(n / 10)) {
			return n % 10;
		}
		return cifraMin(n / 10);
	}
}

// Problema 5

int cifraMaxPara(int n) {
	if (n != 0) {
		if (n % 10 > cifraMaxPara(n / 10) || cifraMaxPara(n / 10) % 2 == 1) {
			if (n % 10 % 2 == 0) {
				return n % 10;
			}
		}
		if (cifraMaxPara(n / 10) % 2 == 0) {
			return cifraMaxPara(n / 10);
		}
	}
}

int cifraMinPara(int n) {
	if (n != 0) {
		if (n % 10 < cifraMinPara(n / 10) || cifraMinPara(n / 10) % 2 == 1) {
			if (n % 10 % 2 == 0) {
				return n % 10;
			}
		}
		if (cifraMinPara(n / 10) % 2 == 0) {
			return cifraMinPara(n / 10);
		}
	}
}

// Problema 6

void sufixeNumar(int n, int& c) {
	
}