// Entrada/Salida de caracteres

/// c = getchar() asigna en c la proxima entrada de caracter
/// putchar(c)  escribe el valor de la variable como char

// Copia la entrada en la salida

#include <stdio.h>

main(){
  int c;
  // Declaracion de variable c, numerica
  c = getchar();
  while(c!=EOF){
    \\\ EOF: End Of File
    \\\\ Declarado en libreria stdio.h
    
    putchar(c);
    c = getchar(c);
    };
  };
