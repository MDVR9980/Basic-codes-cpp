#include <iostream>

using namespace std;

void khoshamadid();
void menu();
void darbare();
void kharidha();
unsigned int takhfif(unsigned int, int);
void tamam();

class kharid
{
public:

string ghelyoon [24] = {"Arabi", "Angoor", "Porteghal-Nana", "2-sib", "Limoo-Yakh", "Blue-Mix", "Blue-Miss", "Sib-Yakh", "Marakooya", "Govava",
						"Hendevane-Nana", "Holu-Nana", "Ostovayee", "special", "Tameshk-Abi", "Porteghal-Khame", "Red-Bool", "Blue-Bery",
						"Alu-Siah", "Adams-Darchin", "Sharab (+18)", "Shir-Nargil", "Miveii", "Panji"};

int gheimat_ghelyoon [24] = {10, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 40, 28, 12, 5};

string chay [15] = {"Mamooli", "Larj", "Sabz", "Zard", "Ghermez", "Debsh", "Nepton", "Damnoosh", "Limuee", "Bahar-Narenj", "Zaferuni", "Gol-Gav-Zabun", "Zanjeil", "Nana", "Ab-joosh"};

int gheimat_chay [15] = {2, 3, 3, 4, 5, 3, 4, 5, 5, 7, 10, 9, 9, 7, 1};	
	
string ghaza [10] = {"Nimru", "Doru", "Omlet", "Omlet-Gharch", "Omlet-Soosis", "Ab-Pazz", "Salad", "Makarooni", "Conserv-Mahi", "Conserv-Loobia"};

int gheimat_ghaza [10] = {10, 14, 15, 20, 18, 10, 8, 8, 12, 10};

unsigned int hazine_kol = 0;

void gelyoon_buy ()
{
	unsigned int hazine = 0;
		for (int i=0; i<24; i++)
		{
			cout << i+1 << ". " << "Ghelyoon " << ghelyoon[i] << "\t\t" << gheimat_ghelyoon[i] << ",000 Toman" << endl; 
		}
	while (true)
	{
		int i, t;
		cout << endl << "Entekhab Shoma Chist? (Adad vared konid - Etmam Adad 0) ";
		cin >> i;
		if (i==0)
		break;
		else if ((i<0)||(i>24)) continue;
		else
		{
			cout << "Tedad: ";
			cin >> t;
			hazine += ((gheimat_ghelyoon[i-1])*t);
		}
		hazine_kol += hazine;
	}
}

void chay_buy ()
{
	unsigned int hazine = 0;
		for (int i=0; i<15; i++)
		{
			cout << i+1 << ". " << "Chay " << chay[i] << "\t\t" << gheimat_chay[i] << ",000 Toman" << endl; 
		}
	while (true)
	{
		int i, t;
		cout << endl << "Entekhab Shoma Chist? (Adad vared konid - Etmam Adad 0) ";
		cin >> i;
		if (i==0)
		break;
		if ((i<0)||(i>15)) continue;
		else
		{
			cout << "Tedad: ";
			cin >> t;
			hazine += ((gheimat_chay[i-1])*t);
		}
		hazine_kol += hazine;
	}
}

int ghaza_buy ()
{
	unsigned int hazine = 0;
		for (int i=0; i<10; i++)
		{
			cout << i+1 << ". " << ghaza[i] << "\t\t" << gheimat_ghaza[i] << ",000 Toman" << endl; 
		}
	while (true)
	{
		int i, t;
		cout << endl << "Entekhab Shoma Chist? (Adad vared konid - Etmam Adad 0) ";
		cin >> i;
		if (i==0)
		break;
		if ((i<0)||(i>10)) continue;
		else
		{
			cout << "Tedad: ";
			cin >> t;
			hazine += ((gheimat_ghaza[i-1])*t);
		}
		hazine_kol += hazine;
	}
}

};

int main ()
{
khoshamadid();	
menu();
tamam();
return 0;
}

