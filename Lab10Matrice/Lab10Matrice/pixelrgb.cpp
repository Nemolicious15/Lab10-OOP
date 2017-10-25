#include "pixelrgb.h"
Rgb ::Rgb () {
    red=0;
    green=0;
    blue=0;
}
Rgb::Rgb (int a,int b,int c) {
    red=a;
    green=b;
    blue=c;
}
Rgb::Rgb (Rgb& r){
    red=r.red;
    green=r.green;
    blue=r.blue;

}
Rgb::~Rgb (){

}
void Rgb :: setred(int a){
    red=a;
}
void Rgb :: setgreen(int a){
    green=a;
}
void Rgb :: setblue(int a){
    blue=a;
}
int Rgb:: getred () {
    return red;
}
int Rgb:: getgreen() {
    return green;
}
int Rgb:: getblue () {
    return blue;
}
Rgb& Rgb:: operator=(Rgb& r){
    
	this->red=r.red;
    this->green=r.green;
    this->blue=r.blue;
	return *this;

}
bool Rgb :: operator==(const Rgb& r){
    if ((red==r.red) && (green==r.green) &&(blue==r.blue))
        return true;
    else
        return false;
}

bool Rgb :: operator!=(const Rgb& r){
    if ((red=!r.red) || (green=!r.green)|| (blue=!r.blue))
        return true;
    else
        return false;
}
