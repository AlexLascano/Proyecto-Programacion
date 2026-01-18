
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

void eliminarPelicula(string ruta){
    ifstream archivoLeer(ruta);
    if(!archivoLeer){
        cout << "No hay peliculas registradas.\n\n";
        return;
    }
    
    int idEliminar;
    cout << "===ELIMINAR PELICULA===\n";
    cout << "Ingrese el ID de la pelicula a eliminar: ";
    cin >> idEliminar;
    
    if(cin.fail()){
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "ID invalido.\n\n";
        return;
    }
    
    ofstream archivoTemp("temp.txt");
    if(!archivoTemp){
        cout << "Error al crear archivo temporal.\n\n";
        archivoLeer.close();
        return;
    }
    
    Pelicula p;
    bool encontrada = false;
    Pelicula peliculaEliminada;
    

    while(archivoLeer >> p.Id){
        archivoLeer.ignore();
        getline(archivoLeer, p.titulo, ';');
        getline(archivoLeer, p.director, ';');
        archivoLeer >> p.anio;
        archivoLeer.ignore();
        getline(archivoLeer, p.genero, '.');
        
        if(p.Id == idEliminar){
            encontrada = true;
            peliculaEliminada = p;  
        } else {
 
            archivoTemp << p.Id << ";"
                       << p.titulo << ";"
                       << p.director << ";"
                       << p.anio << ";"
                       << p.genero << ".\n";
        }
    }
    
    archivoLeer.close();
    archivoTemp.close();
    
    if(!encontrada){
        cout << "No existe una pelicula con ese ID.\n\n";
        remove("temp.txt"); 
        return;
    }
    
    cout << "\nPelicula a eliminar:\n";
    cout << "ID: " << peliculaEliminada.Id << endl;
    cout << "Titulo: " << peliculaEliminada.titulo << endl;
    cout << "Director: " << peliculaEliminada.director << endl;
    cout << "Anio: " << peliculaEliminada.anio << endl;
    cout << "Genero: " << peliculaEliminada.genero << endl;
    
    char confirmacion;
    cout << "\nEsta seguro que desea eliminar? (s/n): ";
    cin >> confirmacion;
    
    if(confirmacion != 's' && confirmacion != 'S'){
        cout << "Eliminacion cancelada.\n\n";
        remove("temp.txt");
        return;
    }
    
    remove(ruta.c_str());
    rename("temp.txt", ruta.c_str());
    
    cout << "\nPelicula eliminada exitosamente.\n\n";
}





