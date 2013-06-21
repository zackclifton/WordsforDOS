#include <iostream>
//#include <windows.h>
#include <time.h>
#define VOWEL 'a'||'e'||'i'||'o'||'u'
#define CONSTA 'b'||'c'||'d'||'f'||'g'||'h'||'j'||'k'||'l'||'m'||'n'||'p'||'q'||'r'||'s'||'t'||'v'||'w'||'x'||'y'||'z'
using namespace std;

int forloop=0;
int number;
char letter;
char buffer[2000];

bool Odouble;
bool random=false;

void Blank();
void A();
void B();
void C();
void D();
void E();
void F();
void G();
void H();
void I();
void J();
void K();
void L();
void M();
void N();
void O();
void P();
void Q();
void R();
void S();
void T();
void U();
void V();
void W();
void X();
void Y();
void Z();

int main ()
{
	srand(time(NULL));
	while(1)
	{
		cout << "Insert a number for the number of letters in the word to generate or type 0 for something random: \n\n";
		cin >> number;
		if(number==0)
		{
			cout << "How many letters? 0 for random: \n";
			cin >> number;
				if(number==0)
				{
					number=rand()%100;
				}
			random=true;
		}
		for(;forloop<number;forloop++)
		{
			switch(letter)
			{
			case 0:
				Blank();
				break;
			case 'a':
				A();
				break;
			case 'b':
				B();
				break;
			case 'c':
				C();
				break;
			case 'd':
				D();
				break;
			case 'e':
				E();
				break;
			case 'f':
				F();
				break;
			case 'g':
				G();
				break;
			case 'h':
				H();
				break;
			case 'i':
				I();
				break;
			case 'j':
				J();
				break;
			case 'k':
				K();
				break;
			case 'l':
				L();
				break;
			case 'm':
				M();
				break;
			case 'n':
				N();
				break;
			case 'o':
				O();
				break;
			case 'p':
				P();
				break;
			case 'q':
				Q();
				break;
			case 'r':
				R();
				break;
			case 's':
				S();
				break;
			case 't':
				T();
				break;
			case 'u':
				U();
				break;
			case 'v':
				V();
				break;
			case 'w':
				W();
				break;
			case 'x':
				X();
				break;
			case 'y':
				Y();
				break;
			case 'z':
				Z();
				break;
			}
			buffer[forloop]=letter;
			cout << letter;
			if(random)
			{
				switch(rand()%40)
				{
				case 1:
					cout << " ";
					Blank();
					break;
				case 2:
					cout << " ";
					Blank();
					break;
				case 3:
					cout << " ";
					Blank();
					break;
				case 4:
					cout << " ";
					Blank();
					break;
				case 5:
					cout << " ";
					Blank();
					break;
				case 6:
					cout << ". ";
					Blank();
					break;
				case 7:
					cout << ", ";
					Blank();
					break;
				case 8:
					cout << "! ";
					Blank();
					break;
				case 9:
					cout << "? ";
					Blank();
					break;
				default:
					break;
				}
			}
		}
		cout << "\n\n";
		letter=0;
		forloop=0;
		random=false;
	}
}

void Blank()
{
	switch(rand()%26)
	{
	case 0:
		letter='a';
		break;
	case 1:
		letter='b';
		break;
	case 2:
		letter='c';
		break;
	case 3:
		letter='d';
		break;
	case 4:
		letter='e';
		break;
	case 5:
		letter='f';
		break;
	case 6:
		letter='g';
		break;
	case 7:
		letter='h';
		break;
	case 8:
		letter='i';
		break;
	case 9:
		letter='j';
		break;
	case 10:
		letter='k';
		break;
	case 11:
		letter='l';
		break;
	case 12:
		letter='m';
		break;
	case 13:
		letter='n';
		break;
	case 14:
		letter='o';
		break;
	case 15:
		letter='p';
		break;
	case 16:
		letter='q';
		break;
	case 17:
		letter='r';
		break;
	case 18:
		letter='s';
		break;
	case 19:
		letter='t';
		break;
	case 20:
		letter='u';
		break;
	case 21:
		letter='v';
		break;
	case 22:
		letter='w';
		break;
	case 23:
		letter='x';
		break;
	case 24:
		letter='y';
		break;
	case 25:
		letter='z';
		break;
	}
}

