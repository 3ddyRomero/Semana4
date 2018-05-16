#include "intMatrix.h"
#include <iostream>

using namespace std;

intMatrix::~intMatrix(){
   freeMatrix();
}

void intMatrix::freeMatrix(){
   if(matrix != 0){
        for(int i=0;i<size;i++){
	        delete[] matrix[i];
		matrix[i]=NULL;
	}
	delete[] matrix;

	matrix=NULL;
	size=0;
   }
}

//la clase::constructorsobrecargado
intMatrix::intMatrix(int pSize){

  createMatrix(pSize);

}

//la clase::constructorpordefecto
intMatrix::intMatrix(){
  size = 10;
  createMatrix(size); 
}

void intMatrix::createMatrix(int pSize){
    //Liberar Memoria 
    freeMatrix();

    size = pSize;
    //inicializar la matriz en memoria
    matrix = new int*[size];

    for(int i=0;i<size;i++){
         matrix[i] = new int[size];
    }

    //inicializar valores en 0
    for(int i=0;i<size;i++){
      for(int j=0;j<size;j++){
	matrix[i][j]=0;
      }
    }
}

