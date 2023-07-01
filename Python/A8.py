#   Toms Madžuls, tm22005
#   A8. Dots naturāls skaitlis n. Izdrukāt tos skaitļa n reizinātājus, kuri ir kāda naturāla skaitļa kvadrāti.
#   Programma izveidota: 03.10.2022

import math

izvele = ''
while True: #kamer izvele bus patiesa, tikmer programma turpinas izpildi
    izvele = input('Vai turpinat? y/n: ')
    if izvele.lower() == 'y': #izvele bija 'yes'
        
        n = int(input("Ievadiet naturalu skaitli: "))
        print("Reizinataji skaitlim ",n,", kuri ir kvadrati: ")
        if (n > 0): #noskaidro vai naturals skaitlis
            for i in range(1, n+1//2 +1): #i sakot no 1 tiks pielidzinats ievaditajam sk.
                if (n % i == 0) and (i > 1): 
                    sakne = math.sqrt(i)
                    if int(sakne ** 2 == i): #parbauda vai n reizinatajs ir kvadrats
                        print(i)
        else: #tika ievadits skaitlis, kas <= 0
            print("Tas nav naturals skaitlis!")
        continue
    elif izvele.lower() == 'n': #izvele bija 'no', beidz programmas darbibu
        break
    else: #netika ievadits yes/no
        print('Ierakstiet y/n')