//Commit semana 2 agregando vectores
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <limits>
using namespace std;

struct Pelicula {
    int Id;
    string titulo;
    string director;
    int anio;
    string genero;
};

void menu() {
    cout << "---REGISTRO DE PELICULAS---\n";
    cout << "1.Agregar pelicula\n";
    cout << "2.Listar pelicula\n";
    cout << "3.Buscar pelucla por ID\n";
    cout << "4.Actualizar pelicula\n";
    cout << "5.Eliminar pelicula\n";
    cout << "6.Salir\n";
    cout << "Elija una opcion: ";
}

void agregarPelicula(string ruta, vector<Pelicula>& pelicula) {
    fstream archivo(ruta, ios::out | ios::app);

    if (!archivo) {
        cout << "El archivo no se puede abrir\n";
    }

    Pelicula nuevo;

    cout << "---AGREGAR PELICULA---\n";
    cout << "Ingrese el ID de la pelicula: ";
    cin >> nuevo.Id;

    if (cin.fail()) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Debe ingresar un numero. Registro Fallido\n\n";
        return;
    } 
    else if (nuevo.Id < 1) {
        cout << "Ingrese un numero valido (1 en adelante)\n\n";
        return;
    }

    archivo << nuevo.Id << ";";

    cout << "Ingrese el nombre de la pelicula: ";
    cin.ignore();
    getline(cin, nuevo.titulo);
    archivo << nuevo.titulo << ";";

    cout << "Ingrese el director de la pelicula: ";
    getline(cin, nuevo.director);
    archivo << nuevo.director << ";";

    cout << "Ingrese el anio de la pelicula: ";
    cin >> nuevo.anio;

    if (cin.fail()) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Debe ingresar un anio valido. Registro Fallido\n\n";
        return;
    } 
    else if (nuevo.anio < 1895) {
        cout << "Ingrese un anio valido\n\n";
        return;
    }

    archivo << nuevo.anio << ";";

    cout << "Ingrese el genero de la pelicula: ";
    cin.ignore();
    getline(cin, nuevo.genero);
    archivo << nuevo.genero << ".";

    pelicula.push_back(nuevo);

    cout << "Pelicula registrada exitosamente.\n\n";
}

void buscarPelicula(string ruta) {
    ifstream archivo(ruta);

    if (!archivo) {
        cout << "No hay peliculas registradas.\n";
        return;
    }

    int idBuscado;
    cout << "Ingrese el ID de la pelicula a buscar: ";
    cin >> idBuscado;

    if (cin.fail()) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "ID invalido.\n";
        return;
    }

    Pelicula p;
    bool encontrada = false;

    while (archivo >> p.Id) {
        archivo.ignore();
        getline(archivo, p.titulo, ';');
        getline(archivo, p.director, ';');
        archivo >> p.anio;
        archivo.ignore();
        getline(archivo, p.genero, '.');

        if (p.Id == idBuscado) {
            cout << "\nPelicula encontrada:\n";
            cout << "ID: " << p.Id << endl;
            cout << "Titulo: " << p.titulo << endl;
            cout << "Director: " << p.director << endl;
            cout << "Anio: " << p.anio << endl;
            cout << "Genero: " << p.genero << endl;
            encontrada = true;
            break;
        }
    }

    if (!encontrada) {
        cout << "No existe una pelicula con ese ID.\n";
    }

    archivo.close();
}

int main() {
    int opcion;
    const string ruta = "peliculas.txt";
    vector<Pelicula> peliculas;

    while (true) {
        menu();
        cin >> opcion;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Debe ingresar un numero. Intente nuevamente\n\n";
            continue;
        }

        if (opcion == 1) {
            agregarPelicula(ruta, peliculas);
        }
        else if (opcion == 2) {
        	
        }
        else if (opcion == 3) {
            buscarPelicula(ruta);
        }
        else if (opcion == 4) {
        }
        else if (opcion == 5) {
        }
        else if (opcion == 6) {
            cout << "Saliendo...";
            break;
        }
        else {
            cout << "Opcion no valida.\n";
        }
    }
}
