#include <iostream>
#include <conio.h>
using namespace std;
int filas,columnas,valor;
//extern int mat[filas][columnas];
float matriz (int& mat);

void orden(){system("cls");

}
multiplicacion(){system("cls");
}
transpuesta(){system("cls");
}
frecuencia(){system("cls");
}
matriz(){
int mat[filas][columnas];
for(int i=1;i<=filas;i++){
for(int j=0;j<columnas;j++){
cout<<"\n ingresa el valor de tu vector "<<i<<" en la posicion "<<j<<endl;
cin>>valor;
mat[i][j]=valor;
}
}

}
imprimirv(){

}



main(){
  system("cls");
  cout<<"  Elije que programa quieres correr"<<endl;
  cout<<"\n 1)Ordenar vector de menor a mayor"<<endl;
  cout<<"\n 2)Multiplicar dos matrices"<<endl;
  cout<<"\n 3)Transpuesta de matriz"<<endl;
  cout<<"\n 4)Frecuencia Matriz de 5x5,llenado, impresion, busqueda de un numero a buscar sacando su frecuencia "<<endl;
  cout<<"\n 5)salir"<<endl;
int opcion;
cin>>opcion;
switch(opcion){
break;
case 1:
system("cls");
filas=1;
cout<<"Ordenar vector de menor a mayor\n"<<endl;
cout<<"Cuanto valores quieres en tu vector?"<<endl;
cin>>columnas;
matriz();
void orden();
break;
case 2:
system("cls");
matriz();
void multiplicacion();
break;
case 3:
system("cls");
matriz();
void transpuesta();
case 4:
system("cls");
matriz();
void frecuencia();
break;
case 5:
system("cls");
exit(0); 
break;	
}
}