void khoshamadid()
{
	cout << endl << endl;
	cout << "\t\t\t      Kafe Sonati Davood " << endl;
	cout << "\t\t\t     --------------------" << endl << endl << endl << endl << endl << endl << endl;
	cout << "Modiriat: Mohammad Davood Vahab Rajaee" << endl << endl;
	cout << "Shobe Digari Nadarim..." << endl << endl;
	cout << "Baraye Shoroo yek Adad be joz 0 ra vared Konid: ";
	int x;
	cin >> x;
	if (x!=0)
	return;
	else
	{
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
		khoshamadid();
	}
}

void darbare()
{
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	cout << "Saat pasokhgooee va servis dehi: " << endl;
	cout << "9:00 ta 23:00" << endl << endl << endl;
	cout << "Rooz haye sevis dehi: " << endl;
	cout << "Hame roozeh" << endl << endl << endl;
	cout << "Telephone Tamas: " << endl;
	cout << "0915 775 2252" << endl;
	cout << "Dr Davood (phD Ghelyoon Shenasi)" << endl;
	cout << "(Faghat saat 00:00 ta 3:00)" << endl << endl << endl;
	cout << "Adres:" << endl;
	cout << "Mashhad - Jade Siman" << endl << endl << endl;
}

void kharidha ()
{
	kharid moshtari;
	int x, y, a;
	while (true)
	{
		cout << endl << "Adad 1 Baraye Ghelyoon" << endl;
		cout << "Adad 2 Baraye Chayi      " << endl;
		cout << "Adad 3 Baraye Ghaza      " << endl;
		cout << "Adad 0 Baraye Khorooj...!" << endl;
		cout << "Chi mikhay...? ";
		cin >> x;
		if (x==0) break;
		else if (x==1) moshtari.gelyoon_buy();
		else if (x==2) moshtari.chay_buy();
		else if (x==3) moshtari.ghaza_buy();
		else continue;
	}
	unsigned int z, r;
	z = moshtari.hazine_kol;
	r = z;
	cout << "Hazine Shoma Hast: " << z << ",000 Toman" << endl;
	cout << endl << "Tarh haye takhfifi...!" << endl << endl;
	cout << "1. Danesh Jooyi             10 % Takhfif" << endl;
	cout << "2. Moshtari Sabet           20 % Takhfif" << endl;
	cout << "3. Bache Jade Siman         30 % Takhfif" << endl;
	cout << "4. Niaz Mandan              40 % Takhfif" << endl;
	cout << "5. Asatit Danesh Gah        50 % Takhfif" << endl << endl;
	cout << "0. Bedoon Takhfif            0 % Takhfif" << endl << endl;
	cout << "Entekhab Shoma ";
	cin >> y;
	if ((y==1)||(y==2)||(y==3)||(y==4)||(y==5))
	r = takhfif(z,y);
	cout << endl;
	cout << "----------------------------------------" << endl;
	cout << "Hazine Shoma Hast: " << r << ",000 Toman" << endl << endl;
	cout << endl << "Baraye Khorooj 0 va\nBaraye Kharid Dobere 1 ra Entekhab Konid... ";
	cin >> a;
	if (a==0) menu();
	else kharidha();
}

unsigned int takhfif (unsigned int x, int y)
{
	unsigned int j;
	int i;
	switch (y)
	{
		case 1:  i = 10;
				break;
		case 2: i = 20;
				break;
		case 3: i = 30;
				break;
		case 4: i = 40;
				break;
		case 5: i = 50;
				break;
	}
	j = x - (x * i) / 100;
	return j;
}

void menu()
{
	char x;
	cout << "List..." << endl;
	cout << "------------------------" << endl << endl;
	cout << "1. Kharid" << endl;
	cout << "2. darbare Ma" << endl << endl;
	cout << "0. Khorooj..." << endl;
	cout << "------------------------" << endl;
	cout << "Entekhab Shoma         ";
	cin >> x;

	switch (x)
	{
		case '1': kharidha();
				break;
		case '2': darbare();
				break;
		case '0': break;
		default:
			{
				cout << endl << "Entekhab shoma Eshtebah ast haji...!" << endl;
				cout << "lotfan dobare Entekhab Konin...!" << endl << endl;
				menu();
			}
	}
	
}

void tamam()
{
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	cout << "Tarahi shode tavasot ";
	cout << "Mohamad Davood Vahab Rajaee..." << endl << endl;
}


