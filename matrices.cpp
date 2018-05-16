#include <iostream>
#include <stdlib.h>
#include <ctime>
using std::cout;
using std::endl;
using std::cin;

//instanciar matriz
int** createMatrix(int);

void freeMatrix(int**&, int&);


//Llenar la matriz con numeros aleatorios
void llenarmatriz(int** matrix, int size){
   srand(time(NULL));
   
      for(int i=0;i<size;i++){
         for(int j =0;j<size;j++){
             matrix[i][j] = rand()%10+1;
             
         }
	 
      }
}

//imprimir la matriz de forma ordenada
void imprimirmatriz(int** matrix, int size){
    for (int i=0; i<size;i++){
       for(int j=0;j<size;j++){
	   if(matrix[i][j] < 10)
             cout<<" 0"<<matrix[i][j];
	   else
   	     cout<<" "<<matrix[i][j];
       }
       cout<<endl;
    }


}

//liberar memoria de matriz
void freeMatrix(int**& matrix,int& size){
   //liberar arreglos de ints
   for(int i = 0;i<size;i++){
        delete[]matrix[i];
        matrix[i]=NULL;
   }
   //liberar arreglo de apuntadores a int
   delete[] matrix;

   matrix = NULL;
   size = 0;
}



int main(){
 int size = 5;
 int** mainMatrix = NULL;
 int** matrix = createMatrix(size);

 llenarmatriz(matrix,size);

 imprimirmatriz(matrix,size);

// freeMatrix(mainMatrix,size);
 
 //¿Que valor tiene main Matrix en este punto?
 cout<<"MainMatrix: "<<mainMatrix<<endl
     <<"Size: "<<size<<endl;

 
  return 0;
}


//instanciar matriz
int** createMatrix(int size){

     int** retValue=new int*[size];
     for(int i=0;i<size;i++){
         retValue[i] = new int[size];
     }
     //inicializar la matriz en 0
     for(int i=0;i<size;i++)
      for(int j=0;j<size;j++)
         retValue[i][j]=0;
     
     return retValue;
}



