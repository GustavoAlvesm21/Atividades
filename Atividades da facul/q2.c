#include <stdio.h> 

void ordenar(float vet[], int tam); 
int vnt(float * vet);
int vtr(float * vet); 
int vto(float * vet); 
int vta(float * vet);
int vte(float * vet);
int vti(float * vet);

int main() {

    float vet[3]; 
    int i; 
    
    scanf("%f %f %f", &vet[0],&vet[1],&vet[2]);

    ordenar(vet,3);

    if(vnt(vet)){

        printf("Não forma triangulo"); 
    }

    if(vtr(vet)){

        printf("\nTriangulo retangulo"); 
    }

    if(vto(vet)){

        printf("\nTriangulo obtusangulo"); 
    }

    if(vta(vet)){

        printf("\nTriangulo actusangulo"); 
    }

    if(vte(vet)){

        printf("\nTriangulo equilatero"); 
    }

     if(vti(vet)){

        printf("\nTriangulo isoceles"); 
    }      
    

printf("\n"); 

return 0; 

}

void ordenar(float vet[], int tam){

    int qv,i; 
    float aux; 

    for(qv=0; qv<tam-1;qv++) {

        for(i=0;i<tam-1-qv;i++){

            if(vet[i] < vet[i+1]){

                aux = vet[i]; 
                vet[i] = vet [i+1]; 
                vet[i+1] = aux; 
            
            }
        }
    
    }
} 

int vnt(float * vet){

    if(vet[0]>=vet[1]+vet[2])

        return 1;  
    else
        return 0; 
       
}

int vtr(float * vet){

    float a_quadrado, b_quadrado,c_quadrado; 

    a_quadrado = vet[0] * vet[0]; 
    b_quadrado = vet[1] * vet[1]; 
    c_quadrado = vet[2] * vet[2]; 

    if(a_quadrado == b_quadrado + c_quadrado)
        
        return 1;
    else 
        return 0;          
}

int vto(float * vet){

    float a_quadrado, b_quadrado,c_quadrado; 

    a_quadrado = vet[0] * vet[0]; 
    b_quadrado = vet[1] * vet[1]; 
    c_quadrado = vet[2] * vet[2]; 

    if(a_quadrado > b_quadrado + c_quadrado)
        
        return 1;
    else 
        return 0;          
}

int vta(float * vet){

    float a_quadrado, b_quadrado,c_quadrado; 

    a_quadrado = vet[0] * vet[0]; 
    b_quadrado = vet[1] * vet[1]; 
    c_quadrado = vet[2] * vet[2]; 

    if(a_quadrado < b_quadrado + c_quadrado)
        
        return 1;
    else 
        return 0;          
}

int vte(float * vet){ 

    if(vet[0] == vet[1] && vet[1] == vet[2])
        
        return 1;
    else 
        return 0;          
} 

int vti(float * vet){ 

    if(vet[0] == vet[1] || vet[1] == vet[2] || vet[0] == vet[2] && (!vte))
        
        return 1;
    else 
        return 0;          
} 