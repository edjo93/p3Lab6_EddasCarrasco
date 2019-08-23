#ifndef LIGA_CPP
#define LIGA_CPP
	class Liga{
		private:
			string nombre;
			string pais;
			vector<Equipo*>equipos;
		public:
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
