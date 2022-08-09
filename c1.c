int main(int argc, char const *argv[])
{
    int contador;
    printf("\nDigite um numero: ");
    scanf("%d", &contador);

    for(contador;contador >=1; contador--)
    {
        printf("%d", contador);
    }

    return 0;
    
}
//////////////////////////////////////////////////////////////////////////////////////////////////////// TESTE 2


int main(int argc, char const *argv[])
{
   int linha, coluna;
   int matriz[2][2];
   for(linha=0; coluna<2; linha++)

   {
      for(coluna=0; coluna<2; coluna++)
      {
        printf("Digite os valores da matriz para linha %d, coluna %d:", linha+1, coluna+1);
         scanf("%d", &matriz[linha][coluna]);
         for(linha=0; linha<2; linha++){
            for(coluna=0; coluna<2; coluna++){
               printf("%d\t", matriz[linha][coluna]);
            }
            printf(""Veja a sua matriz");
            printf("\n\n");
            
         }
      }
    return 0;

}
