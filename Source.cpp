#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <fstream> 

using namespace std;

void ave(string* a, string* b, string* c, int num, int numm, int nummm, int val, int vall, int valll) {
	if (num == val) {
		if (numm != vall) {
			if (nummm != valll) {
				*a = "1 valor es correcto";
			}
		}
	}
	if (num != val) {
		if (numm == vall) {
			if (nummm != valll) {
				*a = "1 valor es correcto";
			}
		}
	}
	if (num != val) {
		if (numm != vall) {
			if (nummm == valll) {
				*a = "1 valor es correcto";
			}
		}
	}
	if (num == val) {
		if (numm == vall) {
			if (nummm != valll) {
				*a = "2 valores son correctos";
			}
		}
	}
	if (num == val) {
		if (numm != vall) {
			if (nummm == valll) {
				*a = "2 valores son correctos";
			}
		}
	}
	if (num != val) {
		if (numm == vall) {
			if (nummm == valll) {
				*a = "2 valores son correctos";
			}
		}
	}
	if (num != val) {
		if (numm != vall) {
			if (nummm != valll) {
				*a = "ningun valor es correcto";
			}
		}
	}
	if (vall == numm) {
		if (valll == nummm) {
			if (val != num) {
				*a = "2 valores son correctos";
			}
		}
	}
}

void check(string* b, int num, int numm, int nummm, int val, int vall, int valll) {
	if (vall == num) {
		*b = "Un valor esta en posicion erronea";
		if (val == num) {
			*b = " ";
		}
	}
	if (valll == num) {
		*b = "Un valor esta en posicion erronea";
		if (val == num) {
			*b = " ";
		}
	}
	if (val == numm) {
		*b = "Un valor esta en posicion erronea";
		if (vall == numm) {
			*b = " ";
		}
	}
	if (valll == numm) {
		*b = "Un valor esta en posicion erronea";
		if (vall == numm) {
			*b = " ";
		}
	}
	if (val == nummm) {
		*b = "Un valor esta en posicion erronea";
		if (valll == nummm) {
			*b = " ";
		}
	}
	if (vall == nummm) {
		*b = "Un valor esta en posicion erronea";
		if (valll == nummm) {
			*b = " ";
		}
	}
	if (vall == num) {
		if (val = nummm)
		{
			if (valll == numm) {
				*b = "3 valores en orden erroneo";
			}
		}
	}
	if (vall == nummm) {
		if (val = numm)
		{
			if (valll == num) {
				*b = "3 valores en orden erroneo";
			}
		}
	}
}

class padre {
public:

