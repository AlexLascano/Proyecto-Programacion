#include<iostream>
#include<string>
#include <vector>
#include <fstream>
#include <sstream>
using namespace std;
struct Pelicula{
    int Id;
    string titulo;
    string director;
    int anio;
    string genero;
};

int leerEnteros(string mensaje) {
    int valor;
    while (true) {
       cout<<mensaje;
        cin>>valor;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout<<"Ingrese solo numeros ";
        }else {
            return valor;
        }
    }

}

void actualizar (vector<Pelicula> &movies) {
    //necesito la funcion guardar archivos
    //y una funcon que se encarge y reescriba el archivo al actualizar
    int idBuscar=leerEnteros("Ingrese Id para actualizar:");
    for (int i=0;i<movies.size();i++) {
        if (movies[i].Id==idBuscar) {
            cout<<"Titulo nuevo: ";
            cin.ignore();
            getline(cin,movies[i].titulo);
            cout<<"Director nuevo: ";
            getline(cin,movies[i].director);
            //como se va hacer interfaz graficar voy a eviat usae do while por el momento
            cout<<"Año nuevo:";
            cin>>movies[i].anio;
            cout<<"Nuevo genero:";
            getline(cin,movies[i].genero);


            //AQUI LA NUEVA FUNCION DE GUARDA ARCHIVO
            //guardaArchivo(peliculas)
            cout<<"peliculas guardas y actulizadas ";
            break;



        }
    }


}



int main() {
    vector <Pelicula> peliculas;
    const string ruta = "peliculas.txt";
}
