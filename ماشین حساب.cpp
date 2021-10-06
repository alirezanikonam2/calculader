#include<iostream>
#define _USE_MATH_DEFINES


#include<math.h>

using namespace std;

int main(){

	int w = 0,  b = 0,  f = 1, j = 1;
	float c=1.2,a=0,d=0;

	while (j == 1){
		cout << "hellow wellcome to this program" << endl << "please enter code" << endl << "1-sum" << " " << "2-negtive" << " " <<
			" " << "3-multiplication" << " " << "4-division " << " " << "5-radical " << " " << "6-cos " << " " << "7-cot " << " " << "8-tan "
			<< " " << "9-factorial " <<" "<<"10- switch darage radian"<< "0-exist" << endl;

		cin >> w;
		switch (w){

		case 1:
			cout << "please enter ferst number=";
			cin >> a;
			cout << "please enter second number=";
			cin >> b;
			d = a + b;
			cout << d<<endl;
			system("pause");
			system("cls");
			break;


		case 2:
			cout << "please enter ferst number=";
			cin >> a;
			cout << "please enter second number=";
			cin >> b;


			d = a - b;
			cout << d << endl;
			system("pause");
			system("cls");

			break;

		case 3:
			cout << "please enter ferst number=";
			cin >> a;
			cout << "please enter second number=";
			cin >> b;
			d = a * b;
			cout << d << endl;
			system("pause");
			system("cls");

			break;


		case 4:
			cout << "please enter ferst number=";
			cin >> a;
			cout << "please enter second number=";
			cin >> b;
			d = a / b;
			cout << d << endl;
			system("pause");
			system("cls");

			break;

		case 5:
			cout << "please enter  number=";
			cin >> a;
			d = sqrt(a);
			cout << d << endl;
			system("pause");
			system("cls");

			break;

		case 6:
			cout << "please enter darage=";
			cin >> a;
			c = a*M_PI / 180;
			d = cos(c);
			cout << d << endl;
			system("pause");
			system("cls");

			break;

		case 7:
			cout << "please enter drage=";
			cin >> a;
			c = (a*M_PI) / 180;
			d = 1 / tan(c);
			cout << d << endl;
			system("pause");
			system("cls");

			break;


		case 8:
			cout << "please enter darage=";
			cin >> a;
			c = (a*M_PI) / 180;
			d = tan(c);
			cout << d << endl;
			system("pause");
			system("cls");

			break;

		case 9:
			cout << "please enter number for factoriel=";
			cin >> a;
			for (int i = 1; i <= a; i++){
				f = f*i;
			}
			cout << f << endl;
			system("pause");
			system("cls");
			break;

		case 10:
			cout << "please enter darage=";
			cin >> a;
			c = (a*M_PI) / 180;
			
			cout << c << endl;
			system("pause");
			system("cls");

			break;

		case 0:
			j = 0;
			break;
		}
	}
	system("pause");
	return 0;
}