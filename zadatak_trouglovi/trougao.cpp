#include "trougao.h"

double trougao(double a, double b, double c, int& kategorija) {
	if (a <= 0 || b <= 0 || c <= 0) {
		kategorija = -1;
		return -1;
	}
	if (a + b > c && a + c > b && b + c > a) {
		if (a == b && a == c) {
			kategorija = 0;
		}
		else if (a == b || a == c || b == c) {
			kategorija = 1;
		}
		else if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a) {
			kategorija = 2;
		}
		else {
			kategorija = 3;
		}
		return a + b + c;
	}
	else {
		kategorija = -1;
		return -1;
	}
}