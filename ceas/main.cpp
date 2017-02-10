#include <iostream>
using namespace std;

struct Timp
{
	Timp(int ora, int minute):_ora(ora),_minute(minute){}
	int _ora;
	int _minute;

};

class Ceas
{
public:
	Ceas(int ora, int minute):_timpCurent(ora,minute){}

	void Modificare(int ora, int minute)
	{
		_timpCurent._ora= ora;
		_timpCurent._minute=minute;

	}

	void Afisare()
	{
		cout << "Ora exacta: " << _timpCurent._ora << " : " << _timpCurent._minute << endl;

	}

private:
	Timp _timpCurent;

};

class CeasCuSonerie
{
public:
	CeasCuSonerie(int ora, int minute):_timpCurent(ora,minute),_timpSonerie(15,0){}

	void Modificare(int ora, int minute)
	{
		_timpCurent._ora= ora;
		_timpCurent._minute=minute;

	}

	void Afisare()
	{
		cout << "Ora exacta: " << _timpCurent._ora << " : " << _timpCurent._minute << endl;

	}
	void StabilireOraAlarma(int ora, int minute)
	{
		_timpSonerie._ora = ora;
		_timpSonerie._minute=minute;
	}

	void Alarma()
	{
		if((_timpCurent._ora == _timpSonerie._ora) && (_timpCurent._minute == _timpSonerie._minute))
		{
			cout << "Soneria suna" << endl;

		}
		else
		{
			cout << "Alarma inactiva" << endl;

		}

	}


private:
	Timp _timpSonerie;
	Timp _timpCurent;

};

int main()
{
	CeasCuSonerie seiko(15,10);
	seiko.StabilireOraAlarma(16,45);
	seiko.Afisare();
	seiko.Alarma();
	seiko.Modificare(16,45);
	seiko.Afisare();
	seiko.Alarma();

	getchar();
	return 0;
}
