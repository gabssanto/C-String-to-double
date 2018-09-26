double a2d(char* numero){   //conversor de string para double
    int valorinteiro = 0;
    int i = 0;
    int tamanho = strlen(numero);
    float decimal = 1;
    float valordecimal = 0;

    if(!tamanho){   //caso o tamanho seja nulo a funcao retornara a mensagem e o return 0
        printf("NUMERO NAO EXISTE");
        return 0;
    }
    
    while(i < tamanho && numero[i] != '.'){ //calcula o numero antes da virgula
        valorinteiro = 10 * valorinteiro + (numero[i++] - '0');
    }

    if(i == tamanho){       //verifica se o numero e inteiro ou quebrado 
      return valorinteiro;  
    } 
    i++;
    while(i < tamanho){ //calcula a parte decimal do numero
        decimal = decimal * 0.1;
        valordecimal = valordecimal + decimal * (numero[i] - '0');
        i++;
    }

    return valordecimal + valorinteiro; // retorna a soma entre a parte decimal e a parte fracionaria
}

int main(){
      
    //conversor de string para double
    char numero[100];
    scanf("%s", numero);
    double value = a2d(numero);
    printf("%lf\n", value);

    return 0;
}
