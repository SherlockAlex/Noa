#include "Update.h"
#include "Graphic.h"
#include <iostream>

using namespace std;

void Update()
{
	//Ö÷Ñ­»·
	for (int i = 100; i < 150; i++) {
		for (int j = 50; j < 100; j++) {
			DrawPixel(i, j);
			//cout << "(" << i << "," << j << ")" << endl;
		}
	}
}
