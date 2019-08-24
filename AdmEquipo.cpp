#ifndef ADMEQUIPO_CPP
#define ADMEQUIPO_CPP
	#include"Equipo.cpp"
	#include<fstream>
	#include<iostream>
	#include<string.h>
	using namespace std;
	class AdmEquipo{
		private:
			string ruta;
			vector<Equipo*>equipos;
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
			AdmEquipo(string ruta){
				this->ruta=ruta;
			}
			void addEquipo(Equipo*equipo){
				equipos.push_back(equipo);
			}	
			void eraseEquipo(int pos){
				equipos.erase(equipos.begin()+pos);
			}
			~AdmEquipo(){
				
			}
			//leer 
			void leer(){
				fstream leer;
				string linea;
				equipos.clear();
				leer.open(ruta.c_str());
				if(leer.is_open()){//al terminar de leer el archivo el vector de equipos estara lleno
					while(!leer.eof()){
						getline(leer,linea);
						if(linea.at(0)!='$'){
							addEquipo(new Equipo(token(linea,":;{}|",1),token(linea,":;{}|",2)));
						}
					}
				}else{
					cout<<"\nno se pudo abrir el archivo\n";
				}
				leer.close();
			}
			int size(){
				return equipos.size();	
			}
			void print(){
				for(int i=0;i<equipos.size();i++){
					cout<<"["<<i<<"] "<<equipos[i]->getNombre()<<endl;
				}
			}
			void escribir(){
				fstream escribir;
				escribir.open(ruta.c_str());
				for(int i=0;i<equipos.size();i++){
					escribir<<equipos[i]->getNombre()<<":"<<equipos[i]->getAnioFundacion()<<"{";
				}
				escribir.close();
			}
			
	};
#endif
