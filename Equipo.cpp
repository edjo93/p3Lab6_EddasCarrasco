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
			Equipo(string nombre,string anioFundacion){
				this->anioFundacion=anioFundacion;
				this->nombre=nombre;
			}
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
			addJugador(Jugador*jugador){
				jugadores.push_back(jugador);
			}	
			vector<Jugador*> getJugador(){
				return jugadores;
			}
			
			
	};
#endif
