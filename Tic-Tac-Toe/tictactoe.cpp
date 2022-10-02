#include<iostream>
using namespace std;
char b[3][3]={'1','2','3','4','5','6','7','8','9'};
char turn='O';
char choice;
void displayboard()
{ cout<<"\n ------TIK TAC TOE-----\n";
 for(int i=0;i<3;i++)
 {cout<<"\n";
 for(int j=0;j<3;j++)
 {
 cout<<" "<<b[i][j]<<" |";
 }
 cout<<endl;
 cout<<"_____|_____|_____";
 cout<<endl;
 }
 cout<<"\n";
}
void turno()
{
 if (turn=='O')
 turn='X';
 else
 turn='O';
}
int checkwin()
{
    if(b[0][0]=='X'&&b[0][1]=='X'&&b[0][2]=='X'||b[1][0]=='X'&&b[1][1]=='X'&&b[1][2]=='X'||b[2][0]=='X'&&b[2][1]=='X'&&b[2][2]=='X'||b[0][0]=='X'&&b[1][0]=='X'&&b[2][0]=='X'||b[0][1]=='X'&&b[1][1]=='X'&&b[2][1]=='X'||b[0][2]=='X'&&b[1][2]=='X'&&b[2][2]=='X'||b[0][0]=='X'&&b[1][1]=='X'&&b[2][2]=='X'||b[0][2]=='X'&&b[1][1]=='X'&&b[2][0]=='X')
       return 0;
   else if(b[0][0]=='O'&&b[0][1]=='O'&&b[0][2]=='O'||b[1][0]=='O'&&b[1][1]=='O'&&b[1][2]=='O'||b[2][0]=='O'&&b[2][1]=='O'&&b[2][2]=='O'||b[0][0]=='O'&&b[1][0]=='O'&&b[2][0]=='O'||b[0][1]=='O'&&b[1][1]=='O'&&b[2][1]=='O'||b[0][2]=='O'&&b[1][2]=='O'&&b[2][2]=='O'||b[0][0]=='O'&&b[1][1]=='O'&&b[2][2]=='O'||b[0][2]=='O'&&b[1][1]=='O'&&b[2][0]=='O')
       return 1;
   if((b[0][0]=='X'||b[0][0]=='O')&&(b[0][1]=='X'||b[0][1]=='O')&&(b[0][2]=='X'||b[0][2]=='O')&&(b[1][0]=='X'||b[1][0]=='O')&&(b[1][1]=='X'||b[1][1]=='O')&&(b[1][2]=='X'||b[1][2]=='O')&&(b[2][0]=='X'||b[2][0]=='O')&&(b[2][1]=='X'||b[2][1]=='O')&&(b[2][2]=='X'||b[2][2]=='O'))
       return 2;
   else
        return -1;
        }
int main()
{
 int i;
 displayboard();
 do{
 turno();
 if(turn=='X')
{
 cout<<" Enter your choice for X :- ";
 cin>>choice;
}
 else
 {
 cout<<" Enter your choice for 0 :- ";
 cin>>choice;
 }
switch(choice)
 {
 case '1':if(b[0][0]!='X'&&b[0][0]!='O')
 b[0][0]=turn;
else
 turno();
 break;
 case '2':if(b[0][1]!='X'&&b[0][1]!='O')
 b[0][1]=turn;
else
 turno();
break;
 case '3':if(b[0][2]!='X'&&b[0][2]!='O')
 b[0][2]=turn;else
 turno();break;
 case '4':if(b[1][0]!='X'&&b[1][0]!='O')
 b[1][0]=turn;
else
 turno();break;
 case '5':if(b[1][1]!='X'&&b[1][1]!='O')
 b[1][1]=turn;
else
 turno();break;
 case '6':if(b[1][2]!='X'&&b[1][2]!='O')
 b[1][2]=turn;
else
 turno();break;
 case '7':if(b[2][0]!='X'&&b[2][0]!='O')
 b[2][0]=turn;
else
 turno();break;
 case '8':if(b[2][1]!='X'&&b[2][1]!='O')
 b[2][1]=turn;
else
 turno();break;
 case '9':if(b[2][2]!='X'&&b[2][2]!='O')
 b[2][2]=turn;
else
 turno();break;
 }
 displayboard();
 i=checkwin();
 }
 while(i==-1);
if(i==0)
 cout<<" Player 1 wins";
else if(i==1)
 cout<<" Player 2 wins";
else if(i==2)
 cout<<" It is a draw";
else
 return 2;
}

