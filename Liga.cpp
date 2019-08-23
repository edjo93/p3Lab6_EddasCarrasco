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
			
	};
#endif
