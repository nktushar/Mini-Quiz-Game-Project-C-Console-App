#include<iostream>
#include<string>
#include<iomanip>
#include<stdlib.h>
#include<conio.h>
#include<fstream>
using namespace std;
class quizgame
{
public:
    int r1,counting;
    float score;
    char choice;
    string playername;


    void mainhome(){
        system("cls");
     cout<< "\n\n\t\t    Quiz  Competition  Project"<<endl;
     cout<< "\t\t___________________________________"<<endl;
     cout<< "\t\t-----------------------------------"<<endl;
     cout<< "\t\t\t      Welcome"<<endl<< "\t\t\t\tTo"<<endl<< "\t\t\t     The Game"<<endl;
     cout<< "\t\t___________________________________"<<endl;
     cout<< "\t\t___________________________________"<<endl;
     cout<< "\t\t> Press  'S'  to start the game"<<endl;
     cout<< "\t\t> Press  'V'  to view highest score"<<endl;
     cout<< "\t\t> Press  'R'  to reset scoreboard"<<endl;
     cout<< "\t\t> Press  'H'  for help"<<endl;
     cout<< "\t\t> Press  'A'  to know about the game"<<endl;
     choice=toupper(getch());
     if(choice=='V'){
            system("cls");
        cout<< "\n\n\n\n\t\t  Showing Record"<<endl;
        cout<< "   ___________________________________________"<<endl;
        cout<< "\tNAME\t\t |\t     SCORE"<<endl;
        cout<< "   -------------------------------------------"<<endl;
        show_record();
     }
     else if(choice=='H'){
         system("cls");
        cout<< "   Help------------------------------------------------------------\n";
        cout<< "\n\tAfter selecting the 'START' option you have to submit your name.\n ";
        cout<< "\tThen you have to enter into the competition.\n";
        cout<< "\tAfter successfully intering  to the game you will face 10 questions\n";
        cout<< "\tIf all of your answer are correct, you will get total 20 points.\n";
        cout<< "\tFor each question you may get different point value.\n";
        cout<< "\n\tSo, lets make a try!!!!!!";
        cout<< "\n\n\t>> Best OF LUCK <<";
        getch();
        mainhome();
        //goto mainhome;
     }
     else if(choice=='R'){
         system("cls");
        reset();
        getch();
        mainhome();
     }
     else if(choice=='A'){
         system("cls");
        cout<< "\n\tAbout Us ------------------------\n";
        cout<< "\n\t This is a project for our university course CSC-(283-284).";
        cout<< "\n\n\t Prepared by:";
        cout<< "\n\t\tNazmul Kabir          ID:19203026\n\t\tHabiba Jannat Bristy  ID:19203011\n\t\tNazim Uddin           ID:19203031";
        cout<< "\n\n\t Group Name          :   PALINDROME";
        cout<< "\n\n\t Instructor's name   :   Arifatur Rahman\n";
        getch();
        mainhome();
     }
     else if(choice=='S'){
            system("cls");
        cout<< "\n\n\n\n\n\t\tEnter Your Name: ";
        cin>>playername;
        system("cls");
        cout<< "\n\t>>>>> Welcome To The Game, " << playername <<" <<<<<"<<endl<<endl<<endl;
        //cout<< "\n (If you didn't know the rules of the competition\n  Press  'H'  and start from the beginning) "<<endl<<endl;
        cout<< " >Press  'E'              .......To enter in the competition)"<<endl<<endl;
        cout<< " >Press  'any other key'  .......To return to the main menu)"<<endl;

        if(toupper(getch())=='E'){
            start();
        }
        else mainhome();
     }
    }


