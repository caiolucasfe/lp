#include "usuario.h"
#include "verificacoes.h"
#include "menu.h"
#include "data.h"
#include "contatos.h"
#include "semana.h"

int main(){

    if(verificar_cadastro() == 0){

        printf("Seja Bem-Vindo a Sua Agenda Pessoal!");
        fflush(stdout);
        sleep(2);
        system("clear");

        Usuario Novo;

        printf("Por favor, insira seus Dados Pessoais...\n");

        printf("Nome: ");
        scanf(" %[^\n]", Novo.nome);
        system("clear");

        printf("Por favor, insira seus Dados Pessoais...\n");

        printf("Telefone: ");
        scanf(" %[^\n]", Novo.telefone);
        system("clear");

        printf("Por favor, insira seus Dados Pessoais...\n");

        printf("Data de Nascimento: ");
        scanf(" %i %i %i", &Novo.Data_nascimento.dia, &Novo.Data_nascimento.mes, &Novo.Data_nascimento.ano);

        while(verificar_data(Novo.Data_nascimento.dia, Novo.Data_nascimento.mes, Novo.Data_nascimento.ano) == 0){

            system("clear");
            printf("Data de Nacimento Inválida!");
            fflush(stdout);
            sleep(1);
            system("clear");
            printf("Por favor, insira seus Dados Pessoais...\n");

            printf("Data de Nascimento: ");
            scanf(" %i %i %i", &Novo.Data_nascimento.dia, &Novo.Data_nascimento.mes, &Novo.Data_nascimento.ano);
        }

        system("clear");

        printf("Por favor, insira seus Dados Pessoais...\n");

        printf("Email: ");
        scanf(" %[^\n]", Novo.email);

        while(verificar_email(Novo.email) == 0){

            system("clear");
            printf("Email Inválido!");
            fflush(stdout);
            sleep(1);
            system("clear");
            printf("Por favor, insira seus Dados Pessoais...\n");

            printf("Email: ");
            scanf(" %[^\n]", Novo.email);
        }
    
        system("clear");

        printf("Por favor, insira seus Dados Pessoais...\n");

        printf("Senha: ");
        scanf(" %[^\n]", Novo.senha);
        system("clear");

        printf("Usuário Cadastrado com Sucesso!");
        fflush(stdout);
        sleep(1);
        system("clear");
        printf("Redirecionando.");
        fflush(stdout);
        sleep(1);
        system("clear");

        FILE *cursor;
        cursor = fopen("usuario.bin", "wb");

        fwrite(&Novo, sizeof(Usuario), 1, cursor);

        fclose(cursor);

    }

    char email[50];
    char senha[50];

    printf("Por favor, insira seu Email: ");
    scanf(" %[^\n]", email);
    printf("Por favor, insira sua Senha: ");
    scanf(" %[^\n]", senha);

    while(verificar_login(email, senha) == 0){

        system("clear");
        printf("Email ou Senha Inválido!");
        fflush(stdout);
        sleep(1);
        system("clear");
        printf("Por favor, insira seu Email: ");
        scanf(" %[^\n]", email);
        printf("Por favor, insira sua Senha:");
        scanf(" %[^\n]", senha);

    }

    system("clear");

    char op = 'z';

    while(op != 'g'){
    
        system("clear");
        menu();
        scanf(" %c", &op);

        switch(op){

            case 'a':

                Usuario Contato;

                system("clear");
                printf("[ Gerenciar Contatos ]\n");
                printf("Nome: ");
                scanf(" %[^\n]", Contato.nome);
                printf("Telefone: ");
                scanf(" %[^\n]", Contato.telefone);
                printf("Data de Nascimento: ");
                scanf(" %i %i %i", &Contato.Data_nascimento.dia, &Contato.Data_nascimento.mes, &Contato.Data_nascimento.ano);
                
                while(verificar_data(Contato.Data_nascimento.dia, Contato.Data_nascimento.mes, Contato.Data_nascimento.ano) == 0){

                    system("clear");
                    printf("Data de Nascimento Inválida!");
                    fflush(stdout);
                    sleep(1);
                    system("clear");
                    fflush(stdout);
                    printf("[ Gerenciar Contatos ]\n");
                    printf("Nome: %s\n", Contato.nome);
                    printf("Telefone: %s\n", Contato.telefone);
                    printf("Data de Nascimento: ");
                    scanf(" %i %i %i", &Contato.Data_nascimento.dia, &Contato.Data_nascimento.mes, &Contato.Data_nascimento.ano);
                    
                }

                cadastrar_contatos(Contato.nome, Contato.telefone, Contato.Data_nascimento.dia, Contato.Data_nascimento.mes, Contato.Data_nascimento.ano);

                animacao_processando("Cadastrando");

                printf("Contato Cadastrado com Sucesso!");
                getchar();
                getchar();

            break;

            case 'b':

                int semana_op;

                do{

                    system("clear");
                    agenda_semanal();

                    scanf(" %i", &semana_op);

                    if(semana_op == 1){

                        char dia_semana[50];
                        char atividade[50];
                        char resposta[4];

                        system("clear");
                        printf("Por favor, qual dia da semana gostaria de adicionar uma atividade? ex: (DOMINGO, SEGUNDA-FEIRA...)\n> ");
                        scanf(" %[^\n]", dia_semana);

                        while(strcmp(dia_semana, "DOMINGO") != 0 && strcmp(dia_semana, "SEGUNDA-FEIRA") != 0 && strcmp(dia_semana, "TERÇA-FEIRA") != 0 && strcmp(dia_semana, "QUARTA-FEIRA") != 0 && strcmp(dia_semana, "QUINTA-FEIRA") != 0 && strcmp(dia_semana, "SEXTA-FEIRA") != 0 && strcmp(dia_semana, "SÁBADO") != 0){

                            system("clear");
                            printf("Dia da semana Inválido!");
                            fflush(stdout);
                            sleep(1);
                            system("clear");
                            printf("Por favor, qual dia da semana gostaria de adicionar uma atividade? ex: (DOMINGO, SEGUNDA-FEIRA...)\n> ");
                            scanf(" %[^\n]", dia_semana);

                        }

                        verificar_EscolhaSemana(dia_semana, semana_op, resposta);

                        system("clear");

                        if(strcmp(resposta, "") == 0){

                            printf("Impossível Adicionar uma Atividade a esse dia!");
                            fflush(stdout);
                            sleep(1);
                            system("clear");
                            printf("Remova uma ocupação para esse dia ou escolha outro...");
                            getchar();
                            getchar();

                        }
                        
                        if(strcmp(resposta, "M") == 0){

                            char periodo[50];
                            
                            strcpy(periodo, "Manhã");

                            printf("Você tem um horário vago na parte da Manhã!");
                            getchar();
                            getchar();
                            system("clear");
                            printf("Por favor, insira a Atividade: ");
                            scanf(" %[^\n]", atividade);

                            animacao_processando("Inserindo");

                            inserir_atividade(atividade, dia_semana , periodo);

                            printf("Atividade Inserida!");
                            getchar();
                            getchar();

                        }

                        if(strcmp(resposta, "T") == 0){

                            char periodo[50];
                            
                            strcpy(periodo, "Tarde");

                            printf("Você tem um horário vago na parte da Tarde!");
                            getchar();
                            getchar();
                            system("clear");
                            printf("Por favor, insira a Atividade: ");
                            scanf(" %[^\n]", atividade);

                            animacao_processando("Inserindo");

                            inserir_atividade(atividade, dia_semana , periodo);

                            printf("Atividade Inserida!");
                            getchar();
                            getchar();

                        }
                        if(strcmp(resposta, "N") == 0){

                            char periodo[50];
                            
                            strcpy(periodo, "Noite");

                            printf("Você tem um horário vago na parte da Noite!");
                            getchar();
                            getchar();
                            system("clear");
                            printf("Por favor, insira a Atividade: ");
                            scanf(" %[^\n]", atividade);

                            animacao_processando("Inserindo");

                            inserir_atividade(atividade, dia_semana , periodo);

                            printf("Atividade Inserida!");
                            getchar();
                            getchar();

                        }
                        if(strcmp(resposta, "MT") == 0){

                            char periodo[50];

                            printf("Você tem um horário vago na parte da Manhã e da Tarde!");
                            getchar();
                            getchar();
                            system("clear");
                            printf("Qual período você quer adicionar uma Atividade? (Manhã ou Tarde)\n> ");
                            scanf(" %[^\n]", periodo);

                            system("clear");

                            while(strcmp(periodo, "Manhã") != 0 && strcmp(periodo, "Tarde") != 0){

                                printf("%s não está disponível, apenas Manhã e Tarde!", periodo);
                                fflush(stdout);
                                sleep(1);
                                system("clear");
                                printf("Qual período você quer adicionar uma Atividade? (Manhã ou Tarde)\n> ");
                                scanf(" %[^\n]", periodo);
                                system("clear");
                            }

                            printf("Por favor, insira a Atividade: ");
                            scanf(" %[^\n]", atividade);

                            animacao_processando("Inserindo");

                            inserir_atividade(atividade, dia_semana , periodo);

                            printf("Atividade Inserida!");
                            getchar();
                            getchar();

                        }

                        if(strcmp(resposta, "MN") == 0){

                            char periodo[50];

                            printf("Você tem um horário vago na parte da Manhã e da Noite!");
                            getchar();
                            getchar();
                            system("clear");
                            printf("Qual período você quer adicionar uma Atividade? (Manhã ou Noite)\n> ");
                            scanf(" %[^\n]", periodo);

                            system("clear");

                            while(strcmp(periodo, "Manhã") != 0 && strcmp(periodo, "Noite") != 0){

                                printf("%s não está disponível, apenas Manhã e Noite!", periodo);
                                fflush(stdout);
                                sleep(1);
                                system("clear");
                                printf("Qual período você quer adicionar uma Atividade? (Manhã ou Noite)\n> ");
                                scanf(" %[^\n]", periodo);
                                system("clear");
                            }

                            printf("Por favor, insira a Atividade: ");
                            scanf(" %[^\n]", atividade);

                            animacao_processando("Inserindo");

                            inserir_atividade(atividade, dia_semana , periodo);

                            printf("Atividade Inserida!");
                            getchar();
                            getchar();

                        }

                        if(strcmp(resposta, "TN") == 0){

                            char periodo[50];

                            printf("Você tem um horário vago na parte da Tarde e da Noite!");
                            getchar();
                            getchar();
                            system("clear");
                            printf("Qual período você quer adicionar uma Atividade? (Tarde ou Noite)\n> ");
                            scanf(" %[^\n]", periodo);

                            system("clear");

                            while(strcmp(periodo, "Tarde") != 0 && strcmp(periodo, "Noite") != 0){

                                printf("%s não está disponível, apenas Tarde e Noite!", periodo);
                                fflush(stdout);
                                sleep(1);
                                system("clear");
                                printf("Qual período você quer adicionar uma Atividade? (Tarde ou Noite)\n> ");
                                scanf(" %[^\n]", periodo);
                                system("clear");
                            }

                            printf("Por favor, insira a Atividade: ");
                            scanf(" %[^\n]", atividade);

                            animacao_processando("Inserindo");

                            inserir_atividade(atividade, dia_semana , periodo);

                            printf("Atividade Inserida!");
                            getchar();
                            getchar();

                        }

                        if(strcmp(resposta, "MTN") == 0){

                            char periodo[50];

                            printf("Você tem um horário vago na parte da Manhã, Tarde e Noite!");
                            getchar();
                            getchar();
                            system("clear");
                            printf("Qual período você quer adicionar uma Atividade? (Manhã, Tarde ou Noite)\n> ");
                            scanf(" %[^\n]", periodo);

                            system("clear");

                            while(strcmp(periodo, "Tarde") != 0 && strcmp(periodo, "Noite") != 0 && strcmp(periodo, "Manhã") != 0){

                                printf("%s não está disponível, apenas Manhã, Tarde e Noite!", periodo);
                                fflush(stdout);
                                sleep(1);
                                system("clear");
                                printf("Qual período você quer adicionar uma Atividade? (Manhã, Tarde ou Noite)\n> ");
                                scanf(" %[^\n]", periodo);
                                system("clear");
                            }

                            printf("Por favor, insira a Atividade: ");
                            scanf(" %[^\n]", atividade);

                            animacao_processando("Inserindo");

                            inserir_atividade(atividade, dia_semana , periodo);

                            printf("Atividade Inserida!");
                            getchar();
                            getchar();

                        }

                    }

                    if(semana_op == 2){

                        char dia_semana[50];
                        char atividade[50];
                        char resposta[4];

                        system("clear");
                        printf("Por favor, qual dia da semana gostaria de remover uma atividade? ex: (DOMINGO, SEGUNDA-FEIRA...)\n> ");
                        scanf(" %[^\n]", dia_semana);

                        while(strcmp(dia_semana, "DOMINGO") != 0 && strcmp(dia_semana, "SEGUNDA-FEIRA") != 0 && strcmp(dia_semana, "TERÇA-FEIRA") != 0 && strcmp(dia_semana, "QUARTA-FEIRA") != 0 && strcmp(dia_semana, "QUINTA-FEIRA") != 0 && strcmp(dia_semana, "SEXTA-FEIRA") != 0 && strcmp(dia_semana, "SÁBADO") != 0){

                            system("clear");
                            printf("Dia da semana Inválido!");
                            fflush(stdout);
                            sleep(1);
                            system("clear");
                            printf("Por favor, qual dia da semana gostaria de adicionar uma atividade? ex: (DOMINGO, SEGUNDA-FEIRA...)\n> ");
                            scanf(" %[^\n]", dia_semana);

                        }

                        verificar_EscolhaSemana(dia_semana, semana_op, resposta);

                        system("clear");

                        if(strcmp(resposta, "") == 0){

                            printf("Impossível Remover uma Atividade desse dia!");
                            fflush(stdout);
                            sleep(1);
                            system("clear");
                            printf("Adicione uma ocupação para esse dia ou escolha outro...");
                            getchar();
                            getchar();

                        }
                        
                        if(strcmp(resposta, "M") == 0){

                            char periodo[50];
                            
                            strcpy(periodo, "Manhã");

                            printf("Você tem um horário ocupado na parte da Manhã!");
                            getchar();
                            getchar();
                            
                            animacao_processando("Removendo");

                            remover_atividade(dia_semana , periodo);

                            printf("Atividade Removida!");
                            getchar();
                            getchar();

                        }

                        if(strcmp(resposta, "T") == 0){

                            char periodo[50];
                            
                            strcpy(periodo, "Tarde");

                            printf("Você tem um horário ocupado na parte da Tarde!");
                            getchar();
                            getchar();

                            animacao_processando("Removendo");

                            remover_atividade(dia_semana , periodo);

                            printf("Atividade Removida!");
                            getchar();
                            getchar();

                        }
                        if(strcmp(resposta, "N") == 0){

                            char periodo[50];
                            
                            strcpy(periodo, "Noite");

                            printf("Você tem um horário ocupado na parte da Noite!");
                            getchar();
                            getchar();

                            animacao_processando("Removendo");

                            remover_atividade(dia_semana , periodo);

                            printf("Atividade Removida!");
                            getchar();
                            getchar();

                        }
                        if(strcmp(resposta, "MT") == 0){

                            char periodo[50];

                            printf("Você tem horários ocupados na parte da Manhã e da Tarde!");
                            getchar();
                            getchar();
                            system("clear");
                            printf("Qual período você quer Remover uma Atividade? (Manhã ou Tarde)\n> ");
                            scanf(" %[^\n]", periodo);

                            system("clear");

                            while(strcmp(periodo, "Manhã") != 0 && strcmp(periodo, "Tarde") != 0){

                                printf("%s não está disponível, apenas Manhã e Tarde!", periodo);
                                fflush(stdout);
                                sleep(1);
                                system("clear");
                                printf("Qual período você quer Remover uma Atividade? (Manhã ou Tarde)\n> ");
                                scanf(" %[^\n]", periodo);
                                system("clear");
                            }

                            animacao_processando("Removendo");

                            remover_atividade(dia_semana , periodo);

                            printf("Atividade Removida!");
                            getchar();
                            getchar();

                        }

                        if(strcmp(resposta, "MN") == 0){

                            char periodo[50];

                            printf("Você tem horários ocupados na parte da Manhã e da Noite!");
                            getchar();
                            getchar();
                            system("clear");
                            printf("Qual período você quer Remover uma Atividade? (Manhã ou Noite)\n> ");
                            scanf(" %[^\n]", periodo);

                            system("clear");

                            while(strcmp(periodo, "Manhã") != 0 && strcmp(periodo, "Noite") != 0){

                                printf("%s não está disponível, apenas Manhã e Noite!", periodo);
                                fflush(stdout);
                                sleep(1);
                                system("clear");
                                printf("Qual período você quer Remover uma Atividade? (Manhã ou Noite)\n> ");
                                scanf(" %[^\n]", periodo);
                                system("clear");
                            }

                            animacao_processando("Removendo");

                            remover_atividade(dia_semana , periodo);

                            printf("Atividade Removida!");
                            getchar();
                            getchar();
                        }

                        if(strcmp(resposta, "TN") == 0){

                            char periodo[50];

                            printf("Você tem horários ocupados na Tarde e na Noite!");
                            getchar();
                            getchar();
                            system("clear");
                            printf("Qual período você quer Remover uma Atividade? (Tarde ou Noite)\n> ");
                            scanf(" %[^\n]", periodo);

                            system("clear");

                            while(strcmp(periodo, "Tarde") != 0 && strcmp(periodo, "Noite") != 0){

                                printf("%s não está disponível, apenas Tarde e Noite!", periodo);
                                fflush(stdout);
                                sleep(1);
                                system("clear");
                                printf("Qual período você quer Remover uma Atividade? (Tarde ou Noite)\n> ");
                                scanf(" %[^\n]", periodo);
                                system("clear");
                            }

                            animacao_processando("Removendo");

                            remover_atividade(dia_semana , periodo);

                            printf("Atividade Removida!");
                            getchar();
                            getchar();
                        }

                        if(strcmp(resposta, "MTN") == 0){

                            char periodo[50];

                            printf("Você tem horários ocupados na Manhã, Tarde e Noite!");
                            getchar();
                            getchar();
                            system("clear");
                            printf("Qual período você quer Remover uma Atividade? (Manhã, Tarde ou Noite)\n> ");
                            scanf(" %[^\n]", periodo);

                            system("clear");

                            while(strcmp(periodo, "Manhã") != 0 && strcmp(periodo, "Tarde") != 0 && strcmp(periodo, "Noite") != 0){

                                printf("%s não está disponível, apenas Manhã, Tarde e Noite!", periodo);
                                fflush(stdout);
                                sleep(1);
                                system("clear");
                                printf("Qual período você quer Remover uma Atividade? (Manhã, Tarde ou Noite)\n> ");
                                scanf(" %[^\n]", periodo);
                                system("clear");
                            }

                            animacao_processando("Removendo");

                            remover_atividade(dia_semana , periodo);

                            printf("Atividade Removida!");
                            getchar();
                            getchar();
                        }

                    }
                    
                    if(semana_op == 3){

                        char dia_semana[50];
                        char atividade[50];
                        char resposta[4];

                        system("clear");
                        printf("Por favor, qual dia da semana gostaria de alterar uma atividade? ex: (DOMINGO, SEGUNDA-FEIRA...)\n> ");
                        scanf(" %[^\n]", dia_semana);

                        while(strcmp(dia_semana, "DOMINGO") != 0 && strcmp(dia_semana, "SEGUNDA-FEIRA") != 0 && strcmp(dia_semana, "TERÇA-FEIRA") != 0 && strcmp(dia_semana, "QUARTA-FEIRA") != 0 && strcmp(dia_semana, "QUINTA-FEIRA") != 0 && strcmp(dia_semana, "SEXTA-FEIRA") != 0 && strcmp(dia_semana, "SÁBADO") != 0){

                            system("clear");
                            printf("Dia da semana Inválido!");
                            fflush(stdout);
                            sleep(1);
                            system("clear");
                            printf("Por favor, qual dia da semana gostaria de alterar uma atividade? ex: (DOMINGO, SEGUNDA-FEIRA...)\n> ");
                            scanf(" %[^\n]", dia_semana);
                        }

                        verificar_EscolhaSemana(dia_semana, semana_op, resposta);

                        system("clear");

                        if(strcmp(resposta, "") == 0){

                            printf("Impossível Alterar uma Atividade desse dia!");
                            fflush(stdout);
                            sleep(1);
                            system("clear");
                            printf("Adicione uma ocupação para esse dia ou escolha outro...");
                            getchar();
                            getchar();
                        }

                        if(strcmp(resposta, "M") == 0){

                            char periodo[50];
                            strcpy(periodo, "Manhã");

                            printf("Você tem um horário ocupado na parte da Manhã!");
                            getchar();
                            getchar();
                            system("clear");
                            printf("Insira a nova Atividade: ");
                            scanf(" %[^\n]", atividade);

                            animacao_processando("Adicionando");

                            alterar_atividade(atividade, dia_semana , periodo);

                            printf("Nova Atividade Adicionada");
                            getchar();
                            getchar();
                        }

                        if(strcmp(resposta, "T") == 0){

                            char periodo[50];
                            strcpy(periodo, "Tarde");

                            printf("Você tem um horário ocupado na parte da Tarde!");
                            getchar();
                            getchar();
                            system("clear");
                            printf("Insira a nova Atividade: ");
                            scanf(" %[^\n]", atividade);

                            animacao_processando("Adicionando");

                            alterar_atividade(atividade, dia_semana , periodo);

                            printf("Nova Atividade Adicionada");
                            getchar();
                            getchar();

                        }

                        if(strcmp(resposta, "N") == 0){

                            char periodo[50];
                            strcpy(periodo, "Noite");

                            printf("Você tem um horário ocupado na parte da Noite!");
                            getchar();
                            getchar();
                            system("clear");
                            printf("Insira a nova Atividade: ");
                            scanf(" %[^\n]", atividade);

                            animacao_processando("Adicionando");

                            alterar_atividade(atividade, dia_semana , periodo);

                            printf("Nova Atividade Adicionada");
                            getchar();
                            getchar();

                        }

                        if(strcmp(resposta, "MT") == 0){

                            char periodo[50];

                            printf("Você tem horários ocupados na parte da Manhã e da Tarde!");
                            getchar();
                            getchar();
                            system("clear");
                            printf("Qual período você quer Alterar a Atividade? (Manhã ou Tarde)\n> ");
                            scanf(" %[^\n]", periodo);

                            system("clear");

                            while(strcmp(periodo, "Manhã") != 0 && strcmp(periodo, "Tarde") != 0){

                                printf("%s não está disponível, apenas Manhã e Tarde!", periodo);
                                fflush(stdout);
                                sleep(1);
                                system("clear");
                                printf("Qual período você quer Alterar a Atividade? (Manhã ou Tarde)\n> ");
                                scanf(" %[^\n]", periodo);
                                system("clear");
                            }

                            printf("Insira a nova Atividade: ");
                            scanf(" %[^\n]", atividade);

                            animacao_processando("Adicionando");

                            alterar_atividade(atividade, dia_semana , periodo);

                            printf("Nova Atividade Adicionada");
                            getchar();
                            getchar();

                        }

                        if(strcmp(resposta, "MN") == 0){

                            char periodo[50];

                            printf("Você tem horários ocupados na parte da Manhã e da Noite!");
                            getchar();
                            getchar();
                            system("clear");
                            printf("Qual período você quer Alterar a Atividade? (Manhã ou Noite)\n> ");
                            scanf(" %[^\n]", periodo);

                            system("clear");

                            while(strcmp(periodo, "Manhã") != 0 && strcmp(periodo, "Noite") != 0){

                                printf("%s não está disponível, apenas Manhã e Noite!", periodo);
                                fflush(stdout);
                                sleep(1);
                                system("clear");
                                printf("Qual período você quer Alterar a Atividade? (Manhã ou Noite)\n> ");
                                scanf(" %[^\n]", periodo);
                                system("clear");
                            }

                            printf("Insira a nova Atividade: ");
                            scanf(" %[^\n]", atividade);

                            animacao_processando("Adicionando");

                            alterar_atividade(atividade, dia_semana , periodo);

                            printf("Nova Atividade Adicionada");
                            getchar();
                            getchar();

                        }

                        if(strcmp(resposta, "TN") == 0){

                            char periodo[50];

                            printf("Você tem horários ocupados na parte da Tarde e da Noite!");
                            getchar();
                            getchar();
                            system("clear");
                            printf("Qual período você quer Alterar a Atividade? (Tarde ou Noite)\n> ");
                            scanf(" %[^\n]", periodo);

                            system("clear");

                            while(strcmp(periodo, "Tarde") != 0 && strcmp(periodo, "Noite") != 0){

                                printf("%s não está disponível, apenas Tarde e Noite!", periodo);
                                fflush(stdout);
                                sleep(1);
                                system("clear");
                                printf("Qual período você quer Alterar a Atividade? (Tarde ou Noite)\n> ");
                                scanf(" %[^\n]", periodo);
                                system("clear");
                            }

                            printf("Insira a nova Atividade: ");
                            scanf(" %[^\n]", atividade);

                            animacao_processando("Adicionando");

                            alterar_atividade(atividade, dia_semana , periodo);

                            printf("Nova Atividade Adicionada");
                            getchar();
                            getchar();

                        }

                        if(strcmp(resposta, "MTN") == 0){

                            char periodo[50];

                            printf("Você tem horários ocupados na parte da Manhã, Tarde e Noite!");
                            getchar();
                            getchar();
                            system("clear");
                            printf("Qual período você quer Alterar a Atividade? (Manhã, Tarde ou Noite)\n> ");
                            scanf(" %[^\n]", periodo);

                            system("clear");

                            while(strcmp(periodo, "Manhã") != 0 && strcmp(periodo, "Tarde") != 0 && strcmp(periodo, "Noite") != 0){

                                printf("%s não está disponível, apenas Manhã, Tarde e Noite!", periodo);
                                fflush(stdout);
                                sleep(1);
                                system("clear");
                                printf("Qual período você quer Alterar a Atividade? (Manhã, Tarde ou Noite)\n> ");
                                scanf(" %[^\n]", periodo);
                                system("clear");
                            }

                            printf("Insira a nova Atividade: ");
                            scanf(" %[^\n]", atividade);

                            animacao_processando("Adicionando");

                            alterar_atividade(atividade, dia_semana , periodo);

                            printf("Nova Atividade Adicionada");
                            getchar();
                            getchar();

                        }

                    }


                }while(semana_op != 0);
                
            break;

            case 'c':

                relatorio_contatos();

            break;

            case 'd':

                relatorio_semanal();
            
            break;
        }
    }

    return 0;
}