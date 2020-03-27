#include <iostream>
using namespace std;

void enfermedad1(){
	int dias, edad, cobro;
/*	char nombre[40];
	cout<<"\nIngrese el nombre del paciente: \n";
		cin>>nombre[40];
	*/
		cout<<"Ingrese la edad del paciente\n";
			cin>>edad;
	if (edad<1 || edad>100){
		cout<<"~~~~~~~~~~~~~~\n";
		cout<<"Edad invalida\n";
		cout<<"~~~~~~~~~~~~~~\n";
			return enfermedad1();
	}else{
		cout<<"Ingrese los dias de estancia\n";
			cin>>dias;
	if(dias<1 || dias>90){
		cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~\n";
		cout<<"Numero de dias invalido\n";
		cout<<"~~~~~~~~~~~~~~~~~~~~~~~~\n";
			return enfermedad1();
	}else
		cout<<"El paciente necesito algun cobro adicional?\n";
		cout<<"1--si\n";
		cout<<"2--no\n";
			cin>>cobro;
	switch(cobro){
	case 1:
		cout<<"\n--------------------------------------\n";
	 	cout<<"El costo adicional es de $500\n";
		cout<<"El total de gastos por los "<<dias<<" dias es: $"<<dias*2500<<endl;
		cout<<"El total a pagar es de: $"<<500+dias*2500<<endl;
		cout<<"----------------------------------------\n";
			break;
	case 2:	
		cout<<"El total a pagar es de: $"<<dias*2500<<endl;
			break;
	default: 
		cout<<"~~~~~~~~~~~~~~\n";
		cout<<"Opcion ivalida\n";
		cout<<"~~~~~~~~~~~~~~\n";
		return enfermedad1();
		}
	}
}

void enfermedad2(){
	int dias;
	cout<<"Ingrese los dias de estancia\n";
		cin>>dias;
	
	if(dias<1 || dias>100){
		cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~\n";
		cout<<"Numero de dias invalido\n";
		cout<<"~~~~~~~~~~~~~~~~~~~~~~~~\n";
		return enfermedad1();
	}else
		cout<<"--------------------------------\n";
		cout<<"El total de gastos por los "<<dias<<" dias es: $"<<dias*1600<<endl;
		cout<<"--------------------------------\n";
}

void menu(){
	int opcion;
		cout<<"\nLos tipos de enfermedad y precios por dia son: \n";
		cout<<"Enfermedad 1-----$2500\n";
		cout<<"Enfermedad 2-----$1600\n";
		cout<<"Enfermedad 3-----$1000\n";
		cout<<"Salir------4\n";
		cout<<"Ingrese una opcion:\n";
		cin>>opcion;
	
	switch(opcion){
		case 1: 
			enfermedad1();
			return menu();
			break;
		case 2: 
			enfermedad2();
			break;
		case 4: 
			cout<<"Fin del programa\n"; 
			break;
		default:
			cout<<"~~~~~~~~~~~~~~~~~~~~~~\n"; 
			cout<<"Error, opcion invalida\n";
			cout<<"~~~~~~~~~~~~~~~~~~~~~~\n";
			return menu();
	}
}

int main(){
	menu();
}







/*

#include <iostream>
using namespace std;

/*dias(){
	cout<<"Dias\n";
}

descuento(){
	cout<<"Descuento\n";
}

enfermedad1(){
	int edad;
cout<<"enfermedad 1\n";
}

enfermedad2(){
cout<<"enfermedad 2\n";
}


void menu(){
	int opcion;
		cout<<"\nLos tipos de enfermedad y precios por dia son: \n";
		cout<<"Enfermedad 1-----$2500\n";
		cout<<"Enfermedad 2-----$1600\n";
		cout<<"Enfermedad 3-----$1000\n";
		cout<<"Salir------4\n";
		cout<<"Ingrese una opcion:\n";
		cin>>opcion;
	
	switch(opcion){
		case 1: 
			enfermedad1();
			return menu();
			break;
		case 2: 
			enfermedad2();
			break;
		case 4: 
			cout<<"Fin del programa\n"; 
			break;
		default:
			cout<<"~~~~~~~~~~~~~~~~~~~~~~\n"; 
			cout<<"Error, opcion invalida\n";
			cout<<"~~~~~~~~~~~~~~~~~~~~~~\n";
			return menu();
	}
}

int main(){
	menu();
}*/

