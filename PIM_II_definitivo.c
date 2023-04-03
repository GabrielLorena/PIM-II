#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <locale.h>
#define LOGIN_MAX 20 // define o maximo de caracteres no login
#define SENHA_MAX 20 // define o maximo de caracteres na senha

struct LoginFuncionario1
{
    char LoginFuncionario[20];
    char SenhaFuncionario[20];
}; // estrutura do login funcionario

void main() // Tela Inicial
{
    int option = 0; // controlador de opcoes
    do
    {
        printf("\n");
        printf("\t\t\t\t  Bem vindo! \n");
        printf("\t\t\t\t  IStorm Imports \n");
        printf("\t\t\t=================================\n");
        printf("\t\t\t|\t                        |\n");
        printf("\t\t\t|\t 1 - Admin              |\n");
        printf("\t\t\t|\t 2 - Secretaria         |\n");
        printf("\t\t\t|\t 3 - Funcionario        |\n");
        printf("\t\t\t|\t 4 - Sair               |\n");
        printf("\t\t\t|\t                        |\n");
        printf("\t\t\t=================================\n");
        printf("\n\n");
        printf("\t\t\tPor favor, selecione uma opcao: ");
        scanf("%d", &option); // o usuário entra com a opcao desejada

        switch (option) // checar opcao
        {
        case 1:
            system("cls");
            TelaDeAdmin(); // se for 1 leva a tela login admin
            break;
        case 2:
            system("cls");
            TelaDeSecretaria(); // se for 2 leva a tela dde login secretaria
            break;
        case 3:
            system("cls");
            TelaDeLogin(); // se for 3 leva a tela de login funcionário
            break;
        case 4:
            exit(0); // sai da aplicacao
        default:
            system("cls");
            printf("\t\t\t\tEscolha 1, 2, 3 ou 4\n"); // caso selecione uma opcao nao existente
            break;
        }
    } while (1);

    return 0;
}

void TelaDeAdmin() // Tela de Login do Admin
{
    setlocale(LC_ALL, "Portuguese");
    // esse trecho predetermina as credenciais do ADMIN
    char adminlogin[15] = "admin";
    char adminlogin2[15];
    char adminsenha[15] = "istorm2022";
    char adminsenha2[15];
    int comparacao, comparacao2;

    printf("***********************\n");
    printf("***  AREA do Admin  ***\n");
    printf("***********************\n\n");
    printf("Login: ");
    scanf("%s", &adminlogin2); // entrar com o login e senha predeterminados
    printf("Senha: ");
    scanf("%s", &adminsenha2);
    system("cls");
    comparacao = strcmp(adminlogin, adminlogin2); // checagem de login e senha
    comparacao2 = strcmp(adminsenha, adminsenha2);

    if (comparacao == 0 && comparacao2 == 0)
    {
        // caso a checagem tenha exito o login e efetuado
        printf("LOGADO COM SUCESSO! \n\n ");
        printf("Pressione qualquer tecla para ir a Area do Admin \n");
        getch();
        system("cls");
        MenuAdmin();
    }
    else
    {
        // caso a checagem nao tenha exito o login nao e efetuado
        printf("CADASTRO INVALIDO! \n\n ");
        printf("Pressione qualquer tecla para voltar a tela inicial! \n");
        getch();
        system("cls");
        main();
    }
}

