#ifndef UI_H_INCLUDED
#define UI_H_INCLUDED
#include "controller.h"
using namespace std;
template <class T>
class UI {
private:
	Contro<T> ui;
public:
	UI();
	UI(Contro<T>);
	UI(UI&);
	~UI();
	void setui(T, int, int);
	T& getui(int, int);
	UI<T>& operator=(const UI<T>&);
	int getrand();
	int getcol();
	void meniu();
	void citire();
	void afisare();
};
template <class T>
int UI<T>::getrand() {
	return ui.getrand();
}
template <class T>
int UI<T>::getcol() {
	return ui.getcol();
}
template <class T>
T& UI<T> ::getui(int i, int j){
	return ui.getrepo(i, j);
}
template <class T>
void UI<T>::setui(T p, int a, int b) {
	ui.setcontro(p, a, b);
}

template <class T>
UI<T>::UI() {
}
template <class T>
UI<T> ::UI(Contro<T> c){
	ui = c;
}
template <class T>
UI<T>::UI(UI<T>& u){
	ui = u.ui;
}
template <class T>
UI<T>::~UI(){

}
template <class T>
UI<T>& UI<T> :: operator=(const UI<T>& u) {
	ui = u.ui;
}
template <class T>
void UI<T> ::afisare() {
	cout << endl;

	cout << "rand=" << ui.getrand() << endl;
	cout << "col=" << ui.getcol() << endl;
	cout << endl;
	for (int i = 0; i<ui.getrand(); i++){
		for (int j = 0; j<ui.getcol(); j++)
			cout << getui(i, j);
		cout << endl;
	}
	cout << endl;
}
template <class T>
void UI<T> ::citire() {
	int r;
	//int a;
	int c;
	cout << "Introduceti randuri:" << endl;
	cin >> r;
	cout << "Introduceti coloane:" << endl;
	cin >> c;
	ui.setcoloana(c);
	ui.setranda(r);
	T g;
	for (int i = 0; i<r; i++)
	for (int j = 0; j<c; j++)
	{
		cin >> g;
		ui.setcontro(g, i, j);
	}
}
template <class T>
void UI<T>::meniu() {
	int n;
	int a;
	while (true){
		cout << "__________________________________________________________________" << endl;
		cout << "1. Citire" << endl;
		cout << "2. Afisare" << endl;
		cout << "3. Rotire" << endl;
		cout << "0. Exit" << endl;
		cout << "__________________________________________________________________" << endl;
		cin >> n;
		if (n == 0){ return; }
		else if (n == 2) afisare();
		else  if (n == 1) citire();
		if (n == 3)
		{
			cout << "Introduceti unghiul: " << endl;
			cin >> a;
			ui.rotireimg(a);
		}
	}
}

#endif // UI_H_INCLUDED