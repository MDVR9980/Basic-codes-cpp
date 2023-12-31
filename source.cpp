// Project: Hotel Management

/* programmer: Rahmatollah
               Ansari
My Student ID: 9912377331

Telegram ID: t.me/wolf2022

Computer Engineering
Hakim Sabzevari University
*/

// Start Date: 1399,10,23
//             2020,01,12
// Start Time: 05:20 pm.

// 3140 line and 94920 character 

#include <iostream>
#include <string>
#include <iomanip>
#include <ctime>
#include <cstdlib>
#include <vector>
#include <fstream>
#include <windows.h>
#include <conio.h>

using namespace std;

const string ss18 = "Not Valid...!";

void start1();
void start2();
void menu1();
void book();
void dis();
void dis_2000();
string get_barcode();
unsigned long int use_discount (unsigned long int, int);
bool check_discount(string);
int get_discount(string);
void del_discount(string);
void endprogram();

void password_start();
void set_password();
void theme();
void book (int);
void leave();
void leaving (int);
void wasaptor (int);

void read_receipt_file();
void new_pu();
void old_pu();

void v_all_room();
void v_st_bar();
void v_st_name();
void v_st_num_room();

void search (string);           //search by Barcode
void search1 (string, string); //search by First and Last Name
void search2 (int);            //search by room number

void about();
	void about1();
	void about2();
		void about21();
		void about22();
		void about23();
	void about3();
		void about31();
		void about32();
		void about33();
		void about34();
	void about4();
		void about41();
		void about42();
		void about43();
	void about5();

//bool check_file();

class hotel
{
private:
	int breakfast = 0;  //Breakfast tokens
	int lunch = 0;     //Lunch tokens
	int dinner = 0;   //Dinner tokens
	int pw = 0;	     //Private Waiters
	int pps = 0;    //Public Pool Subscribtion
	int ce = 0;	   //Casino Entrances
	int tt = 0;	  //Tickets Tour

public:

bool check_room(int);
void fill_room (int);
unsigned long int set_option();
	void get_option_record();
	void get_option_receipt();
	
};

class customer
{
private:
	string first_name = "";
	string last_name = "";
	string country = "";
	string pass_num = "";
	string US_ID = "";
	string phone_num = "";
	int age = 0;
	string age_status = "";
	string gender = "";
	bool us_status;
	char flag;

public:
	void set_first_name (string str) {	first_name = str;}
		string get_first_name () { return first_name;}
	void set_last_name (string str) {	last_name = str;}
		string get_last_name () { return last_name;}
	void set_country (string str) {	country = str;}
		string get_country () { return country;}
	void set_pass_num (string);
		string get_pass_num () { return pass_num;}
	void set_US_ID (string);
		string get_US_ID () { return US_ID;}
	void set_phone_num (string);
		string get_phone_num () { return phone_num;}
	void set_age(int);
		int get_age () { return age;}
		string get_age_status () { return age_status;}
	void set_american();
		bool get_american();
	void set_gender ();
		string get_gender () { return gender;}
	void set_customer();
		void get_customer();
		void get_customer_record();
		void get_customer_receipt();
	
};

/*
----------------------------------------------
------------------------------------int main()
----------------------------------------------
*/

int main()
{
srand(time(0));
start1();
//if (check_file())
//{
	password_start();
	start2();
//}
endprogram();
return 0;
}

void start1()
{
    cout << "\n\t\t\t        *************";
    cout << "\n\t\t\t         Plaza Hotel ";
    cout << "\n\t\t\t        *************";
	cout << "\n\n";
	cout << "\n\t\t\t         * * * * * * ";
    cout << "\n\t\t\t         A Five Star ";
    cout << "\n\t\t\t         And  Luxury ";
	cout << "\n\t\t\t         *  Hotel  * ";
	cout << "\n\n";
	cout << "\n\t\t\t       In fifth Avenue ";
	cout << "\n\t\t\t       at Central Park ";
	cout << "\n\t\t\t          Manhattan    ";	
	cout << "\n\t\t\t        New York city  ";
	cout << "\n\t\t\t       United State of ";
	cout << "\n\t\t\t           America     ";
	cout << "\n\n";
	cout << "Powered by Rahmatollah Ansari\n";
	cout << "Hotel Management Project C++ \n\n";
	cout << "Press any key to continue...!!\n";
	getch();	
}

void start2()
{
	system ("cls");
	cout << "Plaza Hotel Management System" << endl;
	cout << "_____________________________" << endl;
	cout << "Main Menu                    " << endl;
	cout << "_____________________________" << endl << endl;
	cout << " 1. Book a room               " << endl;
	cout << " 2. Leave the room            " << endl;
	cout << " 3. View all rooms status     " << endl;
	cout << " 4. View Information by room number" << endl;
	cout << " 5. View Information by Name   " << endl;
	cout << " 6. View Information by Barcode" << endl;
	cout << " 7. Read Receip File           " << endl;
	cout << " 8. View New Purchases         " << endl;
	cout << " 9. View Old Purchases         " << endl;
	cout << "10. Change Password           " << endl;
	cout << "11. Discounter...!!!          " << endl;
	cout << "12. About Plaza Hotel         " << endl;	
	cout << "13. Theme Application         " << endl << endl;
	cout << "0. Exit                      " << endl;
	cout << "_____________________________" << endl;
	cout << "Your choice: ";
	int choice;
	cin >> choice;
	switch (choice)
	{
	case 1: menu1();
			break;
	case 2: leave();
			break;
	case 3: v_all_room();
			break;
	case 4: v_st_num_room();
			break;
	case 5: v_st_name();
			break;
	case 6: v_st_bar();
			break;
	case 7: read_receipt_file();
			break;
	case 8: new_pu();
			break;
	case 9: old_pu();
			break;
	case 10: set_password();
			break;
	case 11: dis();
			break;
	case 12: about();
			break;
	case 13: theme();
			break;
	case 0: return;
	default:
	{
	cout << "_____________________________" << endl;
	cerr << "Error...! Wrong choice....!!!";
	cerr << "Press any key to continue...!";
	getch();
	start2();
	}
	}
	
}

void menu1()
{
	hotel obj;
	system ("cls");
	cout << "Plaza Hotel Management System" << endl;
	cout << "_____________________________" << endl;
	cout << "Rooms Menu                   " << endl;
	cout << "_____________________________" << endl << endl;
	cout << "      * Third Class *      " << "\t\t";
	cout << "       ** Second Class **    " << endl;	
	cout << "___________________________" << "\t\t";	
	cout << "_____________________________" << endl;	
	cout << "1. Office Suite                   50 $" << "\t";
	cout << "10. Family Room                 300 $" << endl;
	cout << "2. Conference Suite               70 $" << "\t";
	cout << "11. Connected Room              400 $" << endl;
	cout << "3. Mini Suite                     80 $" << "\t";
	cout << "12. Two-Room Suite              450 $" << endl;
	cout << "4. Junior Suite                  100 $" << "\t";
	cout << "13. Three-Room Suite            500 $" << endl;
	cout << "5. single Suite                  150 $" << "\t";
	cout << "14. Four-Room Suite             550 $" << endl;
	cout << "6. Deluxe Suite                  200 $" << "\t";
	cout << "15. Suite with King size Bed    700 $" << endl;
	cout << "7. Duplex Suite                  300 $" << "\t";
	cout << "16. Royal suite               1,000 $" << endl;
	cout << "8. Balcony Room                  350 $" << "\t";
	cout << "17. Fiesta Suite              1,000 $" << endl;
	cout << "9. Room without Bath             120 $" << "\t";
	cout << "18. Dolce Vita Suite            600 $" << endl << endl;
	cout << "    *** First Class ***    " << endl;
	cout << "___________________________" << endl;
	cout << "19. VIP Suite                  2,000 $" << endl;
	cout << "20. Imperial Suite             3,000 $" << "\t";
	cout << "Have a very good Time...!!!" << endl;
	cout << "21. Pent house Suite           4,000 $" << endl;
	cout << "22. Suite with Privet Pool     5,000 $" << "\t";
	cout << "0. Exit                    " << endl;	
	cout << "23. Banquent Room              3,000 $" << "\t";
	cout << "_____________________________" << endl;
	cout << "24. Parlor                     4,000 $" << "\t";
	cout << "Your choice: ";
	int r;
	cin >> r;
	if ((r<0)||(r>24)) menu1();
	else if (r==0) start2();
	else
	book(r);
}

void customer::set_pass_num(string str)
{
	if (str.length() != 9)
	{
		cerr << "Passport Number is Not Valid...!\nPassport Number Must be 9 characters...!" << endl;
		pass_num = ss18;
		return;
	}
	for (size_t i=0; i<9 ;i++)
	{
		if (i==0)
		{
			if ((str[0]<65)||(str[0]>90))
			{
				cerr << "Passport Number is Not Valid...!\nPassport Number Must start with a Capital letter...!" << endl;
				pass_num = ss18;
				return;
			}
		}
		else if ((str[i]<48)||(str[i]>57))
		{
			cerr << "Passport Number is Not Valid...!\nPassport Number Must have Number...!" << endl;
			pass_num = ss18;
			return;
		}
	}
	pass_num = str;
}

void customer::set_US_ID (string str)
{
	for (size_t i=0 ; i< str.length() ; i++)
	{
		if (( (str[i]<48) || (str[i]>90) ) || ( (str[i]>57) && (str[i]<65) ))
		{
		cerr << "US ID is Not Valid...!\nUS ID Must be contain only Number & Capital letter...!" << endl;
		US_ID = ss18;
		return;
		}
	}
	US_ID = str;
}

void customer::set_phone_num (string str)
{
	for (size_t i=0 ; i< str.length() ; i++)
	{
		if (i==0)
		{
			if (( (str[i]<43) || (str[i]>57) ) || ( (str[i]>44) && (str[i]<48) ))
			{
				cerr << "Phone Number is Not Valid...!\nPhone Number Must start with a Number or '+'...!" << endl;
				phone_num = "Not Valid...!";
				return;
			}
		}
		else if ((str[i]<48)||(str[i]>57))
		{
			cerr << "Phone Number is Not Valid...!\nPhone Number Must be contain only Number...!" << endl;
			phone_num = ss18;
			return;
		}
	}
	phone_num = str;
}

string get_barcode()
{
	string barcode = "";
	char flag;
	for (size_t i=1 ; i<=16 ;i++)
	{
		flag = static_cast<char>(rand()%10+48);
		barcode += flag;
		if ((i==4)||(i==8)||(i==12))
		barcode += '-';
	}
	return barcode;
}

void customer::set_age(int sen)
{
	
	if (sen<0)
	{
		cerr << "Age is Not Valid...!\nAge can not be Negative...!" << endl;
		age = -1;
		return;
	}

}

void customer::set_american ()
{
	char x;
	cout << "Are You American...?(y/n) ";
	cin >> x;
	if ((x=='y')||(x=='Y'))
	us_status = true;
	else us_status = false;
}

bool customer::get_american()
{
	if (us_status) return true;
	else return false;
}

void customer::set_gender()
{
	char x;
	cout << "Male or Femail...?(m/f) ";
	cin >> x;
	if ((x=='f')||(x=='F'))
	gender = "Femail";
	else gender = "Male";
}

void customer::set_customer()
{
	string name, last, nation, p_num, us_id, phone;
	int sen;
	cout << "First Name: ";
	cin >> name;
	set_first_name(name);
	cout << "Last Name: ";
	cin >> last;
	set_last_name(last);
	set_gender();
	do
	{
	cout << "Age: ";
	cin >> sen;
	set_age(sen);
	}while (get_age()==-1);
	age = sen;
	if (sen<2)
		age_status = "NewBorn";
	else if (sen<12)
		age_status = "Child";
	else if (sen<18)
		age_status = "Teenager";
	else
		age_status = "Adult";
	set_american();
	if (get_american())
	{
		do
		{
		cout << "US ID (only Number & Capital letter): ";
		cin >> us_id;
		set_US_ID(us_id);
		}while (get_US_ID()==ss18);
	}
	else
	{
		cout << "Country: ";
		cin >> nation;
		set_country(nation);
		do
		{
			cout << "PassPort Number Must Be 9 characters" << endl;
			cout << "start with a Capital letter-have Number" << endl;
			cout << "Like --> \"P12345678\"" << endl;
			cout << "PassPort Number: ";
			cin >> p_num;
			set_pass_num(p_num);
		}while (get_pass_num()==ss18);
	}
	do
	{
	cout << "Phone Number (start with a Number or '+'): ";
	cin >> phone;
	set_phone_num(phone);
	}while (get_phone_num()==ss18);
}

