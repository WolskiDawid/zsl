#include <iostream>
#include <cmath>
using namespace std;

//DEFINICJA KLASY
class Room{
//SKŁADOWE PUBLICZNE
    public:
        float width, length;

    //DEFNIUJEMY FUNKCJA CZLONKOWSKA INLINE
        inline int intLength(){
        return round(length);
        };

        inline int intWidth(){
        return round(width);
        };
};

int main()
{
    setlocale(LC_CTYPE, "Polish");
    Room pokoj;
    pokoj.length=3.5;
    pokoj.width=5.5;

    cout << "Długość pokoju: " << pokoj.length << "m"
        <<"\nDługość pokoju po zaokrągleniu: " << pokoj.intLength()
        <<"m\n\nSzerokość pokoju: " << pokoj.width << "m"
        <<"\nSzerokość pokoju po zaokrągleniu: " << pokoj.intWidth() << "m\n\n";

    return 0;
}
