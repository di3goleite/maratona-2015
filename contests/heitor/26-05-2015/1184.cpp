#include <cstdio>
 
using namespace std;
int main () {
    double M[12][12];
    char o;
    scanf ("%c\n",&o);
    for (int i = 0; i < 12; i++)
        for (int j =0; j < 12; j++)
            scanf ("%lf" , &M[i][j]);
    double total = 0;
    int val = 0;
    for (int i = 1; i <12;i++)
        for (int j =0; j<i; j++) {
            total += M[i][j];
            val++;
        }
    if (o == 'S')
        printf ("%.1lf\n",total);
    else
        printf ("%.1lf\n", total/((double)val) );
 
    return 0;
}  