void customer::get_customer()
{
	cout << "     First Name: " << get_first_name() << endl;
	cout << "      Last Name: " << get_last_name() << endl;
	cout << "         Gender: " << get_gender() << endl;
	cout << "            Age: " << get_age() << endl;
	cout << "     Age Status: " << get_age_status() << endl;
	if (get_american())
	{
	cout << "        Country: US" << endl;
	cout << "          US ID: " << get_US_ID() << endl;
	}
	else
	{
	cout << "        Country: " << get_country() << endl;
	cout << "PassPort Number: " << get_pass_num() << endl;
	}
	cout << "   Phone Number: " << get_phone_num() << endl;
}

void customer::get_customer_receipt()
{
	ofstream receipt ("./receipt/receipt.txt", ios::out | ios::app);	
	receipt << "     First Name: " << get_first_name() << endl;
	receipt << "      Last Name: " << get_last_name() << endl;
	receipt << "         Gender: " << get_gender() << endl;
	receipt << "            Age: " << get_age() << endl;
	receipt << "     Age Status: " << get_age_status() << endl;
	if (get_american())
	{
	receipt << "        Country: US" << endl;
	receipt << "          US ID: " << get_US_ID() << endl;
	}
	else
	{
	receipt << "        Country: " << get_country() << endl;
	receipt << "PassPort Number: " << get_pass_num() << endl;
	}
	receipt << "   Phone Number: " << get_phone_num() << endl;
	receipt.close();
}

void customer::get_customer_record()
{
	ofstream record ("./save/record.txt", ios::out | ios::app);
	record << get_first_name() << endl;
	record << get_last_name() << endl;
	record << get_gender() << endl;
	record << get_age() << endl;
	record << get_age_status() << endl;
	if (get_american())
	{
	record << "US" << endl;
	record << get_US_ID() << endl;
	}
	else
	{
	record << get_country() << endl;
	record << get_pass_num() << endl;
	}
	record << get_phone_num() << endl;
	record.close();
}

unsigned long int hotel::set_option()
{
	while (true)
	{
	system ("cls");
	cout << "Plaza Hotel Management System" << endl;
	cout << "_____________________________" << endl;
	cout << "Option                       " << endl;
	cout << "_____________________________" << endl << endl;
	int breakfast0, lunch0, dinner0, pw0, pps0, ce0, tt0;
	cout << "Enter the Number of Services........!!!" << endl;
	cout << "Enter 0 if you do not want to Buy...!!!" << endl << endl;
	cout << "            How many Breakfast tokens do you want...?(20$) ";
	cin >> breakfast0;
	breakfast = breakfast0;
	cout << "                How many Lunch tokens do you want...?(30$) ";
	cin >> lunch0;
	lunch = lunch0;
	cout << "               How many Dinner tokens do you want...?(40$) " ;
	cin >> dinner0;
	dinner = dinner0;
	cout << "            How many private waiters do you want...?(150$) ";
	cin >> pw0;
	pw = pw0;
	cout << "    How many public pool subscribtion do you want...?(10$) ";
	cin >> pps0;
	pps = pps0;
	cout << "            How many Casino entrances do you want...?(50$) ";
	cin >> ce0;
	ce = ce0;
	cout << "How many tickets do you want for a New York tour...?(100$) ";
	cin >> tt0;
	tt = tt0;
	system ("cls");
	cout << "Plaza Hotel Management System" << endl;
	cout << "_____________________________" << endl;
	cout << "Option                       " << endl;
	cout << "_____________________________" << endl << endl;	
	cout << "               BreakFast = " << breakfast << endl;
	cout << "                   Lunch = " << lunch << endl;
	cout << "                  Dinner = " << dinner << endl;
	cout << "          Private Waiter = " << pw << endl;
	cout << "Public Pool Subscribtion = " << pps << endl;
	cout << "        Casino Entrances = " << ce << endl;
	cout << "    New York Tour Ticket = " << tt << endl;
	char n;
	cout << endl << "Your Information is True...?(y/n) ";
	cin >> n;
	if ((n=='n')||(n=='N')) continue;
	else break;
	}
	unsigned long int price = 0;
	price += breakfast * 20;
	price += lunch * 30;
	price += dinner * 40;
	price += pw * 150;
	price += pps * 10;
	price += ce * 50;
	price += tt * 100;
	return price;
}

void hotel::get_option_record()
{
	ofstream record ("./save/record.txt", ios::out | ios::app);
	record << breakfast << endl;
	record << lunch << endl;
	record << dinner << endl;
	record << pw << endl;
	record << pps << endl;
	record << ce << endl;
	record << tt << endl;
	record.close();
}

void hotel::get_option_receipt()
{
	ofstream receipt ("./receipt/receipt.txt", ios::out | ios::app);
	receipt << "Option of your Buy" << endl << endl;	
	receipt << "               BreakFast = " << breakfast << endl;
	receipt << "                   Lunch = " << lunch << endl;
	receipt << "                  Dinner = " << dinner << endl;
	receipt << "          Private Waiter = " << pw << endl;
	receipt << "Public Pool Subscribtion = " << pps << endl;
	receipt << "        Casino Entrances = " << ce << endl;
	receipt << "    New York Tour Ticket = " << tt << endl;
	receipt << "-----------------------------" << endl;
	receipt.close();
}

unsigned long int use_discount (unsigned long int pr, int dis)
{
	pr = (pr - (pr*dis)/100);
	return pr;
}

bool hotel::check_room(int x)
{
	int l, k;
	ifstream file ("./save/statusroom.txt", ios::in);
	for (size_t i=1; i<=424; i++)
	{
		file >> l >> k;
		if (l==x)
		{
			file.close();
			if (k==1) return true;
			else return false;
		}
	}
}

void book (int t)
{
	hotel obj1;
	int number, max;
	string coh = "";   // Class of Hotel (room)
	string type_r = "";       // type of room
	int num_room = 0;  // Number of room
	unsigned long int price = 0;
	if (t<10) coh = "Third_Class";
	else if (t<=18) coh = "Second_Class";
	else coh = "First_Class";
	switch (t)
	{
		case 1: number = 1;				
				type_r = "Office_Suite";
				price += 50;
				max = 20;
				break;
		case 2: number = 21;
				max = 40;				
				type_r = "Conference_Suite";
				price += 70;
				break;
		case 3: number = 41;
				max = 60;				
				type_r = "Mini_Suite";
				price += 80;
				break;
		case 4: number = 61;
				max = 80;				
				type_r = "Junior_Suite";
				price += 100;
				break;
		case 5: number = 81;
				max = 100;			
				type_r = "single_Suite";
				price += 150;
				break;
		case 6: number = 101;
				max = 120;				
				type_r = "Deluxe_Suite";
				price += 200;
				break;
		case 7: number = 121;
				max = 140;				
				type_r = "Duplex_Suite";
				price += 300;
				break;
		case 8: number = 141;
				max = 160;				
				type_r = "Balcony_Room";
				price += 350;
				break;
		case 9: number = 161;
				max = 180;				
				type_r = "Room_without_Bath";
				price += 120;
				break;
		case 10: number = 181;
				max =220;				
				type_r = "Family_Room";
				price += 300;
				break;
		case 11: number = 221;
				max = 240;				
				type_r = "Connected_Room";
				price += 400;
				break;
		case 12: number = 241;
				max = 280;				
				type_r = "Two-Room_Suite";
				price += 450;
				break;
		case 13: number = 281;
				max = 310;				
				type_r = "Three-Room_Suite";
				price += 500;
				break;
		case 14: number = 311;
				max = 330;				
				type_r = "Four-Room_Suite";
				price += 550;
				break;
		case 15: number = 331;
				max = 350;				
				type_r = "Suite_with_King_size_Bed";
				price += 700;
				break;
		case 16: number = 351;
				max = 370;				
				type_r += "Royal_suite";
				price = 1000;
				break;
		case 17: number = 371;
				max = 380;				
				type_r = "Fiesta_Suite";
				price += 1000;
				break;
		case 18: number = 381;
				max = 400;				
				type_r = "Dolce_Vita_Suite";
				price += 600;
				break;
		case 19: number = 401;
				max = 410;				
				type_r = "VIP_Suite";
				price += 2000;
				break;
		case 20: number = 411;
				max = 416;				
				type_r = "Imperial_Suite";
				price += 3000;
				break; 
		case 21: number = 417;
				max = 418;				
				type_r = "Pent_house_Suite";
				price += 4000;
				break;
		case 22: number = 419;
				max = 420;				
				type_r = "Suite_with_Privet_Pool";
				price += 5000;
				break;
		case 23: number = 421;
				max = 422;				
				type_r = "Banquent_Room";
				price += 3000;
				break;
		case 24: number = 423;
				max = 424; // The End of hotel Plaza rooms (424 room)				
				type_r = "Parlor";
				price += 4000;
				break;
	}
	char e22= 0;
	while (true)
	{
		while (number<=max)
		{
			if (obj1.check_room(number))
			{
				num_room = number;
				e22 = 1;
				break;
			}
			number++;
		}
		if (e22==1) break;
		cerr << endl << "This type of rooms is Full...!!!" << endl;
		cerr << "Please rent another room...!!!" << endl << endl;
		cout << "Enter any key to continue...!!!" << endl;
		getch();
		menu1();
	}
	obj1.fill_room(num_room);
	int night = 0;
	while (true)
	{
		system ("cls");
		cout << "Plaza Hotel Management System" << endl;
		cout << "_____________________________" << endl;
		cout << "Stay Night                   " << endl;
		cout << "_____________________________" << endl << endl;
		cout << "How many night...? ";
		cin >> night;
		if (night<=0) continue;
		price *= night;
		break;
	}
	ofstream record ("./save/record.txt", ios::out | ios::app);
	ofstream receipt ("./receipt/receipt.txt", ios::out | ios::app);
	string bar;
	bar = get_barcode();
	record << bar << endl;
	receipt << "Barcode: " << bar << endl;
	customer obj;
	vector <customer> all;
	receipt << "Room Number: " << num_room << endl;
	receipt << "Class: " << coh << endl << "Type of Your Room: " << type_r << endl;
	record << num_room << endl;
	record << coh << endl << type_r << endl;	
	receipt << "Night of Stay: " << night << endl;
	record << night << endl;
	int t;
	while (true)
	{
		system ("cls");
		cout << "Plaza Hotel Management System" << endl;
		cout << "_____________________________" << endl;
		cout << "Addition                     " << endl;
		cout << "_____________________________" << endl << endl;
		cout << "How many people...?(30 $ per person) ";
		cin >> t;
		if (t<1) continue;
		cout << endl;
		for (size_t i=0; i<t; i++)
		{
			cout << "Enter Information Customer Number " << i+1 << endl << endl;
			obj.set_customer();
			all.push_back(obj);
			cout << "------------------------------------" << endl << endl;
		}
		system ("cls");
		cout << "Plaza Hotel Management System" << endl;
		cout << "_____________________________" << endl;
		cout << "Addition                     " << endl;
		cout << "_____________________________" << endl << endl;
		cout << "Press any key to Continue...!" << endl << endl;
		for (size_t i=0; i<t; i++)
		{
			cout << "Information Customer Number " << i+1 << " is ..." << endl;
			all[i].get_customer();
			cout << "------------------------------------" << endl;
			getch();
		}
	char x;
	cout << "Your Information is True...?(y/n) ";
	cin >> x;
	if ((x=='n')||(x=='N'))
	{
	all.clear();
	continue;
	}
	else break;
	}
	for (size_t i=0; i<t; i++)
	{
		receipt << "Information Customer Number " << i+1 << " is ..." << endl;
		all[i].get_customer_receipt();
		receipt << "------------------------------------" << endl;
	}
	record << t << endl;
	for (size_t i=0; i<t; i++)
	{
		record << i+1 << endl;
		all[i].get_customer_record();
	}
	price += obj1.set_option();
	obj1.get_option_record();
	obj1.get_option_receipt();
	system ("cls");
	cout << "Plaza Hotel Management System" << endl;
	cout << "_____________________________" << endl;
	cout << "Price...!!!                  " << endl;
	cout << "_____________________________" << endl << endl;
	price += (t * 30);
	cout << endl << "Your Price Now: " << price << " $" << endl << endl;
	record << price << endl;
	char z;
	cout << "Do you have a discount code...?(y/n) ";
	cin >> z;
	if ((z=='y') || (z=='Y'))
	{
		while (true)
		{
			string disc;
			cout << endl << "Enter your discount code: ";
			cin >> disc;
			if (check_discount(disc))
			{
				int flag = get_discount(disc);
				cout << "Your Discount is " << flag << " %" << endl;
				receipt << "Your Discount is " << flag << " %" << endl;
				record << flag << endl;
				price = use_discount(price, flag);
				del_discount(disc);
				break;
			}
			else
			{
				char s0;
				cerr << "Your discount code is False...!!!" << endl;
				cout << "Press 0 for \"Try Again\"" << endl;
				cout << "Press 1 for \"Exit the Discount Code\"" << endl;
				cout << "Your choice is: ";
				cin >> s0;
				if (s0=='1') break;
				else continue;
			}
		}
	}
	else record << 0 << endl;
	cout << endl << "------------------------------------";
	cout << endl << "Amount payable: " << price << " $" << endl;
	receipt << endl << "------------------------------------";
	receipt << endl << "Amount payable: " << price << " $" << endl;
	cout << endl << "Press any key to continue...!!!" << endl;
	record << price << endl;
	getch();
	record << "now" << endl;
	receipt << "\n\n\n\n";
	receipt.close();
	record.close();
	cout << endl << "Room is Booked...!!!" << endl;
	cout << endl << "Your Barcode is: " << bar << endl;
	cout << endl << "Your room number is " << num_room << endl;
	cout << endl << "You can see the history of this Purchase from" << endl;
	cout << "Path: ./receipt/receipt.txt" << endl;
	cout << "Or Main Menu...!!!" << endl << endl;
	getch();
	if (price>2000) dis_2000();
	start2();
}