void MenuAdmin() // Menu do Admin
{
    setlocale(LC_ALL, "Portuguese");
    int option = 0; // controlador de opcoes
    do
    {
        printf("\n");
        printf("\t\t\t\t  IStorm Imports \n");
        printf("\t\t\t\t  Menu Admin \n");
        printf("\t\t\t=====================================\n");
        printf("\t\t\t|\t                            |\n");
        printf("\t\t\t|\t 1 - Cadastrar Funcionario  |\n");
        printf("\t\t\t|\t 2 - Monitorar Pedidos      |\n");
        printf("\t\t\t|\t 3 - Ver reunioes           |\n");
        printf("\t\t\t|\t 4 - Sair                   |\n");
        printf("\t\t\t|\t                            |\n");
        printf("\t\t\t=====================================\n");
        printf("\n\n");
        printf("\n\n");
        printf("\t\t\tPor favor, selecione uma opcao: ");
        scanf("%d", &option); // o usuário entra com a opcao desejada

        switch (option) // checar opcao
        {
        case 1:
            system("cls");
            TelaDeCadastro(); // leva a tela de cadastro de funcionario caso seja 1
            break;
        case 2:
            system("cls");
            VerPedidosAdmin(); // gera relatorio de pedidos caso seja 2
            break;
        case 3:
            system("cls");
            BuscaReuniaoAdmin(); // gera relatorio de reuniao caso seja 3
            main();
        case 4:
            system("cls"); // volta pra tela inicial caso seja 4
            main();
            break;
        default:
            printf("Escolha 1, 2, 3 ou 4\n"); // caso o usuario entre com uma variavel que nao existe
            system("cls");
            break;
        }
    } while (1);
}

void TelaDeSecretaria() // Tela de Login da Secretaria
{
    setlocale(LC_ALL, "Portuguese");
    // esse trecho predetermina as credenciais da secretaria
    char secretarialogin[15] = "recepcao";
    char secretarialogin2[15];
    char secretariasenha[15] = "bemvindoistorm";
    char secretariasenha2[15];
    int comparacao3, comparacao4;
    printf("****************************\n");
    printf("***  AREA da Secretaria  ***\n");
    printf("****************************\n\n");
    printf("Login: ");
    scanf("%s", &secretarialogin2); // entrar com o login e senha predeterminados
    printf("Senha: ");
    scanf("%s", &secretariasenha2);
    system("cls");
    comparacao3 = strcmp(secretarialogin, secretarialogin2); // checagem de login e senha
    comparacao4 = strcmp(secretariasenha, secretariasenha2);

    if (comparacao3 == 0 && comparacao4 == 0)
    {
        // caso a checagem tenha exito o login e efetuado
        printf("LOGADO COM SUCESSO! \n\n ");
        printf("Pressione qualquer tecla para ir a tela de secretarios! \n");
        getch();
        system("cls");
        MenuSecretaria();
    }
    else
    {
        // caso a checagem nao tenha exito o login nao e efetuado
        printf("CADASTRO INVALIDO! \n\n ");
        printf("Pressione qualquer tecla para voltar a tela inicial! \n");
        getch();
        system("cls");
        main();
    }
}

void MenuSecretaria() // Menu da Secretaria
{
    setlocale(LC_ALL, "Portuguese");
    int option = 0; // controlador de opcoes
    do
    {
        printf("\n");
        printf("\t\t\t\t  IStorm Imports \n");
        printf("\t\t\t\t  Menu Secretaria \n");
        printf("\t\t\t======================================\n");
        printf("\t\t\t|\t                             |\n");
        printf("\t\t\t|\t 1 - Cadastrar reuniao       |\n");
        printf("\t\t\t|\t 2 - Relatorio de Reuniao    |\n");
        printf("\t\t\t|\t 3 - Sair                    |\n");
        printf("\t\t\t|\t                             |\n");
        printf("\t\t\t======================================\n");
        printf("\n\n");
        printf("\t\t\tPor favor, selecione uma opcao: ");
        scanf("%d", &option); // o usuário entra com a opcao desejada

        switch (option) // checar opcao
        {
        case 1:
            system("cls");
            CadastrarReuniao(); // caso seja 1 cadastra uma reuniao
            break;
        case 2:
            system("cls");
            BuscaReuniaoSecretaria(); // caso seja 2 gera relatorio de reuniao
            break;
        case 3:
            system("cls"); // volta para o menu
            main();
            break;
        default:
            printf("Escolha 1, 2, 3 ou 4\n"); // caso o usuario entre com uma variavel que nao existe
            system("cls");
            break;
        }
    } while (1);
}

