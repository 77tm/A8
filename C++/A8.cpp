/*  Toms Madžuls, tm22005
    A8. Dots naturāls skaitlis n. Izdrukāt tos skaitļa n reizinātājus, kuri ir kāda naturāla skaitļa kvadrāti.
    Programma izveidota: 03.10.2022 */

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    char izvele;
    int n, i;
        do{ //programma tiks atkartota, kamer atbilde bus "Y"
            cout << "Ievadiet naturalu skaitli: ";
            cin >> n;
                if (n > 0){ //ievadits naturals sk.
                    cout << "Reizinataji skaitlim " << n << " , kuri ir kvadrati: \n";  
                    for(i = 1; i <= n; ++i) {    //i sakot ar 1 sevi pielidzinas ievaditajam sk.
                        if((n % i == 0) && (sqrt(i) == int(sqrt(i))) && (i > 1)) //(1.) pārbauda vai ievadito sk. dalot ar i nav atlikuma
                        cout << i << " ";                                       //(2.) parbauda, ka izvelkot kvadratu sanak vesels skaitlis
                    }
                }else cout << "Tas nav naturals skaitlis!";
            cout << "\nVai atkārtot izpildi? y/n \n"; 
            cin >> izvele;
        }while (izvele == 'y'); //salīdzina vai lietotājs ievadīja "Y", ja nē tad programma beigs darbu
    return 0;
}