	int aver(int num, int numm, int nummm, string H) {
		int val1, val2, val3;
		int c = 1;
		int x1 = num, y = numm, z1 = nummm;

		while (c == 1) {
			system("CLS");
			int x, z;
			string A = " ", B = "", C = "";

			cout << "*-------------------------------------------------*" << endl;
			cout << "|                 Road to Aprobar                 |" << endl;
			cout << "|                                                 |" << endl;
			cout << "|   1.- Reglas                       2.- Iniciar  |" << endl;
			cout << "|                                                 |" << endl;
			cout << "*-------------------------------------------------*" << endl;
			cin >> x;

			switch (x) {
			case 1:
				cout << "*-------------------------------------------------*" << endl;
				cout << "|                     Reglas                      |" << endl;
				cout << "|                                                 |" << endl;
				cout << "|1.- Tandras 5 intentos                           |" << endl;
				cout << "|2.- No hay numeros negaativos ni fracciones      |" << endl;
				cout << "|3.- No uses ChatGPT                              |" << endl;
				cout << "|                                                 |" << endl;
				cout << "*-------------------------------------------------*" << endl;
				system("pause");
				break;

			case 2:
				for (int i = 0; i < 5; i++) {
					A = " ";
					B = " ";
					system("CLS");
					cout << "Intento" << i + 1 << endl;
					cout << "Ingrese sus 3 dijitos del 0 al 9" << endl;
					cin >> val1 >> val2 >> val3;

					if (num == val1) {
						if (numm == val2) {
							if (nummm == val3) {
								cout << "Has ganado felicidades " << H << endl;
								cout << "TENGA SU NUEVA Y FLAMANTE NINTENDO SWITCH EDICION TEARS OF THE KINGDOM" << endl;
								cout << "    #/,,,, ################################################## *****#/" << endl;
								cout << " #******(/%%@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@%/((//////*" << endl;
								cout << "*****(****%%                        *                        %////%%////" << endl;
								cout << "(**&%%%&**%%                       ***                       %/%/&//%(%/" << endl;
								cout << "(**/(#(/**%%                      *****                      %(///%%////" << endl;
								cout << "#****//***%%                     *******                     %/////////(" << endl;
								cout << "#**#*(/((*%%                    **     **                    %(//%##%//(" << endl;
								cout << "#*//*#(//*%%                   ****   ****                   %(/(&&&&(/(" << endl;
								cout << "#****/****%%                  ****** ******                  &(//((((//(" << endl;
								cout << "#/****%%**%&                 ***************                 &(/(%(////(" << endl;
								cout << "(/********&&                                                 &(////////(" << endl;
								cout << " #/*/**///&&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&(///////(" << endl;
								cout << "    ##((((&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&#(####." << endl;

								system("pause");
								i = 5;
							}

						}

					}
					ave(&A, &B, &C, x1, y, z1, val1, val2, val3);
					check(&B, x1, y, z1, val1, val2, val3);
					cout << A << endl;
					cout << B << endl;
					cout << C << endl;
					system("pause");

				}
				break;

			}

		}
		return 0;
	}
	padre(int x, int y, int z) {};
};