void BuscaReuniaoAdmin()
{
    setlocale(LC_ALL, "Portuguese");
    FILE *cr;  // cria ponteiro do arquivo
    char arqv; // variavel para armazenar o conteudo do arquivo

    cr = fopen("reuniao.txt", "r"); // abre o arquivo para leitura

    if (cr) // confere se o arquivo existe
    {
        if (cr != NULL)
        { // confere se o arquivo esta vazio
            arqv = fgetc(cr);
            while (arqv != EOF) // le o arquivo ate o fim das suas "linhas"
            {
                printf("%c", arqv); // retorna o conteudo do arquivo
                arqv = fgetc(cr);
            }
        }
        else
        { // quando o arquivo esta vazio rodara isso
            printf("Nenhum dado encontrado!\n");
            printf("Pressione qualquer tecla para voltar a tela de menu! \n");
            getch();
            system("cls");
            MenuAdmin();
        }
    }
    else
    { // quando o arquivo nao existir rodara isso
        printf("Nenhum dado encontrado!\n");
        printf("Pressione qualquer tecla para voltar a tela de menu! \n");
        getch();
        system("cls");
        MenuAdmin();
    } // abaixo o sistema te encaminha para o menu
    fclose(cr);
    printf("Pressione qualquer tecla para voltar a tela de menu! \n");
    getch();
    system("cls");
    MenuAdmin();
}

void BuscaReuniaoSecretaria()
{
    setlocale(LC_ALL, "Portuguese");
    FILE *cr;  // cria ponteiro do arquivo
    char arqv; // variavel para armazenar o conteudo do arquivo

    cr = fopen("reuniao.txt", "r"); // abre o arquivo para leitura

    if (cr) // confere se o arquivo existe
    {
        if (cr != NULL)
        { // confere se o arquivo esta vazio
            arqv = fgetc(cr);
            while (arqv != EOF) // le o arquivo ate o fim das suas "linhas"
            {
                printf("%c", arqv); // retorna o conteudo do arquivo
                arqv = fgetc(cr);
            }
        }
        else
        { // quando o arquivo esta vazio rodara isso
            printf("Nenhum dado encontrado!\n");
            printf("Pressione qualquer tecla para voltar a tela de menu! \n");
            getch();
            system("cls");
            MenuSecretaria();
        }
    }
    else
    { // quando o arquivo nao existir rodara isso
        printf("Nenhum dado encontrado!\n");
        printf("Pressione qualquer tecla para voltar a tela de menu! \n");
        getch();
        system("cls");
        MenuSecretaria();
    } // abaixo o sistema te encaminha para o menu
    fclose(cr);
    printf("Pressione qualquer tecla para voltar a tela de menu! \n");
    getch();
    system("cls");
    MenuSecretaria();
}

void NaoAchouArquivo() // funcao para voltar a tela inicial caso nao encontre algum arquivo
{
    setlocale(LC_ALL, "Portuguese");
    printf("Nenhum dado encontrado! \n\n");
    printf("Pressione qualquer tecla para voltar a tela inicial! \n");
    getch();
    system("cls");
    main();
}

int VerifLogin(FILE *file, char *user, char *senha) // funcao para validar login de funcionario, recebe por parametro o arquivo, o usuario e a senha respectivamente.
{
    setlocale(LC_ALL, "Portuguese");
    char tmpLogin[LOGIN_MAX]; // cria as variaveis de login e senha para comparacao
    char tmpSenha[SENHA_MAX];

    fscanf(file, "%s", tmpLogin); // busca o login no arquivo

    while (!feof(file)) // ate o fim do arquivo
    {
        if (!strcmp(tmpLogin, user)) // compara o login do arquivo com o que o usuario entrou
        {
            fscanf(file, "%s", tmpSenha); // busca a senha no arquivo

            if (!strcmp(tmpSenha, senha)) // compara a senha do arquivo com a que o usuario entrou
                return 1;                 // retorna verdadeiro caso de certo
        }
        else
        {
            fscanf(file, "%*s");
        }

        fscanf(file, "%s", tmpLogin);
    }

    return 0; // retorna falso se tudo der errado
}

