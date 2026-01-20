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


void actualizar (vector<Pelicula> &movies, string ruta) {
    //necesito la funcion guardar archivos
    //y una funcon que se encarge y reescriba el archivo al actualizar

    bool encontrado = false;
    int idBuscar;
    cout<<"Ingrese Id para actualizar:";
    cin>>idBuscar;
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
            guardarArchivo(ruta,movies);
            cout<<"peliculas guardas y actulizadas ";
            encontrado=true;
            break;



        }
    }


}



int main() {
    vector <Pelicula> peliculas;
    const string ruta = "peliculas.txt";
}