bool check_discount(string str)
{
	string s1;
	int s2;
	ifstream file ("./save/discount.txt", ios::in);
	while (file >> s1 >> s2)
	{
		if (s1==str)
		{
			file.close();
			return true;
		}
	}
	file.close();
	return false;
}

int get_discount(string str)
{
	string s1;
	int s2;
	ifstream file ("./save/discount.txt", ios::in);
	while (1)
	{
		file >> s1 >> s2;
		if (s1==str)
		{
			file.close();
			return s2;
		}
	}
	file.close();
}

void del_discount(string str)
{
	string s1;
	int s2;
	vector <string> f1;
	vector <int> f2;
	ifstream file ("./save/discount.txt", ios::in);
	while (file >> s1 >> s2)
	{
		if (s1==str)
		continue;
		f1.push_back(s1);
		f2.push_back(s2);
	}
	file.close();
	ofstream file1 ("./save/discount.txt", ios::out);
	for (size_t i=0; i<f1.size();i++)
	file1 << f1[i] << "\t" << f2[i] << endl;
	file1.close();
}

void dis()
{
	ofstream myfile ("./save/discount.txt", ios::out | ios::app);
	system ("cls");
	cout << "Plaza Hotel Management System" << endl;
	cout << "_____________________________" << endl;
	cout << "Discounter...!!!             " << endl;
	cout << "_____________________________" << endl << endl;
	char n;
	cout << "10 % to 50 % Discount...!!!" << endl << endl;
	cout << "Press 0 for cancel...!!!" << endl << endl;
	cout << "Press 1 for Discounter...!!!" << endl << endl;
	cout << "Your Choice: ";
cin >> n;
if ((n=='0'))
{
	myfile.close();
	start2();
}
else
{
string dis = "";
int count = 0;
char flag = NULL;
for (size_t i=1; i<=7; i++)
{
	if (i<=3)
	{
		flag = static_cast<char>(rand()%26 + 97);
		dis += flag;
	}
	else
	{
		flag = static_cast<char>(rand()%10 + 48);
		dis += flag;
	}
}
count = (((rand()%5)+1)*10);
myfile << dis << "\t" << count << "\n";
string load = "......: ";
cout << endl << "Discount Amount";
for (size_t i=0; i<load.length(); i++)
{
	Sleep(250);
	cout << load[i];
}
cout << count << " %" << endl;
cout << endl << endl << "Discount Code..";
for (size_t i=0; i<load.length(); i++)
{
	Sleep(250);
	cout << load[i];
}
cout << dis << endl;
cout << endl << endl << "Write the Code and keep it...!!!" << endl;
}
myfile.close();
getch();
start2();
}

void dis_2000()
{
	system ("cls");
	cout << "Plaza Hotel Management System" << endl;
	cout << "_____________________________" << endl;
	cout << "Wait...!!!                   " << endl;
	cout << "_____________________________" << endl << endl;
	cout << "Press any key to Continue...!" << endl << endl;
	getch();
	cout << "We will give you a 20% Discount code......" << endl;
	cout << "Because your purchase was over $2000...!!!" << endl << endl;
	cout << "Press any key to get the discount code...!" << endl << endl;
	getch();
	ofstream myfile ("./save/discount.txt", ios::out | ios::app);
	string dis = "";
	char flag = NULL;
	for (size_t i=1; i<=7; i++)
	{
		if (i<=3)
		{
			flag = static_cast<char>(rand()%26 + 97);
			dis += flag;
		}
		else
		{
			flag = static_cast<char>(rand()%10 + 48);
			dis += flag;
		}
	}
	myfile << dis << "\t" << 20 << "\n";
	string load = "........: ";
	cout << "Discount Amount......: ";
	cout << 20 << " %" << endl;
	cout << endl << "Discount Code";
	for (size_t i=0; i<load.length(); i++)
	{
		Sleep(250);
		cout << load[i];
	}
	cout << dis << endl;
	cout << endl << endl << "Write the Code and keep it...!!!" << endl;
	myfile.close();
	getch();
}

void hotel::fill_room (int r)
{
	int l[424], k[424];
	ifstream file ("./save/statusroom.txt", ios::in);
	for (size_t i=0; i<424; i++)
	{
		file >> l[i] >> k[i];
		if (l[i]==r)
		{
			k[i] = 0;
		}
	}
	file.close();
	ofstream file1 ("./save/statusroom.txt", ios::out);
	for (size_t i=0; i<424; i++)
	{
		file1 << l[i] << "\t" << k[i] << endl;
	}
	file1.close();
}

void endprogram()
{
	system ("cls");
	string str = "Plaza Hotel Management System";
	string str1 = "The End...!!!";
	string str2 = "...!!!";
	for (size_t i=0; i<str.size(); i++)
	{
		cout << str[i];
		Sleep(250);
	}
	cout << endl;
	cout << "_____________________________" << endl;
	for (size_t i=0; i<str1.size(); i++)
	{
		cout << str1[i];
		Sleep(250);
	}	
	cout << endl;
	cout << "_____________________________" << endl << endl;
	system ("color 4f");
	cout << "Designed by Rahmatollah Ansari\n\n";
	cout << "For the first semeter Project C++\n\n";
	cout << "In the Basics of Computer and Programming\n\n";
	cout << "Dr. Sobati Moghaddam\n\n";
	cout << "I hope you Enjoy this Project";
	for (size_t i=0; i<str2.size(); i++)
	{
		cout << str2[i];
		Sleep(200);
	}	
	cout << "\n\nCopyright 2020, Rahmatollah Ansari\n\n";
	cout << "Press any key to End...!!!\n";
	getch();
	// You can bring the following code from the command and witness an interesting event
	/*	// <-- Erase "/*"
	cout << "--------------------------------" << endl;
	cout << "Process exited after 33.15 seconds with return value 0" << endl;
	cout << "Press any key to continue . . . ";
	getch();
	*/ // <-- Erase "*/"
}

void password_start()
{
	string pass, x;
	ifstream file ("./save/pass.txt", ios::in);
	if (file >> pass)
	{
		if (pass != "nopass")
		{
			while (true)
			{
				system ("cls");
				cout << "Plaza Hotel Management System" << endl;
				cout << "_____________________________" << endl;
				cout << "PassWord...!!!               " << endl;
				cout << "_____________________________" << endl << endl;
				cout << "Enter Your PassWord: ";
				cin >> x;
				if (x != pass)
				{
					cout << endl << "Error...!!!\n";
					cout << endl << "Your PassWord is Not Correct...!!!\n";
					cout << endl << "Please \"Enter any key to continue\" and Try Again...!!!\n";
					getch();
					continue;
				}
				else break;
			}
		}
	}
	file.close();
}

void set_password()
{
	string pass1, pass2;
	ofstream file ("./save/pass.txt", ios::out);
	while (true)
	{
		system ("cls");
		cout << "Plaza Hotel Management System" << endl;
		cout << "_____________________________" << endl;
		cout << "Set PassWord...!!!               " << endl;
		cout << "_____________________________" << endl << endl;
		cout << "Your PassWord Must be between 4 and 20 characters long...!!!\n\n";
		cout << "Enter \"nopass\" if you want to remove the password......!!!\n\n";
		cout << "Enter New PassWord: ";
		cin >> pass1;
		if ( (pass1.length()<4) || (pass1.length()>20) )
		{
			cout << endl << "Error...!!!\n";
			cout << endl << "PassWord Size is Invalid...!!!\n";
			cout << endl << "Please \"Enter any key to continue\" and Try Again...!!!\n";
			getch();
			continue;
		}
		cout << "Enter New PassWord \"Again\": ";
		cin >> pass2;
		if (pass1 != pass2)
		{
			cout << endl << "Error...!!!\n";
			cout << endl << "Your PassWords are Not the Same...!!!\n";
			cout << endl << "Please \"Enter any key to continue\" and Try Again...!!!\n";
			getch();
			continue;			
		}
		else break;
	}
	file << pass1;
	cout << endl << "PassWord Set Successfully Completed...!!!\n";
	cout << endl << "Enter any key to continue...!!!\n";
	file.close();
	getch();
	start2();
}

void theme()
{
	int n;
	char m;
	system ("cls");
	cout << "Plaza Hotel Management System" << endl;
	cout << "_____________________________" << endl;
	cout << "Application Theme            " << endl;
	cout << "_____________________________" << endl << endl;
	cout << "1. White & Black         \n";	
	cout << "2. Red & Bright White    \n";
	cout << "3. Purple & Bright White \n";
	cout << "4. Bright White & Black  \n";	
	cout << "5. Black & Bright White  \n";
	cout << "6. Black & Green         \n";
	cout << "7. Bright White & Blue   \n";
	cout << "8. Blue & Bright White   \n";	
	cout << endl;
	cout << "9. Default Theme----------!!!\n";
	cout << "0. Exit ------------------!!!\n";
	cout << "Choose the Theme----------!!!\n";
	cout << "_____________________________" << endl;
	cout << "Your choice: ";
	cin >> n;
	switch (n)
	{
		case 1: system ("color 70");
				break;
		case 2: system ("color 4f");
				break;
		case 3: system ("color 5f");
				break;
		case 4: system ("color f0");
				break;
		case 5: system ("color 0f");
				break;
		case 6: system ("color 02");
				break;
		case 7: system ("color 9f");
				break;
		case 8: system ("color f9");
				break;				
		case 9: system ("color 07");
				break;
		case 0: start2();
				break;
		default:
		{
			cout << "Error...!!!\n";
			cout << "Press any key to Continue...!!!\n";
			getch();
			theme();
		}
	}
	system ("cls");
	cout << "Plaza Hotel Management System" << endl;
	cout << "_____________________________" << endl;
	cout << "Application Theme            " << endl;
	cout << "_____________________________" << endl << endl;
	cout << "Is this the Theme of your choice...?(y/n) ";
	cin >> m;
	if ((m=='y')||(m=='Y'))
	start2();
	else
	theme();
}

void leave()
{
	hotel obj;
	int n;
		system ("cls");
		cout << "Plaza Hotel Management System" << endl;
		cout << "_____________________________" << endl;
		cout << "Leave...!!!                  " << endl;
		cout << "_____________________________" << endl << endl;
		cout << "Which room are You going to leave...?(number room) ";
		cin >> n;
		if (obj.check_room(n))
		{
			cerr << "Sorry...!!!" << endl;
			cerr << "Try Again...!!!" << endl;
			getch();
			leave();
		}
		leaving(n);
		wasaptor(n);
		cout << endl << endl << "Leave the room seccessful...!" << endl;
		getch();
		start2();	
}

void leaving (int x)
{
	int l[424], k[424];
	ifstream file ("./save/statusroom.txt", ios::in);
	for (size_t i=0; i<424; i++)
	{
		file >> l[i] >> k[i];
		if (l[i]==x)
		{
			k[i] = 1;
		}
	}
	file.close();
	ofstream file1 ("./save/statusroom.txt", ios::out);
	for (size_t i=0; i<424; i++)
	{
		file1 << l[i] << "\t" << k[i] << endl;
	}
	file1.close();
}

