#ifndef IMAGINE_H
#define IMAGINE_H
template<class T>
class Imagine :Pixel {
private :
    T mat[100][100];
    int rand;
    int col;
public :
    Imagine(); //constr
    Imagine(int, int); //constr param
    Imagine(Imagine&); //constr cpy
    ~Imagine(); //destructor
    void setrand(int); //set rand
    void setcol(int); //set coloana
    int getrand(); //get rand
    int getcol(); //get coloana
    //Imagine& operator=(Imagine&);
	Imagine<T>& operator=(const Imagine&); //operator atribuire
	T& getpixel(int i, int j){ //get pixel
		return mat[i][j];
	}
	void setpixel(T p, int i, int j){ //set pixel
		mat[i][j] = p;
	}
};
//CONSTRUCTOR
template<class T>
Imagine<T>:: Imagine (){
    rand=0;
    col=0;
}
//CONSTRUCTOR PARAMETRII
template <class T>
Imagine<T>:: Imagine(int a, int b){
    rand=a;
    col=b;
}
//CONSTRUCTOR COPIERE
template <class T>
Imagine<T>:: Imagine(Imagine<T> & i1){
    rand=i1.rand;
    col=i1.col;
	for (int i = 0; i < rand; i++)
	for (int j = 0; j < col; j++)
		mat[i][j] = i1.mat[i][j];

}
//DESTRUCTOR
template<class T>
Imagine<T> :: ~Imagine(){

}
//SET RAND
template<class T>
void Imagine <T>:: setrand(int a){
    rand=a;
}
//SET COLOANA
template<class T>
void Imagine <T>:: setcol(int a){
    col=a;
}
//GET RAND
template<class T>
int Imagine<T>:: getrand(){
        return rand;
}
//GET COLOANA
template<class T>
int Imagine<T>:: getcol(){
        return col;
}
//OPERATOR ATRIBUIRE
template <class T>
Imagine<T>& Imagine<T> :: operator=(const Imagine<T> & i1){
    rand=i1.rand;
    col=i1.col;
	for (int i=0; i < rand; i++)
	for (int j = 0; j < col; j++)
		mat[i][j] = i1.mat[i][j];
	return *this;
}
#endif // IMAGINE_H_INCLUDED 1
