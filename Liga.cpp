#ifndef LIGA_CPP
#define LIGA_CPP
	#include<string>
	#include<vector>
	#include"Equipo.cpp"
	using namespace std;
	class Liga{
		private:
			string nombre;
			string pais;
			vector<Equipo*>equipos;
		public:
			Liga(string nombre,string pais){
				this->nombre=nombre;
				this->pais=pais;
			}
			set
			void addEquipo(Equipo*equipo){
				equipos.push_back(equipo);
			}
			string getNombre() {
		        return nombre;
		    }
		
		    void setNombre(string nombre) {
		        this->nombre = nombre;
		    }
		
		    string getPais() {
		        return pais;
		    }
		
		    void setPais(string pais) {
		        this->pais = pais;
		    }	
			
	};
#endif