void TelaDeLogin() // Tela de Login do Funcionario
{
    setlocale(LC_ALL, "Portuguese");
    FILE *fp; // cria ponteiro do arquivo

    struct LoginFuncionario1 Funcionario;

    char LoginFuncionario[LOGIN_MAX]; // cria as variaveis de login e senha para comparacao
    char SenhaFuncionario[SENHA_MAX];

    printf("*****************************\n");
    printf("***  AREA do Funcionario  ***\n");
    printf("*****************************\n\n");
    printf("Login: ");
    scanf("%s", &LoginFuncionario); // entra com o login e senha
    printf("Senha: ");
    scanf("%s", &SenhaFuncionario);

    fp = fopen("login.txt", "r"); // Abre o arquivo para ler
    if (fp)
    {
        if (VerifLogin(fp, LoginFuncionario, SenhaFuncionario)) // verifica se o login e senha estão corretos e dentro do ponteiro fp
        {
            printf("Logado com sucesso!\n\n"); // caso a checagem tenha exito o login e efetuado
            printf("Pressione qualquer tecla para ir a tela de funcionario! \n");
            getch();
            system("cls");
            TelaDeFuncionarios();
        }
        else
        {
            printf("Usuario ou senha invalidos!\n\n"); // caso a checagem nao tenha exito o login nao e efetuado
            printf("Pressione qualquer tecla para voltar a tela de menu! \n");
            getch();
            system("cls");
            main();
        }
    }
    else
    {
        NaoAchouArquivo(); // caso não tenho o txt criado
    }

    fclose(fp);             // fecha o ponteiro
    free(SenhaFuncionario); // limpa a variavel
}

void TelaDeCadastro() // Tela de cadastro de funcionario
{
    setlocale(LC_ALL, "Portuguese");
    FILE *fp;
    struct LoginFuncionario1 Funcionario; // renomeia a struct

    printf("Bem vindo a tela de cadastro de funcionarios! \n\n");
    printf("Login: ");
    scanf("%s", &Funcionario.LoginFuncionario); // entra com o login e senha
    printf("Senha: ");
    scanf("%s", &Funcionario.SenhaFuncionario);

    fp = fopen("login.txt", "a+"); // Abre o arquivo para adição ou leitura no final do arquivo. Se o arquivo não existir, a função o cria
    if (!fp)
    {
        printf("Nao foi possivel criar o arquivo de login"); // Caso o arquivo txt não for criado
        return;
    }
    fprintf(fp, "%s %s\n", Funcionario.LoginFuncionario, Funcionario.SenhaFuncionario); // Função que escreve em um arquivo
    fclose(fp);                                                                         // Fecha o ponteiro
    printf("Cadastrado com sucesso\n\n");
    printf("Pressione qualquer tecla para ir a tela de login! \n");
    getch();
    system("cls");
    MenuAdmin();
}

void TelaDeFuncionarios() // Menu dos Funcionarios
{
    setlocale(LC_ALL, "Portuguese");
    int input; // controlador de opcoes

    do
    {
        printf("\n");
        printf("\t\t\t\t  Tela de Funcionarios \n");
        printf("\t\t\t\t  IStorm Imports \n");
        printf("\t\t\t====================================\n");
        printf("\t\t\t|\t                           |\n");
        printf("\t\t\t|\t 1 - Cadastrar Pedido      |\n");
        printf("\t\t\t|\t 2 - Monitorar Pedidos     |\n");
        printf("\t\t\t|\t 3 - Sair                  |\n");
        printf("\t\t\t|\t                           |\n");
        printf("\t\t\t====================================\n");
        printf("\n\n");
        printf("\t\t\tPor favor, selecione uma opcao: ");
        scanf("%d", &input); // o usuário entra com a opcao desejada

        switch (input) // checar opcao
        {
        case 1:
            system("cls");
            RealizarPedidos(); // se for 1 leva a tela de soliiciitar pedido
            break;
        case 2:
            system("cls");
            VerPedidosFuncionario(); // se for 2 leva a tela de monitorar pedidos
            break;
        case 3:
            system("cls");
            main(); // Volta a tela inicial
            break;
        }

    } while (1);
}

