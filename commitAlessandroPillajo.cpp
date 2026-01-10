#include<iostream>
#include<string>
#include<fstream>
#include<limits>
using namespace std;
struct Pelicula{
    int Id;
    string titulo;
    string director;
    int anio;
    string genero;
};

void menu(){
    cout << "===REGISTRO DE PELICULAS===\n";
    cout << "1. Agregar pelicula\n";
    cout << "2. Listar peliculas\n";
    cout << "3. Buscar pelicula por ID\n";
    cout << "4. Actualizar pelicula\n";
    cout << "5. Eliminar pelicula\n";
    cout << "6. Salir\n";
    cout << "Elija una opcion: ";
}

bool idExiste(string ruta, int id){
    ifstream archivo(ruta);
    if(!archivo){
        return false;
    }
    int idArchivo;
    while(archivo >> idArchivo){
        archivo.ignore(numeric_limits<streamsize>::max(), '\n');
        if(idArchivo == id){
            archivo.close();
            return true;
        }
    }
    archivo.close();
    return false;
}

void agregarPelicula(string ruta){
    Pelicula nuevo;
    cout << "===AGREGAR PELICULA===\n";
    cout << "Ingrese el ID de la pelicula: ";
    cin >> nuevo.Id;
    if(cin.fail() || nuevo.Id < 1){
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "ID invalido. Registro cancelado\n\n";
        return;
    }
    if(idExiste(ruta, nuevo.Id)){
        cout << "ERROR: El ID ya esta ocupado.\n\n";
        return;
    }
    cin.ignore();
    cout << "Ingrese el nombre de la pelicula: ";
    getline(cin, nuevo.titulo);
    if(nuevo.titulo.empty()){
        cout << "Titulo invalido. Registro cancelado\n\n";
        return;
    }
    cout << "Ingrese el director de la pelicula: ";
    getline(cin, nuevo.director);
    cout << "Ingrese el anio de la pelicula: ";
    cin >> nuevo.anio;
    if(cin.fail() || nuevo.anio < 1895){
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Anio invalido. Registro cancelado\n\n";
        return;
    }
    cin.ignore();
    cout << "Ingrese el genero de la pelicula: ";
    getline(cin, nuevo.genero);
    ofstream archivo(ruta, ios::app);
    if(!archivo){
        cout << "No se pudo abrir el archivo\n";
        return;
    }
    archivo << nuevo.Id << ";"
            << nuevo.titulo << ";"
            << nuevo.director << ";"
            << nuevo.anio << ";"
            << nuevo.genero << ".\n";
    archivo.close();
    cout << "Pelicula registrada exitosamente.\n\n";
}


void buscarPelicula(string ruta){
    ifstream archivo(ruta);
    if(!archivo){
        cout << "No hay peliculas registradas.\n";
        return;
    }
    int idBuscado;
    cout << "===BUSCAR PELICULA===\n";
    cout << "Ingrese el ID de la pelicula a buscar: ";
    cin >> idBuscado;
    if(cin.fail()){
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "ID invalido.\n";
        return;
    }
    Pelicula p;
    bool encontrada = false;
    while(archivo >> p.Id){
        archivo.ignore();
        getline(archivo, p.titulo, ';');
        getline(archivo, p.director, ';');
        archivo >> p.anio;
        archivo.ignore();
        getline(archivo, p.genero, '.');
        if(p.Id == idBuscado){
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
    if(!encontrada){
        cout << "No existe una pelicula con ese ID.\n";
    }
    archivo.close();
}

int main(){
    int opcion;
    const string ruta = "peliculas.txt";
    while(true){
        menu();
        cin >> opcion;
        if(cin.fail()){
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Debe ingresar un numero.\n\n";
            continue;
        }if(opcion == 1){
            agregarPelicula(ruta);
        }else if(opcion == 2){
        	
        }else if(opcion == 3){
            buscarPelicula(ruta);
        }else if(opcion == 6){
            cout << "Saliendo...\n";
            break;
        }else{
            cout << "Opcion no valida.\n\n";
        }
    }
}