void A()
{
	switch(rand()%15)
	{
	case 0:
		letter='b';
		break;
	case 1:
		letter='c';
		break;
	case 2:
		letter='d';
		break;
	case 3:
		letter='e';
		break;
	case 4:
		letter='f';
		break;
	case 5:
		letter='g';
		break;
	case 6:
		letter='h';
		break;
	case 7:
		letter='i';
		break;
	case 8:
		letter='l';
		break;
	case 9:
		letter='m';
		break;
	case 10:
		letter='n';
		break;
	case 11:
		letter='r';
		break;
	case 12:
		letter='s';
		break;
	case 13:
		letter='t';
		break;
	case 14:
		letter='v';
		break;
	}
}

void B()
{
	switch(rand()%5)
	{
	case 0:
		letter='a';
		break;
	case 1:
		letter='e';
		break;
	case 2:
		letter='i';
		break;
	case 3:
		letter='l';
		break;
	case 4:
		letter='u';
		break;
	default:
		cout << "\nError at main.cpp line 336: rand() decided to default\n";
		break;
	}
}

void C()
{
	switch(rand()%5)
	{
	case 0:
		letter='a';
		break;
	case 1:
		letter='e';
		break;
	case 2:
		letter='h';
		break;
	case 3:
		letter='k';
		break;
	case 4:
		letter='l';
		break;
	}
}

void D()
{
	switch(rand()%6)
	{
	case 0:
		letter='a';
		break;
	case 1:
		letter='e';
		break;
	case 2:
		letter='i';
		break;
	case 3:
		letter='o';
		break;
	case 4:
		letter='v';
		break;
	case 5:
		letter='w';
		break;
	}
}

void E()
{
	switch(rand()%9)
	{
	case 0:
		letter='c';
		break;
	case 1:
		letter='d';
		break;
	case 2:
		letter='l';
		break;
	case 3:
		letter='n';
		break;
	case 4:
		letter='o';
		break;
	case 5:
		letter='r';
		break;
	case 6:
		letter='t';
		break;
	case 7:
		letter='w';
		break;
	case 8:
		letter='y';
		break;
	}
}

void F()
{
	if(buffer[forloop-2]!='f') // if F was not used as a last letter
	{
		switch(rand()%7)
		{
		case 0:
			letter='a';
			break;
		case 1:
			letter='e';
			break;
		case 2:
			letter='f';
			break;
		case 3:
			letter='i';
			break;
		case 4:
			letter='o';
			break;
		case 5:
			letter='r';
			break;
		case 6:
			letter='u';
			break;
		}
	}
	else // if F was used as a last letter
	{
		switch(rand()%6)
		{
		case 0:
			letter='a';
			break;
		case 1:
			letter='e';
			break;
		case 2:
			letter='i';
			break;
		case 3:
			letter='o';
			break;
		case 4:
			letter='r';
			break;
		case 5:
			letter='u';
			break;
		}
	}
}

void G()
{
	switch(rand()%3)
	{
	case 0:
		letter='e';
		break;
	case 1:
		letter='i';
		break;
	case 2:
		letter='u';
		break;
	}
}

void H()
{
	switch(rand()%2)
	{
	case 0:
		letter='e';
		break;
	case 1:
		letter='o';
		break;
	}
}

void I()
{
	switch(rand()%13)
	{
	case 0:
		letter='c';
		break;
	case 1:
		letter='d';
		break;
	case 2:
		letter='e';
		break;
	case 3:
		letter='f';
		break;
	case 4:
		letter='g';
		break;
	case 5:
		letter='l';
		break;
	case 6:
		letter='n';
		break;
	case 7:
		letter='o';
		break;
	case 8:
		letter='p';
		break;
	case 9:
		letter='s';
		break;
	case 10:
		letter='t';
		break;
	case 11:
		letter='v';
		break;
	case 12:
		letter='x';
		break;
	}
}

void J()
{
	switch(rand()%4)
	{
	case 0:
		letter='a';
		break;
	case 1:
		letter='e';
		break;
	case 2:
		letter='o';
		break;
	case 3:
		letter='u';
		break;
	}
}

void K()
{
	switch(rand()%5)
	{
	case 0:
		letter='a';
		break;
	case 1:
		letter='e';
		break;
	case 2:
		letter='i';
		break;
	case 3:
		letter='l';
		break;
	case 4:
		letter='y';
		break;
	}
}

