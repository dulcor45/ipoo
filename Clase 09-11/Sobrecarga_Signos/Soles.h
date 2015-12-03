
class TipoSoles
{
	int _soles;
	int _centimos;

public:
	TipoSoles();
	TipoSoles(int soles, int centimos);
	TipoSoles(const TipoSoles &copy);
	TipoSoles operator+(TipoSoles n, TipoSoles m);
	//std::ostream& operator<< (std::ostream &output);//, const TipoSoles &n);
	const int getSoles(){ return  _soles;}
	const int getCentimos(){ return  _centimos;}
	void Print();

};