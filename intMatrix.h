#ifndef INTMATRIX_H
#define INTMATRIX_H

class intMatrix{
   private:
      int** matrix;
      int size;

   public: 
      intMatrix();//constructor por defecto
      intMatrix(int);//constructor sobrecargado
void createMatrix(int);//protoripo funcion instanciar matriz
//instanciar Matriz      
      void freeMatrix();
      ~intMatrix();//destructor  

};//end class

#endif

