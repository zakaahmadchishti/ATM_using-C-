#include<iostream>
using namespace std;
float user1 = 500, user2 = 500, user3 = 500;
int z;
class useraccount1;
class useraccount2;



class design
{
public:
	void designstyle()
	{
		cout << "                          Welcome to Iqra University Bank (Islamabad Branch)" << endl;
		cout << "*********************************************************************************************************************" << endl;
	}
	void logindesignaccount()
	{
		cout << endl << endl << "Enter Account Number = ";
	}
	void logindesignpassword()
	{
		cout << "Enter Account Pin =";
	}
	void menu()
	{
		cout << "1. Balance Check" << endl;
		cout << "2. Transfer amount to others Account" << endl;
		cout << "3. Bill Payment" << endl;
		cout << "4. Adding Money to Account" << endl;
		cout << "0. Exit" << endl;

	}
	void balancecheckdesign()
	{
		cout << endl << endl << "Your Current Balance =";
	}
	void transferdesignaccount()
	{
		cout << endl << endl << "Enter Account Number =";

	}
	void transferdesignamount()
	{
		cout << "Amount to Transfer =";
	}
	void billpaymentdesign()
	{
		cout << endl << endl << "Enter Bill Number =";
	}
	void billpaymentamountdesign()
	{
		cout << endl << endl << "Enter Amount to pay =";
	}

};





class useraccount1
{
private: int accountnumber1;
public:
	void menuchoice()
	{
		system("cls");
		design w;
		w.designstyle();
		w.menu();
		int a;
		cin >> a;
		system("cls");
		switch (a)
		{
		case 1:
			design f;
			f.designstyle();
			f.balancecheckdesign();
			cout << user1;
		s:
			cout << endl << "0. main menu" << endl;
			int d; cin >> d;
			if (d == 0) {
				menuchoice();
			}
			else
			{
				cout << "Sorry Donot try Become Smart" << endl;
				goto s;
			}
			break;
		case 2:
		a:
			f.designstyle();
			f.transferdesignaccount();
			cin >> accountnumber1;
			if (accountnumber1 == 123456 || accountnumber1 == 1234567)
			{
				if (accountnumber1 == 123456)
				{
					f.transferdesignamount();
					int tranamount;
					cin >> tranamount;
					if (tranamount <= user1)
					{

						cout << "Transaction Completed Sussfully" << endl;
						cout << endl << "0. Mainchoice" << endl;
						int q; cin >> q;
						if (q == 0)
						{
							menuchoice();
						}

					}
					else
					{
						cout << "Balance < Transfer Balance Sorry Transation Error!" << endl;
						cout << "Enter Amount Again =";
						goto d;
					}
				}
				if (accountnumber1 == 1234567)
				{
					f.transferdesignamount();
					int tranamount;
				d:
					cin >> tranamount;
					if (tranamount <= user1)
					{
						cout << "Transaction Completed Sussfully" << endl;
					w1:cout << endl << "0. Mainchoice" << endl;
						int q; cin >> q;
						if (q == 0)
						{
							menuchoice();
						}
						else
						{
							cout << "Sorry Command Not Detected Enter Again =" << endl;
							goto w1;
						}
					}

				}
				else
				{
					cout << "Balance < Transfer Balance Sorry Transation Error!" << endl;
					cout << "Enter Amount Again =";
					goto d;
				}
			}
			else
			{
				cout << "Enter Account Number does'not exist" << endl;
				goto a;
			}
			break;
		case 3:
			f.designstyle();
			f.billpaymentdesign();
			int bill, billamount, n;
			cin >> bill;
			f.billpaymentamountdesign();
			cin >> billamount;
			if (billamount <= user1)
			{
				cout << "Payeed Sussfully" << endl;
			sqw:
				cout << "0. Mainmenu" << endl; cin >> n;
				if (n == 0)
				{
					menuchoice();
				}
				else
				{
					cout << "Enter Account Number does'not exist" << endl;
					goto sqw;
				}
			}
			break;
		case 4:
			int p, q;
		e1:
			cout << "1. NFC Technology" << endl;
			cout << "0. Mainmenu" << endl;
			cin >> p;
			if (p == 0 || p == 1)
			{
				if (p == 0)
				{
					menuchoice();
				}
				if (p == 1)
				{
					system("cls");
					int nfcamount;
					design y;
					y.designstyle();
					cout << endl << "Sorry to say you are using software No Hardware NFC techology Detected";
					cout << "If you want to add money to Account  =";
					cin >> nfcamount;
					cout << "Added Sussfully! Press 0. Mainmenu" << endl;
				ad:int ma; cin >> ma; if (ma == 0) { menuchoice(); }
				   else { cout << "Incorrect Choice Enter Again 0. Main Menu" << endl; goto ad; }

				}
			}
			else
			{
				cout << "Not Try to become Smart Error! Detected " << endl;
				goto e1;
			}
		case 0:
			break;

		default: cout << "Enter Choice does'not Exist" << endl;
			cout << "Enter Choice again";
			menuchoice();
			break;
		}


	}
};

