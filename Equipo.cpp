#ifndef EQUIPO_CPP
#define EQUIPO_CPP
	#include"Jugador.cpp"
	#include<vector>
	#include<string>
	class Equipo{
		private:
			string nombre;
			string anioFundacion;
			vector<Jugador*>jugadores;
		public:
			string getNombre() {
		        return nombre;
		    }
		
		    void setNombre(string nombre) {
		        this->nombre = nombre;
		    }
		
		    string getAnioFundacion() {
		        return anioFundacion;
		    }
		
		    void setAnioFundacion(string anioFundacion) {
		        this->anioFundacion = anioFundacion;
		    }		
	};
#endif
