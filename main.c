#include <stdio.h>
#include <stdlib.h>

//codigo creado por Camilo Ramirez y Edward Duarte
int as;//variable para el primer ejercicio
int ed;//variable para el primer ejercicio
int vector [3];//vector para el segundo ejecicio
int vectora [3];
int vectorb [3];
int vectorc [3];
int vectord [3];
FILE *farchivo;
void swap(int *num1, int *num2)//función para el primer ejercicio
{
int tem;//variable auxiliar para cambiar los numeros
tem = *num1;//asignar temp al valor que guarda la dirección del apuntador 1
*num1 = *num2;//asignar datos del num2 al num 1
*num2 = tem;//asignar el valor de tem a num2
farchivo= fopen("archivo.txt","w");//crear el archivo
fprintf(farchivo,"%s","\nPrimer ejercicio:\n");
fclose(farchivo);
printf("Los valores invertidos son: %d y %d\n",*num1,*num2);//imprimir los valores
farchivo= fopen("archivo.txt","a");
fprintf(farchivo,"%s","Los valores invertidos son: ");
fprintf(farchivo,"%d",*num1);
fprintf(farchivo,"%s"," y ");
fprintf(farchivo,"%d",*num2);
fclose(farchivo);
}
int main()
{
int *apu1;//crear el apuntador 1
apu1 = &vector[0];//asignarle el primer valor del vector
printf("\nPrimer ejercicio:\n");
printf("Ingresar los valores\n");
scanf("%d",&ed);//escribir el valor de ed
scanf("%d",&as);//escribir el valor ee as
printf("Los valores ingresados son: %d y %d\n",ed,as);
swap(&ed,&as);//llamar la función para cambiar los valores
printf("Segundo ejercicio:\n");
farchivo= fopen("archivo.txt","a");
fprintf(farchivo,"%s","\nSegundo Ejercicio:\n");
fclose(farchivo);
printf("Ingresar el vector al que se le realiza la suma de componentes\n");
for(int x = 0; x<3 ; x++)//for para escribir el vector completo
{
scanf("%d",&vector[x]);
}
printf("Se realiza la suma de las componentes del vector:");
printf("\n%d",sumComp(apu1));//llamar la función sumar componentes con el valor del apuntador
farchivo= fopen("archivo.txt","a");
fprintf(farchivo,"%d",sumComp(apu1));
fclose(farchivo);
printf("\nTercer ejercicio:\n");
farchivo= fopen("archivo.txt","a");
fprintf(farchivo,"%s","\nTercer ejercicio:\n");
fclose(farchivo);
printf("Ingresar los dos vectores a los que se le realizan la permutaci%cn:\n",162);
for(int b = 0; b<3 ; b++)//for para escribir el vector completo
{
scanf("%d",&vectora[b]);
}
printf("digite el segundo vector: \n");
for(int i = 0; i<3 ; i++)//for para escribir el segundo vector completo
{
scanf("%d",&vectorb[i]);
}
printf("\nLa permutaci%cn de los dos vectores da como resultado: ",162);
changeVec(&vectora,&vectorb);//llamar la función para cambiar el valor de los vectores
printf("\nCuarto ejercicio:\n");
farchivo= fopen("archivo.txt","a");
fprintf(farchivo,"%s","\nCuarto ejercicio:\n");
fclose(farchivo);
printf("Digite los vectores a los que desea hacerle producto punto:");
for(int a = 0; a < 3 ; a++)//for para escribir el vector completo
{
scanf("%d",&vectorc[a]);
}
printf("digite el segundo vector: \n");
for(int z = 0; z < 3 ; z++)//for para escribir el vector completo
{
scanf("%d",&vectord[z]);
}
printf("\nProducto punto igual a:\n");
printf("%d",dot(&vectorc,&vectord));
farchivo= fopen("archivo.txt","a");
fprintf(farchivo,"%d",dot(&vectorc,&vectord));
fclose(farchivo);
}
int sumComp (int *apu1)//función para sumar todos los componentes de un vector
{
int suma = 0;//variable donde se va a acumular la suma
for(int i = 0;i < 3;i++)
{
suma += *(apu1+i);//sumar a suma el valor de apu1 consecutivamente
}
return(suma);//returnar suma
}
void changeVec (int *apuntadorV1, int *apuntadorV2)//función para cambiar los valores de los vectores
{
int vec [3];
for(int i = 0;i < 3;i++)//for para escribir los valores del vector en un vector auxiliar
{
vec[i]= *(apuntadorV1+i);
}
for(int i = 0;i < 3;i++)//for para escribir los datos del apuntador 2 en el 1
{
*(apuntadorV1+i)= *(apuntadorV2+i);
printf("%d ",*(apuntadorV1+i));
farchivo= fopen("archivo.txt","a");
fprintf(farchivo,"%d",*(apuntadorV1+i));
fclose(farchivo);
}
printf(" y ");
farchivo= fopen("archivo.txt","a");
fprintf(farchivo,"%s"," y ");
fclose(farchivo);
for(int i = 0;i < 3;i++)//for para escribir los datos del vector auxiliar en el apuntador 2
{
*(apuntadorV2+i)=vec[i];
printf("%d ",*(apuntadorV2+i));
farchivo= fopen("archivo.txt","a");
fprintf(farchivo,"%d",*(apuntadorV2+i));
fclose(farchivo);
}
}
int dot(int *apuntadorV1, int *apuntadorV2)//función para sacar el producto punto de 2 vectores
{
int productoPunto = 0;//nombrar la variable auxiliar
for(int i = 0;i < 3;i++)//for para recorrer todo el vector
{
productoPunto += ((*(apuntadorV1+i))*(*(apuntadorV2+i)));//se multiplica los valores de los apuntadores y luego se añaden a la variable auxiliar
}
return(productoPunto);//retornar el valor del producto punto
}
