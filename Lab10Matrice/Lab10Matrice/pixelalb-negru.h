#ifndef ALBNEGRU_H
#define ALBNEGRU_H
#include "pixel.h"
#include <fstream>
#include <iostream>
using namespace std;
class Albnegru:Pixel{
private:
    bool alb ;
public:
    Albnegru();
    Albnegru(bool b);
    Albnegru(Albnegru& p);
    ~Albnegru();
    void setalb(bool b);
    bool getalb();
    Albnegru& operator= (Albnegru& a);
    bool operator == (const Albnegru &);
    bool operator!=(const Albnegru &); 
	friend ostream& operator <<(ostream& os, Albnegru& a){
		cout << a.alb << " ";
		return os;
	}
	friend istream& operator >> (istream& is, Albnegru& a){
		bool b;
		cout << "Citire pixel alb-negru" << endl;
		is >> b;
		a.setalb(b);
		cout << endl;
		return is;
	}
};

#endif // PIXELALB-NEGRU
