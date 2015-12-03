
#include <iostream>
#include "Soles.h"

using namespace std;

TipoSoles::TipoSoles(){
	_soles = 0;
	_centimos = 0;
}

TipoSoles::TipoSoles(int soles, int centimos){
	_soles = soles;
	_centimos = centimos;
}

TipoSoles::TipoSoles(const TipoSoles &copy){
	_soles = copy._soles;
	_centimos = copy._centimos;
}

TipoSoles TipoSoles::operator+(TipoSoles n, TipoSoles m){
	TipoSoles res;
	res._soles = _soles + n._soles;
	res._centimos = _centimos + n._centimos;
	if (res._centimos >= 100){
		res._soles += 1;
		res._centimos -= 100;
	}
	return res;
}

void TipoSoles::Print()
{
	cout << "Soles: " << _soles << ", centimos: " << _centimos << endl;
}