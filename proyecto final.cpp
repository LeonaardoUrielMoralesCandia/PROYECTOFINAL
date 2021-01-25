/* 
   PROYECTO FINAL                                              MORALES CANDIA LEONARDO URIEL  
   25/01/2021
*/

// Librerias utilizadas 
#include<stdio.h>
#include <stdlib.h>
//Funciones llamadas durante la funcion principal para cada problema:
void PT (); 
void gastosM ();
void gananciasNA ();
void gananciasNM ();
// Funcion principal 
int main(){
	// FUNCION PARA EL CAMBIO DE COLOR DE LA PANTALLA Y LETRA 
	system("COLOR B0");
	 system("pause");
	unsigned int selec=0;
	//INICIO CICLO DO-WHILE
	do {
		 printf("\n\n\n\t\t\t\t\t-------------------------- Bienvenido a Industrias Prolag Ing Candia-------------------------- \n \n\n\n");
	     printf("\n\n\n\t\t\t\t\t\t\t\t------------Como lo podemos ayudar?-------------\n\n\n ");
	     printf("\n\n\n"); 
	     printf(" 1) Precio de los tableros y tiempo de elavoracion \n\n");
	     printf(" 2) Gastos mensuales \n\n");
	     printf(" 3) Ganancias netas mesuales \n\n");
	     printf(" 4) Ganancias netas anuales \n\n");
	     printf(" \n\n seleccione \n\n ");
	     scanf("%u", &selec);
	      // INICIO DE SWITCH PARA SELECCIONAR QUE PROGRAMA LLEVAR ACABO 
			switch (selec) {
		
		
			default:
				printf("\n\n\t\tSeleccione una opcion porfavor \n");
				printf("\n\n");
			break;
		
		
			case 1:
				printf("\n\n\n\n\t\t\t\t\t\t--------Precio de los tableros y tiempo de elavoracion----------\n\n");
				PT ();
				printf("\n\n");
			break;
		
		
			case 2:
				printf("\n\n\n\n\t\t\t\t\t\t\t---------- Gastos mensuales----------\n\n");
				gastosM ();
				printf("\n\n");
			break;
		
		
			case 3:
				printf("\n\n\n\n\t\t\t\t\t\t\t----------Ganancias netas mesuales----------\n\n");
			    gananciasNM ();
				printf("\n\n");
			break;
			
			
		    case 4:
		    	printf("\n\n\n\n\t\t\t\t\t\t\t----------Ganancias netas anuales---------- \n\n");
			     gananciasNA ();
				printf("\n\n");
		    break;
		setbuf(stdin, NULL); // limpia el buffer del teclado
		
		}
	
	//Final de la estructura de iteración 'do-while' para repetir el código las veces que se desee
	} while (selec != 5);
	
	return 0; // FIN DEL MENU PRINCIPAL
	}
	
	
	// PRIMER ELECCION PARA SABER QUE TIPO DE TABLERO SE VA A COTIZAR 
	void PT (){
		// VARIABLE LOCAL 
		unsigned int tableros=0;
		// INICIO DE CICLO DO-WHILE
	do {
	printf("\n\n\n\t\t\t\t\t\t\t\t------MENU DE TABLEROS------\n\n");
	printf("\n\n");
	printf("Seleccione el tablero que desea cotizar \n \n");
	printf("\t\t1) Tablero S5 \n\n");
	printf("\t\t2) Tablero S4 \n\n");
	printf("\t\t3) Tablero Fx \n\n");
	printf("\t\t4) salir \n\n");
		printf("\n\n\t Seleccion : ");
		scanf("%u", &tableros);
		//SWITCH PARA SELECCIONAR TABLERO A COTIZAR 
		switch (tableros) {
		
		
			default:
				printf("\n\n\t\t Seleccione otra funcion del menu principal \n\n");
				printf("\n\n");
			break;
		
		
			case 1:
				printf("\n\n\n\n\t\t\t\tUsted ha seleccionado la cotizacion del tablero S5.\n\n");
				printf("\n\n\n\n\t\t\t\tEl tiempo de elavoracion de este tablero es de 7 dias\n");
				printf("\n\n\n\n\t\t\t\tEl precio promedio de este tablero es de 45,000mxn\n ");
				printf("\n\n\n");
			break;
		
		
			case 2:
				printf("\n\n\n\n\t\t\t\tUsted ha selecciona la cotizacion del tablero S4.\n\n");
				printf("\n\n\n\n\t\t\t\tEl tiempo de elavoracion de este tablero es de 5 dias\n");
				printf("\n\n\n\n\t\t\t\tEl precio promedio de este tablero es de 35,000mxn\n ");
				printf("\n\n\n");
			break;
			
			case 3:
				printf("\n\n\n\n\t\t\t\tUsted ha selecciona la cotizacion del tablero Fx.\n\n");
				printf("\n\n\n\n\t\t\t\tEl tiempo de elavoracion de este tablero es de 1 mes\n");
				printf("\n\n\n\n\t\t\t\tEl precio promedio de este tablero es de 90,000mxn\n ");
				printf("\n\n\n");
		
		// FIN DEL SWITCH 
		}
	//FINAL DEL CICLO DO-WHILE 
	}while (tableros != 4);
	
	return;
	}
	// FIN DEL PROGRAMA
	
	//SEGUNDA ELECCION GASTOS QUE SE GENERAN EN UN MES
	
 void gastosM (){
		// VARIABLES LOCALES 
        int salario;
        int trabajadores;
        int gastomensual;

         // BLOQUE DE INSTRUCCIONES 
          printf("\n\t\t\t\t\t\t *De renta mensual son $10,000\n\n");

          printf("\n\t\t\t\t\t\t *El salario mensual de cada trabajador es de $4,800 \n\n");

          printf("\n\t\t\t\t\t\t *Se pagan $30 de agua cada mes \n\n");

          printf("\n\t\t\t\t\t\t *Se paga de luz $700 mensuales\n\n");

          printf("\n\t\t\t\t\t\t *Decomida se gastan $1400 mensuales\n\n");

          printf ("\n\n\t\t\t\t\t\tEscriba la cantidad de trabajadores\t ");

          scanf("%i",&trabajadores);

          printf("\n\n\t\t\t\t\t\tEn total de salario se pagan $ %i\n\n", trabajadores*4800 );

          salario= trabajadores*4800;

          printf("\n\n\t\t\t\t-----Tus gastos mensuales seran de -----$ %i\n\n", salario+10000+30+700+1400);
          gastomensual= salario+10000+30+700+1400;

     return ;
       
    } 
    // FIN DEL PROGRAMA
    
    
     // TERCER ELECCION  GANANCIAS NETAS MENSUALES 
  void gananciasNM() {
   // VARIABLES LOCALES 
   int opcion, cantidad, cantidad1, cantidad2, ganancia, ganancia1, ganancia2, ventasT, trabajadores, salario, GM;
     // INICIO DEL CICLO DO-WHILE    
        do{
 	        printf("\n\n\t\t\t\tQue fue lo que vendio este mes?\n\n");
            printf("\n\n\t\t\t\t\t\t\tMENU\n\n");
            printf("\n\n\t\t\t 1)Tablero S4");
            printf("\n\n\t\t\t 2)Tablero S5");
            printf("\n\n\t\t\t 3)Tablero FX");
            printf("\n\n\t\t\t 4)Ganancias mensuales");
            printf("\n\nSeleccione\n\n");
            scanf("%d",&opcion);
                 // SWITCH PARA SELECCIONAR LA CANTIDAD Y DETERMINAR EL PRECIO TOTAL DEL TABLERO SELECCIONADO 
                  switch (opcion){
	                   default:
				        printf("\n\n\t\t\t\t--- Ganancias mensuales---\n\n");
				        printf("\n\n");
			             break;
		
		
			            case 1:
				          printf("\n\n\t\tCuantos tableros fueron?\t");
				          scanf("%d",&cantidad);
				          printf("\n\n\t\t El precio por estos tableros es de $ %i \n\n",cantidad*35000);
				          ganancia= cantidad*35000;
				          printf("\n\n");
			            break;
		
		
			            case 2:
				          printf("\n\n\t\tCuantos tableros fueron?\t");
				          scanf("%d",&cantidad1);
				          printf("\n\n\t\t El precio por estos tableros es de $ %i \n\n",cantidad1*45000);
				          ganancia1= cantidad1*45000;
				           printf("\n\n");
			            break;
		
		
			            case 3:
				          printf("\n\n\t\tCuantos tableros fueron?\t");
				          scanf("%d",&cantidad2);
				          printf("\n\n\t\t El precio por estos tableros es de $ %i \n\n",cantidad2*90000);
				          ganancia2= cantidad2*90000;
				           printf("\n\n");
			            break;
			
                   }       // FIN DEL SWITCH
                   // FIN DEL CICLO DO-WHILE 
        }     while (opcion != 4);
        //BLOQUE DE INSTRUCCIONES 
        printf("\n\n\t\t\t Dinero recaudado por ventas totales del mes $ %i\n\n",ganancia+ganancia1+ganancia2);
        ventasT= ganancia+ganancia1+ganancia2;
        printf ("\n\n\t\t\tEscriba la cantidad de trabajadores\t ");
        scanf("%i",&trabajadores);
        printf("\n\n\t\t\t--En total de salario se pagan $ %i\n\n", trabajadores*4800 );
        salario= trabajadores*4800;
        printf("\n\n\t\t\t--Tus gastos mensuales seran de $ %i\n\n", salario+10000+30+700+1400);
        GM=salario+10000+30+700+1400;
        printf("\n\n\t\t\t----- Tus ganancias netas mensuales son de----- $ %i",ventasT-GM);
     
        return ;
   }
   // FIN DEL PROGRAMA
   
   //CUARTA ELECCION GANANCIAS NETAS ANUALES 
   
    