class useraccount2
{
private: int accountnumber2;
public:
	void menuchoice()
	{
		system("cls");
		design w;
		w.designstyle();
		w.menu();
		int a;
		cin >> a;
		system("cls");
		switch (a)
		{
		case 1:
			design f;
			f.designstyle();
			f.balancecheckdesign();
			cout << user2;
		s:
			cout << endl << "0. main menu" << endl;
			int d; cin >> d;
			if (d == 0) {
				menuchoice();
			}
			else
			{
				cout << "Sorry Donot try Become Smart" << endl;
				goto s;
			}
			break;
		case 2:
		a:
			f.designstyle();
			f.transferdesignaccount();
			cin >> accountnumber2;
			if (accountnumber2 == 12345 || accountnumber2 == 1234567)
			{
				if (accountnumber2 == 12345)
				{
					f.transferdesignamount();
					int tranamount2;
					cin >> tranamount2;
					if (tranamount2 <= user2)
					{

						cout << "Transaction Completed Sussfully" << endl;
						cout << endl << "0. Mainchoice" << endl;
						int q; cin >> q;
						if (q == 0)
						{
							menuchoice();
						}

					}
					else
					{
						cout << "Balance < Transfer Balance Sorry Transation Error!" << endl;
						cout << "Enter Amount Again =";
						goto d;
					}
				}
				if (accountnumber2 == 1234567)
				{
					f.transferdesignamount();
					int tranamount2;
				d:
					cin >> tranamount2;
					if (tranamount2 <= user2)
					{
						cout << "Transaction Completed Sussfully" << endl;
					w1:cout << endl << "0. Mainchoice" << endl;
						int q; cin >> q;
						if (q == 0)
						{
							menuchoice();
						}
						else
						{
							cout << "Sorry Command Not Detected Enter Again =" << endl;
							goto w1;
						}
					}

				}
				else
				{
					cout << "Balance < Transfer Balance Sorry Transation Error!" << endl;
					cout << "Enter Amount Again =";
					goto d;
				}
			}
			else
			{
				cout << "Enter Account Number does'not exist" << endl;
				goto a;
			}
			break;
		case 3:
			f.designstyle();
			f.billpaymentdesign();
			int bill, billamount, n;
			cin >> bill;
		b2:
			f.billpaymentamountdesign();

			cin >> billamount;
			if (billamount <= user2)
			{
				cout << "Payeed Sussfully" << endl;
			sqw:
				cout << "0. Mainmenu" << endl; cin >> n;
				if (n == 0)
				{
					menuchoice();
				}
				else
				{
					cout << "Enter Choice Number does'not exist" << endl;
					goto sqw;
				}
			}
			else
			{
				cout << "Sorry ! Low Balance" << endl;
				goto b2;
			}
			break;
		case 4:
			int p, q;
		e1:
			cout << "1. NFC Technology" << endl;
			cout << "0. Mainmenu" << endl;
			cin >> p;
			if (p == 0 || p == 1)
			{
				if (p == 0)
				{
					menuchoice();
				}
				if (p == 1)
				{
					system("cls");
					int nfcamount;
					design y;
					y.designstyle();
					cout << endl << "Sorry to say you are using software No Hardware NFC techology Detected";
					cout << "If you want to add money to Account  =";
					cin >> nfcamount;
					cout << "Added Sussfully! Press 0. Mainmenu" << endl;
				ad:int ma; cin >> ma; if (ma == 0) { menuchoice(); }
				   else { cout << "Incorrect Choice Enter Again 0. Main Menu" << endl; goto ad; }
				}
			}
			else
			{
				cout << "Not Try to become Smart Error! Detected " << endl;
				goto e1;
			}
		case 0:
			break;

		default: cout << "Enter Choice does'not Exist" << endl;
			cout << "Enter Choice again";
			menuchoice();
			break;
		}


	}
};