int main() {
	system("COLOR 09");
	int a = 1, Q, total = 100;
	string H;
	int num1, num2, num3;

	
cout << "	                                                                                        &@" << endl;
cout << "               *(,                            ./(/.*,                             @@%         @(@/             .@@                                ,(*,*,." << endl;
cout << "	     ,*(((                         /(((.      /                          @(  @#      #@   &@          .@( @%                            *.      ((( " << endl;
cout << "	   .   (((                        ((((         /                        @/    .@/   @#     .@,      ,@/    @%                          ((      (((( " << endl;
cout << "	      .((/                       (((((         ,                       @/  (@.  ,@%@         @@   *@,       @#                          ,( .(.  ((( " << endl;
cout << "	      .((*                       .((((       ..                       @*  #@ #@  @&@*         ,@(@,          @*                                .((( " << endl;
cout << "	       ((*                         ./((/.,*.                         @,  %@    %@.  /@.       #@@&            @*                               ,((( " << endl;
cout << "	       ((*                                                          @.  &@    @& &@   (@.   %@   *@            @,                              (((( " << endl;
cout << "	                                                                  @@   @    @       @    @         @            @                                                      (((    (( " << endl;
cout << "	                                                                 @@   @   &@          @@   @        @@           @                                                     (((    (( " << endl;
cout << "	                                                                @@   @   @           @ .@    @        @           @                                                    (((    (( " << endl;
cout << "	                                                               @@   @   @          @     &@   ,@       @@          @                                                   ((((((((( " << endl;
cout << "	                           ((*()                              @@   @  @@        *@         @@   &@       @          @                                                         (( " << endl;
cout << "	                         ((    ()                            @@   @  @        @@             @@   @@      @(         @                                                        (( " << endl;
cout << "	                        (((      (                          @@   @ @@       @@                 @@   @@     /@         @                                                       (( " << endl;
cout << "                                 /((   ()                          @#   @ @       @@                     @@   @@     @         @                                                      (( " <<endl;
cout << "	                         (((((())                         @*  *@@@      @@                         @@   @@    @@       /@" << endl;
cout << "	                       ,((       )                       @   %@@      @@                             @(   @@    @       @@                /( ((" << endl;
cout << "	                       (((        )                     @   @@@     @@                                 @    @#   @@      @@             *     ((" << endl;
cout << "	                       (((       ()          ***********   @@******@    ******    **************     ,***********  @   ************         ((( " << endl;
cout << "	    (                    ((((((()         ############# * @####### * ######## * ################ * ############## * #############         (((" << endl;
cout << "	   (                                    ###############  @@#######*  ########* ################ .###############  ###############        ((    " << endl;
cout << "	  ((                                   ########*    @   @@ #######*  ########* #######********  #########*******  ########(******,    ((((())))" << endl;
cout << "	(((                                    ########*   ####%/*@#######*  ########* ##############*  ################**################**  " << endl;
cout << "	(((                                    ########* ########* #######*  ########* #############     %###############*@###############**   " << endl;
cout << "	((((((())                              #########///######* ########***#######* #######(///////**  *///////#######*  #//////(######**   " << endl;
cout << "	((      ((()                            #################* #################*  ################*################* ################.    " << endl;
cout << "	((       ))(                             ###############   ,***************   ******#####****** ###************** ############## @     " << endl;
cout << "	  ((.(((( )                                       @@@ @      #################* #######*   *######* ################*         @@   @@ @" << endl;
cout << "                                                         @@  @       #################  #######*   *######* ################            @#   @@@" << endl;                                                      
cout << "                                                       @@@  @             #######*      #######*****######* #######(*******               @    @@" << endl;
cout << "                                                     @@@   @              #######*      ##################* ##############*                 @   @@." << endl;
cout << "                                                   @@@@   @               #######*      ##################* ##############                    @  @@@" << endl;
cout << "                                                 @@ @@   @                #######*      #######*   *######* #######(*********                   @ @@ @" << endl;
cout << "                                               @@ @@@   @                 #######*      #######*   *######* ################*                     @@@@ @" << endl;
cout << "                                ....      ...#(  @@@...#.      ....     ..#######*    ..#######*...*######* ################*....    ..........    &@#@ .@   ........" << endl;
cout << "                             #######/** #######*/@#######*   #######* ########**   ########* ###############**   ################* ###############**  @@@#############*" << endl;
cout << "                             ##########**######*,@#######*  ########* #########(* #########* ################*   ################. ################*   ###############*" << endl;
cout << "                             ##################*(@#######*  ########* #####################* #######/*(######*   #######*******    #######* #######*  #######%******" << endl;
cout << "                             ##################*( #######*  ########* #####################* ################*** #############**   ###############*** ################**" << endl;
cout << "                             ########*#########*, #######*  ########* #######*/####,#######* ##################* #############     ##################* ################*" << endl;
cout << "                             ########*#########*, #######****(######* #######*/##  ########* #######/***,######* #######********** #######*##########*   *******(######*" << endl;
cout << "                             ########*  #######*,@#################*  #######*,    ########* ##################* ################* #######*   #######*################/@&" << endl;
cout << "                             #######% @@#######.@ .##############/    #######      #######%  #%##############    ################  #######    ####### ###############    @" << endl;
cout << "                           @@        @    @.  #@                                                                                                              @     @ @    @" << endl;
cout << "                         @@        /@    @   &@                                                                                                               /@     @@ @    @" << endl;
cout << "                      @@         @/    @   @@          &                         @    @                         @    @                         @              @@      @  @    @ " << endl;
cout << "                    @@          @     @   @@           @         #######         @    @        ########         @    @         #######         @               @@      @@ &@   .@ " << endl;
cout << "                  @@          @@     @   @@            @       ###########       @    @      ###########        @    @       ###########       @                @@       @  @@   %@  " << endl;
cout << "                @@           @      @   @@             @      ####     ####      @    @     ####     ####       @    @      ####     ####      @                 @@       @,  @@   @@ " << endl;
cout << "              @@           @@      @   @@              @              ####       @    @             ####        @    @              ####       @                  @,       %@   @@   @@ " << endl;
cout << "            @%            @       @   @@               @          #######        @    @         #######         @    @          #######        @                   @         @    @@   @@  " << endl;
cout << "          @.            @@       @   @@                @          ###            @    @          ###            @    @          ###            @                    @         @@    @@   @@ " << endl;
cout << "        @              @        @   @(                 @                         @    @                         @    @                         @                     @          @     @%   @@" << endl;
cout << "                    *@        @   @,                   @          ###            @    @         ####            @    @          ###            @                       @   %@@@@@@@@@          @" << endl;
cout << "                    @      @@@@@@@@                                                                                   ,,,,,,,,,,,,,,,,,,,,,,,,,,.        %@@@@@@@@@      @           @@ %@@@@@@@@@v" << endl;
cout << "                  @@         @   @        @@@@@@@(                                                                                    %@@@@@@@@&                     %@@@@@@@@@        @ " << endl;
cout << "                 @          @   @                        @@@@@@@,                                                  &@@@@@@@@&                     &@@@@@@@@&               @            @." << endl;
cout << "               @@          @   @                                       ,@@@@@@@                 @@@@@@@@@%                     &@@@@@@@@%                                  ,@            &@" << endl;
cout << "              @           @   @                                              @@@@@@@@@%@@@@@@@              @@@@@@@@@%                                                      &@             @" << endl;
cout << "                        /@   @                            @@@@@@@@@%                     @@@@@@@@@%  &@@@@@@@                                                                @@" << endl;
cout << "                       %@   @          @@@@@@@@@#                     @@@@@@@@@#                                    @@@@@@@#                                                  @@" << endl;
cout << "                      @@   @@#                     @@@@@@@@@#                                                                      @@@@@@@,                                    @@" << endl;
cout << "                     @@         @@@@@@@@@#                                                 (((((((((                                    .@@@@@@@                       @(" << endl;
cout << "                    @@(                                                                         *((                                                    /@@@@@@@         @" << endl;
cout << "                                                                                              ((((                                                                    &@@@" << endl;
cout << "                              ((((((((                                                            ((                                                  (((((((((( " << endl;
cout << "                              ((                                                                   (((                                                       ((  " << endl;
cout << "                              (((   ((                                                            (((                                                      ,((   " << endl;
cout << "                                     ((                                                     (   ((                                                        (((    " << endl;
cout << "                                     ((                                                                                                                  (((     " << endl;
cout << "                                     (                                                                                                                  (((      " << endl;
cout << "                              (.   (                                                                                                                    ((       " << endl;
cout << "                                                                                                                                                       (((        " << endl;
                                                                                                                                                                
	cout << "Seleccionar nivel" << endl;
	cin >> Q;
	for (int i = 0; i <= Q; i++) {
		num1 = rand() % 10;
		num2 = rand() % 10;
		num3 = rand() % 10;

	}
	cout << "su nombre de usuario" << endl;
	cin >> H;
	ofstream archivo;
	archivo.open("usuario.txt");

	if (!archivo) {
		cout << "Error al intentar abrir el archivo" << endl;

	}
	else {
		for (int i = 1; i <= 1; i++) {
			archivo << H;
		}
		archivo.close();
	}

	while (a == 1) {
		int b;

		cout << "*-------------------------------------------------*" << endl;
		cout << "|                 Road to Aprobar                 |" << endl;
		cout << "|                                                 |" << endl;
		cout << "|   1.- Iniciar                      2.- Salir    |" << endl;
		cout << "|                                                 |" << endl;
		cout << "*-------------------------------------------------*" << endl;
		cin >> b;

		padre siu(num1, num2, num3);

		switch (b) {
		case 1:

			system("CLS");
			cout << "Respuesta" << endl;
			cout << num1 << endl;
			cout << num2 << endl;
			cout << num3 << endl;
			system("pause");
			cout << siu.aver(num1, num2, num3, H);
			break;

		case 2:
			a++;
			break;



		}
	}
}