void wasaptor (int x)
{
	ifstream file ("./save/record.txt", ios::in);
	//**************************
	vector <string> bar;
	vector <int> num_room;
	vector <string> name_class;
	vector <string> name_room;
	vector <int> night;
	vector <int> people;
	//**************************
	vector <int> num_per;
	vector <string> first_name;
	vector <string> last_name;
	vector <string> gender;
	vector <int> age;
	vector <string> st_age;
	vector <string> country;
	vector <string> id;
	vector <string> phone;
	//**************************
	vector <int> option1;
	vector <int> option2;	
	vector <int> option3;
	vector <int> option4;
	vector <int> option5;
	vector <int> option6;
	vector <int> option7;
	//**************************
	vector <unsigned long int> pr1;
	vector <int> dis;
	vector <unsigned long int> pr2;
	vector <string> status;
	//**************************
	string bar0, name_class0, name_room0;
	int num_room0, night0, people0;
	int opt1, opt2, opt3, opt4, opt5, opt6, opt7;
	int num_per0, age0;
	string first_name0, last_name0, gender0, st_age0, country0, id0, phone0;
	int dis0;
	unsigned long int pr10, pr20;
	string status0;
	//**************************
	while(file >> bar0)	
	{
		file >> num_room0;
		file >> name_class0;
		file >> name_room0;
		file >> night0 >> people0;
		bar.push_back(bar0);
		num_room.push_back(num_room0);
		name_class.push_back(name_class0);
		name_room.push_back(name_room0);
		night.push_back(night0);
		people.push_back(people0);
		for (size_t i=0; i<people0; i++)
		{
			file >> num_per0 >> first_name0 >> last_name0 >> gender0 >> age0 >> st_age0 >> country0 >> id0 >> phone0;
			num_per.push_back(num_per0);
			first_name.push_back(first_name0);
			last_name.push_back(last_name0);
			gender.push_back(gender0);
			age.push_back(age0);
			st_age.push_back(st_age0);
			country.push_back(country0);
			id.push_back(id0);
			phone.push_back(phone0);
		}
		file >> opt1 >> opt2 >> opt3 >> opt4 >> opt5 >> opt6 >> opt7 >> pr10 >> dis0 >> pr20 >> status0;
		if (num_room0==x)
		status0 = "was";
		option1.push_back(opt1);
		option2.push_back(opt2);
		option3.push_back(opt3);
		option4.push_back(opt4);
		option5.push_back(opt5);
		option6.push_back(opt6);
		option7.push_back(opt7);
		pr1.push_back(pr10);
		dis.push_back(dis0);
		pr2.push_back(pr20);
		status.push_back(status0);
	}
	file.close();
	
	ofstream file1 ("./save/record.txt", ios::out);
	int c1 = 0;
	int j = 0;
	for (size_t i=0; i<bar.size(); i++)
	{
		file1 << bar[i] << endl << num_room[i] << endl << name_class[i] << endl << name_room[i] << endl << night[i] << endl << people[i] << endl;
		c1 += people[i];
		while (j < c1)
		{
			file1 << num_per[j] << endl << first_name[j] << endl << last_name[j] << endl << gender[j] << endl;
			file1 << age[j] << st_age[j] << endl << country[j] << endl << id[j] << endl << phone[j] << endl;
			j++;
		}
		file1 << option1[i] << endl << option2[i] << endl << option3[i] << endl << option4[i] << endl << option5[i] << endl << option6[i] << endl << option7[i] << endl;
		file1 << pr1[i] << endl << dis[i] << endl << pr2[i] << endl << status[i] << endl;
	}
	file1.close();
}

void v_st_bar()
{
	string barcode;
	system ("cls");
	cout << "Plaza Hotel Management System" << endl;
	cout << "_____________________________" << endl;
	cout << "Viwe Status by Barcode...!!! " << endl;
	cout << "_____________________________" << endl << endl;
	cout << "Exit by 0                     " << endl;
	cout << "Enter Your Barcode:(by \"-\") ";
	cin >> barcode;
	if ((barcode.size()) != 19)
	{
		cerr << "Your Barcode is Not Valid...!!!" << endl;
		getch();
		start2();
		return;
	}
	else
	search(barcode);
	getch();
	start2();
	
}

void v_st_name()
{
	string first, last;
	system ("cls");
	cout << "Plaza Hotel Management System" << endl;
	cout << "_____________________________" << endl;
	cout << "Viwe Status by Name...!!!    " << endl;
	cout << "_____________________________" << endl << endl;
	cout << "Exit by 0" << endl << endl;
	cout << "Enter First Name: ";
	cin >> first;
	cout << "Enter Last Name: ";
	cin >> last;
	if ((first=="0")||(last=="0"))
	{
		start2();
		return;
	}
	search1(first, last);
	getch();
	start2();
}

void v_st_num_room()
{
	int num;
	system ("cls");
	cout << "Plaza Hotel Management System" << endl;
	cout << "_____________________________" << endl;
	cout << "Viwe Status by room number   " << endl;
	cout << "_____________________________" << endl << endl;
	cout << "Exit by 0" << endl;
	cout << "Enter room number: ";
	cin >> num;
	if (num==0) 
	{
		start2();
		return;
	}
	else if ((num<0)||(num>424)) v_st_num_room();
	search2(num);
	getch();
	start2();	
}

void search (string x) //search by barcode
{
	ifstream file ("./save/record.txt", ios::in);

	vector <int> num_per;
	vector <string> first_name;
	vector <string> last_name;
	vector <string> gender;
	vector <int> age;
	vector <string> st_age;
	vector <string> country;
	vector <string> id;
	vector <string> phone;

	string bar0, name_class0, name_room0;
	int num_room0, night0, people0;
	int opt1, opt2, opt3, opt4, opt5, opt6, opt7;
	int num_per0, age0;
	string first_name0, last_name0, gender0, st_age0, country0, id0, phone0;
	int dis0;
	unsigned long int pr10, pr20;
	string status0;

	int e11 = 0;

	while(file >> bar0)	
	{
		file >> num_room0;
		file >> name_class0;
		file >> name_room0;
		file >> night0 >> people0;
		for (size_t i=0; i<people0; i++)
		{
			file >> num_per0 >> first_name0 >> last_name0 >> gender0 >> age0 >> st_age0 >> country0 >> id0 >> phone0;
			num_per.push_back(num_per0);
			first_name.push_back(first_name0);
			last_name.push_back(last_name0);
			gender.push_back(gender0);
			age.push_back(age0);
			st_age.push_back(st_age0);
			country.push_back(country0);
			id.push_back(id0);
			phone.push_back(phone0);
		}
		file >> opt1 >> opt2 >> opt3 >> opt4 >> opt5 >> opt6 >> opt7 >> pr10 >> dis0 >> pr20 >> status0;

		if (bar0==x)
		{
			e11 = 1;
			break;
		}
			num_per.clear();
			first_name.clear();
			last_name.clear();
			gender.clear();
			age.clear();
			st_age.clear();
			country.clear();
			id.clear();
			phone.clear();
	}
	file.close();
	if (e11==0)
	{
		cerr << "Sorry...!!!" << endl;
		cerr << "Your Barcode is False...!!!" << endl;
		getch();
		 v_st_bar();
	}
	else
	{
		cout << endl << endl;
		cout << "Room Number: " << num_room0 << endl;
		cout << "Class: " << name_class0 << endl;
		cout << "Room type: " << name_room0 << endl;
		cout << "For " << night0 << " Night..." << endl;
		cout << "Number People: " << people0 << endl;
		for (size_t i=0; i<people0; i++)
		{
			cout << "-----------------Person " << num_per[i] << endl;
			cout << "     First_Name: " << first_name[i] << endl;
			cout << "      Last Name: " << last_name[i] << endl;
			cout << "         Gender: " << gender[i] << endl;
			cout << "            Age: " << age[i] << endl;
			cout << "     status age: " << st_age[i] << endl;
			cout << "        Country: " << country[i] << endl;
			if (country[i]=="US")
			cout << "          US ID: " << id[i] << endl;
			else
			cout << "Passport Number: " << id[i] << endl;
			cout << "   Phone Number: " << phone[i] << endl;
		}
		cout << "-----------------------Option" << endl;
		cout << "               BreakFast = " << opt1 << endl;
		cout << "                   Lunch = " << opt2 << endl;
		cout << "                  Dinner = " << opt3 << endl;
		cout << "          Private Waiter = " << opt4 << endl;
		cout << "Public Pool Subscribtion = " << opt5 << endl;
		cout << "        Casino Entrances = " << opt6 << endl;
		cout << "    New York Tour Ticket = " << opt7 << endl;
		cout << "-----------------------------" << endl;
		cout << "Price Before Discount: " << pr10 << endl;
		cout << "      Amount Discount: " << dis0 << endl;
		cout << " Price After Discount: " << pr20 << endl;
		if (status0=="now")
		cout << "Now-------This purchase is already there...!!!" << endl << endl;
		else
		cout << "Was-------This purchase does not currenty exist...!!!" << endl << endl;
	}
}

void search1 (string x, string y) //search by name
{
	ifstream file ("./save/record.txt", ios::in);

	vector <int> num_per;
	vector <string> first_name;
	vector <string> last_name;
	vector <string> gender;
	vector <int> age;
	vector <string> st_age;
	vector <string> country;
	vector <string> id;
	vector <string> phone;

	string bar0, name_class0, name_room0;
	int num_room0, night0, people0;
	int opt1, opt2, opt3, opt4, opt5, opt6, opt7;
	int num_per0, age0;
	string first_name0, last_name0, gender0, st_age0, country0, id0, phone0;
	int dis0;
	unsigned long int pr10, pr20;
	string status0;

	int e11 = 0;
	int e22 = 0;
	while(file >> bar0)	
	{
		file >> num_room0;
		file >> name_class0;
		file >> name_room0;
		file >> night0 >> people0;
		for (size_t i=0; i<people0; i++)
		{
			file >> num_per0 >> first_name0 >> last_name0 >> gender0 >> age0 >> st_age0 >> country0 >> id0 >> phone0;
			if ((first_name0==x) || (last_name0==y)) e22=1;
			num_per.push_back(num_per0);
			first_name.push_back(first_name0);
			last_name.push_back(last_name0);
			gender.push_back(gender0);
			age.push_back(age0);
			st_age.push_back(st_age0);
			country.push_back(country0);
			id.push_back(id0);
			phone.push_back(phone0);
		}
		file >> opt1 >> opt2 >> opt3 >> opt4 >> opt5 >> opt6 >> opt7 >> pr10 >> dis0 >> pr20 >> status0;

		if (e22==1)
		{
			e11 = 1;
		cout << endl << endl;
		cout << "Barcode: " << bar0 << endl;
		cout << "Room Number: " << num_room0 << endl;
		cout << "Class: " << name_class0 << endl;
		cout << "Room type: " << name_room0 << endl;
		cout << "For " << night0 << " Night..." << endl;
		cout << "Number People: " << people0 << endl;
		for (size_t i=0; i<people0; i++)
		{
			cout << "-----------------Person " << num_per[i] << endl;
			cout << "     First_Name: " << first_name[i] << endl;
			cout << "      Last Name: " << last_name[i] << endl;
			cout << "         Gender: " << gender[i] << endl;
			cout << "            Age: " << age[i] << endl;
			cout << "     status age: " << st_age[i] << endl;
			cout << "        Country: " << country[i] << endl;
			if (country[i]=="US")
			cout << "          US ID: " << id[i] << endl;
			else
			cout << "Passport Number: " << id[i] << endl;
			cout << "   Phone Number: " << phone[i] << endl;
		}
		cout << "-----------------------Option" << endl;
		cout << "               BreakFast = " << opt1 << endl;
		cout << "                   Lunch = " << opt2 << endl;
		cout << "                  Dinner = " << opt3 << endl;
		cout << "          Private Waiter = " << opt4 << endl;
		cout << "Public Pool Subscribtion = " << opt5 << endl;
		cout << "        Casino Entrances = " << opt6 << endl;
		cout << "    New York Tour Ticket = " << opt7 << endl;
		cout << "-----------------------------" << endl;
		cout << "Price Before Discount: " << pr10 << endl;
		cout << "      Amount Discount: " << dis0 << endl;
		cout << " Price After Discount: " << pr20 << endl;
		if (status0=="now")
		cout << "Now-------This purchase is already there...!!!" << endl << endl;
		else
		cout << "Was-------This purchase does not currenty exist...!!!" << endl << endl;
		getch();
		}
			e22 = 0;
			num_per.clear();
			first_name.clear();
			last_name.clear();
			gender.clear();
			age.clear();
			st_age.clear();
			country.clear();
			id.clear();
			phone.clear();
	}
	file.close();
	if (e11==0)
	{
		cerr << "Sorry...!!!" << endl;
		cerr << "Your Name is False...!!!" << endl;
		getch();
		 v_st_name();
	}
}

