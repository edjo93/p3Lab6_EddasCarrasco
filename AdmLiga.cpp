#ifndef ADMLIGA_CPP
#define ADMLIGA_CPP
	#include"Liga.cpp"
	#include<fstream>
	#include<iostream>
	#include<string.h>
	using namespace std;
	class AdmLiga{
		private:
			string ruta;
			vector<Liga*>ligas;
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
			vector<Liga*> getLiga(){
				return ligas;
			}
			AdmLiga(string ruta){
				this->ruta=ruta;
			}
			void addLiga(Liga*liga){
				ligas.push_back(liga);
			}	
			void eraseLiga(int pos){
				ligas.erase(ligas.begin()+pos);
			}
			int size(){
				return ligas.size();
			}
			void print(){
				for(int i=0;i<ligas.size();i++){
					cout<<"["<<i<<"] "<<ligas[i]->getNombre()<<endl;
				}
			}
			~AdmLiga(){
				
			}
			//leer 
			void leer(){
				fstream leer;
				string linea;
				ligas.clear();
				leer.open(ruta.c_str());
				if(leer.is_open()){//al terminar de leer el archivo el vector de ligas estara lleno
					while(!leer.eof()){
						getline(leer,linea);
						
					}
				}else{
					cout<<"\nno se pudo abrir el archivo\n";
				}
				leer.close();
			}
			void escribir(){
				fstream escribir;
				escribir.open(ruta.c_str());
				for(int i=0;i<ligas.size();i++){
					escribir<<"$"<<ligas[i]->getNombre()<<":"<<ligas[i]->getPais()<<endl;
				}
				escribir.close();
			}
			
	};
#endif
