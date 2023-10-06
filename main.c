#include <stdio.h>

int main(void) {

  float numa=0, numb=0, numc=0, numd=0, nume=0;
  float precioa=150, preciob=55, precioc=180, preciod=70, precioe=120;
  char select1;
  float subta=0, subtb=0, subtc=0, subtd=0, subte=0, subtotal=0, subtotaldes=0, total=0;
  char nombre[50], cedula[20];

  printf("---------------BIENVENIDOS-------------------------\n");
  printf("Elija que producto desea facturar:\n");
  printf("a) Llantas (Precio: $150)\n");
  printf("b) Kit Pastillas de freno (Precio: $55)\n");
  printf("c) Kit de embrague (Precio: $180)\n");
  printf("d) Faro (Precio: $70)\n");
  printf("e) Radiador (Precio: $120)\n");
  scanf("%c",&select1);
  switch(select1){
    case 'a':
      printf("Ingrese la cantidad de Llantas que desea comprar: ");
      scanf("%f",&numa);
      subta=precioa*numa;
    break;
    case 'b':
      printf("Ingrese la cantidad de Pastillas de freno que desea comprar: ");
      scanf("%f",&numb);
      subtb=preciob*numb;
    break;
    case 'c':
      printf("Ingrese la cantidad de Kit embrague de freno que desea comprar: ");
      scanf("%f",&numc);
      subtc=preciob*numc;
    break;
    case 'd':
      printf("Ingrese la cantidad de faros que desea comprar: ");
      scanf("%f",&numd);
      subtd=preciod*numd;
    break;
    case 'e':
      printf("Ingrese la cantidad de radiadores que desea comprar: ");
      scanf("%f",&nume);
      subte=precioe*nume;
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
scanf("%s",&nombre);

printf("Ingrese el numero de cedula\n");
scanf("%s",&cedula);

printf("---------------Factura--------------\n");
printf("Nombre del cliente: %s\n",nombre);
printf("Cedula del cliente: %s\n",cedula);
printf("Producto\t\tCantidad\t\tSubtotal\n");
printf("Llantas\t\t%f\t\t%f\n",numa,subta);
printf("Pastillas Freno\t\t%f\t\t%f\n",numb,subtb);
printf("Embrague\t\t%f\t\t%f\n",numc,subtc);
printf("Faro\t\t%f\t\t%f\n",numd,subtd);
printf("Radiador\t\t%f\t\t%f\n",nume,subte);
printf("Sub total\t%f\n",subtotal);
printf("Sub total con descuento\t%f\n",subtotaldes); 
  printf("Total\t%f\n",total);


  return 0;
}