void search2 (int x) //search by room number
{
	ifstream file ("./save/record.txt", ios::in);

	vector <int> num_per;
	vector <string> first_name;
	vector <string> last_name;
	vector <string> gender;
	vector <int> age;
	vector <string> st_age;
	vector <string> country;
	vector <string> id;
	vector <string> phone;

	string bar0, name_class0, name_room0;
	int num_room0, night0, people0;
	int opt1, opt2, opt3, opt4, opt5, opt6, opt7;
	int num_per0, age0;
	string first_name0, last_name0, gender0, st_age0, country0, id0, phone0;
	int dis0;
	unsigned long int pr10, pr20;
	string status0;

	int e11 = 0;

	while(file >> bar0)	
	{
		file >> num_room0;
		file >> name_class0;
		file >> name_room0;
		file >> night0 >> people0;
		for (size_t i=0; i<people0; i++)
		{
			file >> num_per0 >> first_name0 >> last_name0 >> gender0 >> age0 >> st_age0 >> country0 >> id0 >> phone0;
			num_per.push_back(num_per0);
			first_name.push_back(first_name0);
			last_name.push_back(last_name0);
			gender.push_back(gender0);
			age.push_back(age0);
			st_age.push_back(st_age0);
			country.push_back(country0);
			id.push_back(id0);
			phone.push_back(phone0);
		}
		file >> opt1 >> opt2 >> opt3 >> opt4 >> opt5 >> opt6 >> opt7 >> pr10 >> dis0 >> pr20 >> status0;

		if (num_room0==x)
		{
		e11 = 1;
		cout << endl << endl;
		cout << "Barcode: " << bar0 << endl;
		cout << "Room Number: " << num_room0 << endl;
		cout << "Class: " << name_class0 << endl;
		cout << "Room type: " << name_room0 << endl;
		cout << "For " << night0 << " Night..." << endl;
		cout << "Number People: " << people0 << endl;
		for (size_t i=0; i<people0; i++)
		{
			cout << "-----------------Person " << num_per[i] << endl;
			cout << "     First_Name: " << first_name[i] << endl;
			cout << "      Last Name: " << last_name[i] << endl;
			cout << "         Gender: " << gender[i] << endl;
			cout << "            Age: " << age[i] << endl;
			cout << "     status age: " << st_age[i] << endl;
			cout << "        Country: " << country[i] << endl;
			if (country[i]=="US")
			cout << "          US ID: " << id[i] << endl;
			else
			cout << "Passport Number: " << id[i] << endl;
			cout << "   Phone Number: " << phone[i] << endl;
		}
		cout << "-----------------------Option" << endl;
		cout << "               BreakFast = " << opt1 << endl;
		cout << "                   Lunch = " << opt2 << endl;
		cout << "                  Dinner = " << opt3 << endl;
		cout << "          Private Waiter = " << opt4 << endl;
		cout << "Public Pool Subscribtion = " << opt5 << endl;
		cout << "        Casino Entrances = " << opt6 << endl;
		cout << "    New York Tour Ticket = " << opt7 << endl;
		cout << "-----------------------------" << endl;
		cout << "Price Before Discount: " << pr10 << endl;
		cout << "      Amount Discount: " << dis0 << endl;
		cout << " Price After Discount: " << pr20 << endl;
		if (status0=="now")
		cout << "Now-------This purchase is already there...!!!" << endl << endl;
		else
		cout << "Was-------This purchase does not currenty exist...!!!" << endl << endl;
		getch();
		}
			num_per.clear();
			first_name.clear();
			last_name.clear();
			gender.clear();
			age.clear();
			st_age.clear();
			country.clear();
			id.clear();
			phone.clear();
	}
	file.close();
	if (e11==0)
	{
		cerr << "Sorry...!!!" << endl;
		cerr << "This room is Empty...!!!" << endl;
		getch();
		 v_st_num_room();
	}
}

void v_all_room()
{
	int l, k;
	ifstream file ("./save/statusroom.txt", ios::in);
	system ("cls");
	cout << "Plaza Hotel Management System" << endl;
	cout << "_____________________________" << endl;
	cout << "Viwe all rooms Status        " << endl;
	cout << "_____________________________" << endl << endl;
	for (size_t i=1; i<=424; i++)
	{
		file >> l >> k;
		cout << "Room Number\t" << i << "\tis ";
		if (k==0) cout << "Full...!!!" << endl;
		else      cout << "Empty..!!!" << endl;
		if((i%10)==0) getch();
	}
	file.close();
	getch();
	start2();
}

void read_receipt_file()
{
	string my_text;
	system ("cls");
	cout << "Plaza Hotel Management System" << endl;
	cout << "_____________________________" << endl;
	cout << "Read Receipt File            " << endl;
	cout << "_____________________________" << endl << endl;
	ifstream MyReadFile ("./receipt/receipt.txt", ios::in);
	getch();
	int i=1;
	while (getline(MyReadFile,my_text))
	{
		cout << my_text << endl;
		if ((i%10)==0) getch();
	}
	MyReadFile.close();
	getch();
	start2();
}

void new_pu()
{
	ifstream file ("./save/record.txt", ios::in);
	system ("cls");
	cout << "Plaza Hotel Management System" << endl;
	cout << "_____________________________" << endl;
	cout << "New Purchases                " << endl;
	cout << "_____________________________" << endl << endl;
	getch();
	vector <int> num_per;
	vector <string> first_name;
	vector <string> last_name;
	vector <string> gender;
	vector <int> age;
	vector <string> st_age;
	vector <string> country;
	vector <string> id;
	vector <string> phone;

	string bar0, name_class0, name_room0;
	int num_room0, night0, people0;
	int opt1, opt2, opt3, opt4, opt5, opt6, opt7;
	int num_per0, age0;
	string first_name0, last_name0, gender0, st_age0, country0, id0, phone0;
	int dis0;
	unsigned long int pr10, pr20;
	string status0;

	int e11=0;

	while(file >> bar0)	
	{
		file >> num_room0;
		file >> name_class0;
		file >> name_room0;
		file >> night0 >> people0;
		for (size_t i=0; i<people0; i++)
		{
			file >> num_per0 >> first_name0 >> last_name0 >> gender0 >> age0 >> st_age0 >> country0 >> id0 >> phone0;
			num_per.push_back(num_per0);
			first_name.push_back(first_name0);
			last_name.push_back(last_name0);
			gender.push_back(gender0);
			age.push_back(age0);
			st_age.push_back(st_age0);
			country.push_back(country0);
			id.push_back(id0);
			phone.push_back(phone0);
		}
		file >> opt1 >> opt2 >> opt3 >> opt4 >> opt5 >> opt6 >> opt7 >> pr10 >> dis0 >> pr20 >> status0;

		if (status0=="now")
		{
			e11=1;
		cout << endl << endl;
		cout << "Barcode: " << bar0 << endl;
		cout << "Room Number: " << num_room0 << endl;
		cout << "Class: " << name_class0 << endl;
		cout << "Room type: " << name_room0 << endl;
		cout << "For " << night0 << " Night..." << endl;
		cout << "Number People: " << people0 << endl;
		for (size_t i=0; i<people0; i++)
		{
			cout << "-----------------Person " << num_per[i] << endl;
			cout << "     First_Name: " << first_name[i] << endl;
			cout << "      Last Name: " << last_name[i] << endl;
			cout << "         Gender: " << gender[i] << endl;
			cout << "            Age: " << age[i] << endl;
			cout << "     status age: " << st_age[i] << endl;
			cout << "        Country: " << country[i] << endl;
			if (country[i]=="US")
			cout << "          US ID: " << id[i] << endl;
			else
			cout << "Passport Number: " << id[i] << endl;
			cout << "   Phone Number: " << phone[i] << endl;
		}
		cout << "-----------------------Option" << endl;
		cout << "               BreakFast = " << opt1 << endl;
		cout << "                   Lunch = " << opt2 << endl;
		cout << "                  Dinner = " << opt3 << endl;
		cout << "          Private Waiter = " << opt4 << endl;
		cout << "Public Pool Subscribtion = " << opt5 << endl;
		cout << "        Casino Entrances = " << opt6 << endl;
		cout << "    New York Tour Ticket = " << opt7 << endl;
		cout << "-----------------------------" << endl;
		cout << "Price Before Discount: " << pr10 << endl;
		cout << "      Amount Discount: " << dis0 << endl;
		cout << " Price After Discount: " << pr20 << endl;
		getch();
		}
			num_per.clear();
			first_name.clear();
			last_name.clear();
			gender.clear();
			age.clear();
			st_age.clear();
			country.clear();
			id.clear();
			phone.clear();
	}
	file.close();
	if (e11==0)
	{
		cout << "There is no New Purchase...!!!" << endl;
		getch();
	}

start2();
}

void old_pu()
{
	ifstream file ("./save/record.txt", ios::in);
	system ("cls");
	cout << "Plaza Hotel Management System" << endl;
	cout << "_____________________________" << endl;
	cout << "Old Purchases                " << endl;
	cout << "_____________________________" << endl << endl;
	getch();
	vector <int> num_per;
	vector <string> first_name;
	vector <string> last_name;
	vector <string> gender;
	vector <int> age;
	vector <string> st_age;
	vector <string> country;
	vector <string> id;
	vector <string> phone;

	string bar0, name_class0, name_room0;
	int num_room0, night0, people0;
	int opt1, opt2, opt3, opt4, opt5, opt6, opt7;
	int num_per0, age0;
	string first_name0, last_name0, gender0, st_age0, country0, id0, phone0;
	int dis0;
	unsigned long int pr10, pr20;
	string status0;

	int e11=0;

	while(file >> bar0)	
	{
		file >> num_room0;
		file >> name_class0;
		file >> name_room0;
		file >> night0 >> people0;
		for (size_t i=0; i<people0; i++)
		{
			file >> num_per0 >> first_name0 >> last_name0 >> gender0 >> age0 >> st_age0 >> country0 >> id0 >> phone0;
			num_per.push_back(num_per0);
			first_name.push_back(first_name0);
			last_name.push_back(last_name0);
			gender.push_back(gender0);
			age.push_back(age0);
			st_age.push_back(st_age0);
			country.push_back(country0);
			id.push_back(id0);
			phone.push_back(phone0);
		}
		file >> opt1 >> opt2 >> opt3 >> opt4 >> opt5 >> opt6 >> opt7 >> pr10 >> dis0 >> pr20 >> status0;

		if (status0=="was")
		{
			e11=1;
		cout << endl << endl;
		cout << "Barcode: " << bar0 << endl;
		cout << "Room Number: " << num_room0 << endl;
		cout << "Class: " << name_class0 << endl;
		cout << "Room type: " << name_room0 << endl;
		cout << "For " << night0 << " Night..." << endl;
		cout << "Number People: " << people0 << endl;
		for (size_t i=0; i<people0; i++)
		{
			cout << "-----------------Person " << num_per[i] << endl;
			cout << "     First_Name: " << first_name[i] << endl;
			cout << "      Last Name: " << last_name[i] << endl;
			cout << "         Gender: " << gender[i] << endl;
			cout << "            Age: " << age[i] << endl;
			cout << "     status age: " << st_age[i] << endl;
			cout << "        Country: " << country[i] << endl;
			if (country[i]=="US")
			cout << "          US ID: " << id[i] << endl;
			else
			cout << "Passport Number: " << id[i] << endl;
			cout << "   Phone Number: " << phone[i] << endl;
		}
		cout << "-----------------------Option" << endl;
		cout << "               BreakFast = " << opt1 << endl;
		cout << "                   Lunch = " << opt2 << endl;
		cout << "                  Dinner = " << opt3 << endl;
		cout << "          Private Waiter = " << opt4 << endl;
		cout << "Public Pool Subscribtion = " << opt5 << endl;
		cout << "        Casino Entrances = " << opt6 << endl;
		cout << "    New York Tour Ticket = " << opt7 << endl;
		cout << "-----------------------------" << endl;
		cout << "Price Before Discount: " << pr10 << endl;
		cout << "      Amount Discount: " << dis0 << endl;
		cout << " Price After Discount: " << pr20 << endl;
		getch();
		}
			num_per.clear();
			first_name.clear();
			last_name.clear();
			gender.clear();
			age.clear();
			st_age.clear();
			country.clear();
			id.clear();
			phone.clear();
	}
	file.close();
	if (e11==0)
	{
		cout << "There is no Old Purchase...!!!" << endl;
		getch();
	}

start2();
}

