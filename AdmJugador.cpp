#ifndef ADMJUGADOR_CPP
#define ADMJUGADOR_CPP
	#include"Jugador.cpp"
	#include<fstream>
	#include<iostream>
	#include<vector>
	#include<string.h>
	using namespace std;
	class AdmJugador{
		private:
			string ruta;
			vector<Jugador*>jugadores;
			string token(string cadena, string divisor, int pos){//tabulacion del ing osman xD
		       if(cadena.size()>0){
		        	char oracion[cadena.size()]; 
			        for (int i=0;i<=cadena.size();i++)
			         {
			               oracion[i]=cadena[i];
			         }                    
			         char *ptrtoken; 
			         int num=1;
			         const char* d=divisor.c_str();
			         ptrtoken = strtok(oracion , d);             
			         while(ptrtoken){
			             if(num==pos){ 
			                return ptrtoken;                    
			             }                 
			             ptrtoken = strtok(NULL, d);
			             num++;
			         }
			        return "";
		    	}else{
		            return "";
		        }
			}
		public:
			AdmJugador(string ruta){
				this->ruta=ruta;
			}
			void addJugador(Jugador*jugador){
				jugadores.push_back(jugador);
			}	
			void eraseJugador(int pos){
				jugadores.erase(jugadores.begin()+pos);
			}
			int size(){
				return jugadores.size();
			}
			void print(){
				for(int i=0;i<jugadores.size();i++){
					cout<<"["<<i<<"] "<<jugadores[i]->getNombre()<<endl;
				}
			}
			~AdmJugador(){
				
			}
			//leer 
			void leer(){
				fstream leer;
				string linea;
				jugadores.clear();
				leer.open(ruta.c_str());
				if(leer.is_open()){//al terminar de leer el archivo el vector de jugadores estara lleno
					while(!leer.eof()){
						getline(leer,linea);
						if(linea.at(0)=='$'){
							//add jugador
							
						}
					}
				}else{
					cout<<"\nno se pudo abrir el archivo\n";
				}
				leer.close();
			}
			
			void escribir(){
				fstream escribir;
				escribir.open(ruta.c_str());
				for(int i=0;i<jugadores.size();i++){
					escribir<<jugadores[i]->getNombre()<<":"<<jugadores[i]->getDorsal()<<jugadores[i]->getPaisOrigen();
				}
				escribir.close();
			}
			
	};
#endif
