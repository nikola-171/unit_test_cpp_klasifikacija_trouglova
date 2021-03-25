#include "trougao.h"

bool pitagora(double a, double b, double c)
{
	a *= a;
	b *= b;
	c *= c;
	return a == b + c || b == c + a || c == a + b;
}

double trougao(double a, double b, double c, int& kategorija) {
	double obim = -1.0;
	//postoji stranica koja je manja ili jednaka 0 - nedozvoljeno
	if (a <= 0.0 || b <= 0.0 || c <= 0.0) {
		kategorija = -1;
		return -1;
	}
	//sada znamo da su sve stranice u dozvoljenom opsegu
	//pitamo se da li može da se kreira trougao

	if (a < b + c && b < a + c && c < a + b) {
		
		obim = a + b + c;
		//ovde znamo da od ovih stranica moze da se kreira trougao
		//sada ispitujemo tip trougla

		//prvo ispitujemo da li je trougao jednakostranican
		if (a == b && b == c && c == a) {
			kategorija = 0;
		}
		//ako nije jednakostranican pitamo se da li je jednakokraki
		else if (a == b || b == c || c == a) {
			kategorija = 1;
		}
		//ako nije jednakokraki pitamo se da li je pravougli
		else if (pitagora(a, b, c)) {
			kategorija = 2;
		}
		//ovde znamo da od stranica moze da se kreira a da nije ni jedan od prethodnih
		else {
			kategorija = 3;
		}
		//i na kraju vracamo obim
		return obim;
	}
	else {
		//ovde znamo da se od ovih stranica ne moze kreirati trougao
		kategorija = -1;
		return -1;
	}
}