/*
----------------------------------------------
--------------------------------------about ()
----------------------------------------------
*/

void about()
{
	system ("cls");
	cout << "Plaza Hotel Management System" << endl;
	cout << "_____________________________" << endl;
	cout << "About Plaza Menu             " << endl;
	cout << "_____________________________" << endl << endl;
	cout << "1. General Information       " << endl;
	cout << "2. Total Information         " << endl;
	cout << "3. Location                  " << endl;
	cout << "4. Reviews                   " << endl;
	cout << "5. About Programmer          " << endl << endl;
	cout << "6. Exit                      " << endl;
	cout << "_____________________________" << endl;
	cout << "Your choice: ";	
	int r;
	cin >> r;
	switch (r)
	{
		case 1: about1();
				break;
		case 2: about2();
				break;
		case 3: about3();
				break;
		case 4: about4();
				break;
		case 5: about5();
				break;
		case 6: start2();
				break;
		default:
		{
		cout << "_____________________________" << endl;
		cerr << "Error...! Wrong choice....!!!\n";
		cerr << "Press any key to continue...!\n";
		getch();
		system ("cls");
		about();
		}
	}
}

void about1()
{
	system ("cls");
	cout << "Plaza Hotel Management System" << endl;
	cout << "_____________________________" << endl;
	cout << "General Information          " << endl;
	cout << "_____________________________" << endl << endl;
	cout << "The Plaza" << endl << endl;
	cout << "Check-in time: 15:00\nCheck-out time: 12:00\n\n\n";
	cout << "4.5 ----------------- 6,733 Google reviews\n\n";
	cout << "5-star hotel\n\n";
	cout << "Address: 768 5th Ave, New York, NY 10019, United States\n\n";
	cout << "Phone: +1 212-759-3000\n\n";
	cout << "Site Address: www.plazany.com\n\n";
	cout << "Exit...(press 0)               " << endl;
	cout << "_____________________________" << endl;
	cout << "Your choice: ";	
	char n;
	cin >> n;
	if (n=='0')
	about();
	else
	{
	system ("cls");
	about1();
	}
}

void about2()
{
	system ("cls");
	cout << "Plaza Hotel Management System" << endl;
	cout << "_____________________________" << endl;
	cout << "Total Information Menu       " << endl;
	cout << "_____________________________" << endl << endl;
	cout << "1. Hotel details             " << endl;
	cout << "2. Health and safety         " << endl;
	cout << "3. Popular amenities         " << endl << endl;
	cout << "4. Exit                      " << endl;
	cout << "_____________________________" << endl;
	cout << "Your choice: ";	
	int n;
	cin >> n;
	switch (n)
	{
	case 1: about21();
			break;
	case 2: about22();
			break;
	case 3: about23();
			break;
	case 4: about();
			break;
	default: 
		{
		cout << "_____________________________" << endl;
		cerr << "Error...! Wrong choice....!!!\n";
		cerr << "Press any key to continue...!\n";
		getch();
		about2();
		}
	}
}

void about21()
{
	system ("cls");
	cout << "Plaza Hotel Management System" << endl;
	cout << "_____________________________" << endl;
	cout << "Hotel details                " << endl;
	cout << "_____________________________" << endl << endl;
	cout << "In a landmark 19th-century building opposite Central Park,\nthis iconic luxury hotel is 1.4 miles from the Empire State Building.\n";
	cout << "Offering bathrooms with gold-plated fixtures,\n";
	cout << "the elegant, French-style rooms have Italian linens and\nsitting areas, plus flat-screen TVs,\n";
	cout << "Wi-Fi (fee) and iPads; some rooms have terraces.\n";
	cout << "Suites offer city views, powder rooms and butler's pantries;\nsome are bi-level.\n";
	cout << "Room service is available.\n";
	cout << "Afternoon tea is offered in the famed Palm Court,\nwhich features a stained glass ceiling and lavish decor.\n";
	cout << "There's also a European-inspired food hall,\na storied jazz lounge and a\n";
	cout << "luxe champagne bar, plus a posh spa and a gym.\n\n";
	cout << "Exit...(press 0)               " << endl;
	cout << "_____________________________" << endl;
	cout << "Your choice: ";	
	char n;
	cin >> n;
	if (n=='0')
	about2();
	else about21();
}

void about22()
{
	system ("cls");
	cout << "Plaza Hotel Management System" << endl;
	cout << "_____________________________" << endl;
	cout << "Health and safety            " << endl;
	cout << "_____________________________" << endl << endl;
	cout << "Enhanced cleaning\n";
	cout << " 	 Enhanced cleaning of guest rooms\n";
	cout << "    Commercial-grade disinfectant used to clean the property\n";
	cout << "    Employees trained in COVID-19 cleaning procedures\n";
	cout << "    Employees wear masks, face shields and/or gloves\n";	
	cout << "    Enhanced cleaning of common areas\n";
	cout << "    Employees trained in thorough hand-washing\n";
	cout << "\n________________________________" << endl;
	cout << "Press any key to Next Slide...!!\n";
	getch();
	system ("cls");
	cout << "Plaza Hotel Management System" << endl;
	cout << "_____________________________" << endl;
	cout << "Health and safety            " << endl;
	cout << "_____________________________" << endl << endl;
	cout << "Personal protection\n";
	cout << "    Masks required on the property\n";
	cout << "    Hand-sanitiser and/or sanitising wipes in common areas\n";
	cout << "    In-room hygiene kits with masks,\n";
	cout << "    hand sanitiser and/or antibacterial wipes,\n";
	cout << "    Masks and/or gloves available for guests\n";
	cout << "\n________________________________" << endl;
	cout << "Press any key to Next Slide...!!\n";
	getch();
	system ("cls");
	cout << "Plaza Hotel Management System" << endl;
	cout << "_____________________________" << endl;
	cout << "Health and safety            " << endl;
	cout << "_____________________________" << endl << endl;
	cout << "Physical distancing\n";
	cout << "    Guest occupancy limited within shared facilities\n";
	cout << "    Physical distancing required\n";	
	cout << "    Common areas arranged to maintain physical distancing\n";
	cout << "    Safety dividers at front desk and other locations\n";
	cout << "    Private spaces designated in spa and wellness areas\n";
	cout << "\n________________________________" << endl;
	cout << "Press any key to Next Slide...!!\n";
	getch();
	system ("cls");
	cout << "Plaza Hotel Management System" << endl;
	cout << "_____________________________" << endl;
	cout << "Health and safety            " << endl;
	cout << "_____________________________" << endl << endl;
	cout << "Minimised contact\n";
	cout << "    High-touch items, such as decorative pillows, removed from guest rooms\n";
	cout << "    Plastic key cards are disinfected or discarded\n";
	cout << "    High-touch items, such as magazines, removed from common areas\n";
	cout << "    Buffer maintained between room bookings\n";
	cout << "\n________________________________" << endl;
	cout << "Press any key to Next Slide...!!\n";
	getch();
	system ("cls");
	cout << "Plaza Hotel Management System" << endl;
	cout << "_____________________________" << endl;
	cout << "Health and safety            " << endl;
	cout << "_____________________________" << endl << endl;	
	cout << "Increased food safety\n";
	cout << "    Additional sanitation in dining areas\n";
	cout << "    Additional safety measures during food prep and serving\n";
	cout << "    Individually packaged meals\n";
	cout << "\n________________________________" << endl;
	cout << "Press any key to Exit........!!!\n";
	getch();
	about2();
}

void about23()
{
	system ("cls");
	cout << "Plaza Hotel Management System" << endl;
	cout << "_____________________________" << endl;
	cout << "Popular amenities            " << endl;
	cout << "_____________________________" << endl << endl;
	cout << "Pool\n";
	cout << "Spa\n";
	cout << "Air conditioning\n";
	cout << "Breakfast\n";
	cout << "\n________________________________" << endl;
	cout << "Press any key to Next Slide...!!\n";
	getch();
	system ("cls");
	cout << "Plaza Hotel Management System" << endl;
	cout << "_____________________________" << endl;
	cout << "Popular amenities            " << endl;
	cout << "_____________________________" << endl << endl;
	cout << "Internet\n";
	cout << "	Wi-Fi (extra charge)\n";
	cout << "	Wi-Fi in public areas\n";
	cout << "\n________________________________" << endl;
	cout << "Press any key to Next Slide...!!\n";
	getch();
	system ("cls");
	cout << "Plaza Hotel Management System" << endl;
	cout << "_____________________________" << endl;
	cout << "Popular amenities            " << endl;
	cout << "_____________________________" << endl << endl;
	cout << "Food and drink\n";
	cout << "	Restaurant\n";
	cout << "	Room service\n";
	cout << "	Breakfast\n";
	cout << "\n________________________________" << endl;
	cout << "Press any key to Next Slide...!!\n";
	getch();
	system ("cls");
	cout << "Plaza Hotel Management System" << endl;
	cout << "_____________________________" << endl;
	cout << "Popular amenities            " << endl;
	cout << "_____________________________" << endl << endl;
	cout << "Policies & payments\n";
	cout << "	Smoke-free property\n";
	cout << "\n________________________________" << endl;
	cout << "Press any key to Next Slide...!!\n";
	getch();
	system ("cls");
	cout << "Plaza Hotel Management System" << endl;
	cout << "_____________________________" << endl;
	cout << "Popular amenities            " << endl;
	cout << "_____________________________" << endl << endl;
	cout << "Activities\n";
	cout << "	Bicycle hire (extra charge)\n";	
	cout << "\n________________________________" << endl;
	cout << "Press any key to Next Slide...!!\n";
	getch();
	system ("cls");
	cout << "Plaza Hotel Management System" << endl;
	cout << "_____________________________" << endl;
	cout << "Popular amenities            " << endl;
	cout << "_____________________________" << endl << endl;
	cout << "Services\n";	
	cout << "	Front desk (24-hour)\n";	
	cout << "	Currency exchange\n";	
	cout << "	Full-service laundry\n";	
	cout << "\n________________________________" << endl;
	cout << "Press any key to Next Slide...!!\n";
	getch();
	system ("cls");
	cout << "Plaza Hotel Management System" << endl;
	cout << "_____________________________" << endl;
	cout << "Popular amenities            " << endl;
	cout << "_____________________________" << endl << endl;
	cout << "Children\n";	
	cout << "	Child-friendly\n";	
	cout << "	Babysitting\n";	
	cout << "	Activities for kids\n";
	cout << "\n________________________________" << endl;
	cout << "Press any key to Next Slide...!!\n";
	getch();
	system ("cls");
	cout << "Plaza Hotel Management System" << endl;
	cout << "_____________________________" << endl;
	cout << "Popular amenities            " << endl;
	cout << "_____________________________" << endl << endl;	
	cout << "Pools\n";	
	cout << "	Indoor pool\n";	
	cout << "	Hot tub\n";	
	cout << "\n________________________________" << endl;
	cout << "Press any key to Next Slide...!!\n";
	getch();
	system ("cls");
	cout << "Plaza Hotel Management System" << endl;
	cout << "_____________________________" << endl;
	cout << "Popular amenities            " << endl;
	cout << "_____________________________" << endl << endl;
	cout << "Parking & transport\n";	
	cout << "	Parking\n";	
	cout << "	Self parking (extra charge)\n";
	cout << "	Valet parking (extra charge)\n";	
	cout << "\n________________________________" << endl;
	cout << "Press any key to Next Slide...!!\n";
	getch();
	system ("cls");
	cout << "Plaza Hotel Management System" << endl;
	cout << "_____________________________" << endl;
	cout << "Popular amenities            " << endl;
	cout << "_____________________________" << endl << endl;	
	cout << "Wellness\n";	
	cout << "	Fitness centre (free)\n";
	cout << "	Massage\n";	
	cout << "	Spa\n";
	cout << "\n________________________________" << endl;
	cout << "Press any key to Next Slide...!!\n";
	getch();
	system ("cls");
	cout << "Plaza Hotel Management System" << endl;
	cout << "_____________________________" << endl;
	cout << "Popular amenities            " << endl;
	cout << "_____________________________" << endl << endl;
	cout << "Accessibility\n";	
	cout << "	Accessible\n";		
	cout << "\n________________________________" << endl;
	cout << "Press any key to Next Slide...!!\n";
	getch();
	system ("cls");
	cout << "Plaza Hotel Management System" << endl;
	cout << "_____________________________" << endl;
	cout << "Popular amenities            " << endl;
	cout << "_____________________________" << endl << endl;
	cout << "Business & events\n";	
	cout << "	Business centre\n";
	cout << "\n________________________________" << endl;
	cout << "Press any key to Next Slide...!!\n";
	getch();
	system ("cls");
	cout << "Plaza Hotel Management System" << endl;
	cout << "_____________________________" << endl;
	cout << "Popular amenities            " << endl;
	cout << "_____________________________" << endl << endl;	
	cout << "Pets\n";	
	cout << "	Pets allowed (free)\n";
	cout << "	Dogs allowed\n";	
	cout << "	Cats allowed\n";
	cout << "\n________________________________" << endl;
	cout << "Press any key to Next Slide...!!\n";
	getch();
	system ("cls");
	cout << "Plaza Hotel Management System" << endl;
	cout << "_____________________________" << endl;
	cout << "Popular amenities            " << endl;
	cout << "_____________________________" << endl << endl;
	cout << "Languages spoken\n";
	cout << "	English\n";
	cout << "\n________________________________" << endl;
	cout << "Press any key to Next Slide...!!\n";
	getch();
	system ("cls");
	cout << "Plaza Hotel Management System" << endl;
	cout << "_____________________________" << endl;
	cout << "Popular amenities            " << endl;
	cout << "_____________________________" << endl << endl;	
	cout << "Rooms\n";
	cout << "	Air conditioning\n";	
	cout << "\n________________________________" << endl;
	cout << "Press any key to Next Slide...!!\n";
	getch();
	system ("cls");
	cout << "Plaza Hotel Management System" << endl;
	cout << "_____________________________" << endl;
	cout << "Popular amenities            " << endl;
	cout << "_____________________________" << endl << endl;
	cout << "Bathrooms\n";
	cout << "	Shower\n";
	cout << "\n________________________________" << endl;
	cout << "Press any key to Exit........!!!\n";
	getch();
	about2();	
}

