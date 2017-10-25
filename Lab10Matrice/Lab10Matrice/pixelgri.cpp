#include "pixelgri.h"
Gri :: Gri() {
    gri=0;
}
Gri :: Gri(int g) {
    gri=g;
}
Gri :: Gri(Gri& g) {
    gri=g.gri;
}
Gri ::~Gri() {
}
void Gri:: setgri(int g){
    gri=g;
}
int Gri :: getgri(){
    return gri;
}
Gri& Gri :: operator= (const Gri& g){
    gri=g.gri;
    return* this;
}
bool Gri:: operator== (const Gri& g){
    if (gri==g.gri)
        return true;
    else
        return false;
}
bool Gri:: operator!=(const Gri& g){
    if (gri=!g.gri)
        return true;
    else
        return false;
}