    void start()
    {
        system("cls");
        counting=0;
        for(int i=0; i<10; i++){
            r1=i;
            system("cls");

            switch(r1){
            case 0:
                cout<< "\n\n\t>>Which of the following is a Palindrome number?"<<endl;
                cout<< "\n\n\tA.42042\t\tB.101010\n\n\tC.23232\t\tD.01234"<<endl;
                if(toupper(getch())=='C'){
                    cout<< "\n\tCorrect!!!";
                    counting++;
                    getch();
                    break;
                }
                else{
                    cout<< "\n\tWrong!!! The correct answer is C.23232"<<endl;
                    getch();
                    break;
                }

            case 1:
                cout<< "\n\n\t>>Who is the founder of IUBAT?"<<endl;
                cout<< "\n\n\tA.Dr. Mohammed Jafar Iqbal\n\n\tB.Md. Alimullah Miyan";
                cout<< "\n\n\tC.Md. Abdur Rob\n\n\tD.Anisul Hoque"<<endl;
                if(toupper(getch())=='B'){
                    cout<< "\n\tCorrect!!!";
                    counting++;
                    getch();
                    break;
                }
                else{
                    cout<< "\n\tWrong!!! The correct answer is B.Md. Alimullah Miyan"<<endl;
                    getch();
                    break;
                }
                 case 2:
                cout<< "\n\n\t>>If you divide 30 by half and add ten, what do you get?\n\t (trickey question)"<<endl;
                cout<< "\n\n\tA.70\t\tB.25\n\n\tC.150\t\tD.120"<<endl;
                if(toupper(getch())=='A'){
                    cout<< "\n\tCorrect!!!";
                    counting+=4;
                    getch();
                    break;
                }
                else{
                    cout<< "\n\tWrong!!! The correct answer is A.70\n\t (for better understand contact with Admins :P"<<endl;
                    getch();
                    break;
                }
                case 3:
                cout<< "\n\n\t>>IUBAT founded in -"<<endl;
                cout<< "\n\n\tA.1992\t\tB.1998\n\n\tC.2000\t\tD.1991"<<endl;
                if(toupper(getch())=='D'){
                    cout<< "\n\tCorrect!!!";
                    counting++;
                    getch();
                    break;
                }
                else{
                    cout<< "\n\tWrong!!! The correct answer is D.1991"<<endl;
                    getch();
                    break;
                }
                case 4:
                cout<< "\n\n\t>>When was the first case of the coronavirus disease reported in Bangladesh?"<<endl;
                cout<< "\n\n\tA.4 March 2020\t\tB.6 March 2020\n\n\tC.7 March 2020\t\tD.9 March 2020"<<endl;
                if(toupper(getch())=='C'){
                    cout<< "\n\tCorrect!!!";
                    counting+=2;
                    getch();
                    break;
                }
                else{
                    cout<< "\n\tWrong!!! The correct answer is C.7 March 2020"<<endl;
                    getch();
                    break ;
                }
                case 5:
                cout<< "\n\n\t>>Among these four, which programming language was used to make Facebook?"<<endl;
                cout<< "\n\n\tA. C\t\tB. C++\n\n\tC. Perl\t\tD. C#"<<endl;
                if(toupper(getch())=='B'){
                    cout<< "\n\tCorrect!!!";
                    counting+=2;
                    getch();
                    break;
                }
                else{
                    cout<< "\n\tWrong!!! The correct answer is B. C++"<<endl;
                    getch();
                    break;
                }
                case 6:
                cout<< "\n\n\t>>Which is not Object Oriented Programming language?"<<endl;
                cout<< "\n\n\tA. Java\t\tB. PHP\n\n\tC. C++\t\tD. C#"<<endl;
                if(toupper(getch())=='D'){
                    cout<< "\n\tCorrect!!!";
                    counting+=2;
                    getch();
                    break;
                }
                else{
                    cout<< "\n\tWrong!!! The correct answer is D. C#"<<endl;
                    getch();
                    break;
                }

                case 7:
                cout<< "\n\n\t>>Who is the inventor of Rubik's Cube?"<<endl;
                cout<< "\n\n\tA. Erno Rubik\t\tB. Danial Rubik\n\n\tC. E.N. Rubik\t\tD. None of them"<<endl;
                if(toupper(getch())=='A'){
                    cout<< "\n\tCorrect!!!";
                    counting+=2;
                    getch();
                    break;
                }
                else{
                    cout<< "\n\tWrong!!! The correct answer is A. Erno Rubik"<<endl;
                    getch();
                    break;
                }
                case 8:
                cout<< "\n\n\t>>Who is known as Father of Mathematics?"<<endl;
                cout<< "\n\n\tA. Albert Einstein\t\tB. Galilio\n\n\tC. Archimedes\t\tD. Isaac Newton"<<endl;
                if(toupper(getch())=='C'){
                    cout<< "\n\tCorrect!!!";
                    counting+=2;
                    getch();
                    break;
                }
                else{
                    cout<< "\n\tWrong!!! The correct answer is C. Archimedes"<<endl;
                    getch();
                    break;
                }
            case 9:
                cout<< "\n\n\t>>What is the time zone of Bangladesh?";
                cout<< "\n\n\tA.Utc + 4\t\tB.Utc + 5\n\n\tC.Utc + 6\t\tD.Utc + 7"<<endl;
                if(toupper(getch())=='C'){
                    cout<< "\n\tCorrect!!!";
                    counting+=3;
                    getch();
                    point();
                    break;
                }
                else{
                    cout<< "\n\tWrong!!! The correct answer is C.Utc + 6"<<endl;
                    getch();
                    point();
                    break;
                }
            }
        }
    }


    void point(){
        system("cls");
        cout<< "\n\n\n\n\t\tCongratulations!! "<<playername<<endl;
        cout<< "\n\t\tYou won "<<counting<< "points"<<endl;
        entry(playername,counting);
        getch();
        mainhome();
    }

    void entry(string plnm, int pnt){
        ofstream file;
        file.open("player.txt", ios::out | ios::app);
        file <<setw(15)<< plnm;
        file <<setw(25)<<pnt <<endl;
        cin.ignore();
        file.close();
    }

    void show_record(){
        string line;
        ifstream file;
        file.open("player.txt");
        while(getline(file,line)){
            cout<< line <<endl;
            cout<< "   -------------------------------------------"<<endl;
        }
        file.close();
        getch();
        mainhome();
    }

    void reset(){
        string line;
        ifstream file;
        file.open("player.txt");
        file.close();
        remove("player.txt");
    }

};


int main()
{
    quizgame obj;
    obj.mainhome();
}
