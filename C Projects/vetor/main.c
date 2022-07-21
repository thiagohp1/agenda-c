    #include <stdio.h>

    int main(int argc, char const *argv[])
    {
       int T[4], V[4], U[4];

        printf("Digite os valores do vetor V\n");
        for(int i = 0; i < 4; i++){
            scanf("%i",&V[i]);
        }
        printf("Digite os valores do vetor U\n");
        for(int i = 0; i < 4; i++){
            scanf("%i",&U[i]);
        }
        for(int i = 0; i < 4; i++){
           printf("%i,",V[i]);
        }

        printf("\n");

        for(int i = 0; i < 4; i++){
            printf("%i,",U[i]);
        }
        for(int i = 0; i < 4; i++){
            if(((V[i] % 2) == 0) && ((U[i] % 2) == 0)){
                T[i] = V[i] + U[i];

            }
            else if(((V[i] % 2) != 0) && ((U[i] % 2) != 0)){
                T[i] = V[i] - U[i];
   
            }
            else{
                T[i] = V[i] * U[i];
     
            }
        }

        printf("\n");
        
        for(int i = 0; i < 4; i++){
            printf("%i,",T[i]);
        }

        return 0;
    }
    
