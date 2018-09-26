double a2d(char* numero){
    int valorinteiro = 0;
    int i = 0;
    int tamanho = strlen(numero);
    float f = 1.0;
    float valordecimal = 0;

    if(!tamanho){
        printf("NUMERO NAO EXISTE");
        return 0;
    }
    
    while(i < tamanho && numero[i] != '.'){
        valorinteiro = 10 * valorinteiro + (numero[i++] - '0');
    }
    //verifica se o numero e inteiro ou quebrado 
    if(i==tamanho){
      return valorinteiro;  
    } 
    i++;
    while(i < tamanho){
        f = f * 0.1;
        valordecimal = valordecimal + f * (numero[i++] - '0');
    }

    return valordecimal + valorinteiro;
}

int main(){
      
    //conversor de string para double
    char numero[100];
    scanf("%s", numero);
    double value = a2d(numero);
    printf("%lf\n", value);

    return 0;
}
