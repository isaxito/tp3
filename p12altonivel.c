// Algoritmo de alto nivel
 
int arr[16] = {1, 3, 6, 7, 12, 34, 5, 76, 2, 0, 2, 54, 34, 13, 43, 11};
int diff[16]; // hacer 0
int prom = 0;
int aux = 0;
int min;
int index;
for(int i = 0; i < 16; i++)
    prom = prom + arr[i];
prom = prom / 16;
 
// Calcular la diferencia y el que tenga la menor diferencia es la respuesta
 
for(int i = 0; i < 16; i++)
	diff[i] = prom - arr[i]; // valor absoluto de la diferencia
 
// comparo con 0 para ver si es negativo y hago resta inversa ver un poco mas en casa
 
for(int i = 0; i < 16; i++)
{
	if(diff[i] < min)
	{
		min = diff[i];
		index = i;
	}
}
 
// el elemento mas cercano a la media es arr[i]
