#include <stdio.h>

int llamarascensor(int pisoa, int m){
    int ascensor=0;
    printf("LLAMAR ASCENSOR\n");
    printf("ingrese el piso desde donde llama el ascensor:\n");
    scanf ("%d", &pisoa);
    if (pisoa>9  || pisoa<0 ){
      printf("no existe el piso");
    }
    if (pisoa==ascensor){
      printf("El ascensor esta en el piso %d",ascensor);
    }
    else if (pisoa!=ascensor) {
      printf ("El ascensor se esta moviendo\n");
      for (m = ascensor; m<pisoa; m++){
        printf ("El ascensor se encuentra en %d\n", m+1);
      }
      for (m = ascensor; m>pisoa; m--){
        printf ("El ascensor se encuentra en %d\n", m-1);
      }
          if(ascensor == pisoa);{
          printf("El ascensor llego a su piso");
    
       } 
    }
    
}   

int seleccionarpiso (int pisoi, int m, int pisoa){
printf("SELECCIONAR PISO\n");
    printf("Ingrese el piso al que desea ir:\n");
    scanf ("%d", &pisoi);
      if (pisoi>9  || pisoi<0 ){
      printf("no existe el piso");
    }
    if (pisoi==pisoa){
      printf("El ascensor esta en el piso %d",pisoa);
    }
    else if (pisoi!=pisoa) {
      printf ("El ascensor se esta moviendo ya que se encontraba en el piso: %d\n", pisoa); }
      for (m = pisoa; m<pisoi; m++){
        printf ("El ascensor se encuentra subiendo al piso: %d\n", m+1);
      }
      for (m = pisoa; m>pisoi; m--){
        printf ("El ascensor se encuentra bajando al piso: %d\n", m-1);
      }
          if(pisoa == pisoi) {
          printf("El ascensor llego al piso deseado");
      }

}

int pisoactual(int pisoi){
printf("\nMOSTRAR PISO ACTUAL:\n");

      switch (pisoi){
      case 1:
        printf ("\nUsted se encuentra en el piso: %d", pisoi);
      break;
      case 2:
        printf ("\nUsted se encuentra en el piso: %d", pisoi);
      break;
      case 3:
        printf ("\nUsted se encuentra en el piso: %d", pisoi);
      break;
      case 4:
        printf ("\nUsted se encuentra en el piso: %d", pisoi);
      break;
        case 5:
        printf ("\nUsted se encuentra en el piso: %d", pisoi);
      break;
        case 6:
        printf ("\nUsted se encuentra en el piso: %d", pisoi);
      break;
        case 7:
        printf ("\nUsted se encuentra en el piso: %d", pisoi);
      break;
        case 8:
        printf ("\nUsted se encuentra en el piso: %d", pisoi);
      break;
        case 9:
        printf ("\nUsted se encuentra en el piso: %d", pisoi);
      break;

    }

}


void menuprincipal() {
int opc, pisoa, pisoi, m;

  printf("\n");
  printf("\nMENU ASCENSOR CON 10 PISOS\n");
  printf("1.- Llamar al ascensor\n");
  printf("2.- Seleccionar piso\n");
  printf("3.- Mostrar piso actual\n");
  printf("4.- Salir\n");
  printf("Ingrese el literal de la opcion\n");
  scanf ("%d", &opc);

switch (opc) {
case 1: 
llamarascensor(pisoa, m);
break;
case 2:
seleccionarpiso(pisoi, pisoa, m);
break;
case 3:
pisoactual(pisoi);
break;
case 4:
default:
break;
}
return;
}