void L()
{
	if(forloop>1) // if the letter L was the first letter
	{
		if(buffer[forloop-2]==VOWEL) // if the letter before L was a vowel
		{
			switch(rand()%5)
			{
			case 0:
				letter='a';
				break;
			case 1:
				letter='e';
				break;
			case 2:
				letter='i';
				break;
			case 3:
				letter='o';
				break;
			case 4:
				letter='p';
				break;
			default:
				cout << "\nError at main.cpp L(): rand() decided to default\n";
				break;
			}
		}
		else
		{
			switch(rand()%4)
			{
			case 0:
				letter='a';
				break;
			case 1:
				letter='e';
				break;
			case 2:
				letter='i';
				break;
			case 3:
				letter='o';
				break;
			default:
				cout << "\nError at main.cpp L(): rand() decided to default\n";
				break;
			}
		}
	}
	else // if the letter before L was a vowel or if L was the first letter
	{
		switch(rand()%4)
		{
		case 0:
			letter='a';
			break;
		case 1:
			letter='e';
			break;
		case 2:
			letter='i';
			break;
		case 3:
			letter='o';
			break;
		default:
			cout << "\nError at main.cpp L(): rand() decided to default\n";
			break;
		}
	}
}

void M()
{
	if(forloop>1) // if M is not the first letter
	{
		if(buffer[forloop-2]==VOWEL) // if the previous letter was a vowel
		{
			switch(rand()%3)
			{
			case 0:
				letter='a';
				break;
			case 1:
				letter='o';
				break;
			case 2:
				letter='p';
				break;
			}
		}
		else // if M is not the first letter and the previous letter was not a vowel
		{
			switch(rand()%2)
			{
			case 0:
				letter='a';
				break;
			case 1:
				letter='o';
				break;
			default:
				cout << "\nError at main.cpp M(): rand() decided to default\n";
				break;
			}
		}
	}
	else // M is the first letter
	{
		switch(rand()%2)
		{
		case 0:
			letter='a';
			break;
		case 1:
			letter='o';
			break;
		default:
			cout << "\nError at main.cpp M(): rand() decided to default\n";
			break;
		}
	}
}

void N()
{
	if(forloop>1) //If N is not the first letter
	{
		if(buffer[forloop-2]==VOWEL) // if the previous letter was a vowel
		{
			switch(rand()%11)
			{
			case 0:
				letter='a';
				break;
			case 1:
				letter='c';
				break;
			case 2:
				letter='d';
				break;
			case 3:
				letter='e';
				break;
			case 4:
				letter='g';
				break;
			case 5:
				letter='i';
				break;
			case 6:
				letter='k';
				break;
			case 7:
				letter='l';
				break;
			case 8:
				letter='o';
				break;
			case 9:
				letter='s';
				break;
			case 10:
				letter='t';
				break;
			default:
				cout << "\nError at main.cpp void N(): rand() decided to default\n";
				break;
			}
		}
		else // if the previous letter was NOT a vowel and this is not the first letter
		{
			switch(rand()%10)
			{
			case 0:
				letter='a';
				break;
			case 1:
				letter='d';
				break;
			case 2:
				letter='e';
				break;
			case 3:
				letter='g';
				break;
			case 4:
				letter='i';
				break;
			case 5:
				letter='k';
				break;
			case 6:
				letter='l';
				break;
			case 7:
				letter='o';
				break;
			case 8:
				letter='s';
				break;
			case 9:
				letter='t';
				break;
			default:
				cout << "\nError at main.cpp void N(): rand() decided to default\n";
				break;
			}
		}
	}
	else //if N is the first letter
	{
		switch(rand()%4)
		{
		case 0:
			letter='a';
			break;
		case 1:
			letter='e';
			break;
		case 2:
			letter='i';
			break;
		case 3:
			letter='o';
			break;
		default:
			cout << "\nError at main.cpp line 615: rand() decided to default\n";
			break;
		}
	}
}

void O()
{
	if(buffer[forloop-2]!='o') // If O was not used as a last letter
	{
		switch(rand()%9)
		{
		case 0:
			letter='a';
			break;
		case 1:
			letter='f';
			break;
		case 2:
			letter='s';
			break;
		case 3:
			letter='m';
			break;
		case 4:
			letter='n';
			break;
		case 5:
			letter='o';
			break;
		case 6:
			letter='p';
			break;
		case 7:
			letter='r';
			break;
		case 8:
			letter='w';
			break;
		}
	}
	else // if O was used as a last letter
	{
		switch(rand()%8)
		{
		case 0:
			letter='a';
			break;
		case 1:
			letter='f';
			break;
		case 2:
			letter='s';
			break;
		case 3:
			letter='m';
			break;
		case 4:
			letter='n';
			break;
		case 5:
			letter='p';
			break;
		case 6:
			letter='r';
			break;
		case 7:
			letter='w';
			break;
		}
	}
}