void RealizarPedidos() // Realiza Pedidos
{
    setlocale(LC_ALL, "Portuguese");
    FILE *rp; // cria ponteiro do arquivo

    // variaveis para armazenar o conteudo
    char nome[100], fornecedor[100];
    int quantidade, controlador, resposta;
    float preco_compra, preco_venda, lucro;

    controlador = 1; // controlador da estrutura de repeticao
    do
    {
        // formulario de cadastro de pedidos
        printf("Cadastre aqui os seus pedidos \n\n");
        printf("Nome do Produto: ");
        scanf(" %[^\n]", nome);
        printf("Preco de Compra: ");
        fflush(stdin);
        scanf(" %f", &preco_compra);
        printf("Preco de Venda: ");
        fflush(stdin);
        scanf(" %f", &preco_venda);
        printf("Quantidade: ");
        fflush(stdin);
        scanf(" %d", &quantidade);
        printf("Fornecedor: ");
        scanf(" %[^\n]", fornecedor);

        lucro = (preco_venda - preco_compra) * quantidade; // calculo do lucro feito em uma fluxo de compra e venda o lucro tem que ser maior do que 40%

        if (lucro < ((40 * preco_compra) / 100) * quantidade) // o lucro tem que ser maior do que 40%
        {
            int controlador_2 = 1;

            printf("Nao e possivel realizar esse pedido pois o lucro eh insuficiente \n\n"); // mensagem que mostra ao usuario caso ele faca uma operacao com o lucro incompativel
            while (controlador_2 == 1) {
                printf("Deseja refazer o pedido? Digite 1 para sim ou 2 para nao\n"); // pergunta ao usuario se ele quer refazer o pedido
                scanf("%d", &resposta);
                switch (resposta)
                { // verificacao das respostas
                case 1:
                    system("cls");
                    controlador = 1; // ativa a estrura de repeticao novamente
                    controlador_2 = 0;
                    break;
                case 2:
                    system("cls");
                    TelaDeFuncionarios(); // desativa a estrutura de repeticao e manda para o menu
                    controlador = 0;
                    controlador_2 = 0;
                    break;
                default:
                    system("cls");
                    printf("Escolha 1 ou 2\n");
                    printf("Pressione qualquer tecla para voltar \n\n"); // mensagem de erro ao clicar em um numero diferente
                    getch();
                    system("cls");
                    controlador_2 = 1;
                    break;
                }
            }
        }
        else
        { // caso o lucro seja correspondente com o esperado ira gravar os dados num arquivo txt
            rp = fopen("pedidos.txt", "a+");
            fprintf(rp, "Nome: %s\n Preco de compra: R$%.2f\n Preco de venda: R$%.2f\n Quantidade: %d\n Fornecedor: %s\n Lucro: R$%.2f \n\n\n", nome, preco_compra, preco_venda, quantidade, fornecedor, lucro);
            fclose(rp);
            printf("Pedido realizado com sucesso! \n"); // sucesso
            int controlador_3 = 1;
            while (controlador_3 == 1) { // para fazer outro pedido
                printf("Deseja fazer outro pedido? Digite 1 para sim ou 2 para nao\n");
                scanf("%d", &resposta);
                switch (resposta)
                { // estrutura de escolha para voltar a pergunta
                case 1:
                    system("cls");
                    controlador = 1;
                    controlador_3 = 0;
                    break;
                case 2:
                    system("cls");
                    TelaDeFuncionarios();
                    controlador = 0;
                    controlador_3 = 0;
                    break;
                default:
                    system("cls");
                    printf("Escolha 1 ou 2\n"); // caso o usuario digite um numero errado
                    printf("Pressione qualquer tecla para voltar \n\n");
                    getch();
                    system("cls");
                    controlador_3 = 1;
                    break;
                }
            }
        }

    } while (controlador == 1);
}

