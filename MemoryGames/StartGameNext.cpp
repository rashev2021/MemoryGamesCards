#include <Windows.h>
#include "Default.h"
#include <iostream>
#include <playsoundapi.h>

using namespace std;

void StartGameNext_4x2(char a, char a1, char b, char b1, char c, char c1, char d, char d1, char f, char f1, char f2, char f3, char f4, char f5, char f6, char f7, County doc)
{
		char p;
		char p1 = '0';

		if (a != ' ' || c != ' ' || b != ' ' || c1 != ' ' || d != ' ' || a1 != ' ' || b1 != ' ' || d1 != ' ')
		{
			Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
		}
		
		if (a == ' ' && c == ' ' && b == ' ' && c1 == ' ' && d == ' ' && a1 == ' ' && b1 == ' ' && d1 == ' ')
		{
			PlaySound(TEXT("winner.wav"), NULL, SND_FILENAME | SND_ASYNC);
			cout << endl << "\t\t\t\t\t\t\t  Победа!!! Все карты раскрыты!!!" << endl;
			cout << endl << "\t\t\t\t\t\t\t  Количество совпадений: " << doc.concidences << endl;
			cout << endl << "\t\t\t\t\t\t\t  Количество неверных ходов: " << doc.count << endl << endl;
			cout << endl << "\t\t\t\t\t\t\t  Сейчас вы будете перенаправлены в меню. " << endl << endl;
			
			Card_4x2(a = '!', a1 = '*', b = '@', b1 = '$', c = '!', c1 = '@', d = '*', d1 = '$', f, f1, f2, f3, f4, f5, f6, f7);
		
			Sleep(5100);
			system("cls");
			Menu();
		}

		cout << endl << "\t\t\t\t\t\t\t Откройте две любые карты." << endl;
		cout << endl << "\t\t\t\t\t\t\t Выберите одну из карт и нажмите Enter: ";

		do
		{
			cin >> p;
			PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);

			if (p > '8' || p == '0')
			{
				cout << endl << "\t\t\t\t\t\t\t Такой карты нет. Повторите попытку..." << endl;
				cout << endl << "\t\t\t\t\t\t\t Откройте две любые карты." << endl;
				cout << endl << "\t\t\t\t\t\t\t Выберите одну из карт и нажмите Enter: ";
			}
			if (p == '1')
			{
				if (a == ' ')
				{
					do
					{
						cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
						cin >> p;
						PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);

					} while (p == '1' || p == '0');
				}
				else
				{
					a = '!';
					f = ' ';
					system("cls");
					Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
					cout << endl << "\t\t\t\t\t\t\t Выберите втораю карту и нажмите Enter: ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}

				if (p1 == '2')
				{
					if (b == ' ')
					{
						do
						{
							cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
							cin >> p1;
							PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);

						} while (p1 == '2' || p1 == '0');
					}
					else
					{
						b = '@';
						f1 = ' ';
						system("cls");
						Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
						Examination(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
					}
				}

				if (p1 == '3')
				{
					if (c == ' ')
					{
						do
						{
							cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
							cin >> p1;
							PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);

						} while (p1 == '3' || p1 == '0');
					}
					else
					{
						c = '!';
						f2 = ' ';
						system("cls");
						Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
						Examination(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
					}
				}

				if (p1 == '4')
				{
					if (d == ' ')
					{
						do
						{
							cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
							cin >> p1;
							PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);

						} while (p1 == '4' || p1 == '0');
					}
					else
					{
						d = '*';
						f3 = ' ';
						system("cls");
						Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
						Examination(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
					}
				}
				if (p1 == '5')
				{
					if (a1 == ' ')
					{
						do
						{
							cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
							cin >> p1;
							PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);

						} while (p1 == '5' || p1 == '0');
					}
					else
					{
						a1 = '*';
						f4 = ' ';
						system("cls");
						Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
						Examination(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
					}
				}

				if (p1 == '6')
				{
					if (b1 == ' ')
					{
						do
						{
							cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
							cin >> p1;
							PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);

						} while (p1 == '6' || p1 == '0');
					}
					else
					{
						b1 = '$';
						f5 = ' ';
						system("cls");
						Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
						Examination(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
					}
				}

				if (p1 == '7')
				{
					if (c1 == ' ')
					{
						do
						{
							cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
							cin >> p1;
							PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);

						} while (p1 == '7' || p1 == '0');
					}
					else
					{
						c1 = '@';
						f6 = ' ';
						system("cls");
						Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
						Examination(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
					}
				}

				if (p1 == '8')
				{
					if (d1 == ' ')
					{
						do
						{
							cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
							cin >> p1;
							PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);

						} while (p1 == '8' || p1 == '0');
					}
					else
					{
						d1 = '$';
						f7 = ' ';
						system("cls");
						Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
						Examination(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
					}
				}
			}

			if (p == '2')
			{
				if (b == ' ')
				{
					do
					{
						cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
						cin >> p;
						PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);

					} while (p == '2' || p == '0');
				}
				else
				{
					b = '@';
					f1 = ' ';
					system("cls");
					Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
					cout << endl << "\t\t\t\t\t\t\t Выберите втораю карту и нажмите Enter: ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}

				if (p1 == '1')
				{
					if (a == ' ')
					{
						do
						{
							cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
							cin >> p1;
							PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);

						} while (p1 == '1' || p1 == '0');
					}
					else
					{
						a = '!';
						f = ' ';
						system("cls");
						Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
						Examination(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
					}
				}

				if (p1 == '3')
				{
					if (c == ' ')
					{
						do
						{
							cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
							cin >> p1;
							PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);

						} while (p1 == '3' || p1 == '0');
					}
					else
					{
						c = '!';
						f2 = ' ';
						system("cls");
						Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
						Examination(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
					}
				}

				if (p1 == '4')
				{
					if (d == ' ')
					{
						do
						{
							cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
							cin >> p1;
							PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);

						} while (p1 == '4' || p1 == '0');
					}
					else
					{
						d = '*';
						f3 = ' ';
						system("cls");
						Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
						Examination(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
					}
				}

				if (p1 == '5')
				{

					if (a1 == ' ')
					{
						do
						{
							cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
							cin >> p1;
							PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);

						} while (p1 == '5' || p1 == '0');
					}
					else
					{
						a1 = '*';
						f4 = ' ';
						system("cls");
						Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
						Examination(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
					}
				}

				if (p1 == '6')
				{
					if (b1 == ' ')
					{
						do
						{
							cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
							cin >> p1;
							PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);

						} while (p1 == '6' || p1 == '0');
					}
					else
					{
						b1 = '$';
						f5 = ' ';
						system("cls");
						Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
						Examination(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
					}
				}
				
				if (p1 == '7')
				{
					if (c1 == ' ')
					{
						do
						{
							cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
							cin >> p1;
							PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);

						} while (p1 == '7' || p1 == '0');
					}
					else
					{
						c1 = '@';
						f6 = ' ';
						system("cls");
						Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
						Examination(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
					}
				}

				if (p1 == '8')
				{
					if (d1 == ' ')
					{
						do
						{
							cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
							cin >> p1;
							PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);

						} while (p1 == '8' || p1 == '0');
					}
					else
					{
						d1 = '$';
						f7 = ' ';
						system("cls");
						Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
						Examination(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
					}
				}
			}

			if (p == '3')
			{
				if (c == ' ')
				{
					do
					{
						cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
						cin >> p;
						PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);

					} while (p == '3' || p == '0');
				}
				else
				{
					c = '!';
					f2 = ' ';
					system("cls");
					Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
					cout << endl << "\t\t\t\t\t\t\t Выберите втораю карту и нажмите Enter: ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}

				if (p1 == '1')
				{

					if (a == ' ')
					{
						do
						{
							cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
							cin >> p1;
							PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);

						} while (p1 == '1' || p1 == '0');
					}
					else
					{
						a = '!';
						f = ' ';
						system("cls");
						Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
						Examination(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
					}
					
				}
				if (p1 == '2')
				{
					if (b == ' ')
					{
						do
						{
							cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
							cin >> p1;
							PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);

						} while (p1 == '2' || p1 == '0');
					}
					else
					{
						b = '@';
						f1 = ' ';
						system("cls");
						Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
						Examination(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
					}
				}

				if (p1 == '4')
				{
					if (d == ' ')
					{
						do
						{
							cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
							cin >> p1;
							PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);

						} while (p1 == '4' || p1 == '0');
					}
					else
					{
						d = '*';
						f3 = ' ';
						system("cls");
						Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
						Examination(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
					}
				}

				if (p1 == '5')
				{
					if (a1 == ' ')
					{
						do
						{
							cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
							cin >> p1;
							PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);

						} while (p1 == '5' || p1 == '0');
					}
					else
					{
						a1 = '*';
						f4 = ' ';
						system("cls");
						Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
						Examination(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
					}
				}

				if (p1 == '6')
				{
					if (b1 == ' ')
					{
						do
						{
							cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
							cin >> p1;
							PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);

						} while (p1 == '6' || p1 == '0');
					}
					else
					{
						b1 = '$';
						f5 = ' ';
						system("cls");
						Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
						Examination(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
					}
				}

				if (p1 == '7')
				{
					if (c1 == ' ')
					{
						do
						{
							cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
							cin >> p1;
							PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);

						} while (p1 == '7' || p1 == '0');
					}
					else
					{
						c1 = '@';
						f6 = ' ';
						system("cls");
						Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
						Examination(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
					}
				}

				if (p1 == '8')
				{
					if (d1 == ' ')
					{
						do
						{
							cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
							cin >> p1;
							PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);

						} while (p1 == '8' || p1 == '0');
					}
					else
					{
						d1 = '$';
						f7 = ' ';
						system("cls");
						Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
						Examination(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
					}
				}
			}

			if (p == '4')
			{
				if (d == ' ')
				{
					do
					{
						cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
						cin >> p;
						PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);

					} while (p == '4' || p == '0');
				}
				else
				{
					d = '*';
					f3 = ' ';
					system("cls");
					Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
					cout << endl << "\t\t\t\t\t\t\t Выберите втораю карту и нажмите Enter: ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				
				if (p1 == '1')
				{
					if (a == ' ')
					{
						do
						{
							cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
							cin >> p1;
							PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);

						} while (p1 == '1' || p1 == '0');
					}
					else
					{
						a = '!';
						f = ' ';
						system("cls");
						Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
						Examination(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
					}
				}

				if (p1 == '2')
				{
					if (b == ' ')
					{
						do
						{
							cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
							cin >> p1;
							PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);

						} while (p1 == '2' || p1 == '0');
					}
					else
					{
						b = '@';
						f1 = ' ';
						system("cls");
						Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
						Examination(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
					}
				}

				if (p1 == '3')
				{
					if (c == ' ')
					{
						do
						{
							cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
							cin >> p1;
							PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);

						} while (p1 == '3' || p1 == '0');
					}
					else
					{
						c = '!';
						f2 = ' ';
						system("cls");
						Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
						Examination(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
					}
				}

				if (p1 == '5')
				{
					if (a1 == ' ')
					{
						do
						{
							cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
							cin >> p1;
							PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);

						} while (p1 == '5' || p1 == '0');
					}
					else
					{
						a1 = '*';
						f4 = ' ';
						system("cls");
						Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
						Examination(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
					}
				}

				if (p1 == '6')
				{
					if (b1 == ' ')
					{
						do
						{
							cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
							cin >> p1;
							PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);

						} while (p1 == '6' || p1 == '0');
					}
					else
					{
						b1 = '$';
						f5 = ' ';
						system("cls");
						Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
						Examination(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
					}
				}

				if (p1 == '7')
				{
					if (c1 == ' ')
					{
						do
						{
							cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
							cin >> p1;
							PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);

						} while (p1 == '7' || p1 == '0');
					}
					else
					{
						c1 = '@';
						f6 = ' ';
						system("cls");
						Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
						Examination(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
					}
				}

				if (p1 == '8')
				{
					if (d1 == ' ')
					{
						do
						{
							cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
							cin >> p1;
							PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);

						} while (p1 == '8' || p1 == '0');
					}
					else
					{
						d1 = '$';
						f7 = ' ';
						system("cls");
						Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
						Examination(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
					}
				}
			}

			if (p == '5')
			{
				if (a1 == ' ')
				{
					do
					{
						cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
						cin >> p;
						PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);

					} while (p == '5' || p == '0');
				}
				else
				{
					a1 = '*';
					f4 = ' ';
					system("cls");
					Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
					cout << endl << "\t\t\t\t\t\t\t Выберите втораю карту и нажмите Enter: ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}

				if (p1 == '1')
				{
					if (a == ' ')
					{
						do
						{
							cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
							cin >> p1;
							PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);

						} while (p1 == '1' || p1 == '0');
					}
					else
					{
						a = '!';
						f = ' ';
						system("cls");
						Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
						Examination(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
					}
				}

				if (p1 == '2')
				{
					if (b == ' ')
					{
						do
						{
							cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
							cin >> p1;
							PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);

						} while (p1 == '2' || p1 == '0');
					}
					else
					{
						b = '@';
						f1 = ' ';
						system("cls");
						Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
						Examination(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
					}
				}

				if (p1 == '3')
				{
					if (c == ' ')
					{
						do
						{
							cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
							cin >> p1;
							PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);

						} while (p1 == '3' || p1 == '0');
					}
					else
					{
						c = '!';
						f2 = ' ';
						system("cls");
						Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
						Examination(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
					}
				}

				if (p1 == '4')
				{
					if (d == ' ')
					{
						do
						{
							cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
							cin >> p1;
							PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);

						} while (p1 == '4' || p1 == '0');
					}
					else
					{
						d = '*';
						f3 = ' ';
						system("cls");
						Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
						Examination(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
					}
				}

				if (p1 == '6')
				{
					if (b1 == ' ')
					{
						do
						{
							cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
							cin >> p1;
							PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);

						} while (p1 == '6' || p1 == '0');
					}
					else
					{
						b1 = '$';
						f5 = ' ';
						system("cls");
						Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
						Examination(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
					}
				}

				if (p1 == '7')
				{
					if (c1 == ' ')
					{
						do
						{
							cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
							cin >> p1;
							PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);

						} while (p1 == '7' || p1 == '0');
					}
					else
					{
						c1 = '@';
						f6 = ' ';
						system("cls");
						Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
						Examination(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
					}
				}

				if (p1 == '8')
				{
					if (d1 == ' ')
					{
						do
						{
							cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
							cin >> p1;
							PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);

						} while (p1 == '8' || p1 == '0');
					}
					else
					{
						d1 = '$';
						f7 = ' ';
						system("cls");
						Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
						Examination(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
					}
				}
			}

			if (p == '6')
			{
				if (b1 == ' ')
				{
					do
					{
						cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
						cin >> p;
						PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);

					} while (p == '6' || p == '0');
				}
				else
				{
					b1 = '$';
					f5 = ' ';
					system("cls");
					Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
					cout << endl << "\t\t\t\t\t\t\t Выберите втораю карту и нажмите Enter: ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}

				if (p1 == '1')
				{
					if (a == ' ')
					{
						do
						{
							cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
							cin >> p1;
							PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);

						} while (p1 == '1' || p1 == '0');
					}
					else
					{
						a = '!';
						f = ' ';
						system("cls");
						Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
						Examination(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
					}
				}

				if (p1 == '2')
				{
					if (b == ' ')
					{
						do
						{
							cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
							cin >> p1;
							PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);

						} while (p1 == '2' || p1 == '0');
					}
					else
					{
						b = '@';
						f1 = ' ';
						system("cls");
						Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
						Examination(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
					}
				}

				if (p1 == '3')
				{
					if (c == ' ')
					{
						do
						{
							cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
							cin >> p1;
							PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);

						} while (p1 == '3' || p1 == '0');
					}
					else
					{
						c = '!';
						f2 = ' ';
						system("cls");
						Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
						Examination(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
					}
				}

				if (p1 == '4')
				{
					if (d == ' ')
					{
						do
						{
							cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
							cin >> p1;
							PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);

						} while (p1 == '4' || p1 == '0');
					}
					else
					{
						d = '*';
						f3 = ' ';
						system("cls");
						Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
						Examination(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
					}	
				}

				if (p1 == '5')
				{
					if (a1 == ' ')
					{
						do
						{
							cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
							cin >> p1;
							PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);

						} while (p1 == '5' || p1 == '0');
					}
					else
					{
						a1 = '*';
						f4 = ' ';
						system("cls");
						Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
						Examination(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
					}
				}

				if (p1 == '7')
				{
					if (c1 == ' ')
					{
						do
						{
							cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
							cin >> p1;
							PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);

						} while (p1 == '7' || p1 == '0');
					}
					else
					{
						c1 = '@';
						f6 = ' ';
						system("cls");
						Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
						Examination(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
					}
				}

				if (p1 == '8')
				{
					if (d1 == ' ')
					{
						do
						{
							cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
							cin >> p1;
							PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);

						} while (p1 == '8' || p1 == '0');
					}
					else
					{
						d1 = '$';
						f7 = ' ';
						system("cls");
						Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
						Examination(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
					}
				}
			}

			if (p == '7')
			{
				if (c1 == ' ')
				{
					do
					{
						cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
						cin >> p;
						PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);

					} while (p == '7' || p == '0');
				}
				else
				{
					c1 = '@';
					f6 = ' ';
					system("cls");
					Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
					cout << endl << "\t\t\t\t\t\t\t Выберите втораю карту и нажмите Enter: ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
				
				if (p1 == '1')
				{
					if (a == ' ')
					{
						do
						{
							cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
							cin >> p1;
							PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);

						} while (p1 == '1' || p1 == '0');
					}
					else
					{
						a = '!';
						f = ' ';
						system("cls");
						Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
						Examination(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
					}
				}

				if (p1 == '2')
				{
					if (b == ' ')
					{
						do
						{
							cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
							cin >> p1;
							PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);

						} while (p1 == '2' || p1 == '0');
					}
					else
					{
						b = '@';
						f1 = ' ';
						system("cls");
						Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
						Examination(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
					}
				}

				if (p1 == '3')
				{
					if (c == ' ')
					{
						do
						{
							cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
							cin >> p1;
							PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);

						} while (p1 == '3' || p1 == '0');
					}
					else
					{
						c = '!';
						f2 = ' ';
						system("cls");
						Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
						Examination(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
					}
				}

				if (p1 == '4')
				{
					if (d == ' ')
					{
						do
						{
							cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
							cin >> p1;
							PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);

						} while (p1 == '4' || p1 == '0');
					}
					else
					{
						d = '*';
						f3 = ' ';
						system("cls");
						Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
						Examination(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
					}
				}

				if (p1 == '5')
				{
					if (a1 == ' ')
					{
						do
						{
							cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
							cin >> p1;
							PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);

						} while (p1 == '5' || p1 == '0');
					}
					else
					{
						a1 = '*';
						f4 = ' ';
						system("cls");
						Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
						Examination(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
					}
				}

				if (p1 == '6')
				{
					if (b1 == ' ')
					{
						do
						{
							cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
							cin >> p1;
							PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);

						} while (p1 == '6' || p1 == '0');
					}
					else
					{
						b1 = '$';
						f5 = ' ';
						system("cls");
						Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
						Examination(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
					}
				}

				if (p1 == '8')
				{
					if (d1 == ' ')
					{
						do
						{
							cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
							cin >> p1;
							PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);

						} while (p1 == '8' || p1 == '0');
					}
					else
					{
						d1 = '$';
						f7 = ' ';
						system("cls");
						Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
						Examination(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
					}
				}
			}

			if (p == '8')
			{
				if (d1 == ' ')
				{
					do
					{
						cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
						cin >> p;
						PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);

					} while (p == '8' || p == '0');
				}
				else
				{
					d1 = '$';
					f7 = ' ';
					system("cls");
					Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
					cout << endl << "\t\t\t\t\t\t\t Выберите втораю карту и нажмите Enter: ";
					cin >> p1;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
				}
			
				if (p1 == '1')
				{
					if (a == ' ')
					{
						do
						{
							cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
							cin >> p1;
							PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);

						} while (p1 == '1' || p1 == '0');
					}
					else
					{
						a = '!';
						f = ' ';
						system("cls");
						Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
						Examination(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
					}
				}

				if (p1 == '2')
				{
					if (b == ' ')
					{
						do
						{
							cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
							cin >> p1;
							PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);

						} while (p1 == '2' || p1 == '0');
					}
					else
					{
						b = '@';
						f1 = ' ';
						system("cls");
						Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
						Examination(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
					}
				}

				if (p1 == '3')
				{
					if (c == ' ')
					{
						do
						{
							cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
							cin >> p1;
							PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);

						} while (p1 == '3' || p1 == '0');
					}
					else
					{
						c = '!';
						f2 = ' ';
						system("cls");
						Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
						Examination(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
					}
				}

				if (p1 == '4')
				{
					if (d == ' ')
					{
						do
						{
							cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
							cin >> p1;
							PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);

						} while (p1 == '4' || p1 == '0');
					}
					else
					{
						d = '*';
						f3 = ' ';
						system("cls");
						Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
						Examination(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
					}
				}

				if (p1 == '5')
				{
					if (a1 == ' ')
					{
						do
						{
							cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
							cin >> p1;
							PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);

						} while (p1 == '5' || p1 == '0');
					}
					else
					{
						a1 = '*';
						f4 = ' ';
						system("cls");
						Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
						Examination(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
					}
				}

				if (p1 == '6')
				{
					if (b1 == ' ')
					{
						do
						{
							cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
							cin >> p1;
							PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);

						} while (p1 == '6' || p1 == '0');
					}
					else
					{
						b1 = '$';
						f5 = ' ';
						system("cls");
						Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
						Examination(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
					}
				}

				if (p1 == '7')
				{
					if (c1 == ' ')
					{
						do
						{
							cout << "\t\t\t\t\t\t\t Эта карта уже выиграла. Выберите другую. ";
							cin >> p1;
							PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);

						} while (p1 == '7' || p1 == '0');
					}
					else
					{
						c1 = '@';
						f6 = ' ';
						system("cls");
						Card_4x2(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7);
						Examination(a, a1, b, b1, c, c1, d, d1, f, f1, f2, f3, f4, f5, f6, f7, doc);
					}
				}
			}

		} while (true);
}