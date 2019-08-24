#include<iostream>
#include"AdmLiga.cpp"
#include"AdmEquipo.cpp"
#include"AdmJugador.cpp"
using namespace std;
int main(){
	AdmLiga admLiga("./ligas.txt");
	AdmEquipo admEquipo("./ligas.txt");
	AdmJugador admJugador("ligas.txt");
	char opcion;
	do{
		cout<<"\nopciones\n1-administrar ligas\n2-administrar equipos\n3-administrar jugadores\n4-jugar partido\n5-cargar archivo\n6-guardar archivo\n7-ver tablas\n8-salir\n?:";
		cin>>opcion;
		switch(opcion){
			case'1':
				{
					char opcion2;
					do{
						cout<<"\n1-agregar\n2-eliminar\n3-salir\n?:";
						cin>>opcion2;
						switch(opcion2){
							case'1':
								{
									string nombre;
									string pais;
									cout<<"\nnombre: ";
									cin>>nombre;
									cout<<"\npais: ";
									cin>>pais;
									admLiga.addLiga(new Liga(nombre,pais));
								}
								
								break;
							case'2':
								{
									if(admLiga.size()>0){
										int pos;
										cout<<"pos "<<"liga"<<endl;
										admLiga.print();
										cout<<"?:";
										cin>>pos;
										if(pos>=0&&pos<admLiga.size()){
											admLiga.eraseLiga(pos);
										}else{
											cout<<"\nno valid pos\n";
										}
									}else{
										cout<<"\naun no hay ligas\n";
									}	
								}
								break;
							case'3':
								break;
							default:
								cout<<"\nno selecciono una opcion correcta\n";			
						}
					}while(opcion2!='3');
				}
				
				break;
			case'2':
				{
					char opcion2;
					do{
						cout<<"\n1-agregar\n2-eliminar\n3-salir\n?:";
						cin>>opcion2;
						switch(opcion2){
							case'1':
								{
									if(admLiga.size()>0){
										//si se pueden crear equipos
										string nombre;
										string anioFundacion;
										cout<<"\nnombre: ";
										cin>>nombre;
										cout<<"anio Fundacion: ";
										cin>>anioFundacion;
										admEquipo.addEquipo(new Equipo(nombre,anioFundacion));
									}else{
										//no se pueden crear equipos
										cout<<"\naun no hay ligas\n";
									}
								}
								
								break;
							case'2':
								{
									if(admEquipo.size()>0){
										int pos;
										cout<<"pos "<<"liga"<<endl;
										admEquipo.print();
										cout<<"?:";
										cin>>pos;
										if(pos>=0&&pos<admEquipo.size()){
											admEquipo.eraseEquipo(pos);
										}else{
											cout<<"\nno valid pos\n";
										}
									}else{
										cout<<"\naun no hay equipos\n";
									}		
								}
								break;
							case'3':
								break;
							default:
								cout<<"\nno selecciono una opcion correcta\n";			
						}
					}while(opcion2!='3');
					
					
				}
				break;
			case'3':
				{
					if(admEquipo.size()>0){
						//si se pueden crear jugadores
					}else{
						//no se pueden crear jugadores
						cout<<"\naun no hay equipos\n";
					}
				}
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
