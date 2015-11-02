#include <stdio.h>

int main()
{
   
    char caractere; 
    
    //variaveis1
    int x, y;
    
    //variaveis2
    int altura = 0;
    int lado = 0;
    char rec;
    
    //variaveis3
    int saida = 0;
    
    
    
    while (saida == 0)
    {
        //perguntas e respostas
        printf( "tamanho do lado: " );
        scanf( "%d", &lado );
            
        printf( "tamanho da altura: ");
        scanf( "%d", &altura );
            
        printf( "caractere que deseja usar: ");
        scanf( " %c", &caractere );
            
        printf( "Olá, meu nome é Gabriel e o rentangulo ficou assim:\n" );
        
        for ( x = 0; x < altura; x++ )
        {   
            for( y = 0; y < lado; y++ )
            {
                if( x == 0 || x == altura - 1 || y == 0 || y == lado - 1)
                {
                    printf(" %c ", caractere);
                }
                else
                {
                    printf("   ");
                }
            }
            printf( "\n" );
        }
            
        printf( "deseja continuar (S/n)?" );
        scanf( " %c", &rec );
        if ( rec == 'n' )
        {
            saida = 1;
        }
    }
    
    return 0;
}