#include <iostream>
#include <stdio.h> 
#include <vector>
// #include<GL/glut.h> 
#include<math.h> 


int main() {
    std::vector<std::vector<int>> a(3, std::vector<int>(3));  

    a[0][0] = 1;
    a[0][1] = 2;
    a[0][2] = 3;

    a[1][0] = 4;
    a[1][1] = 5;
    a[1][2] = 6;

    a[2][0] = 7;
    a[2][1] = 8;
    a[2][2] = 9;

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            std::cout << a[i][j] << " ";
        }
        std::cout << std::endl;
    }

	/*
	
		Schroingers equation




	
	
	*/

	/*
	
	
	Linear algebra library 
	
	
	
	*/

}

