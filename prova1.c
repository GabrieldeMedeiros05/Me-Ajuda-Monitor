#include <stdio.h>
#include <math.h>

int main()
{
    int c, n, i, j, numeroDaBola;
    double xb, yb, distancia;
    
    scanf("%d", &c);
    
    for (i=0;i<c;i++) {
        scanf("%d", &n);
        
        double xn[n], yn[n];
        
        scanf("%lf %lf", &xb, &yb);
        
        scanf("%lf %lf", &xn[0], &yn[0]);
        
        distancia = sqrt((xb-xn[0])*(xb-xn[0]) + (yb-yn[0])*(yb-yn[0]));
        
        if (n == 1) {
            numeroDaBola = 1;
        } else {
            for(j=1;j<n;j++) {
                scanf("%lf %lf", &xn[j], &yn[j]);
                if (distancia > sqrt(((xb-xn[j])*(xb-xn[j])) + ((yb-yn[j])*(yb-yn[j])))){
                    distancia = sqrt(((xb-xn[j])*(xb-xn[j])) + ((yb-yn[j])*(yb-yn[j])));
                    numeroDaBola = j+1;
                    }
            }
        }
        printf("%d\n", numeroDaBola);
        
    }
    
    return 0;
}