#include "pixelalb-negru.h"
Albnegru ::Albnegru() {
    alb=false;
}
Albnegru ::Albnegru(bool b) {
    alb=b;
}
Albnegru ::Albnegru(Albnegru& a) {
    alb=a.alb;
}
Albnegru :: ~Albnegru(){
}
void Albnegru :: setalb(bool b) {
    alb=b;
}
bool Albnegru ::getalb(){
    return alb;
}
Albnegru& Albnegru :: operator= (Albnegru& a){
    alb=a.alb;
    return * this;
}
bool Albnegru:: operator == (const Albnegru &a){
    if  (alb==a.alb)
        return true;
    else
        return false;
}
bool Albnegru:: operator !=(const Albnegru &a){
    if  (alb=!a.alb)
        return true;
    else
        return false;
}
