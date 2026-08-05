#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x, int y);
void printmaze();
char getCharAtxy(short int x, short int y);
int main(){
    
    system("cls");
    printmaze();
    int pacmanX=4, pacmanY=4;
    gotoxy(pacmanX, pacmanY);
    cout<<"P";
    while (true){
        if(GetAsyncKeyState(VK_LEFT)){
            char nextLocation=getCharAtxy(pacmanX-1, pacmanY); if(nextLocation==' ')
{
            gotoxy(pacmanX, pacmanY);
            cout<<" ";
            pacmanX=pacmanX-1;
            gotoxy(pacmanX, pacmanY);
            cout<<"P";
        }
    }
    if(GetAsyncKeyState(VK_RIGHT)){
        char nextLocation=getCharAtxy(pacmanX+1, pacmanY); if(nextLocation==' ')
{
        gotoxy(pacmanX, pacmanY);
            cout<<" ";
            pacmanX=pacmanX+1;
            gotoxy(pacmanX, pacmanY);
            cout<<"P";
    }}
    if(GetAsyncKeyState(VK_UP)){
        char nextLocation=getCharAtxy(pacmanX, pacmanY-1); if (nextLocation== ' ')
{
        gotoxy(pacmanX, pacmanY);
            cout<<" ";
            pacmanY=pacmanY-1;
            gotoxy(pacmanX, pacmanY);
            cout<<"P";
    }}
    if(GetAsyncKeyState(VK_DOWN)){char nextLocation = getCharAtxy(pacmanX, pacmanY+1); if (nextLocation == ' ')
{
        gotoxy(pacmanX, pacmanY);
            cout<<" ";
            pacmanY=pacmanY+1;
            gotoxy(pacmanX, pacmanY);
            cout<<"P";
    }}
    if(GetAsyncKeyState(VK_ESCAPE))
    {
        return 0;}
    Sleep(300);
    
}

}
char getCharAtxy(short int x, short int y)
{
CHAR_INFO ci; COORD xy = {0, 0};
SMALL_RECT rect = {x, y, x, y}; COORD coordBufSize; coordBufSize.X = 1;
coordBufSize.Y = 1;
return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar
: ' ';
}
void gotoxy(int x, int y)
{
COORD coordinates;
 coordinates.X = x; coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
void printmaze(){
    cout<<"##########"<<endl;
    cout<<"#        #"<<endl;
    cout<<"#        #"<<endl;
    cout<<"#        #"<<endl;
    cout<<"#        #"<<endl;
    cout<<"#        #"<<endl;
    cout<<"#        #"<<endl;
    cout<<"#        #"<<endl;
    cout<<"#        #"<<endl;
    cout<<"##########"<<endl;
}