void P()
{
	switch(rand()%6)
	{
	case 0:
		letter='e';
		break;
	case 1:
		letter='k';
		break;
	case 2:
		letter='l';
		break;
	case 3:
		letter='o';
		break;
	case 4:
		letter='s';
		break;
	case 5:
		letter='u';
		break;
	default:
		cout << "\nError at main.cpp void P(): rand() decided to default\n";
		break;
	}
}

void Q()
{
	switch(rand()%1)
	{
	case 0:
		letter='u';
		break;
	}
}

void R()
{
	if(buffer[forloop-2]!='r' && forloop>1)   //if R was not used as the last letter AND this isn't the first letter
	{
		if(buffer[forloop-2]=='a' || buffer[forloop-2]=='e'|| buffer[forloop-2]=='i'|| buffer[forloop-2]=='o'|| buffer[forloop-2]=='u') // if the previous letter was a vowel
		{
			switch(rand()%8)
			{
			case 0:
				letter='a';
				break;
			case 1:
				letter='c';
				break;
			case 2:
				letter='e';
				break;
			case 3:
				letter='g';
				break;
			case 4:
				letter='i';
				break;
			case 5:
				letter='m';
				break;
			case 6:
				letter='r';
				break;
			case 7:
				letter='t';
				break;
			}
		}
		else                    //if it was NOT a vowel
		{
			switch(rand()%4)
			{
			case 0:
				letter='a';
				break;
			case 1:
				letter='e';
				break;
			case 2:
				letter='i';
				break;
			case 3:
				letter='r';
				break;
			}
		}
	}
	else				//if R was used as a last letter OR R was the first letter
	{
	switch(rand()%4)
		{
		case 0:
			letter='a';
			break;
		case 1:
			letter='e';
			break;
		case 2:
			letter='g';
			break;
		case 3:
			letter='i';
			break;
		}
	}
}

void S()
{
	switch(rand()%5)
	{
	case 0:
		letter='a';
		break;
	case 1:
		letter='e';
		break;
	case 2:
		letter='i';
		break;
	case 3:
		letter='k';
		break;
	case 4:
		letter='w';
		break;
	}
}

void T()
{
	if(buffer[forloop-2]!='t')   //if T was not used as the last letter
	{
		switch(rand()%10)
		{
		case 0:
			letter='a';
			break;
		case 1:
			letter='c';
			break;
		case 2:
			letter='h';
			break;
		case 3:
			letter='i';
			break;
		case 4:
			letter='l';
			break;
		case 5:
			letter='o';
			break;
		case 6:
			letter='r';
			break;
		case 7:
			letter='t';
			break;
		case 8:
			letter='u';
			break;
		case 9:
			letter='y';
			break;
		}
	}
	else
	{
		switch(rand()%9)
		{
		case 0:
			letter='a';
			break;
		case 1:
			letter='c';
			break;
		case 2:
			letter='h';
			break;
		case 3:
			letter='i';
			break;
		case 4:
			letter='l';
			break;
		case 5:
			letter='o';
			break;
		case 6:
			letter='r';
			break;
		case 7:
			letter='u';
			break;
		case 8:
			letter='y';
			break;
		}
	}
}

void U()
{
	switch(rand()%5)
	{
	case 0:
		letter='l';
		break;
	case 1:
		letter='m';
		break;
	case 2:
		letter='n';
		break;
	case 3:
		letter='r';
		break;
	case 4:
		letter='s';
		break;
	}
}

void V()
{
	switch(rand()%4)
	{
	case 0:
		letter='a';
		break;
	case 1:
		letter='e';
		break;
	case 2:
		letter='i';
		break;
	case 3:
		letter='o';
		break;
	}
}

void W()
{
	switch(rand()%5)
	{
	case 0:
		letter='a';
		break;
	case 1:
		letter='h';
		break;
	case 2:
		letter='i';
		break;
	case 3:
		letter='n';
		break;
	case 4:
		letter='o';
		break;
	}
}

void X()
{
	switch(rand()%3)
	{
	case 0:
		letter='a';
		break;
	case 1:
		letter='e';
		break;
	case 2:
		letter='y';
		break;
	}
}

void Y()
{
	switch(rand()%3)
	{
	case 0:
		letter='a';
		break;
	case 1:
		letter='e';
		break;
	case 2:
		letter='o';
		break;
	}
}

void Z()
{
	switch(rand()%3)
	{
	case 0:
		letter='e';
		break;
	case 1:
		letter='i';
		break;
	case 2:
		letter='o';
		break;
	}
}
