#include <iostream>

using namespace std;

extern void agregarProducto(string descripcion, int cantidad, double precio);

void productos(int opcion)
{
	system ("cls");
	
	int opcionProducto = 0;
	switch (opcion)
	{
		case 1:
		{
			cout<<"Bebidas calientes"<<endl;
		    cout<<"*****************"<<endl;
		    cout<<"1 - Capuccino "<<endl;
		    cout<<"2 - Expresso" <<endl;
		    cout<<endl;
		    
		    cout<<"Ingrese una opcion: "; 
		    cin>>opcionProducto;
		    
			switch (opcionProducto)
			{
				case 1:
					agregarProducto("1 Capuccino - L.40.00",1,40);
					break;
				case 2:
					agregarProducto("1 Expresso - L.30.00",1,30);
					break;
				default:
					{
					cout<<"Opcion no valida";
					return;
					break;
					}
					
			}
			
			cout<< endl;
			cout<< "Producto agregado! "<<endl<<endl;
			system("pause");
			
			break;
		}
		
		case 2:
		{
			cout<<"Bebidas frias"<<endl;
			cout<<"*************"<<endl;
			cout<<"1 - Granitas de Sabores "<<endl;
		    cout<<"2 - Te helado " <<endl;
		    cout<<"3 - Jugos "<<endl;
		    cout<<endl;
		    
		    cout<<"Ingrese una opcion: "; 
		    cin>>opcionProducto;
		    
			switch (opcionProducto)
			{
				case 1:
					agregarProducto("1 Granitas de Sabores - L.40.00",1,40);
					break;
				case 2:
					agregarProducto("1 Te helado - L.25.00",1,25);
					break;
				case 3:
					agregarProducto("1 Jugos - L.30.00",1,30);
					break;
				default:
					{
					cout<<"Opcion no valida";
					return;
					break;
					}
					
			}
			
			cout<< endl;
			cout<< "Producto agregado! "<<endl<<endl;
			system("pause");
			
			break;
		}
		
		case 3:
		{
			cout<<"Reposteria"<<endl;
			cout<<"**********"<<endl;
			
			cout<<"1 - Pastel 3 Leches "<<endl;
		    cout<<"2 - Enrollado " <<endl;
		    cout<<"3 - Enmantecado "<<endl;
		    cout<<endl;
		    
		    cout<<"Ingrese una opcion: "; 
		    cin>>opcionProducto;
		    
			switch (opcionProducto)
			{
				case 1:
					agregarProducto("1 Pastel 3 Leches - L.50.00",1,50);
					break;
				case 2:
					agregarProducto("1 Enrollado - L.20.00",1,20);
					break;
				case 3:
					agregarProducto("1 Enmantecado - L.10.00",1,10);
					break;
				default:
					{
					cout<<"Opcion no valida";
					return;
					break;
					}
					
			}
			
			cout<< endl;
			cout<< "Producto agregado! "<<endl<<endl;
			system("pause");
			
			break;
		}
		
		{
			default:
			break;
		}
		
	}
}
