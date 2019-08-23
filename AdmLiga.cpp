#ifndef ADMLIGA_CPP
#define ADMLIGA_CPP
	#include"Liga.cpp"
	#include<fstream>
	#include<iostream>
	#include<string.h>
	class AdmLiga{
		private:
			string ruta;
			vector<Liga*>ligas;
			string token(string cadena, string divisor, int pos){
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
			AdmLiga(string ruta){
				this->ruta=ruta;
			}
			void addLiga(Liga*liga){
				ligas.push_back(liga);
			}	
			void eraseLiga(int pos){
				ligas.erase(ligas.begin()+pos);
			}
			~AdmLiga(){
				
			}
			//leer 
			void leer(){
				fstream leer;
				string linea;
				leer.open(ruta.c_str());
				if(leer.is_open()){
					while(!leer.eof()){
						getline(leer,linea);
						
						if(linea.at(0)=='$'){
							//ligas
							cout<<token(linea,":$",1)<<endl;
							cout<<token(linea,":$",2)<<endl;
							
						}else{
							//equipos
							cout<<token(linea,":{|}",1)<<endl;
							cout<<token(linea,":{}|",2)<<endl;
							cout<<token(linea,":{}|",3)<<endl;
							cout<<token(linea,":{}|",4)<<endl;
						}
					}
				}else{
					cout<<"\nno se pudo abrir el archivo\n";
				}
				leer.close();
			}
	};
#endif
