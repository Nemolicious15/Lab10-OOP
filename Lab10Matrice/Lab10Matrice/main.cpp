#include <iostream>
#include <cstdio>
#include "test.h"
#include<conio.h>
#include "UI.h"
#include "repo.h"
#include "pixel.h"
#include "pixelgri.h"
using namespace std;
int main()
{
    //test();
	Repo<Gri> i2(11, 12);
	Contro<Gri> c(i2);
	UI<Gri> u(c);
	u.meniu();
	//_getch();
    return 0;
}
