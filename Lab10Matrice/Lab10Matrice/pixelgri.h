#ifndef PIXELGRI_H
#define PIXELGRI_H
#include"pixel.h"
#include <fstream>
#include<iostream>
using namespace std;
class Gri:Pixel {
private :
    int gri ;
public :
    Gri();
    Gri(int g);
    Gri(Gri &g);
    ~Gri();
    void setgri(int gri);
    int getgri();
    Gri& operator=(const Gri&);
    bool operator==(const Gri&);
    bool operator!=(const Gri&);
	friend ostream& operator <<(ostream& os, Gri& g){
		cout << g.gri << " ";
		return os;
	}
	friend istream& operator >> (istream& is, Gri& g){
		int b;
		cout << "Citire pixel gri" << endl;
		is >> b;
		g.setgri(b);
		cout << endl;
		return is;
	}


};

#endif // PIXELGRI_H_INCLUDED
