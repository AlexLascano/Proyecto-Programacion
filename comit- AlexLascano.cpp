
void mostrarPeliculas(string ruta){
    ifstream archivo(ruta);

    if(!archivo){
        cout << "No se encuentran peliculas registradas.\n\n";
        return;
    }

    Pelicula p;
    cout << "===== LISTA DE PELICULAS =====\n";

    while(archivo >> p.Id){
        archivo.ignore();
        getline(archivo, p.titulo, ';');
        getline(archivo, p.director, ';');
        archivo >> p.anio;
        archivo.ignore();
        getline(archivo, p.genero, '.');

        cout << "--------------------\n";
        cout << "ID: " << p.Id << endl;
        cout << "Titulo: " << p.titulo << endl;
        cout << "Director: " << p.director << endl;
        cout << "Anio: " << p.anio << endl;
        cout << "Genero: " << p.genero << endl;
    }

    archivo.close();
    cout << endl;
}


