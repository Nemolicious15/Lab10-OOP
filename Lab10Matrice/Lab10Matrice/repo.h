#ifndef REPO_H
#define REPO_H
#include "pixel.h"
#include "imagine.h"
template <class T>
class Repo {
private:
	Imagine<T> img;
public:
	Repo(); //constr
	Repo(int, int); //constr par
	Repo(Repo&); //constr cpy
	~Repo(); //destructor
	void setcolo(int); //set coloana
	void setrando(int); //set rand
	Repo& operator=(const Repo&); //operator atribuire
	void setrepo(T, int, int); //set pixel
	T& getimg(int i, int j); //get pixel
	int getcol(); //get coloana
	int getrand(); //get rand
	Imagine<T> getimagine(); //get imagine
};

//GET IMAGINE
template <class T>
Imagine<T> Repo<T>::getimagine(){
	return img;
}
//GET RAND
template <class T>
int Repo<T>::getrand() {
	return img.getrand();
}
//GET COLOANA
template <class T>
int Repo<T>::getcol() {
	return img.getcol();
}
//SET PIXELI
template <class T>
void Repo <T>::setrepo(T p, int a, int b){
	img.setpixel(p, a, b);
}
// SET COLOANA
template <class T>
void Repo <T>::setcolo(int a){
	img.setcol(a);
}
//SET RAND
template <class T>
void Repo <T>::setrando(int a){
	img.setrand(a);
}

//CONSTR REPO
template <class T>
Repo<T>::Repo() {

}
//CONSTR CU PAR
template <class T>
Repo<T>::Repo(int a, int b) {
	img = Imagine<T>(a, b);
}
//CONSTR COPIERE
template <class T>
Repo<T>::Repo(Repo& i)
{
	img = i.img;
}
//DESTRUCTOR
template <class T>
Repo<T>::~Repo(){

}
//OPERATOR ATRIBUIRE
template <class T>
Repo<T>& Repo<T> ::operator=(const  Repo<T>& i){
	img = i.img;
	return *this;
	
}
//GET PIXEL
template <class T>
T& Repo<T> ::getimg(int i, int j) {
	return img.getpixel(i, j);
}
#endif // REPO_H