#include <stdio.h>
#include <stdlib.h>

int main(){
    int nbre,cont=1;
    float Req,Ceq,Leq,l1,l2,l3,r1,r2,r3,c1,c2,c3;
    char typ,dipo;
   printf("Ce progamme permet d'appliquer les lois d'association des dipoles passifs\n\n");
   do{
        printf("Quel dipole utilisez-vous ?\n");
        printf("\n==>Tapez R pour *resistor*");
        printf("\n==>Tapez C pour *condensateur*");
        printf("\n==>Tapez B pour *bobine*\n");
        printf("\nVeuillez entrer votre choix:\t");
        scanf("\n%c",&dipo);
        switch(dipo){
            do{
            case 'r':
            case 'R':printf("Vous allez associer des resistors!\n");
            printf("\nQuel type d'association voulez-vous faire? :\n");
            printf("\n==>Tapez S pour l'association en serie!");
            printf("\n==>Tapez P pour l'association en  parallele!\n");
            scanf("\n%c",&typ);
            switch(typ){
                case 's':
                case 'S':printf("Vous avez choisi l'association en serie !\n");
                do{
                        printf("Combien de resistor voulez-vous associer ?:\n");
                        printf("Vous ne pouvez associer que 2 ou 3 resistors! :\t");
                        scanf("%d",&nbre);
                        }while(nbre!=2 && nbre!=3);
                        if(nbre==2) {
                              case 2:  printf("Ok, c'est parti pour l'association en serie de 2 resistors !\n");
                                printf("Donnez R1 :\t");
                                scanf("%f",&r1);
                                printf("Donnez R2 :\t");
                                scanf("%f",&r2);
                                Req=r1+r2;
                                printf("La resistance equivalente de R1 et R2 est %.2f ohms\n",Req);break;}
                               else if(nbre==3){
                                   printf("Ok, c'est parti pour l'association en serie de 3 resistors !\n");
                                        printf("Donnez R1 :\t");
                                        scanf("%f",&r1);
                                        printf("Donnez R2 :\t");
                                        scanf("%f",&r2);
                                        printf("Donnez R3 :\t");
                                        scanf("%f",&r3);
                                        Req=r1+r2+r3;
                                        printf("La resistance equivalente de R1,R2 et R3 est %.2f ohms\n",Req);};break;
                case 'p':
                case 'P':printf("Vous avez choisi l'association en parallele !\n");
                do{
                        printf("Combien de resistor voulez-vous associer ?:\n");
                        printf("Vous ne pouvez associer que 2 ou 3 ! :\t");
                        scanf("%d",&nbre);
                        }while(nbre!=2 && nbre!=3);
                        if(nbre==2){
                                printf("Ok, c'est parti pour l'association en parallele de 2 resistors !\n");
                                printf("Donnez R1 :\t");
                                scanf("%f",&r1);
                                printf("Donnez R2 :\t");
                                scanf("%f",&r2);
                                Req=(r1*r2)/(r1+r2);
                                printf("La resistance equivalente de R1 et R2 est %.2f ohms\n",Req);}
                        else if(nbre==3){
                                printf("Ok, c'est parti pour l'association en parallele de 3 resistors !\n");
                                printf("Donnez R1 :\t");
                                scanf("%f",&r1);
                                printf("Donnez R2 :\t");
                                scanf("%f",&r2);
                                printf("Donnez R3 :\t");
                                scanf("%f",&r3);
                                Req=(r1*r2*r3/(r1*r2+r1*r3+r2*r3));
                                printf("La resistance equivalente de R1,R2 et R3 est %.2f ohms\n",Req);};break;
            default:printf("\n\nCe type d'association n'est pas pris en compte!\n");break;}
            printf("\nVoulez-vous associer d'autre resistor?");
          printf("\n==>Tapez 1 pour *OUI*");
          printf("\n==>Tapez 0 pour *NON*\n");
          scanf("%d",&cont);
          if(cont==1)    system("cls");
}while(cont==1);break;
          do{
                case 'c':
                    case 'C':printf("Vous allez associer des condensateurs!\n");
                    printf("\nQuel type d'association voulez-vous faire? :\n");
                    printf("\n==>Tapez S pour l'association en serie!");
                    printf("\n==>Tapez P pour l'association en  parallele!\n");
                    scanf("\n%c",&typ);
                    switch(typ){
                        case 's':
                            case 'S':printf("Vous avez choisi l'association en serie !");
                            do{
                                    printf("\nCombien de condensateur voulez-vous associer ?:\n");
                            printf("Vous ne pouvez associer que 2 ou 3 ! :\t");
                            scanf("%d",&nbre);}while(nbre!=2 && nbre!=3);
                            if(nbre==2){
                                    printf("Ok, c'est parti pour l'association en serie de 2 condensateurs !\n");
                                    printf("Donnez C1 :\t");
                                    scanf("%f",&c1);
                                    printf("Donnez C2 :\t");
                                    scanf("%f",&c2);
                                    Ceq=(c1*c2)/(c1+c2);
                                    printf("La capacite equivalente de C1 et C2 est %.2f Fards\n",Ceq);}
                            else if(nbre==3){
                                    printf("Ok, c'est parti pour l'association en serie de 3 condensateurs !\n");
                                    printf("Donnez C1 :\t");
                                    scanf("%f",&c1);
                                    printf("Donnez C2 :\t");
                                    scanf("%f",&c2);
                                    printf("Donnez C3 :\t");
                                    scanf("%f",&c3);
                                    Ceq=(c1*c2*c3/(c1*c2+c1*c3+c2*c3));
                                    printf("La capacite equivalente de C1,C2 et C3 est %.2f Farads\n",Ceq);};break;
                            case 'p':
                                case 'P':printf("Vous avez choisi l'association en parallele !\n");
                                do{
                        printf("Combien de condensateur voulez-vous associer ?:\n");
                        printf("Vous ne pouvez associer que 2 ou 3 ! :\t");
                        scanf("%d",&nbre);
                        }while(nbre!=2 && nbre!=3);
                        if(nbre==2){
                                printf("Ok, c'est parti pour l'association en parallele de 2 condensateurs !\n");
                                printf("Donnez C1 :\t");
                                scanf("%f",&c1);
                                printf("Donnez C2 :\t");
                                scanf("%f",&c2);
                                Ceq=c1+c2;
                                printf("La capacite equivalente de C1 et C2 est %.2f Farads\n",Ceq);}
                        else if(nbre==3){
                                printf("Ok, c'est parti pour l'association en parallele de 3 condensateurs !\n");
                                printf("Donnez C1 :\t");
                                scanf("%f",&c1);
                                printf("Donnez C2 :\t");
                                scanf("%f",&c2);
                                printf("Donnez C3 :\t");
                                scanf("%f",&c3);
                                Ceq=c1+c2+c3;
                                printf("La capacite equivalente de R1,R2 et R3 est %.2f Farads\n",Ceq);};break;
                                default:printf("\n\nCe type d'association est inexistant!\n");break;}
                                printf("\nVoulez-vous associer d'autre condensateur ?");
          printf("\n==>Tapez 1 pour *OUI*");
          printf("\n==>Tapez 0 pour *NON*\n");
          scanf("%d",&cont);
          if(cont==1)    system("cls");
           }while(cont==1);break;
          do{
          case 'b':
                    case 'B':printf("Vous allez associer des bobines!\n");
                    printf("\nQuel type d'association voulez-vous faire? :\n");
                    printf("\n==>Tapez S pour l'association en serie!");
                    printf("\n==>Tapez P pour l'association en  parallele!\n");
                    scanf("\n%c",&typ);
                    switch(typ){
                        case 's':
                            case 'S':printf("Vous avez choisi l'association en serie !");
                            do{
                                    printf("\nCombien de bobine voulez-vous associer ?:\n");
                            printf("Vous ne pouvez associer que 2 ou 3 ! :\t");
                            scanf("%d",&nbre);}while(nbre!=2 && nbre!=3);
                            if(nbre==2){
                                    printf("Ok, c'est parti pour l'association en serie de 2 bobines !\n");
                                    printf("Donnez L1 :\t");
                                    scanf("%f",&l1);
                                    printf("Donnez L2 :\t");
                                    scanf("%f",&l2);
                                    Leq=l1+l2;
                                    printf("L'inductance equivalente de L1 et l2 est %.2f H\n",Leq);}
                            else if(nbre==3){
                                    printf("Ok, c'est parti pour l'association en serie de 3 bobines !\n");
                                    printf("Donnez L1 :\t");
                                    scanf("%f",&l1);
                                    printf("Donnez L2 :\t");
                                    scanf("%f",&l2);
                                    printf("Donnez L3 :\t");
                                    scanf("%f",&l3);
                                    Leq=l1+l2+l3;
                                    printf("L'inductance equivalente de L1, L2 et L3 est %.2f H\n",Leq);};break;
                            case 'p':
                                case 'P':printf("Vous avez choisi l'association en parallele !\n");
                                do{
                        printf("Combien de bobine voulez-vous associer ?:\n");
                        printf("Vous ne pouvez associer que 2 ou 3 ! :\t");
                        scanf("%d",&nbre);
                        }while(nbre!=2 && nbre!=3);
                        if(nbre==2){
                                printf("Ok, c'est parti pour l'association en parallele de 2 bobines !\n");
                                printf("Donnez L1 :\t");
                                scanf("%f",&l1);
                                printf("Donnez L2 :\t");
                                scanf("%f",&l2);
                                Leq=(l1*l2)/(l1+l2);
                                printf("L'inductance equivalente de L1 et L2 est %.2f H\n",Leq);}
                        else if(nbre==3){
                                printf("Ok, c'est parti pour l'association en parallele de 3 bobines !\n");
                                printf("Donnez L1 :\t");
                                scanf("%f",&l1);
                                printf("Donnez L2 :\t");
                                scanf("%f",&l2);
                                printf("Donnez L3 :\t");
                                scanf("%f",&l3);
                                Leq=(l1*l2*l3/(l1*l2+l1*l3+l2*l3));
                                printf("L'inductance equivalente de L1,L2 et L3 est %.2f H\n",Leq);};break;
                                default:printf("\n\nCe type d'association est inexistant!\n");break;}
                                printf("\nVoulez-vous associer d'autre bobine ?");
                                printf("\n==>Tapez 1 pour *OUI*");
          printf("\n==>Tapez 0 pour *NON*\n");
          scanf("%d",&cont);
          if(cont==1)     system("cls");}while(cont==1);break;
                                default:printf("Dipole inconnu\n");break;}
             printf("\nTravail terminer!\n");
             printf("Voulez-vous associer d'autre dipole ?");
          printf("\n==>Tapez 1 pour *OUI*");
          printf("\n==>Tapez 0 pour *NON*\n");
          scanf("%d",&cont);
          if(cont==1)          system("cls");
 }while(cont==1);

    return 0;}