void about3()
{
	system ("cls");
	cout << "Plaza Hotel Management System" << endl;
	cout << "_____________________________" << endl;
	cout << "Location Menu                " << endl;
	cout << "_____________________________" << endl << endl;
	cout << "1. Neighbourhood             " << endl;
	cout << "2. Things to do              " << endl;
	cout << "3. AirPort                   " << endl;
	cout << "4. Public TransPort Stops    " << endl << endl;
	cout << "5. Exit                      " << endl;
	cout << "_____________________________" << endl;
	cout << "Your choice: ";	
	int n;
	cin >> n;
	switch (n)
	{
	case 1: about31();
			break;
	case 2: about32();
			break;
	case 3: about33();
			break;
	case 4: about34();
			break;
	case 5: about();
			break;
	default: 
		{
		cout << "_____________________________" << endl;
		cerr << "Error...! Wrong choice....!!!\n";
		cerr << "Press any key to continue...!\n";
		getch();
		about3();
		}
	}
}

void about31()
{
	system ("cls");
	cout << "Plaza Hotel Management System" << endl;
	cout << "_____________________________" << endl;
	cout << "Neighbourhood                " << endl;
	cout << "_____________________________" << endl << endl;
	cout << "Manhattan\n\n";
	cout << "Manhattan is the most densely populated of New York City�s 5 boroughs.\n";
	cout << "It's mostly made up of Manhattan Island, bounded by the Hudson, East and Harlem rivers.\n";
	cout << "Among the world�s major commercial, financial and cultural centers, it�s the heart of �the Big Apple.�\n";
	cout << "Its iconic sites include skyscrapers such as the Empire State Building,\n";
	cout << "neon-lit Times Square and the theaters of Broadway.\n";
	cout << "\n________________________________" << endl;
	cout << "Press any key to Next Slide...!!\n";
	getch();
	system ("cls");
	cout << "Plaza Hotel Management System" << endl;
	cout << "_____________________________" << endl;
	cout << "Neighbourhood                " << endl;
	cout << "_____________________________" << endl << endl;
	cout << "Hotel location score\n\n";	
	cout << "4.8----Excellent location overall for sightseeing, recreation, dining and getting around\n";
	cout << "4.8----Excellent for proximity to things to do\n";
	cout << "4.7----Excellent for proximity to restaurants\n";
	cout << "4.6----Excellent for proximity to transit\n";
	cout << "3.9----Great for airport access\n\n";
	cout << "Scores are calculated based on data from Google Maps and Google reviews\n";
	cout << "\n________________________________" << endl;
	cout << "Press any key to Exit........!!!\n";
	getch();
	about3();
}

void about32()
{
	system ("cls");
	cout << "Plaza Hotel Management System" << endl;
	cout << "_____________________________" << endl;
	cout << "Things to do                 " << endl;
	cout << "_____________________________" << endl << endl;
	cout << "1. The Museum of Modern Art\n\n";
	cout << "Works from van Gogh to Warhol & beyond plus a sculpture garden, 2 cafes & The Modern restaurant.\n\n";
	cout << "Rating--------4.6-------33,172 reviews\n";
	cout << "Distance------8 min-----by Bus\n";
	cout << "\n________________________________" << endl;
	cout << "Press any key to Next Slide...!!\n";
	getch();
	system ("cls");
	cout << "Plaza Hotel Management System" << endl;
	cout << "_____________________________" << endl;
	cout << "Things to do                 " << endl;
	cout << "_____________________________" << endl << endl;
	cout << "2. Times Square\n\n";
	cout << "Bustling destination in the heart of the Theater District known for bright lights, shopping & shows.\n\n";
	cout << "Rating--------4.7-------157,581 reviews\n";
	cout << "Distance------8 min-----by Bus\n";
	cout << "\n________________________________" << endl;
	cout << "Press any key to Next Slide...!!\n";
	getch();
	system ("cls");
	cout << "Plaza Hotel Management System" << endl;
	cout << "_____________________________" << endl;
	cout << "Things to do                 " << endl;
	cout << "_____________________________" << endl << endl;
	cout << "3. Central Park\n\n";
	cout << "Sprawling park with pedestrian paths & ballfields, plus a zoo, carousel, boat rentals & a reservoir.\n\n";
	cout << "Rating--------4.8-------211,052 reviews\n";
	cout << "Distance------2 min-----by Walk\n";
	cout << "\n________________________________" << endl;
	cout << "Press any key to Next Slide...!!\n";
	getch();
	system ("cls");
	cout << "Plaza Hotel Management System" << endl;
	cout << "_____________________________" << endl;
	cout << "Things to do                 " << endl;
	cout << "_____________________________" << endl << endl;
	cout << "4. Empire State Building\n\n";
	cout << "Iconic, art deco office tower from 1931 with exhibits & observatories on the 86th & 102nd floors.\n\n";
	cout << "Rating--------4.7-------75,631 reviews\n";
	cout << "Distance------6 min-----by Taxi\n";
	cout << "\n________________________________" << endl;
	cout << "Press any key to Next Slide...!!\n";
	getch();
	system ("cls");
	cout << "Plaza Hotel Management System" << endl;
	cout << "_____________________________" << endl;
	cout << "Things to do                 " << endl;
	cout << "_____________________________" << endl << endl;
	cout << "5. The Metropolitan Museum of Art\n\n";
	cout << "A grand setting for one of the world's greatest collections of art, from ancient to contemporary.\n\n";
	cout << "Rating--------4.8-------60,368 reviews\n";
	cout << "Distance------8 min-----by Taxi\n";
	cout << "\n________________________________" << endl;
	cout << "Press any key to Next Slide...!!\n";
	getch();
	system ("cls");
	cout << "Plaza Hotel Management System" << endl;
	cout << "_____________________________" << endl;
	cout << "Things to do                 " << endl;
	cout << "_____________________________" << endl << endl;
	cout << "6. Rockefeller Center\n\n";
	cout << "Famous complex that's home to TV studios, plus a seasonal ice rink & giant Christmas tree.\n\n";
	cout << "Rating--------4.7-------126,595 reviews\n";
	cout << "Distance------4 min-----by Bus\n";
	cout << "\n________________________________" << endl;
	cout << "Press any key to Next Slide...!!\n";
	getch();
	system ("cls");
	cout << "Plaza Hotel Management System" << endl;
	cout << "_____________________________" << endl;
	cout << "Things to do                 " << endl;
	cout << "_____________________________" << endl << endl;
	cout << "7. Grand Central Terminal\n\n";
	cout << "Iconic train station known for its grand facade & main concourse, also offering shops & dining.Iconic train station known for its grand facade & main concourse, also offering shops & dining.\n\n";
	cout << "Rating--------4.7-------5,207 reviews\n";
	cout << "Distance------9 min-----by Bus\n";
	cout << "\n________________________________" << endl;
	cout << "Press any key to Next Slide...!!\n";
	getch();
	system ("cls");
	cout << "Plaza Hotel Management System" << endl;
	cout << "_____________________________" << endl;
	cout << "Things to do                 " << endl;
	cout << "_____________________________" << endl << endl;
	cout << "8. The High Line\n\n";
	cout << "Popular park 30 feet above street level on an old rail line, with river & city views.\n\n";
	cout << "Rating--------4.7--------41,580 reviews\n";
	cout << "Distance------15 min-----by Taxi\n";
	cout << "\n________________________________" << endl;
	cout << "Press any key to Next Slide...!!\n";
	getch();	
	system ("cls");
	cout << "Plaza Hotel Management System" << endl;
	cout << "_____________________________" << endl;
	cout << "Things to do                 " << endl;
	cout << "_____________________________" << endl << endl;
	cout << "10. Brooklyn Bridge\n\n";
	cout << "Beloved, circa-1883 landmark connecting Manhattan & Brooklyn via a unique stone-&-steel design.\n\n";
	cout << "Rating--------4.8--------48,989 reviews\n";
	cout << "Distance------17 min-----by Taxi\n";
	cout << "\n________________________________" << endl;
	cout << "Press any key to Next Slide...!!\n";
	getch();	
	system ("cls");
	cout << "Plaza Hotel Management System" << endl;
	cout << "_____________________________" << endl;
	cout << "Things to do                 " << endl;
	cout << "_____________________________" << endl << endl;
	cout << "11. Chrysler Building\n\n";
	cout << "Shimmering art deco skyscraper from 1930 whose spire once made it the world's tallest building.\n\n";
	cout << "Rating--------4.6--------4,121 reviews\n";
	cout << "Distance------6 min------by Taxi\n";
	cout << "\n________________________________" << endl;
	cout << "Press any key to Next Slide...!!\n";
	getch();
	system ("cls");
	cout << "Plaza Hotel Management System" << endl;
	cout << "_____________________________" << endl;
	cout << "Things to do                 " << endl;
	cout << "_____________________________" << endl << endl;
	cout << "12. Bryant Park\n\n";
	cout << "Green space behind the NY Public Library's main branch, with 4 acres, a cafe and other food kiosks.\n\n";
	cout << "Rating--------4.7--------59,501 reviews\n";
	cout << "Distance------7 min------by Taxi\n";
	cout << "\n________________________________" << endl;
	cout << "Press any key to Next Slide...!!\n";
	getch();
	system ("cls");
	cout << "Plaza Hotel Management System" << endl;
	cout << "_____________________________" << endl;
	cout << "Things to do                 " << endl;
	cout << "_____________________________" << endl << endl;
	cout << "13. One World Trade Center\n\n";
	cout << "A casual cafe, a bar with small plates & American fine dining with views from the 101st floor.\n\n";
	cout << "Rating--------4.7---------17,085 reviews\n";
	cout << "Distance------20 min------by Taxi\n";
	cout << "\n________________________________" << endl;
	cout << "Press any key to Next Slide...!!\n";
	getch();	
	system ("cls");
	cout << "Plaza Hotel Management System" << endl;
	cout << "_____________________________" << endl;
	cout << "Things to do                 " << endl;
	cout << "_____________________________" << endl << endl;
	cout << "14. American Museum of Natural History\n\n";
	cout << "From dinosaurs to outer space and everything in between, this huge museum showcases natural wonders.\n\n";
	cout << "Rating--------4.5---------11,687 reviews\n";
	cout << "Distance------10 min------by Taxi\n";
	cout << "\n________________________________" << endl;
	cout << "Press any key to Next Slide...!!\n";
	getch();	
	system ("cls");
	cout << "Plaza Hotel Management System" << endl;
	cout << "_____________________________" << endl;
	cout << "Things to do                 " << endl;
	cout << "_____________________________" << endl << endl;
	cout << "15. Statue of Liberty National Monument\n\n";
	cout << "Iconic National Monument opened in 1886, offering guided tours, a museum & city views.\n\n";
	cout << "Rating--------4.7---------73,051 reviews\n";
	cout << "Distance------19 min------by Taxi\n";
	cout << "\n________________________________" << endl;
	cout << "Press any key to Exit........!!!\n";
	getch();
	about3();

}

