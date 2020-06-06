// Tabla de conversion Fahrenheit - Celsius
// Con constantes simbolicas (sin numeros magicos)


#include <stdio.h>

#define LOW 0
#define UPP 300
#define STEP 20

main(){
  int fahr;
    /// Control var
  for( fahr=LOW, fahr <= UPP; fahr = fahr + STEP) {
    printf("%3d    ", fahr );
    printf("%6.1f   ", (5.0/9.0) * (fahr-32) );
       /// Conversion of fahrenheit to celsius
    printf("/n");
    };
  };
