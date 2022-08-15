#include <iostream>
using namespace std;

class Cubo {
    public:
        int tipo;
        int alto;
        int largo;
    public:
        void generarCubo ();
};
void Cubo::generarCubo () {
    for (int c = 0; c < alto; c++)
    {
        for (int i = 0; i < largo; i++)
        {
            if (tipo == 1)
            {
                cout << "*";
            }
            else
            {
                if ((c == 0 || i == 0) || (c == (alto-1)) || (i == (largo-1)))
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
        }
        cout << endl;
    }
    
}

void Clear() {
    cout << "\x1B[2J\x1B[H";
}


int main()
{
    int opc = 1;
    do {
        Cubo c;
        cout << "Opcion 1 \t\t Opcion 2" << endl;
        cout << "*** \t\t\t ***" << endl;
        cout << "*** \t\t\t * *" << endl;
        cout << "*** \t\t\t ***" << endl;
        cout << "Selecciona el tipo:" << endl;
        cin >> c.tipo;
        cout << "Medida del alto:" << endl;
        cin >> c.alto;
        cout << "Medida del largo:" << endl;
        cin >> c.largo;
        cout << endl;
        c.generarCubo();

        cout << "\nRepetir programa:\n1.- Si \n2.- No" << endl;
        cin >> opc;
        Clear();
    } while (opc == 1);
    return 0;
}