// LIMITE DEFINIDO PARA EL CICLO FOR
#define LIMITE 12
// VARIABLES LOCALES 
void gananciasNA(){
int opcion;
int cantidad, cantidad1, cantidad2, ganancia, ganancia1, ganancia2;
int trabajadores, salario;
int ventasT, GM;
float GNM=0, GNA=0;
unsigned int meses=1;
// INICIO DEL CICLO FOR
    for (meses=1; meses<=LIMITE; meses++) {
    	printf("\n\n\n\t\t\t\t\t-----Para el mes numero----- %d", meses); 
// CICLO DO-WHILE PARA REPETIR LAS VECES NECESARIAS     	
     do{
 	     
 	     printf("\n\n\t\t\tQue fue lo que vendio este mes?\n\n");
         printf("\n\n\t\t\t\t\t\t\tMENU\n\n");
         printf("\n\n\t\t Los tableros que no vendio favor de seleccionarlos y marcar un 0 porfavor\n\n");
         printf("\n\n\t\t\t 1)Tablero S4");
         printf("\n\n\t\t\t 2)Tablero S5");
         printf("\n\n\t\t\t 3)Tablero FX");
         printf("\n\n\t\t\t4)Ganancias mensuales");
         printf("\n\nSeleccione\n\n");
         scanf("%d",&opcion);
                //INICIO DE SWITCH PARA DETERMINAR LA CANTIDA DE TABLEROS Y EL PRECIO DE LOS MISMOS 
            switch (opcion){
	          default:
				 
				printf("\n\n");
			   break;
		     
		  
			  case 1:
				printf("\n\n\t\tCuantos tableros fueron?");
				scanf("%d",&cantidad);
				printf("\n\n\t\t El precio por estos tableros es de $ %i \n\n",cantidad*35000);
				ganancia= cantidad*35000;
				
				printf("\n\n");
			  break;
		     
		      
			  case 2:
				printf("\n\n\t\tCuantos tableros fueron?");
				scanf("%d",&cantidad1);
				printf("\n\n\t\t El precio por estos tableros es de $ %i \n\n",cantidad1*45000);
				ganancia1= cantidad1*45000;
			 
			  break;
		      
		 
			  case 3:
				printf("\n\n\t\tCuantos tableros fueron?");
				scanf("%d",&cantidad2);
				printf("\n\n\t\t El precio por estos tableros es de $ %i \n\n",cantidad2*90000);
				ganancia2= cantidad2*90000;
		 		
			   break;
			   // PARA LIMPIAR EL TECLADO 
			   setbuf(stdin, NULL); 
           }  // FIN DEL SWITCH
          } while (opcion != 4); // FIN DE LA ESTRUCTURA DO-WHILE
          
          // BLOQUE DE INSTRUCCIONES PARA LLEVAR ACABO EL PROBLEMA 
          
     printf("\n\n\t\t\t tableros S4 vendidos:\t%i", ganancia);
     printf("\n\n\t\t\t tableros S5 vendidos:\t%i", ganancia1);
     printf("\n\n\t\t\t tableros FX vendidos:\t%i", ganancia2);
     printf("\n\n\t\t\t\t\t\t total%i\t",ganancia+ganancia1+ganancia2);
     printf("\n\n\t\t\t\tCaptura el monto total de ventas del mes\t");
     scanf("%i",&ventasT);
     printf ("\n\n\t\t\t\tEscriba la cantidad de trabajadores\t ");
     scanf("%i",&trabajadores);
     salario= trabajadores*4800;
     printf("\n\n\t\t\t\tEn total de salario se pagan $ %i\n\n", trabajadores*4800 );

      printf("\n\n\n\t\t\t\tTus gastos mensuales seran de $ %i\n\n", salario+10000+30+700+1400);
      printf("\n\n\t\t\t\tCaptura el monto de gastos mensuales\t");
      scanf("%i",&GM);
      printf("\n\n\t\t\t\tTus ganancias netas de este mes son %i",ventasT-GM);
  
      printf("\n\n\n\t\t\t\t captura las ganancias del mes\t");
      scanf("%f",&GNM);
      GNA+=GNM;
   } // FIN DEL CICLO FOR
  printf("\n\n\t\t\t\t\t\t--------Tus ganancias netas anuales son $ %f--------\n\n\n\n",GNA);
  printf("\n\n\t\t\t\t\t--------Eso es todo esperamos su pronto regreso Ing. CANDIA--------\n\n\n\n");
  return ;
	
}
// FIN DEL PROGRAMA

// FIN DEL PROYECTO 
		
	
	
	
