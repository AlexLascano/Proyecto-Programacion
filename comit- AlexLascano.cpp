
void mostrarPeliculas(vector<Pelicula> &peliculas){
	cout<<" ===== LISTA DE PELICULAS =====\n";
	if(peliculas.empty()){
		cout<<"No se encuentran peliculas registradas. ";
	}
	for(int i=0;i<peliculas.size();i++){
		cout<< "--------------------\n";
		cout<<"ID: "<< peliculas[i].Id<<endl;
		cout<<"Titulo: "<< peliculas[i].titulo<<endl;
		cout<<"Director: "<< peliculas[i].director<<endl;
		cout<<"Anio: "<< peliculas[i].anio<<endl;
		cout<<"Genero: "<< peliculas[i].genero<<endl;
		cout<< "-----------------------\n";
	}
	cout <<endl;
}

