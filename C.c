int main(int argc, char *argv[]) {
	
    float salario, inss,ir, salario_liquido;
    printf("Digite o salario: ");
    scanf("%f", &salario);
    
    if(salario <= 1693.72)
    {   
        inss = salario *0.08;
    }
    else
    if(salario >=1693.73 && salario <=2822.90)
    {
        inss = salario *0.09;
    }
    
    salario_liquido = (salario - inss) -ir; 
    printf ("Desconto INSS: %.2f\n", inss);
    printf ("\n Salario liquido: %.2f\n", salario_liquido);
    
    return 0;

}
