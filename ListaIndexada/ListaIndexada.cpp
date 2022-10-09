

#include "DLists.h"

int main()
{
    DList lLista = DList();

    lLista.push_back("Albert", "Einstein", "1879-03-14", 100);
    lLista.push_back("Issac", "Newton", "1643-01-04", 300);
    lLista.push_back("Neils", "Bohr", "1885-10-07", 250);
    lLista.push_back("Hipatia", "De Alejandría", "455-01-01", 200);

    lLista.repr(ECampos::nombre);

    cout << endl;

    lLista.repr(ECampos::salario);

    cout << endl;

    PDATA lItem = NULL;
    while (lItem = lLista.get(ECampos::apellido, true)) {
        cout << "\t" << lItem->sNombre << " " << lItem->sApellido << endl;
    }
    lLista.pop("Albert", "Einstein", "1879-03-14", 100);
    lLista.repr(ECampos::nombre);
    cout << endl;

}