void VerPedidosAdmin()
{
    FILE *rp; // cria ponteiro do arquivo
    char arqv; // variavel para armazenar o conteudo do arquivo

    rp = fopen("pedidos.txt", "r"); // abre o arquivo para leitura
    if (rp)// confere se o arquivo existe
    {
        if (rp != NULL)
        { // confere se o arquivo esta vazio
            arqv = fgetc(rp);
            while (arqv != EOF) // le o arquivo ate o fim das suas "linhas"
            {
                printf("%c", arqv); // retorna o conteudo do arquivo
                arqv = fgetc(rp);
            }
        }
        else
        { // quando o arquivo esta vazio rodara isso
            printf("Nenhum dado encontrado!\n");
            printf("Pressione qualquer tecla para voltar a tela de menu! \n");
            getch();
            system("cls");
            MenuAdmin();
        }
    }
    else
    { // quando o arquivo nao existir rodara isso
        printf("Nenhum dado encontrado!\n");
        printf("Pressione qualquer tecla para voltar a tela de menu! \n");
        getch();
        system("cls");
        MenuAdmin();
    } // abaixo o sistema te encaminha para o menu
    fclose(rp);
    printf("Pressione qualquer tecla para voltar a tela de menu! \n");
    getch();
    system("cls");
    MenuAdmin();
}

void VerPedidosFuncionario()
{
    setlocale(LC_ALL, "Portuguese");
    FILE *rp; // cria ponteiro do arquivo
    char arqv; // variavel para armazenar o conteudo do arquivo

    rp = fopen("pedidos.txt", "r"); // abre o arquivo para leitura
    if (rp) // confere se o arquivo existe
    {
        if (rp != NULL)
        { // confere se o arquivo esta vazio
            arqv = fgetc(rp);
            while (arqv != EOF) // le o arquivo ate o fim das suas "linhas"
            {
                printf("%c", arqv); // retorna o conteudo do arquivo
                arqv = fgetc(rp);
            }
        }
        else
        { // quando o arquivo esta vazio rodara isso
            printf("Nenhum dado encontrado!\n");
            printf("Pressione qualquer tecla para voltar a tela de menu! \n");
            getch();
            system("cls");
            TelaDeFuncionarios();
        }
    }
    else
    { // quando o arquivo nao existir rodara isso
        printf("Nenhum dado encontrado!\n");
        printf("Pressione qualquer tecla para voltar a tela de menu! \n");
        getch();
        system("cls");
        TelaDeFuncionarios();
    } // abaixo o sistema te encaminha para o menu
    fclose(rp);
    printf("Pressione qualquer tecla para voltar a tela de menu! \n");
    getch();
    system("cls");
    TelaDeFuncionarios();
}

void CadastrarReuniao()
{
    FILE *cr; // cria ponteiro do arquivo
    cr = fopen("reuniao.txt", "a+"); // abre o arquivo para escrita e leitura

    char data[50], horario[50], solicitante[50]; // cria as variaveis necessarias para o formulario

    printf("Cadastro de Reuniao \n\n");
    // formulario para cadastro
    printf("Dia da reuniao: ");
    scanf("%s", data);
    printf("Horario da reuniao: ");
    scanf("%s", horario);
    printf("Solicitante da reuniao: ");
    scanf("%s", solicitante);

    // grava os dados inseridos em um arquivo
    fprintf(cr, "Data: %s\n Horario: %s\n Solicitante: %s \n\n\n", data, horario, solicitante); // Função que escreve em um arquivo

    fclose(cr); // Fecha o ponteiro

    // sucesso
    printf("Reuniao cadastrada com sucesso! \n\n");
    printf("Pressione qualquer tecla para voltar a tela de menu! \n");
    getch();
    system("cls");
    MenuSecretaria();
}
