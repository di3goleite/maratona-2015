#include <iostream>
#include <cstring>
 
using namespace std;
 
int main()
{
 string entra, debug;
 int Num;
 cin >> Num;
 getline (cin,debug);
 for(int mais=0;mais<Num;mais++)
 {
     bool a=0, b=0, c=0, d=0, e=0, f=0, g=0, h=0, i=0, j=0, k=0, l=0, m=0, n=0, o=0, p=0, q=0, r=0, s=0, t=0, u=0, v=0, w=0, x=0, y=0, z=0;
     int sobe=0, letras=0;
     getline (cin,entra);
     while(entra[sobe]!='\0')
     {
         if((entra[sobe]=='a' || entra[sobe]=='A') && a==0)
         {letras++;a=1;}
         else if((entra[sobe]=='b' || entra[sobe]=='B') && b==0)
         {letras++;b=1;}
         else if((entra[sobe]=='c' || entra[sobe]=='C') && c==0)
         {letras++;c=1;}
         else if((entra[sobe]=='d' || entra[sobe]=='D') && d==0)
         {letras++;d=1;}
         else if((entra[sobe]=='e' || entra[sobe]=='E') && e==0)
         {letras++;e=1;}
         else if((entra[sobe]=='f' || entra[sobe]=='F') && f==0)
         {letras++;f=1;}
         else if((entra[sobe]=='g' || entra[sobe]=='G') && g==0)
         {letras++;g=1;}
         else if((entra[sobe]=='h' || entra[sobe]=='H') && h==0)
         {letras++;h=1;}
         else if((entra[sobe]=='i' || entra[sobe]=='I') && i==0)
         {letras++;i=1;}
         else if((entra[sobe]=='j' || entra[sobe]=='j') && j==0)
         {letras++;j=1;}
         else if((entra[sobe]=='k' || entra[sobe]=='K') && k==0)
         {letras++;k=1;}
         else if((entra[sobe]=='l' || entra[sobe]=='L') && l==0)
         {letras++;l=1;}
         else if((entra[sobe]=='m' || entra[sobe]=='M') && m==0)
         {letras++;m=1;}
         else if((entra[sobe]=='n' || entra[sobe]=='N') && n==0)
         {letras++;n=1;}
         else if((entra[sobe]=='o' || entra[sobe]=='O') && o==0)
         {letras++;o=1;}
         else if((entra[sobe]=='p' || entra[sobe]=='P') && p==0)
         {letras++;p=1;}
         else if((entra[sobe]=='q' || entra[sobe]=='Q') && q==0)
         {letras++;q=1;}
         else if((entra[sobe]=='r' || entra[sobe]=='R') && r==0)
         {letras++;r=1;}
         else if((entra[sobe]=='s' || entra[sobe]=='S') && s==0)
         {letras++;s=1;}
         else if((entra[sobe]=='t' || entra[sobe]=='T') && t==0)
         {letras++;t=1;}
         else if((entra[sobe]=='u' || entra[sobe]=='U') && u==0)
         {letras++;u=1;}
         else if((entra[sobe]=='v' || entra[sobe]=='V') && v==0)
         {letras++;v=1;}
         else if((entra[sobe]=='w' || entra[sobe]=='W') && w==0)
         {letras++;w=1;}
         else if((entra[sobe]=='x' || entra[sobe]=='X') && x==0)
         {letras++;x=1;}
         else if((entra[sobe]=='y' || entra[sobe]=='Y') && y==0)
         {letras++;y=1;}
         else if((entra[sobe]=='z' || entra[sobe]=='Z') && z==0)
         {letras++;z=1;}
             sobe++;
     }
     if(letras==26)
         cout << "frase completa" << endl;
     else if(letras>=13)
         cout << "frase quase completa" << endl;
     else if(letras<13)
         cout << "frase mal elaborada" << endl;
 }
 return 0;
}
