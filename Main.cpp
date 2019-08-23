#include<iostream>
#include"AdmLiga.cpp"
using namespace std;
int main(){
	char opcion;
	do{
		cout<<"\nopciones\n1-administrar ligas\n2-administrar equipos\n3-administrar jugadores\n4-jugar partido\n5-cargar archivo\n6-guardar archivo\n7-ver tablas\n?:";
		cin>>opcion;
		switch(opcion){
			case'1':
				{
					//adm ligas
					AdmLiga admLiga("./ligas.txt");
					admLiga.leer();	
				}
				
				break;
			case'2':
				break;
			case'3':
				break;
			case'4':
				break;
			case'5':
				break;
			case'6':
				break;
			case'7':
				break;
			case'8':
				break;							
			default:
				cout<<"\nno ha ingresado una opcion correcta\n";	
		}
	}while(opcion!='8');
	return 0;
}
