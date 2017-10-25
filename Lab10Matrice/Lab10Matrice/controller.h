#ifndef CONTROLER_H
#define CONTROLER_H
#include "repo.h"
#include <math.h>
template <class T>
class Contro {
private:
	Repo<T> contro;
public:
	Contro(); //constr
	Contro(Repo<T>&); //constr param
	Contro(Contro&); //constr cpy
	~Contro(); //destructor
	Contro& operator=(const Contro&); //operator atribuire
	T& getrepo(int, int); //get imagine
	Contro<T> rotireimg(double); //rotire imagine
	void setcontro(T p, int a, int b); //set pixel

	void setranda(const int&); //set rand
	void setcoloana(const int&); //set coloana
	int getcol(); //get coloana
	int getrand(); //get rand
};
//GET RAND
template <class T>
int Contro<T>::getrand() {
	return contro.getrand();
}
//GET COLOANA
template <class T>
int Contro<T>::getcol() {
	return contro.getcol();
}
//GET IMAGINE
template <class T>
T& Contro<T>::getrepo(int i, int j) {
	return contro.getimg(i, j);
}
//SET RAND
template <class T>
void Contro<T>::setranda(const int& i){
	contro.setrando(i);
}
//SET COLOANA
template <class T>
void Contro<T>::setcoloana(const int& i){
	contro.setcolo(i);
}

//SET PIXEL
template <class T>
void Contro<T>::setcontro(T p, int a, int b) {
	contro.setrepo(p, a, b);
}

//CONSTRUCTOR
template <class T>
Contro<T>::Contro() {

}

//CONSTRUCTOR PAR
template <class T>
Contro<T>::Contro(Repo<T> &r)
{
	contro = r;

}
//CONSTRUCTOR CPY
template <class T>
Contro<T>::Contro(Contro<T>& c) {

	contro = c.contro;
}
//DECONSTR
template <class T>
Contro<T>::~Contro() {

}
//OPERATOR ATRIBUIRE
template <class T>
Contro<T>& Contro<T>:: operator=(const Contro<T> &c){
	this->contro = c.contro;
	return *this;
}
//ROTIRE IMAGINE
template <class T>
Contro<T> Contro<T> ::rotireimg(double a1){
	int x, y;
	Imagine<T> a(contro.getimagine());
	T n2;
	for (int i = 0; i<getrand() / 2; i++)
	for (int j = 0; j<getcol(); j++)
	{
		n2 = a.getpixel(i, j);
		a.setpixel(a.getpixel(getrand() - i - 1, j), i, j);
		a.setpixel(n2, getrand() - i - 1, j);
	}

	for (int i = 0; i<getrand(); i++)
	for (int j = 0; j<getrand(); j++){
		x = i*round(cos(a1)) + j*round(sin(a1));
		if (x<0) x = -1 * (x);

		y = i*round(-sin(a1)) + j*round(cos(a1));
		if (y<0) y = -1 * (y);
		setcontro(a.getpixel(i, j), x, y);
	}
	return *this;
}
#endif // CONTROLER_H