class useraccount3
{
private: int accountnumber3;
public:
	void menuchoice()
	{
		system("cls");
		design w;
		w.designstyle();
		w.menu();
		int a;
		cin >> a;
		system("cls");
		switch (a)
		{
		case 1:
			design f;
			f.designstyle();
			f.balancecheckdesign();
			cout << user3;
		s:
			cout << endl << "0. main menu" << endl;
			int d; cin >> d;
			if (d == 0) {
				menuchoice();
			}
			else
			{
				cout << "Sorry Donot try Become Smart" << endl;
				goto s;
			}
			break;
		case 2:
		a:
			f.designstyle();
			f.transferdesignaccount();
			cin >> accountnumber3;
			if (accountnumber3 == 12345 || accountnumber3 == 1234567)
			{
				if (accountnumber3 == 12345)
				{
					f.transferdesignamount();
					int tranamount3;
					cin >> tranamount3;
					if (tranamount3 <= user2)
					{

						cout << "Transaction Completed Sussfully" << endl;
						cout << endl << "0. Mainchoice" << endl;
						int q; cin >> q;
						if (q == 0)
						{
							menuchoice();
						}

					}
					else
					{
						cout << "Balance < Transfer Balance Sorry Transation Error!" << endl;
						cout << "Enter Amount Again =";
						goto d;
					}
				}
				if (accountnumber3 == 1234567)
				{
					f.transferdesignamount();
					int tranamount3;
				d:
					cin >> tranamount3;
					if (tranamount3 <= user3)
					{
						cout << "Transaction Completed Sussfully" << endl;
					w1:cout << endl << "0. Mainchoice" << endl;
						int q; cin >> q;
						if (q == 0)
						{
							menuchoice();
						}
						else
						{
							cout << "Sorry Command Not Detected Enter Again =" << endl;
							goto w1;
						}
					}

				}
				else
				{
					cout << "Balance < Transfer Balance Sorry Transation Error!" << endl;
					cout << "Enter Amount Again =";
					goto d;
				}
			}
			else
			{
				cout << "Enter Account Number does'not exist" << endl;
				goto a;
			}
			break;
		case 3:
			f.designstyle();
			f.billpaymentdesign();
			int bill, billamount, n;
			cin >> bill;
		b2:
			f.billpaymentamountdesign();

			cin >> billamount;
			if (billamount <= user3)
			{
				cout << "Payeed Sussfully" << endl;
			sqw:
				cout << "0. Mainmenu" << endl; cin >> n;
				if (n == 0)
				{
					menuchoice();
				}
				else
				{
					cout << "Enter Choice Number does'not exist" << endl;
					goto sqw;
				}
			}
			else
			{
				cout << "Sorry ! Low Balance" << endl;
				goto b2;
			}
			break;
		case 4:
			int p, q;
		e1:
			cout << "1. NFC Technology" << endl;
			cout << "0. Mainmenu" << endl;
			cin >> p;
			if (p == 0 || p == 1)
			{
				if (p == 0)
				{
					menuchoice();
				}
				if (p == 1)
				{
					system("cls");
					int nfcamount;
					design y;
					y.designstyle();
					cout << endl << "Sorry to say you are using software No Hardware NFC techology Detected";
					cout << "If you want to add money to Account  =";
					cin >> nfcamount;
					cout << "Added Sussfully! Press 0. Mainmenu" << endl;
				ad:int ma; cin >> ma; if (ma == 0) { menuchoice(); }
				   else { cout << "Incorrect Choice Enter Again 0. Main Menu" << endl; goto ad; }
				}
			}
			else
			{
				cout << "Not Try to become Smart Error! Detected " << endl;
				goto e1;
			}
		case 0:
			break;

		default: cout << "Enter Choice does'not Exist" << endl;
			cout << "Enter Choice again";
			menuchoice();
			break;
		}


	}
};









class menuchoiceaction
{
public:

