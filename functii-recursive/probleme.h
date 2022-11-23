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

// Problema 6 ???

void sufixeNumar(int n, int r) {
	if (n != 0) {
		r = r * 10 + n % 10;
		cout << r << " ";
		sufixeNumar(n / 10, r);
	}
} 

// Problema 7

void prefixeNumar(int n) {
	if (n != 0) {
		cout << n << " ";
		prefixeNumar(n / 10);
	}
}

// Problema 8

int cifraDeRangK(int n, int k) {
	if (k != 0) {
		return cifraDeRangK(n / 10, k - 1);
	}
	return n % 10;
}

// Problema 9

int eliminareCifraDeRangK(int n, int k) {
	if (k != 0) {
		return eliminareCifraDeRangK(n / 10, k - 1) * 10 + n % 10;
	}
	return n / 10;
}

// Problema 10

int eliminarePrimaUltimaCifra(int n) {
	n /= 10;
	if (n != 0) {
		if (n / 10 != 0) {
			return eliminarePrimaUltimaCifra(n) * 10 + n % 10;
		}
		return eliminarePrimaUltimaCifra(n);
	}
	return n / 10;
}

// Problema 11 ???

int invers(int n, int r) {
	if (n != 0) {
		r = r * 10 + n % 10;
		return invers(n / 10, r);
	}
	return r;
}

bool palindrom(int n) {
	if (n == invers(n, 0)) {
		return true;
	}
	return false;
}

// Problema 12 ???

// Problema 13

bool cifreOrdineCrescatoare(int n) {
	if (n / 10 != 0) {
		if (n % 10 > n / 10 % 10) {
			return cifreOrdineCrescatoare(n / 10);
		}
		return false;
	}
	return true;
}

// Problema 14

bool cifreOrdineDescrescatoare(int n) {
	if (n / 10 != 0) {
		if (n % 10 < n / 10 % 10) {
			return cifreOrdineDescrescatoare(n / 10);
		}
		return false;
	}
	return true;
}

// Problema 15 Nu exista.

// Problema 16

bool cifreleOscileaza(int n, int c) {
	if (n / 10 != 0) {
		if (n % 10 != n / 10 % 10) {
			int r = 0;
			if (n % 10 > n / 10 % 10) {
				r = 1;
			}
			if (c != r) {
				return cifreleOscileaza(n / 10, r);
			}
			return false;
		}
		return false;
	}
	return true;
}

// Problema 17

int cifraDeControl(int n) {
	if (n / 10 != 0) {
		return cifraDeControl(sumaCifrelor(n));
	}
	return n;
}

// Problema 18

bool bInghiteA(int a, int b, int k) {
	if (b != 0) {
		if (k < countCifre(a)) {
			if (cifraDeRangK(a, k) == b % 10) {
				return bInghiteA(a, b / 10, k + 1);
			}
			if (k != 0) {
				return bInghiteA(a, b, 0);
			}
			return bInghiteA(a, b / 10, 0);
		}
		return true;
	}
	return false;
}

// Problema 19

int permutareStanga(int n, int r, int c) {
	if (n / 10 != 0) {
		if (r == 0) {
			r = n;
		}
		return (permutareStanga(n / 10, r, c + 1));
	}
	return r % int(pow(10, c)) * 10 + n;
}

// Problema 20

