#include <iostream>

using namespace std;
/**
 * @brief Funcion Principal que ejecute el administrador de vecindario
 * El sistema es un administrador de detalles de familia por vecindario
 * con el fin de conocer detaslles del total de persona, eventos que se realizan
 * ,encargado de rondas nocturnas
 */
int main()
{
    bool cicloMenu = true;

    while (cicloMenu)
    {
        int opcion = 0;
        cout << "== Operaciones del sistema " << endl;
        cout << "== 1. Administrar Familias " << endl;
        cout << "== 2. Administrar Eventos " << endl;
        cout << "== 3. Administrar Rondas Nocturnas " << endl;
        cout << "== 4. Salir " << endl;
        cout << "Digite su operacion" << endl;
        cin >> opcion;
        try
        {
            if (opcion <= 0 && opcion >= 4)
            {
                cout << "La opcion digitada no es valida verifique porfavor" << endl;
            }
            else
            {
                switch (opcion)
                {
                case 1:
                    break;
                case 2:
                    break;
                case 3:
                    break;
                case 4:
                    cicloMenu = false;
                    break;
                default:
                    break;
                }
            }
        }
        catch (const runtime_error &e)
        {
            cout << "Error: " << e.what() << endl;
        }

        break;
    }
    return 0;
}

bool administrarFamilas()
{
    return true;
}

bool eventos()
{
    return true;
}

bool rondasNocturnas()
{
    return true;
}