	void action()
	{
		if (z == 1)
		{
			useraccount1 f;
			f.menuchoice();
		}
		if (z == 2)
		{
			useraccount2 f;
			f.menuchoice();
		}
		if (z == 3)
		{
			useraccount3 h;
			h.menuchoice();
		}
	}
};
class login
{

private:
	int accountnumber, pin;
public:
	void alphabaticcheck()
	{
		if (accountnumber == ' ' || accountnumber == '.' || accountnumber == 'A' || accountnumber == 'B' || accountnumber == 'C' || accountnumber == 'D' || accountnumber == 'E' || accountnumber == 'F' || accountnumber == 'G' || accountnumber == 'H' || accountnumber == 'I' || accountnumber == 'J' || accountnumber == 'K' || accountnumber == 'L' || accountnumber == 'M' || accountnumber == 'N' || accountnumber == 'O' || accountnumber == 'P' || accountnumber == 'Q' || accountnumber == 'R' || accountnumber == 'S' || accountnumber == 'T' || accountnumber == 'U' || accountnumber == 'V' || accountnumber == 'W' || accountnumber == 'X' || accountnumber == 'Y' || accountnumber == 'Z' || accountnumber == 'a' || accountnumber == 'b' || accountnumber == 'c' || accountnumber == 'd' || accountnumber == 'e' || accountnumber == 'f' || accountnumber == 'g' || accountnumber == 'h' || accountnumber == 'i' || accountnumber == 'j' || accountnumber == 'k' || accountnumber == 'l' || accountnumber == 'm' || accountnumber == 'n' || accountnumber == 'o' || accountnumber == 'p' || accountnumber == 'q' || accountnumber == 'r' || accountnumber == 's' || accountnumber == 't' || accountnumber == 'u' || accountnumber == 'v' || accountnumber == 'w' || accountnumber == 'x' || accountnumber == 'y' || accountnumber == 'z' || accountnumber == 'z' || accountnumber == 'z' || accountnumber == 'z' || accountnumber == 'z' || accountnumber == 'z' || accountnumber == '`' || accountnumber == '~' || accountnumber == '|' || accountnumber == '[' || accountnumber == ']' || accountnumber == '{' || accountnumber == '}' || accountnumber == '=' || accountnumber == '+' || accountnumber == '-' || accountnumber == '_' || accountnumber == ')' || accountnumber == '(' || accountnumber == '*' || accountnumber == '&' || accountnumber == '^' || accountnumber == '%' || accountnumber == '$' || accountnumber == '#' || accountnumber == '@' || accountnumber == '!')
		{
			cout << "FAT ERROR! Try again.";
		}
	}
	void enteraccountnumber()
	{
		cin >> accountnumber;
		alphabaticcheck();
		if (accountnumber == 12345 || accountnumber == 1234567 || accountnumber == 123456)
		{
			if (accountnumber == 12345)
			{
				z = 1;
				enterpin();
			}
			if (accountnumber == 123456)
			{
				z = 2;
				enterpin();
			}
			if (accountnumber == 1234567)
			{
				z = 3;
				enterpin();
			}
		}
		else
		{
			cout << "Enter Account Number do'nt Exist " << endl;
			design s;
			s.designstyle();
			s.logindesignaccount();
			enteraccountnumber();
		}
	}
	void enterpin()
	{
		design v;
		v.logindesignpassword();
		cin >> pin;
		if (pin == 1234 || pin == 2345 || pin == 3456)
		{
			if (pin == 1234)
			{
				if (accountnumber == 12345)
				{

					cout << "Sussfully login" << endl;

				}
				else
				{
					cout << "Sorry Authication Error ! System is Enogh Smart" << endl;
					enterpin();
				}
			}
			if (pin == 2345)
			{
				if (accountnumber == 123456)
				{

					cout << "Sussfully login" << endl;

				}
				else
				{
					cout << "Sorry Authication Error ! System is Enogh Smart" << endl;
					enterpin();
				}

			}

			if (pin == 3456)
			{
				if (accountnumber == 1234567)
				{

					cout << "Sussfully login" << endl;

				}
				else
				{
					cout << "Sorry Authication Error ! System is Enogh Smart" << endl;
					enterpin();
				}
			}
		}
		else
		{
			cout << "Enter Pin Incorrect Enter Again " << endl;
			enterpin();
		}
	}
};




void main()
{
	design d;
	d.designstyle();
	login l;
	d.logindesignaccount();
	l.enteraccountnumber();
	menuchoiceaction m;
	m.action();
	cout << "Logout Sussfully" << endl;
	main();


	system("pause");
}



























