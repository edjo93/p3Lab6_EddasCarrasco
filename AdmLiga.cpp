#ifndef ADMLIGA_CPP
#define ADMLIGA_CPP
	class AdmLiga{
		private:
			string ruta;
			vector<Liga*>ligas;
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
			
	};
#endif
