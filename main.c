#include <stdio.h>

 char imprimirMenu();
float leerNumeroProducto(char producto[], float precio);
  float numa=0, numb=0, numc=0, numd=0, nume=0;

int main(void) {


  float precioa=150, preciob=55, precioc=180, preciod=70, precioe=120;
 
  float subta=0, subtb=0, subtc=0, subtd=0, subte=0, subtotal=0, subtotaldes=0, total=0;
  char nombre[50], cedula[20];

 char select1 = imprimirMenu();
  
  switch(select1){
    case 'a':
      subta = leerNumeroProducto("Llantas",precioa,1);
    break;
    case 'b':
      subtb = leerNumeroProducto("Pastillas de freno",preciob,2);
    break;
    case 'c':
      subtc = leerNumeroProducto("Kit de embrague",precioc,3);
    break;
    case 'd':
      subtd = leerNumeroProducto("faros",preciod,4);
    break;
    case 'e':
      subte = leerNumeroProducto("radiadores",precioe,5);
    break;
  }
  subtotal=subta+subtb+subtc+subtd+subte;

if (subtotal>100 && subtotal<=500){
  subtotaldes=subtotal*0.95;
}else if(subtotal>500 && subtotal<=1000){
  subtotaldes=subtotal*0.93;
}else if(subtotal>1000){
  subtotaldes=subtotal*0.90;
}

total=subtotaldes*1.12;

printf("Ingrese el nombre del cliente\n");
fflush(stdin);
scanf("%s",&nombre);

printf("Ingrese el numero de cedula\n");
fflush(stdin);
scanf("%s",&cedula);

printf("---------------Factura--------------\n");
printf("Nombre del cliente: %s\n",nombre);
printf("Cedula del cliente: %s\n",cedula);
printf("Producto\t\tCantidad\tSubtotal\n");
printf("Llantas\t\t\t%.2f\t\t%.2f\n",numa,subta);
printf("Pastillas Freno\t\t%.2f\t\t%.2f\n",numb,subtb);
printf("Embrague\t\t%.2f\t\t%.2f\n",numc,subtc);
printf("Faro\t\t\t%.2f\t\t%.2f\n",numd,subtd);
printf("Radiador\t\t%.2f\t\t%.2f\n",nume,subte);
printf("Sub total\t%.2f\n",subtotal);
printf("Sub total con descuento\t%.2f\n",subtotaldes); 
  printf("Total\t%.2f\n",total);


  return 0;
}

char imprimirMenu(){
  char select1;
  printf("---------------BIENVENIDOS-------------------------\n");
  printf("Elija que producto desea facturar:\n");
  printf("a) Llantas (Precio: $150)\n");
  printf("b) Kit Pastillas de freno (Precio: $55)\n");
  printf("c) Kit de embrague (Precio: $180)\n");
  printf("d) Faro (Precio: $70)\n");
  printf("e) Radiador (Precio: $120)\n");
  scanf("%c",&select1);
  return select1;
}

float leerNumeroProducto(char producto[], float precio, int numProd){

  float num, subtotal;
 
  printf("Ingrese la cantidad de %s que desea comprar: ",producto);
  fflush(stdin);
  scanf("%f",&num);
  if (numProd==1){
    numa=num;
  }
   if (numProd==2){
    numb=num;
  }
  subtotal = num*precio;
  return subtotal;
}
