#ifndef JUGADOR_CPP
#define JUGADOR_CPP
	#include<string>
	using namespace std;
	class Jugador{
		private:
			string nombre;
			string dorsal;
			string paisOrigen;
		public:
			Jugador(string nombre,string dorsal,string paisOrigen){
				this->nombre=nombre;
				this->dorsal=dorsal;
				this->paisOrigen=paisOrigen;
			}
			string getNombre() {
		        return nombre;
		    }
		
		    void setNombre(string nombre) {
		        this->nombre = nombre;
		    }
		
		    string getDorsal() {
		        return dorsal;
		    }
		
		    void setDorsal(string dorsal) {
		        this->dorsal = dorsal;
		    }
		
		    string getPaisOrigen() {
		        return paisOrigen;
		    }
		
		    void setPaisOrigen(string paisOrigen) {
		        this->paisOrigen = paisOrigen;
		    }	
		    
	};
#endif
