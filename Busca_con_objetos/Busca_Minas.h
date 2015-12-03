
class Busca_Minas
{
public:

	virtual char Get_Asterisco();
	virtual int Get_Valor();
	virtual void Set_Valor(int _M);
	virtual void Set_Asterisco(char _A);
	virtual int Get_Fil();
	virtual int Get_Col();
	virtual int Get_Elemento(int F, int C);
	virtual void Get_Tablero();
	virtual void Get_Minas();
	virtual void Marcar_Mina();
	virtual void Buscar_1(int F, int C);
	virtual void Buscar_2(int F, int C);
	virtual bool Ganar_1();
	virtual bool Ganar_2();

};