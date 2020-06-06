typedef struct Punto {
  int x; int y; int z;
  };
  
float distancia (Punto a, Punto b);

main(){
  Punto p1, p2;
  printf("Introduzca Punto1");
  scanf("%d,%d,%d", &p1.x, &p1.y, &p1.z);
  printf("Introduzca Punto2");
  scanf("%d,%d,%d", &p2.x, &p2.y, &p2.z);
  d = distancia(p1,p2);
  printf("Distancia = %f", d);
  };
  
float distancia(Punto a, Punto b) {
  float res = 0;
  res = sqrt( 
      pow(a.x - b.x, 2)
    + pow(a.y - b.y, 2)
    + pow(a.z - b.z, 2)
    );
  return res;
  };

