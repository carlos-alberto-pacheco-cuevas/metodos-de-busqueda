#include <conio.h> //* declaración de la librería *//
#include <iostream> //* declaración de la librería *//

using namespace std;
	
int main () {

	int numeroArreglo[10];
	int i=0;
	int numeroabuscar =0;
	int bandera =0;
		cout<<"\n\n\n\n\n\n\n\n\t\t\t\t\t\t     BIENVENIDO"<<endl;
	cout<<"\t\t\t\t\t\tINSERTA 10 MATRICULAS ....\n\n\n\n\n\n"<<endl;
	system("pause");

	for(i=0;i<10;i++){
	
	
		cout<<"ingrese matricula"<<i<<":";
		cin>>numeroArreglo[i];
	}
		for(i=0;i<10;i++){
		cout<<"matriculas ingresadas"<<i<<":"<<numeroArreglo[i]<<endl;
	}
		cout<<"ingrese matricula a buscar:";
		cin>>numeroabuscar;
		for(i=0;i<10&& bandera==0;i++){
		if(numeroArreglo[i]==numeroabuscar){
		bandera =1;
			}
	}
	if(bandera==0){
		cout<<"la matricila no existe";
	}else{
		cout<<"la matricila esta en uso";
	}
	return 0;
	
	}
