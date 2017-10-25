#ifndef PIXELRGB_H
#define PIXELRGB_H
#include "pixel.h"
#include <fstream>
#include<iostream>
using namespace std;
class Rgb :Pixel {
private :
    int red;
    int green;
    int blue;
public :
    Rgb();
    Rgb(int , int , int);
    Rgb(Rgb&);
	~Rgb();
    void setred(int);
    void setgreen(int);
    void setblue(int);
    int getred();
    int getgreen();
    int getblue();
    Rgb& operator=(Rgb&);
    bool operator==(const Rgb&);
    bool operator!=(const Rgb&);
	friend ostream& operator <<(ostream& os, Rgb& b){
		cout << b.red << " ";
		cout << b.green << " ";
		cout << b.blue << " ";
		return os;

	}
	friend istream& operator >> (istream& is, Rgb& g){
		int b, c, r;
		cout << "Citire pixel RGB" << endl;
		is >> b >> c >> r;
		g.setred(r);
		g.setgreen(c);
		g.setblue(b);
		cout << endl;
		return is;
	}
};


#endif // PIXELRGB_H_INCLUDED
