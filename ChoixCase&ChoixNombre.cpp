#include <iostream>
using namespace std;

int ChoixLigne()
{
	int Ligne;
	do
	{
		cout<<"Quelle case voulez-vous remplir ? Entrez une ligne entre 0 et 3."<<endl;
		cin>>Ligne;
	} while(Ligne>3 || Ligne<0);
	return Ligne;
}

int ChoixColonne()
{
	int Colonne;
	do
	{
		cout<<"Quelle case voulez-vous remplir ? Entrez une colonne entre 0 et 3."<<endl;
		cin>>Colonne;
	} while(Colonne>3 || Colonne<0);
	return Colonne;
}

int ChoixNombre()
{
	int Nombre;
	do
	{
		cout<<"Entrez un nombre entre 0 et 1"<<endl;
		cin>>Nombre;
	} while(Nombre>1 || Nombre<0);
	return Nombre;
}


int main()
{
	int Ligne, Colonne, Nombre;
	Ligne = ChoixLigne();
	Colonne = ChoixColonne();
	Nombre = ChoixNombre();
	cout<<"Votre case se trouve en "<<Ligne<<";"<<Colonne<<endl;
	cout<<"Vous y placez un "<<Nombre<<endl;
	return 0;
} 