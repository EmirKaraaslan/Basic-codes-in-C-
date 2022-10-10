#include <iostream>
using namespace std;



int main (){




    string username,password;

    int loggingattempt=0; // en fazla 5 deneme





    while( loggingattempt <= 4 ){


        cout << "lutfen kuulanici adinizi giriniz :  "<< endl;
        cin >> username;

        cout << " sifrenizi giriniz "<< endl;

        cin >> password;


        if (username == "emir"&& password== "  sifre123 "){



            cout << " girisiniz basarili"<< endl;


            cout << " Hosgeldiniz efendim"<< endl;
            

            break;





        }

        else {



            cout << " hatali giris"<< endl;


            loggingattempt++;


            cout <<    " kalan deneme hakkiniz" <<  "  " << 5-loggingattempt<< endl;

        }





    }




}
