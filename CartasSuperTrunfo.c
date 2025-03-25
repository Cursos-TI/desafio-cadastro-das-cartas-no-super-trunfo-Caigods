#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    char estado1, estado2;                  //Variável da primeira parte do código das cartas 1 e 2
	char codigoCarta1[3], codigoCarta2[3];  //Variável da segunda parte do código das cartas 1 e 2
	char cidade1[50], cidade2 [50];         // Nome da cidade
	int populacao1, populacao2;             //tamanho da população
	float area1, area2;                     //Área em Km^2 da cidade
	float pib1, pib2;                       // Produto Interno Bruto da cidade
	int pontoTuris1, pontoTuris2;           //Quantidade de pontos turisticos na cidade

	printf("//////////////////////////////\n");
	printf("/'          MENU            '/\n");
	printf("/'           DE             '/\n");
	printf("/'        CADASTRO          '/\n");
	printf("/'      SUPER TRUNFO        '/\n");
	printf("/'--------------------------'/\n");
	printf("//////////////////////////////\n");
	printf("/'Digite a letra para o codigo da carta 1(A-H):\n");
	scanf(" %c", &estado1);
//Cadastro Carta 1 -------------------------------------------------------------------------------------------------------------------------------------
	printf(" Digite o codigo da carta (01-04):\n");
	scanf("%s", codigoCarta1);

	getchar(); // Limpa o buffer
    printf("Digite o nome da cidade:\n");
    fgets(cidade1, sizeof(cidade1), stdin); //ler dados mesmo depois da tecla "space"
   
	printf(" Digite a quantidade de habitantes na cidade:\n");
	scanf("%d", &populacao1);

	printf(" Digite o valor da area da cidade em km^2):\n");
	scanf("%f", &area1);

	printf(" Digite o valor do PIB (Produto Interno Bruto) da cidade (Bilhao):\n");
	scanf("%f", &pib1);

	printf(" Digite a quantidade de pontos turisticos:\n");
	scanf("%d", &pontoTuris1);
//Cadastro Carta 2 -------------------------------------------------------------------------------------------------------------------------------------------
	printf("\n\n Agora digite a letra para o codigo da carta 2(A-H):\n");
	scanf(" %c", &estado2);

	printf(" Digite o codigo da carta (01-04):\n");
	scanf("%s", codigoCarta2);

	getchar(); // Limpa o buffer
    printf("Digite o nome da cidade:\n");
    fgets(cidade2, sizeof(cidade2), stdin); //ler dados mesmo depois da tecla "space"
    

	printf(" Digite a quantidade de habitantes na cidade:\n");
	scanf("%d", &populacao2);

	printf(" Digite o valor da area da cidade em km^2):\n");
	scanf("%f", &area2);

	printf(" Digite o valor do PIB (Produto Interno Bruto) da cidade (Bilhao):\n");
	scanf("%f", &pib2);

	printf(" Digite a quantidade de pontos turisticos:\n");
	scanf("%d", &pontoTuris2);
	
// Mostrar os resultados das cartas 1 e 2.
	
	printf("-----------------------------------------------------------------------------------------");
	
	printf("\n\nAqui esta os dados da Carta 1: \n");
	printf("\nEstado: %c\n",estado1);
	printf("\nCodigo: %c%s \n", estado1, codigoCarta1);
	printf("\nNome da cidade: %s \n", cidade1);
	printf("Numero de habitantes: %d \n", populacao1);
	printf("\nArea: %.2f km^2 \n", area1);
	printf("\nValor do PIB (Bilhao) : R$%.2f \n", pib1);
	printf("\nQtd pontos turisticos: %d \n", pontoTuris1);

	printf("-----------------------------------------------------------------------------------------");
	
	printf("\n\nAqui esta os dados da Carta 2: \n");
	printf("\nEstado: %c\n",estado2);
	printf("\nCodigo: %c%s \n", estado2, codigoCarta2);
	printf("\nNome da cidade: %s \n", cidade2);
	printf("Numero de habitantes: %d \n", populacao2);
	printf("\nArea: %.2f km^2 \n", area2);
	printf("\nValor do PIB (Bilhao) : R$%.2f \n", pib2);
	printf("\nQtd pontos turisticos: %d \n", pontoTuris2);




	return 0;
}