void about33()
{
	system ("cls");
	cout << "Plaza Hotel Management System" << endl;
	cout << "_____________________________" << endl;
	cout << "AirPort                      " << endl;
	cout << "_____________________________" << endl << endl;
	cout << "From\n";
	cout << "John F. Kennedy International Airport\n\n";
	cout << "Taxi----------------32 min\n";
	cout << "Public transport----1 hr 2\n\n";
	cout << "______________________________" << endl;
	cout << "Press any key to Continue...!!\n\n";
	getch();
	cout << "From\n";
	cout << "Newark Liberty International Airport\n\n";
	cout << "Taxi----------------34 min\n";
	cout << "Public transport----1 hr\n\n";	
	cout << "______________________________" << endl;
	cout << "Press any key to Continue...!!\n\n";
	getch();	
	cout << "From\n";
	cout << "LaGuardia Airport\n\n";
	cout << "Taxi----------------24 min\n";
	cout << "Public transport----41 min\n\n";	
	cout << "Exit (press 0)               " << endl;
	cout << "_____________________________" << endl;
	cout << "Your choice: ";	
	char n;
	cin >> n;
	if (n=='0')
	about3();
	else about33();
}
 
void about34()
{
	system ("cls");
	cout << "Plaza Hotel Management System" << endl;
	cout << "_____________________________" << endl;
	cout << "Public TransPort Stops       " << endl;
	cout << "_____________________________" << endl << endl;
	cout << "Nearby\n";
	cout << "Public Transport stops\n\n";
	cout << "Grand Central Terminal--------7 min\n";
	cout << "33rd Street-------------------9 min\n";
	cout << "5 Avenue Station--------------4 min\n";
	cout << "57 Street---------------------4 min\n";
	cout << "5 Avenue-53 St Station--------7 min\n\n";
	cout << "Exit (press 0)               " << endl;
	cout << "_____________________________" << endl;
	cout << "Your choice: ";	
	char n;
	cin >> n;
	if (n=='0')
	about3();
	else about34();
}
 
void about4()
{
	system ("cls");
	cout << "Plaza Hotel Management System" << endl;
	cout << "_____________________________" << endl;
	cout << "Reviews                      " << endl;
	cout << "_____________________________" << endl << endl;
	cout << "1. General Reviews                 " << endl;
	cout << "2. Reviews on other travel sites   " << endl;
	cout << "3. Ratings by traveller type       " << endl << endl;
	cout << "4. Exit                            " << endl;
	cout << "_____________________________      " << endl;
	cout << "Your choice: ";	
	int n;
	cin >> n;
	switch (n)
	{
	case 1: about41();
			break;
	case 2: about42();
			break;
	case 3: about43();
			break;
	case 4: about();
			break;
	default: 
		{
		cout << "_____________________________" << endl;
		cerr << "Error...! Wrong choice....!!!\n";
		cerr << "Press any key to continue...!\n";
		getch();
		about4();
		}
	}
}
 
void about41()
{
	system ("cls");
	cout << "Plaza Hotel Management System" << endl;
	cout << "_____________________________" << endl;
	cout << "General Reviews              " << endl;
	cout << "_____________________________" << endl << endl;
	cout << "        ***  4.5  ***        \n";	
	cout << "          Excellent          \n";	
	cout << "        6,733 reviews        \n\n";
	cout << "______________________________" << endl;
	cout << "Press any key to Continue...!!\n\n";
	getch();		
	cout << "Review summary\n\n";
	cout << "5-----------71%\n";
	cout << "4-----------21%\n";
	cout << "3------------5%\n";
	cout << "2------------1%\n";
	cout << "1------------2%\n\n";
	cout << "______________________________" << endl;
	cout << "Press any key to Continue...!!\n\n";
	getch();	
	cout << "Rooms-----------3.4\n";
	cout << "Location--------4.6\n";
	cout << "Service---------4.0\n\n";
	cout << "Exit...(press 0)               " << endl;
	cout << "_____________________________" << endl;
	cout << "Your choice: ";	
	char n;
	cin >> n;
	if (n=='0')
	about4();
	else about41();
}

void about42()
{
	system ("cls");
	cout << "Plaza Hotel Management System" << endl;
	cout << "_____________________________" << endl;
	cout << "Reviews on other travel sites" << endl;
	cout << "_____________________________" << endl << endl;
	cout << "Expedia.com--------4.5/5-----------1,000 reviews\n";
	cout << "Hotels.com---------8.9/10----------458   reviews\n";
	cout << "all.accor.com------4.2/5-----------3,704 reviews\n";
	cout << "Priceline----------9.3/10----------19 	  reviews\n";
	cout << "Orbitz.com---------4.5/5-----------1,000 reviews\n";
	cout << "Travelocity.com----4.5/5-----------1,000 reviews\n";
	cout << "Ebookers.com-------4.5/5-----------1,000 reviews\n";
	cout << "Wotif.com----------4.5/5-----------1,000 reviews\n\n";
	cout << "Exit...(press 0)             " << endl;
	cout << "_____________________________" << endl;
	cout << "Your choice: ";	
	char n;
	cin >> n;
	if (n=='0')
	about4();
	else about42();
}

void about43()
{
	system ("cls");
	cout << "Plaza Hotel Management System" << endl;
	cout << "_____________________________" << endl;
	cout << "Ratings by traveller type    " << endl;
	cout << "_____________________________" << endl << endl;
	cout << "Families-------4.2/5\n"; 
	cout << "Couples--------4.2/5\n";
	cout << "Business-------4.1/5\n";
	cout << "Solo-----------4.3/5\n\n";
	cout << "______________________________" << endl;
	cout << "Press any key to Continue...!!\n\n";
	getch();
	cout << "Food\n";
	cout << "	Mentioned in 754 Google reviews\n";
	cout << "	80% positive\n\n";
	getch();
	cout << "Property\n";
	cout << "	Mentioned in 847 Google reviews\n";
	cout << "	88% positive\n\n";
	getch();
	cout << "Service\n";
	cout << "	Mentioned in 592 Google reviews\n";
	cout << "	78% positive\n\n";
	getch();
	cout << "Atmosphere\n";
	cout << "	Mentioned in 351 Google reviews\n";
	cout << "	90% positive\n\n";
	getch();
	cout << "Bar\n";
	cout << "	Mentioned in 45 Google reviews\n";
	cout << "	71% positive\n\n";
	getch();
	cout << "Wellness\n";
	cout << "	Mentioned in 17 Google reviews\n";
	cout << "	59% positive\n\n";
	getch();
	cout << "Location\n";
	cout << "	Mentioned in 272 Google reviews\n";
	cout << "	82% positive\n\n";
	getch();
	cout << "Couples\n";
	cout << "	Mentioned in 28 Google reviews\n";
	cout << "	75% positive\n\n";			
	getch();
	cout << "Spa\n";
	cout << "	Mentioned in 13 Google reviews\n";
	cout << "	62% positive\n\n";
	getch();
	cout << "Breakfast\n";
	cout << "	Mentioned in 115 Google reviews\n";
	cout << "	75% positive\n\n";
	getch();
	cout << "Family\n";
	cout << "	Mentioned in 37 Google reviews\n";
	cout << "	81% positive\n\n";	
	getch();
	cout << "Nature\n";
	cout << "	Mentioned in 21 Google reviews\n";
	cout << "	95% positive\n\n";
	getch();
	cout << "Business\n";
	cout << "	Mentioned in 29 Google reviews\n";
	cout << "	69% positive\n\n";
	getch();
	cout << "Amenities\n";
	cout << "	Mentioned in 79 Google reviews\n";
	cout << "	63% positive\n\n";
	getch();
	cout << "Restaurant\n";
	cout << "	Mentioned in 46 Google reviews\n";
	cout << "	76% positive\n\n";
	getch();
	cout << "Bathroom\n";
	cout << "	Mentioned in 80 Google reviews\n";
	cout << "	54% positive\n\n";
	getch();
	cout << "Nightlife\n";
	cout << "	Mentioned in 22 Google reviews\n";
	cout << "	59% positive\n\n";
	getch();
	cout << "Entertainment\n";
	cout << "	Mentioned in 27 Google reviews\n";
	cout << "	67% positive\n\n";
	getch();
	cout << "Cleanliness\n";
	cout << "	Mentioned in 105 Google reviews\n";
	cout << "	83% positive\n\n";
	getch();
	cout << "Safety\n";
	cout << "	Mentioned in 19 Google reviews\n";
	cout << "	53% unfavourable\n\n";
	getch();
	cout << "Wi-fi\n";
	cout << "	Mentioned in 16 Google reviews\n";
	cout << "	38% neutral\n\n";
	getch();
	cout << "Accessibility\n";
	cout << "	Mentioned in 16 Google reviews\n";
	cout << "	50% unfavourable\n\n";
	getch();
	cout << "Fitness\n";
	cout << "	Mentioned in 12 Google reviews\n";
	cout << "	50% positive\n\n";
	getch();	
	cout << "Sleep\n";
	cout << "	Mentioned in 32 Google reviews\n";
	cout << "	53% positive\n\n";
	getch();
	cout << "Kitchen\n";
	cout << "	Mentioned in 10 Google reviews\n";
	cout << "	60% positive\n\n";
	getch();
	cout << "Transit\n";
	cout << "	Mentioned in 9 Google reviews\n";
	cout << "	56% positive\n\n";
	getch();
	cout << "Parking\n";
	cout << "	Mentioned in 6 Google reviews\n";
	cout << "	33% neutral\n\n";
	cout << "Exit...(press 0)             " << endl;
	cout << "_____________________________" << endl;
	cout << "Your choice: ";	
	char n;
	cin >> n;
	if (n=='0')
	about4();
	else about43();
}

void about5()
{
	system ("cls");
	cout << "Plaza Hotel Management System" << endl;
	cout << "_____________________________" << endl;
	cout << "About Programmer             " << endl;
	cout << "_____________________________" << endl << endl;
	cout << "Programmer: Rahmatollah Ansari	\n\n";
	cout << "Field: Computer Engineering   	\n";	
	cout << "Undergraduate Student         	\n";
	cout << "University: Hakim Sabzevari   	\n\n";
	cout << "Telegram:     @ EnAnsari       \n";
	cout << "Instagram:    @ En.R.Ansari    \n";
	cout << "Telegram:     @ EnAnsari1      \n\n";
	cout << "Email: Rahmat2022a@gmail.com   \n\n";
	string str = "Good Luck...!!!";
	for (size_t i=0; i<str.length(); i++)
	{
		Sleep(250);
		cout << str[i];
	}
	cout << "\n\nExit...(press 0)         " << endl;
	cout << "_____________________________" << endl;
	cout << "Your choice: ";	
	char n;
	cin >> n;
	if (n=='0')
	about();
	else about5();
}

/*
bool check_file()
{
	ofstream file1 ("./save/statusroom.txt", ios::out);
	ofstream file2 ("./save/record.txt", ios::out);
	ofstream file3 ("./save/pass.txt", ios::out);
	ofstream file4 ("./save/discount.txt", ios::out);
	ofstream file5 ("./receipt/receipt.txt", ios::out);
	if ((!file1)||(!file2)||(!file3)||(!file4)||(!file5))
	{
		file1.close();
		file2.close();
		file3.close();
		file4.close();
		file5.close();
		cerr << "Some thing wrong during opening file...!!!" << endl;
		return false;
	}
	else
	{
		file1.close();
		file2.close();
		file3.close();
		file4.close();
		file5.close();
		return true;
	}
}
*/

// End of Program

// End Date: 1399,10,26
//           2020,01,15
// End Time: 05:20 pm.

// � Copyright 2020, Rahmatollah Ansari

