#include <stdio.h>
#include <math.h>

double Distancia(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));
}

int main()
{
    int c, n, numeroDaBola;
    double xb, yb, dist, menorDistancia;
    
    scanf("%d", &c);
    
    for (int i=0 ; i<c ; i++) {
        scanf("%d", &n);
        
        double xn, yn;
        
        scanf("%lf %lf", &xb, &yb);
        
        for(int j=0 ; j < n ; j++){
            scanf("%lf %lf", &xn, &yn);

            if(!j){
                menorDistancia = Distancia(xb, yb, xn, yn);
                numeroDaBola = j+1;
            } else {
                dist = Distancia(xb, yb, xn, yn);
                if(dist < menorDistancia){
                    menorDistancia = dist;
                    numeroDaBola = j+1;
                }
            }
        }
        printf("%d\n", numeroDaBola);
    }
    return 0;
}