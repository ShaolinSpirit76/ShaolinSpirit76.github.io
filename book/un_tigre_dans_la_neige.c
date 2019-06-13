#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>




void Color(int couleurDuTexte,int couleurDeFond); // fonction d'affichage de couleurs

int main(int argc, char *argv[])

{ /* Ouverture début */

    long ChoixMenu = 0; char chaine [4]; char ChoixBonus [10];                               /* Variables Ecran Titre */
    long compteur = 0; char chaine3 [7]; char chaine1 [4]; char chaine2 [4]; long nombre2 = 0;
    long checkpoint = 0;

    char nom [20]; char action [10]; char objet1 [20]; char objet2 [20]; char oui [4]; char oui2 [4];  /* Variables mode 1 et 2 */


    long compteur1 = 0; long compteur2 = 0;long conversation = 0;long conversation1 = 0;long conversation2 = 0;long conversation3 = 0;long conversation4 = 0;long conversation5 = 0;long conversation6 = 0;long conversation7 = 0; long conversation8 = 0;long conversation9 = 0;long conversation10 = 0;long conversation11 = 0;long conversation12 = 0;long conversation13 = 0;long conversation14 = 0;long conversation15 = 0;
    long ChoixBus = 0;long ChoixBus1 = 0;long ChoixBus2 = 0;long ChoixBus3 = 0;long ChoixBus4 = 0;long ChoixBus5 = 0;long ChoixBus6 = 0;long ChoixBus7 = 0;long ChoixBus8 = 0;long ChoixBus9 = 0;long ChoixBus10 = 0;long ChoixBus11 = 0;long ChoixBus12 = 0;long ChoixBus13 = 0;
    long Patineur = 0;long P1 = 0;long P2 = 0;long P3 = 0;long P4 = 0;long P5 = 0;long P6 = 0;long P7 = 0;long P8 = 0;long P9 = 0;long P10 = 0;long P11 = 0; long P12 = 0;
    long essai = 0; char encore [4];long solution = 0;
    long ChoixBus14 = 0;


    printf("           ");Color(0,15);printf(" ");Color(15,0);printf("\n");
printf("          ");Color(0,15);printf("  ");Color(15,0);printf("                ");Color(0,15);printf("   ");Color(15,0);printf("\n");
printf("          ");Color(0,15);printf("   ");Color(15,0);printf("     ");Color(0,15);printf("    ");Color(15,0);printf("    ");Color(0,15);printf(" ");Color(15,0);printf("   ");Color(0,15);printf(" ");Color(15,0);printf("\n");
printf("              ");Color(0,15);printf("   ");Color(15,0);printf("     ");Color(0,15);printf(" ");Color(15,0);printf(" ");Color(0,15);printf("  ");Color(15,0);printf("    ");Color(0,15);printf(" ");Color(15,0);printf("\n");
printf("          ");Color(0,15);printf(" ");Color(15,0);printf("           ");Color(0,15);printf(" ");Color(15,0);printf("      ");Color(0,15);printf(" ");Color(15,0);printf("\n");
printf("         ");Color(0,15);printf(" ");Color(15,0);printf("     ");Color(0,15);printf("      ");Color(15,0);printf("  ");Color(0,15);printf(" ");Color(15,0);printf("     ");Color(0,15);printf(" ");Color(15,0);printf("\n");
printf("        ");Color(0,15);printf(" ");Color(15,0);printf("   ");Color(0,15);printf(" ");Color(15,0);printf(" ");Color(0,15);printf(" ");Color(15,0);printf("      ");Color(0,15);printf(" ");Color(15,0);printf("  ");Color(0,15);printf(" ");Color(15,0);printf("   ");Color(0,15);printf(" ");Color(15,0);printf("\n");
printf("       ");Color(0,15);printf("     ");Color(15,0);printf(" ");Color(0,15);printf(" ");Color(15,0);printf("  ");Color(0,15);printf("    ");Color(15,0);printf("  ");Color(0,15);printf(" ");Color(15,0);printf("     ");Color(0,15);printf(" ");Color(14,0);printf("      ETERNAL    TIGER'S    GAME\n");Color(15,0);
printf("      ");Color(0,15);printf(" ");Color(15,0);printf(" ");Color(0,15);printf(" ");Color(15,0);printf(" ");Color(0,15);printf(" ");Color(15,0);printf("     ");Color(0,15);printf(" ");Color(15,0);printf(" ");Color(0,15);printf(" ");Color(15,0);printf("    ");Color(0,15);printf(" ");Color(15,0);printf("     ");Color(0,15);printf(" ");Color(15,0);printf("\n");
printf("      ");Color(0,15);printf(" ");Color(15,0);printf(" ");Color(0,15);printf("   ");Color(15,0);printf("     ");Color(0,15);printf("   ");Color(15,0);printf("     ");Color(0,15);printf(" ");Color(15,0);printf("    ");Color(0,15);printf(" ");Color(15,0);printf("\n");
printf("     ");Color(0,15);printf(" ");Color(15,0);printf("         ");Color(0,15);printf(" ");Color(15,0);printf("    ");Color(0,15);printf(" ");Color(15,0);printf("   ");Color(0,15);printf(" ");Color(15,0);printf("    ");Color(0,15);Color(15,0);printf("\n");
printf("  ");Color(0,15);printf(" ");Color(15,0);printf("  ");Color(0,15);printf(" ");Color(15,0);printf("            ");Color(0,15);printf("    ");Color(15,0);printf("   ");Color(0,15);printf(" ");Color(15,0);printf("   ");Color(0,15);printf(" ");Color(8,0);printf("             PRESENTS\n");Color(15,0);
printf("   ");Color(0,15);printf(" ");Color(15,0);printf("            ");Color(0,15);printf(" ");Color(15,0);printf("    ");Color(0,15);printf("  ");Color(15,0);printf("  ");Color(0,15);printf(" ");Color(15,0);printf("   ");Color(0,15);printf(" ");Color(15,0);printf("\n");
Color(0,15);printf(" ");Color(15,0);printf("   ");Color(0,15);printf(" ");Color(15,0);printf(" ");Color(0,15);printf("  ");Color(15,0);printf(" ");Color(0,15);printf("  ");Color(15,0);printf("   ");Color(0,15);printf("  ");Color(15,0);printf("   ");Color(0,15);printf(" ");Color(0,15);printf(" ");Color(15,0);printf(" ");Color(0,15);printf(" ");Color(15,0);printf("   ");Color(0,15);printf(" ");Color(15,0);printf("  ");Color(0,15);printf(" ");Color(15,0);printf("\n");
printf(" ");Color(0,15);printf("  ");Color(15,0);printf("   ");Color(0,15);printf(" ");Color(15,0);printf("   ");Color(0,15);printf(" ");Color(15,0);printf(" ");Color(0,15);printf("  ");Color(15,0);printf("   ");Color(0,15);printf("  ");Color(15,0);printf("  ");Color(0,15);printf(" ");Color(15,0);printf("  ");Color(0,15);printf(" ");Color(15,0);printf("   ");Color(0,15);printf(" ");Color(15,0);printf("\n");
printf("   ");Color(0,15);printf("  ");Color(15,0);printf("  ");Color(0,15);printf(" ");Color(15,0);printf(" ");Color(0,15);printf(" ");Color(15,0);printf("      ");Color(0,15);printf(" ");Color(15,0);printf("    ");Color(0,15);printf(" ");Color(15,0);printf("  ");Color(0,15);printf(" ");Color(15,0);printf("   ");Color(0,15);printf(" ");Color(11,0);printf("      UN  TIGRE  DANS  LA  NEIGE\n"); Color(15,0);
printf("     ");Color(0,15);printf("  ");Color(15,0);printf(" ");Color(0,15);printf(" ");Color(15,0);printf("  ");Color(0,15);printf("    ");Color(15,0);printf("      ");Color(0,15);printf(" ");Color(15,0);printf("  ");Color(0,15);printf(" ");Color(15,0);printf("   ");Color(0,15);printf(" ");Color(15,0);printf("\n");
printf("       ");Color(0,15);printf("    ");Color(15,0);printf("   ");Color(0,15);printf(" ");Color(15,0);printf("     ");Color(0,15);printf(" ");Color(15,0);printf("   ");Color(0,15);printf(" ");Color(15,0);printf("   ");Color(0,15);printf(" ");Color(15,0);printf("\n");
printf("      ");Color(0,15);printf("  ");Color(15,0);printf("  ");Color(0,15);printf("  ");Color(15,0);printf("   ");Color(0,15);printf(" ");Color(15,0);printf("   ");Color(0,15);printf(" ");Color(15,0);printf("    ");Color(0,15);printf(" ");Color(15,0);printf("   ");Color(0,15);printf(" ");Color(15,0);printf("\n");
printf("      ");Color(0,15);printf("  ");Color(15,0);printf("  ");Color(0,15);printf("  ");Color(15,0);printf("   ");Color(0,15);printf(" ");Color(15,0);printf("   ");Color(0,15);printf(" ");Color(15,0);printf("    ");Color(0,15);printf(" ");Color(15,0);printf("  ");Color(0,15);printf(" ");Color(15,0);printf("\n");
printf("       ");Color(0,15);printf(" ");Color(15,0);printf("   ");Color(0,15);printf(" ");Color(15,0);printf("   ");Color(0,15);printf(" ");Color(15,0);printf("  ");Color(0,15);printf(" ");Color(15,0);printf("    ");Color(0,15);printf(" ");Color(15,0);printf("   ");Color(0,15);printf(" ");Color(15,0);printf("\n");
printf("        ");Color(0,15);printf(" ");Color(15,0);printf("     ");Color(0,15);printf("  ");Color(15,0);printf("  ");Color(0,15);printf("     ");Color(15,0);printf("    ");Color(0,15);printf(" ");Color(15,0);printf("\n");
printf("       ");Color(0,15);printf("  ");Color(15,0);printf("  ");Color(0,15);printf(" ");Color(15,0);printf("  ");Color(0,15);printf(" ");Color(15,0);printf("            ");Color(0,15);printf(" ");Color(15,0);printf("\n");
printf("      ");Color(0,15);printf("   ");Color(15,0);printf(" ");Color(0,15);printf("  ");Color(15,0);printf(" ");Color(0,15);printf(" ");Color(15,0);printf("        ");Color(0,15);printf("     ");Color(15,0);printf("\n");
printf("         ");Color(0,15);printf("    ");Color(15,0);printf("      ");Color(0,15);printf("   ");Color(15,0);printf("\n");
printf("      ");Color(0,15);printf(" ");Color(15,0);printf("           ");Color(0,15);printf("  ");Color(15,0);printf("\n");
printf("      ");Color(0,15);printf(" ");Color(15,0);printf("           ");Color(0,15);printf(" ");Color(15,0);printf("\n");
printf("       ");Color(0,15);printf(" ");Color(15,0);printf("        ");Color(0,15);printf("   ");Color(15,0);printf("\n");
printf("        ");Color(0,15);printf(" ");Color(15,0);printf("      ");Color(0,15);printf(" ");Color(15,0);printf("\n");
printf("        ");Color(0,15);printf(" ");Color(15,0);printf("     ");Color(0,15);printf("  ");Color(15,0);printf("\n");
printf("         ");Color(0,15);printf("      ");Color(15,0);printf("               ");system("PAUSE");printf("\n\n\n\n\n\n");




    do { /* Ouverture boucle restart */


       Color(14,0);
    printf("                                 =Menu Principal=\n\n\n\n");

 Color(8,0);
    printf("Choix du mode\n\n\n"); Color(5,0);
    printf("                                * 1 - Un tigre dans la neige\n\n");Color(6,0);
    printf("                                * 2 - Checkpoint\n\n");Color(12,0);
    printf("                                * 3 - Bonus\n\n");Color(10,0);
    printf("                                * 4 - Credits\n\n\n"); Color(15,0);
    printf("Quel est ton choix ?\n\n\n");Color(3,0);

    scanf("%ld", &ChoixMenu); printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");Color(15,0);


     switch (ChoixMenu)

     { /* Ouverture switch */


     case 1:


Color(2,0);printf("DIDACTICIEL\n\n\n");Color(8,0);
printf("Pour avancer dans le jeu, tu devras associer une action a un objet.\n");
printf("Voici la liste des actions possibles :\n\n\n\" regarder, utiliser, prendre, donner, ");
printf("combiner, parler, repondre \"\n\n");
printf("Quant aux objets, il n'y a pas de liste : sois attentif ! Attention, ");
printf("tu ne peux pas utiliser les accents. Faisons un test pour voir si ");
printf("tu as bien compris.\n");


printf("\n\n\n\n");
Color(4,0);printf("Driiiing ! Driiiing ! Driiiing !\n\n");
Color(8,0);printf("Quelque chose sonne... Que faire ?\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");


if (strcmp (action, "repondre") != 0) if (strcmp (objet1, "telephone") != 0)  /* Exemple de structure pour reposer la question. Utilisation d'un conditionnel et
                                                                                de 2 boucles, 1=action et 2=objet */
{
   do {
   do {

Color(6,0);printf("N'importe quoi !\n\n\n\n");
Color(4,0);printf("Driiiing ! Driiiing ! Driiiing !\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");

      } while (strcmp (action, "repondre") != 0);

      } while (strcmp (objet1, "telephone") != 0);
}






Color(15,0);printf("Allo ?\n\n");        /*Le scénario peut continuer sans aucun conditionnel, puisqu'il faut la bonne réponse pour sortir des boucles */

Color(8,0);printf("Tu as bien compris le principe, le jeu peut donc commencer.\n\n");Color(15,0);

system("PAUSE");printf("\n\n\n\n");

Color(2,0);printf("                      *   *   *   *  Chapitre 1  *   *   *   * \n\n\n\n");

Color(11,0);printf("\" J'habite une petite chambre qu'un couple de personnes agees me loue, dans ");
printf("leurmaison. Ce n'est pas bien grand, mais je m'y sens a l'aise. Et puis ");
printf("c'est\ntemporaire. Si je continue a dessiner, un jour je pourrais realiser ");
printf("mon reve :\ndevenir mangaka. Aujourd'hui c'est dimanche. J'avais prevu ");
printf("d'aller au zoo pour  faire quelques dessins des tigres que j'aime tant,");
printf(" mais il fait si froid dehors ! En me reveillant ce matin, ce fut une vraie ");
printf("surprise : il a neige pendant la  nuit, et pas qu'un peu. Tant pis, je n'ai ");
printf("qu'a bien me couvrir ! Alors voyons,  qu'est-ce qu'il me faut ? ");
printf("Mon carnet de croquis et un crayon, bien sur ! \"");printf("\n\n\n");

Color(15,0);system("PAUSE");printf("\n\n");

Color(8,0);printf("Dans la petite chambre, il y a un bureau juste sous la fenetre, au centre");
printf(" de la piece. Le lit n'est rien d'autre qu'un matelas le long du mur. De ");
printf("l'autre cote, une armoire et une commode. La porte se trouve juste en");
printf(" face de la fenetre.\n\n\n");

Color(15,0);system("PAUSE");printf("\n\n\n");

Color(11,0);printf("Ou ai-je bien pu ranger mes outils pour dessiner ?\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");


if (strcmp (action, "regarder") != 0) if (strcmp (objet1, "bureau") != 0)
{
   do {
   do {

Color(6,0);printf("Non, ce n'est pas ca !\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Ou ai-je bien pu ranger mes outils pour dessiner ?\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");

      } while (strcmp (action, "regarder") != 0);

      } while (strcmp (objet1, "bureau") != 0);
}

if (strcmp (action, "regarder") != 0) if (strcmp (objet1, "bureau") != 1)
{
   do {
   do {

Color(6,0);printf("Chaque chose en son temps !\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Ou ai-je bien pu ranger mes outils pour dessiner ?\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");

      } while (strcmp (action, "regarder") != 0);

      } while (strcmp (objet1, "bureau") != 0);
}

if (strcmp (action, "regarder") != 1) if (strcmp (objet1, "bureau") != 0)
{
   do {
   do {

Color(6,0);printf("Non, ce n'est pas la !\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Ou ai-je bien pu ranger mes outils pour dessiner ?\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");

      } while (strcmp (action, "regarder") != 0);

      } while (strcmp (objet1, "bureau") != 0);
}


Color(8,0);printf("Il y a une lampe, un carnet et un tiroir.\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");


if (strcmp (action, "prendre") != 0) if (strcmp (objet1, "carnet") != 0)
{
   do {
   do {

Color(6,0);printf("Non, ce n'est pas la !\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(8,0);printf("Il y a une lampe, un carnet et un tiroir.\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");

      } while (strcmp (action, "prendre") != 0);

      } while (strcmp (objet1, "carnet") != 0);
}


if (strcmp (action, "prendre") != 0) if (strcmp (objet1, "carnet") != 1)
{
   do {
   do {

Color(6,0);printf("Pour quoi faire ?\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(8,0);printf("Il y a une lampe, un carnet et un tiroir.\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");

      } while (strcmp (action, "prendre") != 0);

      } while (strcmp (objet1, "carnet") != 0);
}


if (strcmp (action, "prendre") != 1) if (strcmp (objet1, "carnet") != 0)
{
   do {
   do {

Color(6,0);printf("Pour quoi faire ?\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(8,0);printf("Il y a une lampe, un carnet et un tiroir.\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");

      } while (strcmp (action, "prendre") != 0);

      } while (strcmp (objet1, "carnet") != 0);
}


Color(11,0);printf("Avec ce carnet, j'ai de quoi faire une dizaine de croquis, c'est parfait!\n");
printf("Est-ce que j'ai besoin d'autre chose ?\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");

if (strcmp (action, "regarder") != 0) if (strcmp (objet1, "tiroir") != 0)
{
   do {
   do {

Color(6,0);printf("Non, il y a une autre chose que je devrais trouver sur ce bureau.\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");

      } while (strcmp (action, "regarder") != 0);

      } while (strcmp (objet1, "tiroir") != 0);
}

if (strcmp (action, "regarder") != 0) if (strcmp (objet1, "tiroir") != 1)
{
   do {
   do {

Color(6,0);printf("Non, il y a une autre chose que je devrais trouver sur ce bureau.\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");

      } while (strcmp (action, "regarder") != 0);

      } while (strcmp (objet1, "tiroir") != 0);
}

if (strcmp (action, "regarder") != 1) if (strcmp (objet1, "tiroir") != 0)
{
   do {
   do {

Color(6,0);printf("Non, il y a une autre chose que je devrais trouver sur ce bureau.\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");

      } while (strcmp (action, "regarder") != 0);

      } while (strcmp (objet1, "tiroir") != 0);
}

Color(11,0);printf("C'est ici que je range mes crayons. Humm... Voyons voir : H3, B2, B4,\n");
printf("H, HB, B3, H2, B, H4\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Aujourd'hui, je ne vais prendre que 3 types de crayon. Je vais choisir\n");
printf("le plus sec, l'intermediaire et le plus gras. Je vais les ranger dans\n");
printf("ma poche exactement dans cet ordre.\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);scanf("%s", objet2);printf("\n\n");

if (strcmp (action, "H4") != 0) if (strcmp (objet1, "HB") != 0) if (strcmp (objet2, "B4") != 0)
{
   do {
   do {
   do {
Color(6,0);printf("Non, j'ai du faire une erreur !\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Je vais choisir le plus sec, l'intermediaire et le plus gras. Je vais\n");
printf("les ranger dans ma poche exactement dans cet ordre.\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);scanf("%s", objet2);printf("\n\n");
}while(strcmp (action, "H4") != 0);
}while(strcmp (objet1, "HB") != 0);
}while(strcmp (objet2, "B4") != 0);
}

if (strcmp (action, "H4") != 0) if (strcmp (objet1, "HB") != 0) if (strcmp (objet2, "B4") != 1)
{
   do {
   do {
   do {
Color(6,0);printf("Non, j'ai du faire une erreur !\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Je vais choisir le plus sec, l'intermediaire et le plus gras. Je vais\n");
printf("les ranger dans ma poche exactement dans cet ordre.\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);scanf("%s", objet2);printf("\n\n");
}while(strcmp (action, "H4") != 0);
}while(strcmp (objet1, "HB") != 0);
}while(strcmp (objet2, "B4") != 0);
}

if (strcmp (action, "H4") != 0) if (strcmp (objet1, "HB") != 1) if (strcmp (objet2, "B4") != 0)
{
   do {
   do {
   do {
Color(6,0);printf("Non, j'ai du faire une erreur !\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Je vais choisir le plus sec, l'intermediaire et le plus gras. Je vais\n");
printf("les ranger dans ma poche exactement dans cet ordre.\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);scanf("%s", objet2);printf("\n\n");
}while(strcmp (action, "H4") != 0);
}while(strcmp (objet1, "HB") != 0);
}while(strcmp (objet2, "B4") != 0);
}

if (strcmp (action, "H4") != 1) if (strcmp (objet1, "HB") != 0) if (strcmp (objet2, "B4") != 0)
{
   do {
   do {
   do {
Color(6,0);printf("Non, j'ai du faire une erreur !\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Je vais choisir le plus sec, l'intermediaire et le plus gras. Je vais\n");
printf("les ranger dans ma poche exactement dans cet ordre.\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);scanf("%s", objet2);printf("\n\n");
}while(strcmp (action, "H4") != 0);
}while(strcmp (objet1, "HB") != 0);
}while(strcmp (objet2, "B4") != 0);
}

if (strcmp (action, "H4") != 0) if (strcmp (objet1, "HB") != 1) if (strcmp (objet2, "B4") != 1)
{
   do {
   do {
   do {
Color(6,0);printf("Non, j'ai du faire une erreur !\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Je vais choisir le plus sec, l'intermediaire et le plus gras. Je vais\n");
printf("les ranger dans ma poche exactement dans cet ordre.\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);scanf("%s", objet2);printf("\n\n");
}while(strcmp (action, "H4") != 0);
}while(strcmp (objet1, "HB") != 0);
}while(strcmp (objet2, "B4") != 0);
}

if (strcmp (action, "H4") != 1) if (strcmp (objet1, "HB") != 0) if (strcmp (objet2, "B4") != 1)
{
   do {
   do {
   do {
Color(6,0);printf("Non, j'ai du faire une erreur !\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Je vais choisir le plus sec, l'intermediaire et le plus gras. Je vais\n");
printf("les ranger dans ma poche exactement dans cet ordre.\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);scanf("%s", objet2);printf("\n\n");
}while(strcmp (action, "H4") != 0);
}while(strcmp (objet1, "HB") != 0);
}while(strcmp (objet2, "B4") != 0);
}

if (strcmp (action, "H4") != 1) if (strcmp (objet1, "HB") != 1) if (strcmp (objet2, "B4") != 0)
{
   do {
   do {
   do {
Color(6,0);printf("Non, j'ai du faire une erreur !\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Je vais choisir le plus sec, l'intermediaire et le plus gras. Je vais\n");
printf("les ranger dans ma poche exactement dans cet ordre.\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);scanf("%s", objet2);printf("\n\n");
}while(strcmp (action, "H4") != 0);
}while(strcmp (objet1, "HB") != 0);
}while(strcmp (objet2, "B4") != 0);
}

Color(11,0);printf("Voila une bonne chose de faite !\n");
printf("Est-ce que j'ai besoin d'autre chose ?\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");

if (strcmp (action, "regarder") != 0) if (strcmp (objet1, "armoire") != 0)
{
   do {
   do {

Color(6,0);printf("Humm... Je devrais plutot trouver mon echarpe d'abord, il fait froid.\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");

      } while (strcmp (action, "regarder") != 0);

      } while (strcmp (objet1, "armoire") != 0);
}

if (strcmp (action, "regarder") != 0) if (strcmp (objet1, "armoire") != 1)
{
   do {
   do {

Color(6,0);printf("Humm... Je devrais plutot trouver mon echarpe d'abord, il fait froid.\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");

      } while (strcmp (action, "regarder") != 0);

      } while (strcmp (objet1, "armoire") != 0);
}

if (strcmp (action, "regarder") != 1) if (strcmp (objet1, "armoire") != 0)
{
   do {
   do {

Color(6,0);printf("Humm... Je devrais plutot trouver mon echarpe d'abord, il fait froid.\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");

      } while (strcmp (action, "regarder") != 0);

      } while (strcmp (objet1, "armoire") != 0);
}

Color(11,0);printf("Il y a des chemises et mon echarpe. Je prends l'echarpe pour me couvrir.\n");
printf("Est-ce que j'ai besoin d'autre chose ?\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");


if (strcmp (action, "regarder") != 0) if (strcmp (objet1, "commode") != 0)
{
   do {
   do {

Color(6,0);printf("C'est de ma paire de gants dont j'ai besoin maintenant.\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");

      } while (strcmp (action, "regarder") != 0);

      } while (strcmp (objet1, "commode") != 0);
}

if (strcmp (action, "regarder") != 0) if (strcmp (objet1, "commode") != 1)
{
   do {
   do {

Color(6,0);printf("C'est de ma paire de gants dont j'ai besoin maintenant.\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");

      } while (strcmp (action, "regarder") != 0);

      } while (strcmp (objet1, "commode") != 0);
}


if (strcmp (action, "regarder") != 1) if (strcmp (objet1, "commode") != 0)
{
   do {
   do {

Color(6,0);printf("C'est de ma paire de gants dont j'ai besoin maintenant.\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");

      } while (strcmp (action, "regarder") != 0);

      } while (strcmp (objet1, "commode") != 0);
}


Color(8,0);printf("Il y a des sous-vetements, des chaussettes et une paire de gants.\n");
Color(11,0);printf("Je prends la paire de gants pour proteger mes mains seches durant le\n");
printf("transport. Est-ce que j'ai besoin d'autre chose ?\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");


if (strcmp (action, "utiliser") != 0) if (strcmp (objet1, "porte") != 0)
{
   do {
   do {

Color(6,0);printf("Non, j'ai tout ce qu'il me faut, je peux y aller.\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");

      } while (strcmp (action, "utiliser") != 0);

      } while (strcmp (objet1, "porte") != 0);
}

if (strcmp (action, "utiliser") != 0) if (strcmp (objet1, "porte") != 1)
{
   do {
   do {

Color(6,0);printf("Non, j'ai tout ce qu'il me faut, je peux y aller.\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");

      } while (strcmp (action, "utiliser") != 0);

      } while (strcmp (objet1, "porte") != 0);
}

if (strcmp (action, "utiliser") != 1) if (strcmp (objet1, "porte") != 0)
{
   do {
   do {

Color(6,0);printf("Non, j'ai tout ce qu'il me faut, je peux y aller.\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");

      } while (strcmp (action, "utiliser") != 0);

      } while (strcmp (objet1, "porte") != 0);
}

Color(15,0);system("PAUSE");printf("\n\n\n");
Color(8,0);printf("Felicitation, tu viens de terminer le chapitre 1 et d'atteindre par\n");
printf("la meme occasion ton premier checkpoint !\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(14,0);printf("Code checkpoint 1 : 2891\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");

printf("Veux-tu poursuivre ta partie maintenant ?\n\n");
Color(3,0);scanf("%s", oui2);printf("\n\n\n");

if(strcmp (oui2, "non") == 0)
{
          printf("Veux-tu retourner au menu principal ?\n\n");
   Color(3,0);scanf("%s", chaine);printf("\n\n\n\n\n");
}

if(strcmp (oui2, "oui") == 0)              /* Chapitre 2 */
{

Color(2,0);printf("                      *   *   *   *  Chapitre 2  *   *   *   * \n\n\n\n");


Color(11,0);printf("\"Me voici dans la rue. Comment vais-je aller au zoo ?\"\n\n\n");
Color(8,0);printf("Dans la rue, il y a un lampadaire, une bouche a incendie, un poteau\n");
printf("telephonique et un arret de bus. La route va dans les deux sens.\n\n\n");

Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");Color(15,0);


if (strcmp (action, "prendre") != 0) if (strcmp (objet1, "bus") != 0)
{
   do {
   do {

Color(6,0);printf("Je ne peux pas faire ca !\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Comment vais-je pouvoir me rendre au zoo ?\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");Color(15,0);

      } while (strcmp (action, "prendre") != 0);

      } while (strcmp (objet1, "bus") != 0);
}

if (strcmp (action, "prendre") != 0) if (strcmp (objet1, "bus") != 1)
{
   do {
   do {

Color(6,0);printf("Je ne peux pas faire ca !\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Comment vais-je pouvoir me rendre au zoo ?\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");Color(15,0);

      } while (strcmp (action, "prendre") != 0);

      } while (strcmp (objet1, "bus") != 0);
}


if (strcmp (action, "prendre") != 1) if (strcmp (objet1, "bus") != 0)
{
   do {
   do {

Color(6,0);printf("Je ne peux pas faire ca !\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Comment vais-je pouvoir me rendre au zoo ?\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");Color(15,0);

      } while (strcmp (action, "prendre") != 0);

      } while (strcmp (objet1, "bus") != 0);
}

Color(11,0);printf("Bonne idee ! Alors, voyons voir la carte... Quelle ligne vais-je choisir ?\n\n");

Color(15,0);system("PAUSE");printf("\n\n");



printf("                                Maison\n\n");
Color(10,0);printf("                               1");Color(15,0);printf(" ");Color(0,10);printf(" ");Color(15,0);printf(" ");Color(0,11);printf(" ");Color(11,0);printf(" 2\n");
Color(15,0);printf("                            ");Color(0,10);printf("      ");Color(15,0);printf(" ");Color(0,11);printf("                 \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" ");Color(11,0);printf("  2\n");
Color(15,0);printf("         ");Color(10,0);printf("1                  ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf("    \n");
Color(15,0);printf("         ");Color(0,10);printf("                    ");Color(15,0);printf("                      ");Color(15,0);printf("      Rue des Lauriers\n");printf("     Zoo ");printf("                           ");
Color(15,0);printf("               ");Color(0,12);printf("    ");Color(15,0);printf("                        ");
Color(15,0);printf("          ");Color(0,13);printf("       ");Color(15,0);printf("                                   ");Color(0,12);printf(" ");Color(12,0);printf("  4\n");
Color(15,0);printf("         ");Color(13,0);printf("3     ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf("                  ");Color(15,0);printf(" ");Color(0,12);printf("                  \n");
Color(15,0);printf("                                ");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" \n");
Color(15,0);printf("                               ");Color(13,0);printf("3");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" ");Color(12,0);printf(" 4\n\n");
Color(15,0);printf("                         Au cafe des mysteres\n\n\n");Color(15,0);

Color(3,0);scanf("%ld", &ChoixBus);printf("\n\n");Color(15,0);

if(ChoixBus == 3)
{
Color(6,0);printf("Impossible ! Cette ligne ne passe pas par ici.\n\n\n");

Color(15,0);system("PAUSE");printf("\n\n");



printf("                                Maison\n\n");
Color(10,0);printf("                               1");Color(15,0);printf(" ");Color(0,10);printf(" ");Color(15,0);printf(" ");Color(0,11);printf(" ");Color(11,0);printf(" 2\n");
Color(15,0);printf("                            ");Color(0,10);printf("      ");Color(15,0);printf(" ");Color(0,11);printf("                 \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" ");Color(11,0);printf("  2\n");
Color(15,0);printf("         ");Color(10,0);printf("1                  ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf("    \n");
Color(15,0);printf("         ");Color(0,10);printf("                    ");Color(15,0);printf("                      ");Color(15,0);printf("      Rue des Lauriers\n");printf("     Zoo ");printf("                           ");
Color(15,0);printf("               ");Color(0,12);printf("    ");Color(15,0);printf("                        ");
Color(15,0);printf("          ");Color(0,13);printf("       ");Color(15,0);printf("                                   ");Color(0,12);printf(" ");Color(12,0);printf("  4\n");
Color(15,0);printf("         ");Color(13,0);printf("3     ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf("                  ");Color(15,0);printf(" ");Color(0,12);printf("                  \n");
Color(15,0);printf("                                ");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" \n");
Color(15,0);printf("                               ");Color(13,0);printf("3");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" ");Color(12,0);printf(" 4\n\n");
Color(15,0);printf("                         Au cafe des mysteres\n\n\n");Color(15,0);

Color(3,0);scanf("%ld", &ChoixBus);printf("\n\n");Color(15,0);
}

if(ChoixBus == 4)
{
Color(6,0);printf("Impossible ! Cette ligne ne passe pas par ici.\n\n\n");

Color(15,0);system("PAUSE");printf("\n\n");



printf("                                Maison\n\n");
Color(10,0);printf("                               1");Color(15,0);printf(" ");Color(0,10);printf(" ");Color(15,0);printf(" ");Color(0,11);printf(" ");Color(11,0);printf(" 2\n");
Color(15,0);printf("                            ");Color(0,10);printf("      ");Color(15,0);printf(" ");Color(0,11);printf("                 \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" ");Color(11,0);printf("  2\n");
Color(15,0);printf("         ");Color(10,0);printf("1                  ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf("    \n");
Color(15,0);printf("         ");Color(0,10);printf("                    ");Color(15,0);printf("                      ");Color(15,0);printf("      Rue des Lauriers\n");printf("     Zoo ");printf("                           ");
Color(15,0);printf("               ");Color(0,12);printf("    ");Color(15,0);printf("                        ");
Color(15,0);printf("          ");Color(0,13);printf("       ");Color(15,0);printf("                                   ");Color(0,12);printf(" ");Color(12,0);printf("  4\n");
Color(15,0);printf("         ");Color(13,0);printf("3     ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf("                  ");Color(15,0);printf(" ");Color(0,12);printf("                  \n");
Color(15,0);printf("                                ");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" \n");
Color(15,0);printf("                               ");Color(13,0);printf("3");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" ");Color(12,0);printf(" 4\n\n");
Color(15,0);printf("                         Au cafe des mysteres\n\n\n");Color(15,0);

Color(3,0);scanf("%ld", &ChoixBus);printf("\n\n");Color(15,0);
}

switch (ChoixBus)

{ /* Ouverture switch Bus 1 */



{ /* Ouverture switch Bus 6 */
             case 2 :

Color(6,0);printf("Non, c'est au zoo que je veux aller.\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");

printf("                                Maison\n\n");
Color(10,0);printf("                               1");Color(15,0);printf(" ");Color(0,10);printf(" ");Color(15,0);printf(" ");Color(0,11);printf(" ");Color(11,0);printf(" 2\n");
Color(15,0);printf("                            ");Color(0,10);printf("      ");Color(15,0);printf(" ");Color(0,11);printf("                 \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" ");Color(11,0);printf("  2\n");
Color(15,0);printf("         ");Color(10,0);printf("1                  ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf("    \n");
Color(15,0);printf("         ");Color(0,10);printf("                    ");Color(15,0);printf("                      ");Color(15,0);printf("      Rue des Lauriers\n");printf("     Zoo ");printf("                           ");
Color(15,0);printf("               ");Color(0,12);printf("    ");Color(15,0);printf("                        ");
Color(15,0);printf("          ");Color(0,13);printf("       ");Color(15,0);printf("                                   ");Color(0,12);printf(" ");Color(12,0);printf("  4\n");
Color(15,0);printf("         ");Color(13,0);printf("3     ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf("                  ");Color(15,0);printf(" ");Color(0,12);printf("                  \n");
Color(15,0);printf("                                ");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" \n");
Color(15,0);printf("                               ");Color(13,0);printf("3");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" ");Color(12,0);printf(" 4\n\n");
Color(15,0);printf("                         Au cafe des mysteres\n\n\n");Color(15,0);

Color(3,0);scanf("%ld", &ChoixBus7);printf("\n\n");Color(15,0);

if(ChoixBus7 == 3)
{
Color(6,0);printf("Impossible ! Cette ligne ne passe pas par ici.\n\n\n");

Color(15,0);system("PAUSE");printf("\n\n");



printf("                                Maison\n\n");
Color(10,0);printf("                               1");Color(15,0);printf(" ");Color(0,10);printf(" ");Color(15,0);printf(" ");Color(0,11);printf(" ");Color(11,0);printf(" 2\n");
Color(15,0);printf("                            ");Color(0,10);printf("      ");Color(15,0);printf(" ");Color(0,11);printf("                 \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" ");Color(11,0);printf("  2\n");
Color(15,0);printf("         ");Color(10,0);printf("1                  ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf("    \n");
Color(15,0);printf("         ");Color(0,10);printf("                    ");Color(15,0);printf("                      ");Color(15,0);printf("      Rue des Lauriers\n");printf("     Zoo ");printf("                           ");
Color(15,0);printf("               ");Color(0,12);printf("    ");Color(15,0);printf("                        ");
Color(15,0);printf("          ");Color(0,13);printf("       ");Color(15,0);printf("                                   ");Color(0,12);printf(" ");Color(12,0);printf("  4\n");
Color(15,0);printf("         ");Color(13,0);printf("3     ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf("                  ");Color(15,0);printf(" ");Color(0,12);printf("                  \n");
Color(15,0);printf("                                ");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" \n");
Color(15,0);printf("                               ");Color(13,0);printf("3");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" ");Color(12,0);printf(" 4\n\n");
Color(15,0);printf("                         Au cafe des mysteres\n\n\n");Color(15,0);

Color(3,0);scanf("%ld", &ChoixBus7);printf("\n\n");Color(15,0);
}

if(ChoixBus7 == 4)
{
Color(6,0);printf("Impossible ! Cette ligne ne passe pas par ici.\n\n\n");

Color(15,0);system("PAUSE");printf("\n\n");



printf("                                Maison\n\n");
Color(10,0);printf("                               1");Color(15,0);printf(" ");Color(0,10);printf(" ");Color(15,0);printf(" ");Color(0,11);printf(" ");Color(11,0);printf(" 2\n");
Color(15,0);printf("                            ");Color(0,10);printf("      ");Color(15,0);printf(" ");Color(0,11);printf("                 \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" ");Color(11,0);printf("  2\n");
Color(15,0);printf("         ");Color(10,0);printf("1                  ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf("    \n");
Color(15,0);printf("         ");Color(0,10);printf("                    ");Color(15,0);printf("                      ");Color(15,0);printf("      Rue des Lauriers\n");printf("     Zoo ");printf("                           ");
Color(15,0);printf("               ");Color(0,12);printf("    ");Color(15,0);printf("                        ");
Color(15,0);printf("          ");Color(0,13);printf("       ");Color(15,0);printf("                                   ");Color(0,12);printf(" ");Color(12,0);printf("  4\n");
Color(15,0);printf("         ");Color(13,0);printf("3     ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf("                  ");Color(15,0);printf(" ");Color(0,12);printf("                  \n");
Color(15,0);printf("                                ");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" \n");
Color(15,0);printf("                               ");Color(13,0);printf("3");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" ");Color(12,0);printf(" 4\n\n");
Color(15,0);printf("                         Au cafe des mysteres\n\n\n");Color(15,0);

Color(3,0);scanf("%ld", &ChoixBus7);printf("\n\n");Color(15,0);
}

switch (ChoixBus7)

{ /* Ouverture switch Bus 1 */

case 1 :

     Color(8,0);printf("\n\n ");
printf("Le bus vous depose juste en face du zoo. La grille est fermee, et le\n");
printf("guichet est vide.\n\n");

Color(11,0);printf("\"C'est etrange, le zoo est habituellement deja ouvert a cette heure-la...\n");
printf("Que se passe-t-il ?\"\n\n");

Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");Color(15,0);



if (strcmp (action, "regarder") != 0) if (strcmp (objet1, "guichet") != 0)
{
   do {
   do {

Color(6,0);printf("Ca ne donne rien !\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Mais que se passe-t-il ?\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");Color(15,0);

      } while (strcmp (action, "regarder") != 0);

      } while (strcmp (objet1, "guichet") != 0);
}


if (strcmp (action, "regarder") != 0) if (strcmp (objet1, "guichet") != 1)
{
   do {
   do {

Color(6,0);printf("Ca ne donne rien !\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Mais que se passe-t-il ?\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");Color(15,0);

      } while (strcmp (action, "regarder") != 0);

      } while (strcmp (objet1, "guichet") != 0);
}


if (strcmp (action, "regarder") != 1) if (strcmp (objet1, "guichet") != 0)
{
   do {
   do {

Color(6,0);printf("Ca ne donne rien !\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Mais que se passe-t-il ?\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");Color(15,0);

      } while (strcmp (action, "regarder") != 0);

      } while (strcmp (objet1, "guichet") != 0);
}


Color(11,0);printf("Il y a une petite note collee sur la vitre ! Voyons-voir ce qu'elle dit :\n\n");

Color(15,0);printf("\"Le parc animalier est exceptionnellement ferme aujourd'hui pour cause\n");
printf("de grand froid. Veuillez-nous excuser de la gene occasionnee...\"\n\n");

Color(15,0);system("PAUSE");printf("\n\n\n");

Color(11,0);printf("\"Zut ! C'est vraiment pas de chance ! Je voulais tellement aller au zoo\n");
printf("aujourd'hui. Hmm...Je me demande quel est le veritable probleme.\n");
printf("Puisque je suis dehors, allons faire un tour.\"\n\n\n");

Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");Color(15,0);


if (strcmp (action, "prendre") != 0) if (strcmp (objet1, "bus") != 0)
{
   do {
   do {

Color(6,0);printf("Je crois qu'il n'y a rien a faire ici pour le moment.\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Allons faire un tour !");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");Color(15,0);

      } while (strcmp (action, "prendre") != 0);

      } while (strcmp (objet1, "bus") != 0);
}


if (strcmp (action, "prendre") != 0) if (strcmp (objet1, "bus") != 1)
{
   do {
   do {

Color(6,0);printf("Je crois qu'il n'y a rien a faire ici pour le moment.\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Allons faire un tour !");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");Color(15,0);

      } while (strcmp (action, "prendre") != 0);

      } while (strcmp (objet1, "bus") != 0);
}


if (strcmp (action, "prendre") != 1) if (strcmp (objet1, "bus") != 0)
{
   do {
   do {

Color(6,0);printf("Je crois qu'il n'y a rien a faire ici pour le moment.\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Allons faire un tour !");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");Color(15,0);

      } while (strcmp (action, "prendre") != 0);

      } while (strcmp (objet1, "bus") != 0);
}



Color(15,0);
printf("                                Maison\n\n");
Color(10,0);printf("                               1");Color(15,0);printf(" ");Color(0,10);printf(" ");Color(15,0);printf(" ");Color(0,11);printf(" ");Color(11,0);printf(" 2\n");
Color(15,0);printf("                            ");Color(0,10);printf("      ");Color(15,0);printf(" ");Color(0,11);printf("                 \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" ");Color(11,0);printf("  2\n");
Color(15,0);printf("         ");Color(10,0);printf("1                  ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf("    \n");
Color(15,0);printf("         ");Color(0,10);printf("                    ");Color(15,0);printf("                      ");Color(15,0);printf("      Rue des Lauriers\n");printf("     Zoo ");printf("                           ");
Color(15,0);printf("               ");Color(0,12);printf("    ");Color(15,0);printf("                        ");
Color(15,0);printf("          ");Color(0,13);printf("       ");Color(15,0);printf("                                   ");Color(0,12);printf(" ");Color(12,0);printf("  4\n");
Color(15,0);printf("         ");Color(13,0);printf("3     ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf("                  ");Color(15,0);printf(" ");Color(0,12);printf("                  \n");
Color(15,0);printf("                                ");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" \n");
Color(15,0);printf("                               ");Color(13,0);printf("3");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" ");Color(12,0);printf(" 4\n\n");
Color(15,0);printf("                         Au cafe des mysteres\n\n\n");Color(15,0);

Color(3,0);scanf("%ld", &ChoixBus8);printf("\n\n");Color(15,0);

if(ChoixBus8 == 2)
{
Color(6,0);printf("Impossible ! Cette ligne ne passe pas par ici.\n\n\n");

Color(15,0);system("PAUSE");printf("\n\n");



printf("                                Maison\n\n");
Color(10,0);printf("                               1");Color(15,0);printf(" ");Color(0,10);printf(" ");Color(15,0);printf(" ");Color(0,11);printf(" ");Color(11,0);printf(" 2\n");
Color(15,0);printf("                            ");Color(0,10);printf("      ");Color(15,0);printf(" ");Color(0,11);printf("                 \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" ");Color(11,0);printf("  2\n");
Color(15,0);printf("         ");Color(10,0);printf("1                  ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf("    \n");
Color(15,0);printf("         ");Color(0,10);printf("                    ");Color(15,0);printf("                      ");Color(15,0);printf("      Rue des Lauriers\n");printf("     Zoo ");printf("                           ");
Color(15,0);printf("               ");Color(0,12);printf("    ");Color(15,0);printf("                        ");
Color(15,0);printf("          ");Color(0,13);printf("       ");Color(15,0);printf("                                   ");Color(0,12);printf(" ");Color(12,0);printf("  4\n");
Color(15,0);printf("         ");Color(13,0);printf("3     ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf("                  ");Color(15,0);printf(" ");Color(0,12);printf("                  \n");
Color(15,0);printf("                                ");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" \n");
Color(15,0);printf("                               ");Color(13,0);printf("3");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" ");Color(12,0);printf(" 4\n\n");
Color(15,0);printf("                         Au cafe des mysteres\n\n\n");Color(15,0);

Color(3,0);scanf("%ld", &ChoixBus8);printf("\n\n");Color(15,0);
}

if(ChoixBus8 == 4)
{
Color(6,0);printf("Impossible ! Cette ligne ne passe pas par ici.\n\n\n");

Color(15,0);system("PAUSE");printf("\n\n");



printf("                                Maison\n\n");
Color(10,0);printf("                               1");Color(15,0);printf(" ");Color(0,10);printf(" ");Color(15,0);printf(" ");Color(0,11);printf(" ");Color(11,0);printf(" 2\n");
Color(15,0);printf("                            ");Color(0,10);printf("      ");Color(15,0);printf(" ");Color(0,11);printf("                 \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" ");Color(11,0);printf("  2\n");
Color(15,0);printf("         ");Color(10,0);printf("1                  ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf("    \n");
Color(15,0);printf("         ");Color(0,10);printf("                    ");Color(15,0);printf("                      ");Color(15,0);printf("      Rue des Lauriers\n");printf("     Zoo ");printf("                           ");
Color(15,0);printf("               ");Color(0,12);printf("    ");Color(15,0);printf("                        ");
Color(15,0);printf("          ");Color(0,13);printf("       ");Color(15,0);printf("                                   ");Color(0,12);printf(" ");Color(12,0);printf("  4\n");
Color(15,0);printf("         ");Color(13,0);printf("3     ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf("                  ");Color(15,0);printf(" ");Color(0,12);printf("                  \n");
Color(15,0);printf("                                ");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" \n");
Color(15,0);printf("                               ");Color(13,0);printf("3");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" ");Color(12,0);printf(" 4\n\n");
Color(15,0);printf("                         Au cafe des mysteres\n\n\n");Color(15,0);

Color(3,0);scanf("%ld", &ChoixBus8);printf("\n\n");Color(15,0);
}

switch (ChoixBus8)

{ /* Ouverture switch Bus 2 */
             case 1 :

Color(6,0);printf("Non, je n'ai pas envie de rentrer a la maison maintenant.\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");


printf("                                Maison\n\n");
Color(10,0);printf("                               1");Color(15,0);printf(" ");Color(0,10);printf(" ");Color(15,0);printf(" ");Color(0,11);printf(" ");Color(11,0);printf(" 2\n");
Color(15,0);printf("                            ");Color(0,10);printf("      ");Color(15,0);printf(" ");Color(0,11);printf("                 \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" ");Color(11,0);printf("  2\n");
Color(15,0);printf("         ");Color(10,0);printf("1                  ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf("    \n");
Color(15,0);printf("         ");Color(0,10);printf("                    ");Color(15,0);printf("                      ");Color(15,0);printf("      Rue des Lauriers\n");printf("     Zoo ");printf("                           ");
Color(15,0);printf("               ");Color(0,12);printf("    ");Color(15,0);printf("                        ");
Color(15,0);printf("          ");Color(0,13);printf("       ");Color(15,0);printf("                                   ");Color(0,12);printf(" ");Color(12,0);printf("  4\n");
Color(15,0);printf("         ");Color(13,0);printf("3     ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf("                  ");Color(15,0);printf(" ");Color(0,12);printf("                  \n");
Color(15,0);printf("                                ");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" \n");
Color(15,0);printf("                               ");Color(13,0);printf("3");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" ");Color(12,0);printf(" 4\n\n");
Color(15,0);printf("                         Au cafe des mysteres\n\n\n");Color(15,0);

     Color(3,0);scanf("%ld", &ChoixBus9);printf("\n\n");Color(15,0);

     if(ChoixBus9 == 2)
{
Color(6,0);printf("Impossible ! Cette ligne ne passe pas par ici.\n\n\n");

Color(15,0);system("PAUSE");printf("\n\n");



printf("                                Maison\n\n");
Color(10,0);printf("                               1");Color(15,0);printf(" ");Color(0,10);printf(" ");Color(15,0);printf(" ");Color(0,11);printf(" ");Color(11,0);printf(" 2\n");
Color(15,0);printf("                            ");Color(0,10);printf("      ");Color(15,0);printf(" ");Color(0,11);printf("                 \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" ");Color(11,0);printf("  2\n");
Color(15,0);printf("         ");Color(10,0);printf("1                  ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf("    \n");
Color(15,0);printf("         ");Color(0,10);printf("                    ");Color(15,0);printf("                      ");Color(15,0);printf("      Rue des Lauriers\n");printf("     Zoo ");printf("                           ");
Color(15,0);printf("               ");Color(0,12);printf("    ");Color(15,0);printf("                        ");
Color(15,0);printf("          ");Color(0,13);printf("       ");Color(15,0);printf("                                   ");Color(0,12);printf(" ");Color(12,0);printf("  4\n");
Color(15,0);printf("         ");Color(13,0);printf("3     ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf("                  ");Color(15,0);printf(" ");Color(0,12);printf("                  \n");
Color(15,0);printf("                                ");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" \n");
Color(15,0);printf("                               ");Color(13,0);printf("3");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" ");Color(12,0);printf(" 4\n\n");
Color(15,0);printf("                         Au cafe des mysteres\n\n\n");Color(15,0);

Color(3,0);scanf("%ld", &ChoixBus9);printf("\n\n");Color(15,0);
}

if(ChoixBus9 == 4)
{
Color(6,0);printf("Impossible ! Cette ligne ne passe pas par ici.\n\n\n");

Color(15,0);system("PAUSE");printf("\n\n");



printf("                                Maison\n\n");
Color(10,0);printf("                               1");Color(15,0);printf(" ");Color(0,10);printf(" ");Color(15,0);printf(" ");Color(0,11);printf(" ");Color(11,0);printf(" 2\n");
Color(15,0);printf("                            ");Color(0,10);printf("      ");Color(15,0);printf(" ");Color(0,11);printf("                 \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" ");Color(11,0);printf("  2\n");
Color(15,0);printf("         ");Color(10,0);printf("1                  ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf("    \n");
Color(15,0);printf("         ");Color(0,10);printf("                    ");Color(15,0);printf("                      ");Color(15,0);printf("      Rue des Lauriers\n");printf("     Zoo ");printf("                           ");
Color(15,0);printf("               ");Color(0,12);printf("    ");Color(15,0);printf("                        ");
Color(15,0);printf("          ");Color(0,13);printf("       ");Color(15,0);printf("                                   ");Color(0,12);printf(" ");Color(12,0);printf("  4\n");
Color(15,0);printf("         ");Color(13,0);printf("3     ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf("                  ");Color(15,0);printf(" ");Color(0,12);printf("                  \n");
Color(15,0);printf("                                ");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" \n");
Color(15,0);printf("                               ");Color(13,0);printf("3");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" ");Color(12,0);printf(" 4\n\n");
Color(15,0);printf("                         Au cafe des mysteres\n\n\n");Color(15,0);

Color(3,0);scanf("%ld", &ChoixBus9);printf("\n\n");Color(15,0);
}

switch (ChoixBus9)

     { /* Ouverture switch Bus 3 */

     case 3 :

Color(8,0);printf("Le bus vous depose juste devant la porte du cafe des mysteres.\n\n");

Color(11,0);printf("\"C'est ici qu'on trouve les meilleurs thes et cafes de la ville,\n");
printf("j'adore cet endroit. En plus, une fois par mois un concours y est\n");
printf("organise pour gagner un cadeau mystere en rapport avec le the ou le cafe.\n");
printf("D'ailleurs, je crois que c'est justement aujourd'hui que commence le\n");
printf("nouveau concours de ce mois. Je me demande ce que c'est...\"\n\n\n");

Color(8,0);printf("Que faire maintenant ?\n\n\n");

Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");Color(15,0);

if (strcmp (action, "utiliser") != 0) if (strcmp (objet1, "porte") != 0)
{
   do {
   do {

Color(6,0);printf("Je ne suis pas sur de comprendre...\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Pourquoi pas prendre un bon cafe ?");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");Color(15,0);

      } while (strcmp (action, "utiliser") != 0);

      } while (strcmp (objet1, "porte") != 0);
}


  if (strcmp (action, "utiliser") != 0) if (strcmp (objet1, "porte") != 1)
{
   do {
   do {

Color(6,0);printf("Je ne suis pas sur de comprendre...\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Pourquoi pas prendre un bon cafe ?");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");Color(15,0);

      } while (strcmp (action, "utiliser") != 0);

      } while (strcmp (objet1, "porte") != 0);
}


if (strcmp (action, "utiliser") != 1) if (strcmp (objet1, "porte") != 0)
{
   do {
   do {

Color(6,0);printf("Je ne suis pas sur de comprendre...\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Pourquoi pas prendre un bon cafe ?");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");Color(15,0);

      } while (strcmp (action, "utiliser") != 0);

      } while (strcmp (objet1, "porte") != 0);
}



Color(8,0);printf("Vous entrez au cafe des mysteres. Il y a le barman derriere son comptoir,\n");
printf("en train de ranger sa vaisselle en sifflant, tandis qu'un client boit\n");
printf("une tasse de the en lisant son journal. A droite se trouvent les tables\n");
printf("et les banquettes, vides. Tout au fond, un petit couloir qui mene aux\n");
printf("toilettes.\n\n\n");
Color(15,0);system("PAUSE");printf("\n\n\n");

Color(11,0);printf("\"Eh bien ! Il n'y a pas grand monde. Pas etonnant par ce froid.\"\n\n\n");
Color(15,0);system("PAUSE");printf("\n\n\n");

Color(15,0);printf("- Ah ! c'est toi ! Entre donc mon ami, ca fait plaisir de te voir !\n\n\n");

Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");Color(15,0);



if (strcmp (action, "parler") != 0) if (strcmp (objet1, "barman") != 0)
{
   do {
   do {

Color(6,0);printf("Je ne veux pas faire ca, c'est inaproprie...\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Pourquoi pas prendre un bon cafe ?");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");Color(15,0);

      } while (strcmp (action, "parler") != 0);

      } while (strcmp (objet1, "barman") != 0);
}


if (strcmp (action, "parler") != 0) if (strcmp (objet1, "barman") != 1)
{
   do {
   do {

Color(6,0);printf("Je ne veux pas faire ca, c'est inaproprie...\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Pourquoi pas prendre un bon cafe ?");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");Color(15,0);

      } while (strcmp (action, "parler") != 0);

      } while (strcmp (objet1, "barman") != 0);
}



if (strcmp (action, "parler") != 1) if (strcmp (objet1, "barman") != 0)
{
   do {
   do {

Color(6,0);printf("Je ne veux pas faire ca, c'est inaproprie...\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Pourquoi pas prendre un bon cafe ?");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");Color(15,0);

      } while (strcmp (action, "parler") != 0);

      } while (strcmp (objet1, "barman") != 0);
}


Color(15,0);printf("- Que puis-je faire pour toi ?\n\n\n");
Color(11,0);printf("\"Salut Karl !\"\n\n\n");


Color(8,0);printf("1 : Un cafe\n\n");
printf("2 : Le zoo... ?\n\n\n");

Color(3,0);scanf("%ld", &conversation8);printf("\n\n");Color(15,0);

if(conversation8 == 2)
{
Color(11,0);printf("\"Sais-tu pourquoi le zoo est ferme aujourd'hui ?\"\n\n");
Color(15,0);system("PAUSE");printf("\n\n\n");
printf("- Non, je ne connais pas la raison exacte. Ce que je sais en revanche,\n");
printf("c'est que le gardien du zoo est coince ici pour la journee. Car vois-tu,\n");
printf("il vient au zoo en train ; or le prochain train est pour ce soir. Il avait\n");
printf("l'air bien embete. Il est venu prendre un cafe tout a l'heure.\n");
printf("Maintenant, je pense qu'il est parti tuer le temps a la patinoire a ciel\n");
printf("ouvert du parc municipal. Comme quoi, ce froid inhabituel en a surpris\n");
printf("plus d'un, mais fait aussi quelques heureux !\n\n\n");


system("PAUSE");printf("\n\n\n");

Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");Color(15,0);


if (strcmp (action, "parler") != 0) if (strcmp (objet1, "barman") != 0)
{
   do {
   do {

Color(6,0);printf("Je ne veux pas faire ca, c'est inaproprie...\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Pourquoi pas prendre un bon cafe ?");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");Color(15,0);

      } while (strcmp (action, "parler") != 0);

      } while (strcmp (objet1, "barman") != 0);
}


if (strcmp (action, "parler") != 0) if (strcmp (objet1, "barman") != 1)
{
   do {
   do {

Color(6,0);printf("Je ne veux pas faire ca, c'est inaproprie...\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Pourquoi pas prendre un bon cafe ?");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");Color(15,0);

      } while (strcmp (action, "parler") != 0);

      } while (strcmp (objet1, "barman") != 0);
}



if (strcmp (action, "parler") != 1) if (strcmp (objet1, "barman") != 0)
{
   do {
   do {

Color(6,0);printf("Je ne veux pas faire ca, c'est inaproprie...\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Pourquoi pas prendre un bon cafe ?");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");Color(15,0);

      } while (strcmp (action, "parler") != 0);

      } while (strcmp (objet1, "barman") != 0);
}


Color(15,0);printf("- Que puis-je faire pour toi ?\n\n\n");

Color(8,0);printf("1 : Un cafe\n\n");

Color(3,0);scanf("%ld", &conversation9);printf("\n\n");Color(15,0);

if(conversation9 == 1)
{

Color(11,0);printf("\"Pourrais-je avoir un cafe s'il-te-plait ?\"\n\n\n");
Color(15,0);system("PAUSE");printf("\n\n\n");

printf("- Bien sur ! Je t'en prie, prends place sur une des banquettes.\n\n\n");

}
}

if(conversation8 == 1)
{

Color(11,0);printf("\"Pourrais-je avoir un cafe s'il-te-plait ?\"\n\n\n");
Color(15,0);system("PAUSE");printf("\n\n\n");

printf("- Bien sur ! Je t'en prie, prends place sur une des banquettes.\n\n\n");

}

Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");Color(15,0);


if (strcmp (action, "utiliser") != 0) if (strcmp (objet1, "banquette") != 0)
{
   do {
   do {

Color(6,0);printf("Je devrais plutot m'asseoir, le cafe va bientot arriver.\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");Color(15,0);

      } while (strcmp (action, "utiliser") != 0);

      } while (strcmp (objet1, "banquette") != 0);
}

if (strcmp (action, "utiliser") != 0) if (strcmp (objet1, "banquette") != 1)
{
   do {
   do {

Color(6,0);printf("Je devrais plutot m'asseoir, le cafe va bientot arriver.\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");Color(15,0);

      } while (strcmp (action, "utiliser") != 0);

      } while (strcmp (objet1, "banquette") != 0);
}

if (strcmp (action, "utiliser") != 1) if (strcmp (objet1, "banquette") != 0)
{
   do {
   do {

Color(6,0);printf("Je devrais plutot m'asseoir, le cafe va bientot arriver.\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");Color(15,0);

      } while (strcmp (action, "utiliser") != 0);

      } while (strcmp (objet1, "banquette") != 0);
}

Color(8,0);printf("Vous vous asseyez sur votre banquette favorite. Mais...\n\n\n");

Color(11,0);printf("\"Aie ! Sur quoi me suis-je assis ?\"\n\n\n");
Color(15,0);system("PAUSE");printf("\n\n\n");
Color(8,0);printf("Vous regardez le coussin et vous trouvez une boucle d'oreille !\n\n\n");
Color(15,0);system("PAUSE");printf("\n\n\n");

printf("- Et voila, un cafe pour monsieur, un !\n\n\n");

Color(8,0);printf("1 : Le zoo... ?\n\n");
printf("2 : La boucle d'oreille\n\n");
printf("3 : Le concours du mois...\n\n\n");

Color(3,0);scanf("%ld", &conversation10);printf("\n\n");Color(15,0);

if(conversation10 == 1)
{
Color(11,0);printf("\"Sais-tu pourquoi le zoo est ferme aujourd'hui ?\"\n\n");
Color(15,0);system("PAUSE");printf("\n\n\n");
printf("- Non, je ne connais pas la raison exacte. Ce que je sais en revanche,\n");
printf("c'est que le gardien du zoo est coince ici pour la journee. Car vois-tu,\n");
printf("il vient au zoo en train ; or le prochain train est pour ce soir. Il avait\n");
printf("l'air bien embete. Il est venu prendre un cafe tout a l'heure.\n");
printf("Maintenant, je pense qu'il est parti tuer le temps a la patinoire a ciel\n");
printf("ouvert du parc municipal. Comme quoi, ce froid inhabituel en a surpris\n");
printf("plus d'un, mais fait aussi quelques heureux !\n\n\n");

system("PAUSE");printf("\n\n\n");

Color(8,0);printf("2 : La boucle d'oreille\n\n");
printf("3 : Le concours du mois...\n\n\n");
Color(3,0);scanf("%ld", &conversation10);printf("\n\n");Color(15,0);
}

if(conversation10 == 2)
{
Color(15,0);printf("- Oh ! Ce doit etre a la jeune demoiselle de tout a l'heure...\n");
printf("Malheureusement, elle est de passage en ville seulement aujourd'hui.\n");
printf("Je pense que tu devrais la garder, tu as plus de chance que moi de la\n");
printf("rencontrer, surtout si elle est aussi venue en train, ca te laisse\n");
printf("jusqu'a ce soir pour la retrouver !\n\n\n");

system("PAUSE");printf("\n\n\n");

Color(8,0);printf("1 : Le zoo... ?\n\n");
printf("3 : Le concours du mois...\n\n\n");
Color(3,0);scanf("%ld", &conversation11);printf("\n\n");Color(15,0);

if(conversation11 == 1)
{
Color(11,0);printf("\"Sais-tu pourquoi le zoo est ferme aujourd'hui ?\"\n\n");
Color(15,0);system("PAUSE");printf("\n\n\n");
printf("- Non, je ne connais pas la raison exacte. Ce que je sais en revanche,\n");
printf("c'est que le gardien du zoo est coince ici pour la journee. Car vois-tu,\n");
printf("il vient au zoo en train ; or le prochain train est pour ce soir. Il avait\n");
printf("l'air bien embete. Il est venu prendre un cafe tout a l'heure.\n");
printf("Maintenant, je pense qu'il est parti tuer le temps a la patinoire a ciel\n");
printf("ouvert du parc municipal. Comme quoi, ce froid inhabituel en a surpris\n");
printf("plus d'un, mais fait aussi quelques heureux !\n\n\n");

system("PAUSE");printf("\n\n\n");

Color(8,0);printf("3 : Le concours du mois...\n\n\n");
Color(3,0);scanf("%ld", &conversation10);printf("\n\n");Color(15,0);
}
}

if(conversation10 == 3)
{

Color(11,0);printf("\"En quoi consiste le concours de ce mois-ci ?\"\n\n\n");
Color(15,0);printf("- Eh bah, tu ne perds pas de temps, toi ! Mais je crois que la surprise\n");
printf("va te plaire. Pour inaugurer cette borne d'arcade que je viens tout\n");
printf("juste d'installer, j'ai programme un petit jeu de devinette. Chaque\n");
printf("client qui battra l'ordinateur a ce petit jeu gagnera la surprise de ce\n");
printf("mois. Mais il va falloir que tu repasses dans une heure, car je n'ai pas\n");
printf("encore termine les branchements. C'est-a-dire que tu es bien matinale ^^\n\n\n");
}

Color(15,0);system("PAUSE");printf("\n\n\n");

Color(11,0);printf("\"Merci pour le cafe, il etait tres bon. A plus tard !\"\n\n\n");

Color(8,0);printf("Que faire maintenant ?\n\n\n");


Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");Color(15,0);


if (strcmp (action, "prendre") != 0) if (strcmp (objet1, "bus") != 0)
{
   do {
   do {

Color(6,0);printf("Je crois qu'il n'y a rien a faire ici pour le moment.\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Allons faire un tour !");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");Color(15,0);

      } while (strcmp (action, "prendre") != 0);

      } while (strcmp (objet1, "bus") != 0);
}


if (strcmp (action, "prendre") != 0) if (strcmp (objet1, "bus") != 1)
{
   do {
   do {

Color(6,0);printf("Je crois qu'il n'y a rien a faire ici pour le moment.\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Allons faire un tour !");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");Color(15,0);

      } while (strcmp (action, "prendre") != 0);

      } while (strcmp (objet1, "bus") != 0);
}


if (strcmp (action, "prendre") != 1) if (strcmp (objet1, "bus") != 0)
{
   do {
   do {

Color(6,0);printf("Je crois qu'il n'y a rien a faire ici pour le moment.\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Allons faire un tour !");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");Color(15,0);

      } while (strcmp (action, "prendre") != 0);

      } while (strcmp (objet1, "bus") != 0);
}



Color(15,0);
printf("                                Maison\n\n");
Color(10,0);printf("                               1");Color(15,0);printf(" ");Color(0,10);printf(" ");Color(15,0);printf(" ");Color(0,11);printf(" ");Color(11,0);printf(" 2\n");
Color(15,0);printf("                            ");Color(0,10);printf("      ");Color(15,0);printf(" ");Color(0,11);printf("                 \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" ");Color(11,0);printf("  2\n");
Color(15,0);printf("         ");Color(10,0);printf("1                  ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf("    \n");
Color(15,0);printf("         ");Color(0,10);printf("                    ");Color(15,0);printf("                      ");Color(15,0);printf("      Rue des Lauriers\n");printf("     Zoo ");printf("                           ");
Color(15,0);printf("               ");Color(0,12);printf("    ");Color(15,0);printf("                        ");
Color(15,0);printf("          ");Color(0,13);printf("       ");Color(15,0);printf("                                   ");Color(0,12);printf(" ");Color(12,0);printf("  4\n");
Color(15,0);printf("         ");Color(13,0);printf("3     ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf("                  ");Color(15,0);printf(" ");Color(0,12);printf("                  \n");
Color(15,0);printf("                                ");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" \n");
Color(15,0);printf("                               ");Color(13,0);printf("3");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" ");Color(12,0);printf(" 4\n\n");
Color(15,0);printf("                         Au cafe des mysteres\n\n\n");Color(15,0);

Color(3,0);scanf("%ld", &ChoixBus10);printf("\n\n");Color(15,0);

if(ChoixBus10 == 1)
{
Color(6,0);printf("Impossible ! Cette ligne ne passe pas par ici.\n\n\n");

Color(15,0);system("PAUSE");printf("\n\n");



printf("                                Maison\n\n");
Color(10,0);printf("                               1");Color(15,0);printf(" ");Color(0,10);printf(" ");Color(15,0);printf(" ");Color(0,11);printf(" ");Color(11,0);printf(" 2\n");
Color(15,0);printf("                            ");Color(0,10);printf("      ");Color(15,0);printf(" ");Color(0,11);printf("                 \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" ");Color(11,0);printf("  2\n");
Color(15,0);printf("         ");Color(10,0);printf("1                  ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf("    \n");
Color(15,0);printf("         ");Color(0,10);printf("                    ");Color(15,0);printf("                      ");Color(15,0);printf("      Rue des Lauriers\n");printf("     Zoo ");printf("                           ");
Color(15,0);printf("               ");Color(0,12);printf("    ");Color(15,0);printf("                        ");
Color(15,0);printf("          ");Color(0,13);printf("       ");Color(15,0);printf("                                   ");Color(0,12);printf(" ");Color(12,0);printf("  4\n");
Color(15,0);printf("         ");Color(13,0);printf("3     ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf("                  ");Color(15,0);printf(" ");Color(0,12);printf("                  \n");
Color(15,0);printf("                                ");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" \n");
Color(15,0);printf("                               ");Color(13,0);printf("3");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" ");Color(12,0);printf(" 4\n\n");
Color(15,0);printf("                         Au cafe des mysteres\n\n\n");Color(15,0);

Color(3,0);scanf("%ld", &ChoixBus10);printf("\n\n");Color(15,0);
}

if(ChoixBus10 == 2)
{
Color(6,0);printf("Impossible ! Cette ligne ne passe pas par ici.\n\n\n");

Color(15,0);system("PAUSE");printf("\n\n");



printf("                                Maison\n\n");
Color(10,0);printf("                               1");Color(15,0);printf(" ");Color(0,10);printf(" ");Color(15,0);printf(" ");Color(0,11);printf(" ");Color(11,0);printf(" 2\n");
Color(15,0);printf("                            ");Color(0,10);printf("      ");Color(15,0);printf(" ");Color(0,11);printf("                 \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" ");Color(11,0);printf("  2\n");
Color(15,0);printf("         ");Color(10,0);printf("1                  ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf("    \n");
Color(15,0);printf("         ");Color(0,10);printf("                    ");Color(15,0);printf("                      ");Color(15,0);printf("      Rue des Lauriers\n");printf("     Zoo ");printf("                           ");
Color(15,0);printf("               ");Color(0,12);printf("    ");Color(15,0);printf("                        ");
Color(15,0);printf("          ");Color(0,13);printf("       ");Color(15,0);printf("                                   ");Color(0,12);printf(" ");Color(12,0);printf("  4\n");
Color(15,0);printf("         ");Color(13,0);printf("3     ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf("                  ");Color(15,0);printf(" ");Color(0,12);printf("                  \n");
Color(15,0);printf("                                ");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" \n");
Color(15,0);printf("                               ");Color(13,0);printf("3");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" ");Color(12,0);printf(" 4\n\n");
Color(15,0);printf("                         Au cafe des mysteres\n\n\n");Color(15,0);

Color(3,0);scanf("%ld", &ChoixBus10);printf("\n\n");Color(15,0);
}

switch (ChoixBus10)

{ /* Ouverture switch Bus 4 */

case 3 :

Color(11,0);printf("Le zoo est ferme, sans raison apparente. Je ne peux rien faire de plus\n");
printf("la-bas.\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");


printf("                                Maison\n\n");
Color(10,0);printf("                               1");Color(15,0);printf(" ");Color(0,10);printf(" ");Color(15,0);printf(" ");Color(0,11);printf(" ");Color(11,0);printf(" 2\n");
Color(15,0);printf("                            ");Color(0,10);printf("      ");Color(15,0);printf(" ");Color(0,11);printf("                 \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" ");Color(11,0);printf("  2\n");
Color(15,0);printf("         ");Color(10,0);printf("1                  ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf("    \n");
Color(15,0);printf("         ");Color(0,10);printf("                    ");Color(15,0);printf("                      ");Color(15,0);printf("      Rue des Lauriers\n");printf("     Zoo ");printf("                           ");
Color(15,0);printf("               ");Color(0,12);printf("    ");Color(15,0);printf("                        ");
Color(15,0);printf("          ");Color(0,13);printf("       ");Color(15,0);printf("                                   ");Color(0,12);printf(" ");Color(12,0);printf("  4\n");
Color(15,0);printf("         ");Color(13,0);printf("3     ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf("                  ");Color(15,0);printf(" ");Color(0,12);printf("                  \n");
Color(15,0);printf("                                ");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" \n");
Color(15,0);printf("                               ");Color(13,0);printf("3");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" ");Color(12,0);printf(" 4\n\n");
Color(15,0);printf("                         Au cafe des mysteres\n\n\n");Color(15,0);

     Color(3,0);scanf("%ld", &ChoixBus13);printf("\n\n");Color(15,0);

     if(ChoixBus13 == 2)
{
Color(6,0);printf("Impossible ! Cette ligne ne passe pas par ici.\n\n\n");

Color(15,0);system("PAUSE");printf("\n\n");



printf("                                Maison\n\n");
Color(10,0);printf("                               1");Color(15,0);printf(" ");Color(0,10);printf(" ");Color(15,0);printf(" ");Color(0,11);printf(" ");Color(11,0);printf(" 2\n");
Color(15,0);printf("                            ");Color(0,10);printf("      ");Color(15,0);printf(" ");Color(0,11);printf("                 \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" ");Color(11,0);printf("  2\n");
Color(15,0);printf("         ");Color(10,0);printf("1                  ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf("    \n");
Color(15,0);printf("         ");Color(0,10);printf("                    ");Color(15,0);printf("                      ");Color(15,0);printf("      Rue des Lauriers\n");printf("     Zoo ");printf("                           ");
Color(15,0);printf("               ");Color(0,12);printf("    ");Color(15,0);printf("                        ");
Color(15,0);printf("          ");Color(0,13);printf("       ");Color(15,0);printf("                                   ");Color(0,12);printf(" ");Color(12,0);printf("  4\n");
Color(15,0);printf("         ");Color(13,0);printf("3     ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf("                  ");Color(15,0);printf(" ");Color(0,12);printf("                  \n");
Color(15,0);printf("                                ");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" \n");
Color(15,0);printf("                               ");Color(13,0);printf("3");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" ");Color(12,0);printf(" 4\n\n");
Color(15,0);printf("                         Au cafe des mysteres\n\n\n");Color(15,0);

Color(3,0);scanf("%ld", &ChoixBus13);printf("\n\n");Color(15,0);
}

if(ChoixBus13 == 4)
{
Color(6,0);printf("Impossible ! Cette ligne ne passe pas par ici.\n\n\n");

Color(15,0);system("PAUSE");printf("\n\n");



printf("                                Maison\n\n");
Color(10,0);printf("                               1");Color(15,0);printf(" ");Color(0,10);printf(" ");Color(15,0);printf(" ");Color(0,11);printf(" ");Color(11,0);printf(" 2\n");
Color(15,0);printf("                            ");Color(0,10);printf("      ");Color(15,0);printf(" ");Color(0,11);printf("                 \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" ");Color(11,0);printf("  2\n");
Color(15,0);printf("         ");Color(10,0);printf("1                  ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf("    \n");
Color(15,0);printf("         ");Color(0,10);printf("                    ");Color(15,0);printf("                      ");Color(15,0);printf("      Rue des Lauriers\n");printf("     Zoo ");printf("                           ");
Color(15,0);printf("               ");Color(0,12);printf("    ");Color(15,0);printf("                        ");
Color(15,0);printf("          ");Color(0,13);printf("       ");Color(15,0);printf("                                   ");Color(0,12);printf(" ");Color(12,0);printf("  4\n");
Color(15,0);printf("         ");Color(13,0);printf("3     ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf("                  ");Color(15,0);printf(" ");Color(0,12);printf("                  \n");
Color(15,0);printf("                                ");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" \n");
Color(15,0);printf("                               ");Color(13,0);printf("3");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" ");Color(12,0);printf(" 4\n\n");
Color(15,0);printf("                         Au cafe des mysteres\n\n\n");Color(15,0);

Color(3,0);scanf("%ld", &ChoixBus13);printf("\n\n");Color(15,0);
}



break ;

} /* Fermeture switch Bus 4 */

break ;

} /* Fermeture switch Bus 3 */


case 3 :

Color(8,0);printf("Le bus vous depose juste devant la porte du cafe des mysteres.\n\n");

Color(11,0);printf("\"C'est ici qu'on trouve les meilleurs thes et cafes de la ville,\n");
printf("j'adore cet endroit. En plus, une fois par mois un concours y est\n");
printf("organise pour gagner un cadeau mystere en rapport avec le the ou le cafe.\n");
printf("D'ailleurs, je crois que c'est justement aujourd'hui que commence le\n");
printf("nouveau concours de ce mois. Je me demande ce que c'est...\"\n\n\n");

Color(8,0);printf("Que faire maintenant ?\n\n\n");

Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");Color(15,0);

if (strcmp (action, "utiliser") != 0) if (strcmp (objet1, "porte") != 0)
{
   do {
   do {

Color(6,0);printf("Je ne suis pas sur de comprendre...\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Pourquoi pas prendre un bon cafe ?");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");Color(15,0);

      } while (strcmp (action, "utiliser") != 0);

      } while (strcmp (objet1, "porte") != 0);
}


  if (strcmp (action, "utiliser") != 0) if (strcmp (objet1, "porte") != 1)
{
   do {
   do {

Color(6,0);printf("Je ne suis pas sur de comprendre...\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Pourquoi pas prendre un bon cafe ?");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");Color(15,0);

      } while (strcmp (action, "utiliser") != 0);

      } while (strcmp (objet1, "porte") != 0);
}


if (strcmp (action, "utiliser") != 1) if (strcmp (objet1, "porte") != 0)
{
   do {
   do {

Color(6,0);printf("Je ne suis pas sur de comprendre...\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Pourquoi pas prendre un bon cafe ?");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");Color(15,0);

      } while (strcmp (action, "utiliser") != 0);

      } while (strcmp (objet1, "porte") != 0);
}



Color(8,0);printf("Vous entrez au cafe des mysteres. Il y a le barman derriere son comptoir,\n");
printf("en train de ranger sa vaisselle en sifflant, tandis qu'un client boit\n");
printf("une tasse de the en lisant son journal. A droite se trouvent les tables\n");
printf("et les banquettes, vides. Tout au fond, un petit couloir qui mene aux\n");
printf("toilettes.\n\n\n");
Color(15,0);system("PAUSE");printf("\n\n\n");

Color(11,0);printf("\"Eh bien ! Il n'y a pas grand monde. Pas etonnant par ce froid.\"\n\n\n");
Color(15,0);system("PAUSE");printf("\n\n\n");

printf("- Ah ! c'est toi ! Entre donc mon ami, ca fait plaisir de te voir !\n\n\n");

Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");Color(15,0);



if (strcmp (action, "parler") != 0) if (strcmp (objet1, "barman") != 0)
{
   do {
   do {

Color(6,0);printf("Je ne veux pas faire ca, c'est inaproprie...\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Pourquoi pas prendre un bon cafe ?");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");Color(15,0);

      } while (strcmp (action, "parler") != 0);

      } while (strcmp (objet1, "barman") != 0);
}


if (strcmp (action, "parler") != 0) if (strcmp (objet1, "barman") != 1)
{
   do {
   do {

Color(6,0);printf("Je ne veux pas faire ca, c'est inaproprie...\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Pourquoi pas prendre un bon cafe ?");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");Color(15,0);

      } while (strcmp (action, "parler") != 0);

      } while (strcmp (objet1, "barman") != 0);
}



if (strcmp (action, "parler") != 1) if (strcmp (objet1, "barman") != 0)
{
   do {
   do {

Color(6,0);printf("Je ne veux pas faire ca, c'est inaproprie...\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Pourquoi pas prendre un bon cafe ?");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");Color(15,0);

      } while (strcmp (action, "parler") != 0);

      } while (strcmp (objet1, "barman") != 0);
}


Color(15,0);printf("- Que puis-je faire pour toi ?\n\n\n");

Color(8,0);printf("1 : Un cafe\n\n");
printf("2 : Le zoo... ?\n\n\n");

Color(3,0);scanf("%ld", &conversation12);printf("\n\n");Color(15,0);

if(conversation12 == 2)
{
Color(11,0);printf("\"Sais-tu pourquoi le zoo est ferme aujourd'hui ?\"\n\n");
Color(15,0);system("PAUSE");printf("\n\n\n");
printf("- Non, je ne connais pas la raison exacte. Ce que je sais en revanche,\n");
printf("c'est que le gardien du zoo est coince ici pour la journee. Car vois-tu,\n");
printf("il vient au zoo en train ; or le prochain train est pour ce soir. Il avait\n");
printf("l'air bien embete. Il est venu prendre un cafe tout a l'heure.\n");
printf("Maintenant, je pense qu'il est parti tuer le temps a la patinoire a ciel\n");
printf("ouvert du parc municipal. Comme quoi, ce froid inhabituel en a surpris\n");
printf("plus d'un, mais fait aussi quelques heureux !\n\n\n");


system("PAUSE");printf("\n\n\n");

Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");Color(15,0);


if (strcmp (action, "parler") != 0) if (strcmp (objet1, "barman") != 0)
{
   do {
   do {

Color(6,0);printf("Je ne veux pas faire ca, c'est inaproprie...\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Pourquoi pas prendre un bon cafe ?");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");Color(15,0);

      } while (strcmp (action, "parler") != 0);

      } while (strcmp (objet1, "barman") != 0);
}


if (strcmp (action, "parler") != 0) if (strcmp (objet1, "barman") != 1)
{
   do {
   do {

Color(6,0);printf("Je ne veux pas faire ca, c'est inaproprie...\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Pourquoi pas prendre un bon cafe ?");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");Color(15,0);

      } while (strcmp (action, "parler") != 0);

      } while (strcmp (objet1, "barman") != 0);
}



if (strcmp (action, "parler") != 1) if (strcmp (objet1, "barman") != 0)
{
   do {
   do {

Color(6,0);printf("Je ne veux pas faire ca, c'est inaproprie...\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Pourquoi pas prendre un bon cafe ?");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");Color(15,0);

      } while (strcmp (action, "parler") != 0);

      } while (strcmp (objet1, "barman") != 0);
}


Color(15,0);printf("- Que puis-je faire pour toi ?\n\n\n");

Color(8,0);printf("1 : Un cafe\n\n");

Color(3,0);scanf("%ld", &conversation13);printf("\n\n");Color(15,0);

if(conversation13 == 1)
{

Color(11,0);printf("\"Pourrais-je avoir un cafe s'il-te-plait ?\"\n\n\n");
Color(15,0);system("PAUSE");printf("\n\n\n");

printf("- Bien sur ! Je t'en prie, prends place sur une des banquettes.\n\n\n");

}
}

if(conversation12 == 1)
{

Color(11,0);printf("\"Pourrais-je avoir un cafe s'il-te-plait ?\"\n\n\n");
Color(15,0);system("PAUSE");printf("\n\n\n");

printf("- Bien sur ! Je t'en prie, prends place sur une des banquettes.\n\n\n");

}

Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");Color(15,0);


if (strcmp (action, "utiliser") != 0) if (strcmp (objet1, "banquette") != 0)
{
   do {
   do {

Color(6,0);printf("Je devrais plutot m'asseoir, le cafe va bientot arriver.\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");Color(15,0);

      } while (strcmp (action, "utiliser") != 0);

      } while (strcmp (objet1, "banquette") != 0);
}

if (strcmp (action, "utiliser") != 0) if (strcmp (objet1, "banquette") != 1)
{
   do {
   do {

Color(6,0);printf("Je devrais plutot m'asseoir, le cafe va bientot arriver.\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");Color(15,0);

      } while (strcmp (action, "utiliser") != 0);

      } while (strcmp (objet1, "banquette") != 0);
}

if (strcmp (action, "utiliser") != 1) if (strcmp (objet1, "banquette") != 0)
{
   do {
   do {

Color(6,0);printf("Je devrais plutot m'asseoir, le cafe va bientot arriver.\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");Color(15,0);

      } while (strcmp (action, "utiliser") != 0);

      } while (strcmp (objet1, "banquette") != 0);
}

Color(8,0);printf("Vous vous asseyez sur votre banquette favorite. Mais...\n\n\n");

Color(11,0);printf("\"Aie ! Sur quoi me suis-je assis ?\"\n\n\n");
Color(15,0);system("PAUSE");printf("\n\n\n");
Color(8,0);printf("Vous regardez le coussin et vous trouvez une boucle d'oreille !\n\n\n");
Color(15,0);system("PAUSE");printf("\n\n\n");

printf("- Et voila, un cafe pour monsieur, un !\n\n\n");

Color(8,0);printf("1 : Le zoo... ?\n\n");
printf("2 : La boucle d'oreille\n\n");
printf("3 : Le concours du mois...\n\n\n");

Color(3,0);scanf("%ld", &conversation14);printf("\n\n");Color(15,0);

if(conversation14 == 1)
{
Color(11,0);printf("\"Sais-tu pourquoi le zoo est ferme aujourd'hui ?\"\n\n");
Color(15,0);system("PAUSE");printf("\n\n\n");
printf("- Non, je ne connais pas la raison exacte. Ce que je sais en revanche,\n");
printf("c'est que le gardien du zoo est coince ici pour la journee. Car vois-tu,\n");
printf("il vient au zoo en train ; or le prochain train est pour ce soir. Il avait\n");
printf("l'air bien embete. Il est venu prendre un cafe tout a l'heure.\n");
printf("Maintenant, je pense qu'il est parti tuer le temps a la patinoire a ciel\n");
printf("ouvert du parc municipal. Comme quoi, ce froid inhabituel en a surpris\n");
printf("plus d'un, mais fait aussi quelques heureux !\n\n\n");

system("PAUSE");printf("\n\n\n");

Color(8,0);printf("2 : La boucle d'oreille\n\n");
printf("3 : Le concours du mois...\n\n\n");
Color(3,0);scanf("%ld", &conversation14);printf("\n\n");Color(15,0);
}

if(conversation14 == 2)
{
Color(15,0);printf("- Oh ! Ce doit etre a la jeune demoiselle de tout a l'heure...\n");
printf("Malheureusement, elle est de passage en ville seulement aujourd'hui.\n");
printf("Je pense que tu devrais la garder, tu as plus de chance que moi de la\n");
printf("rencontrer, surtout si elle est aussi venue en train, ca te laisse\n");
printf("jusqu'a ce soir pour la retrouver !\n\n\n");

system("PAUSE");printf("\n\n\n");

Color(8,0);printf("1 : Le zoo... ?\n\n");
printf("3 : Le concours du mois...\n\n\n");
Color(3,0);scanf("%ld", &conversation15);printf("\n\n");Color(15,0);

if(conversation15 == 1)
{
Color(11,0);printf("\"Sais-tu pourquoi le zoo est ferme aujourd'hui ?\"\n\n");
Color(15,0);system("PAUSE");printf("\n\n\n");
printf("- Non, je ne connais pas la raison exacte. Ce que je sais en revanche,\n");
printf("c'est que le gardien du zoo est coince ici pour la journee. Car vois-tu,\n");
printf("il vient au zoo en train ; or le prochain train est pour ce soir. Il avait\n");
printf("l'air bien embete. Il est venu prendre un cafe tout a l'heure.\n");
printf("Maintenant, je pense qu'il est parti tuer le temps a la patinoire a ciel\n");
printf("ouvert du parc municipal. Comme quoi, ce froid inhabituel en a surpris\n");
printf("plus d'un, mais fait aussi quelques heureux !\n\n\n");

system("PAUSE");printf("\n\n\n");

Color(8,0);printf("3 : Le concours du mois...\n\n\n");
Color(3,0);scanf("%ld", &conversation14);printf("\n\n");Color(15,0);
}
}

if(conversation14 == 3)
{

Color(11,0);printf("\"En quoi consiste le concours de ce mois-ci ?\"\n\n\n");
Color(15,0);printf("- Eh bah, tu ne perds pas de temps, toi ! Mais je crois que la surprise\n");
printf("va te plaire. Pour inaugurer cette borne d'arcade que je viens tout\n");
printf("juste d'installer, j'ai programme un petit jeu de devinette. Chaque\n");
printf("client qui battra l'ordinateur a ce petit jeu gagnera la surprise de ce\n");
printf("mois. Mais il va falloir que tu repasses dans une heure, car je n'ai pas\n");
printf("encore termine les branchements. C'est-a-dire que tu es bien matinale ^^\n\n\n");
}

Color(15,0);system("PAUSE");printf("\n\n\n");

Color(11,0);printf("\"Merci pour le cafe, il etait tres bon. A plus tard !\"\n\n\n");

Color(8,0);printf("Que faire maintenant ?\n\n\n");


Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");Color(15,0);


if (strcmp (action, "prendre") != 0) if (strcmp (objet1, "bus") != 0)
{
   do {
   do {

Color(6,0);printf("Je crois qu'il n'y a rien a faire ici pour le moment.\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Allons faire un tour !");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");Color(15,0);

      } while (strcmp (action, "prendre") != 0);

      } while (strcmp (objet1, "bus") != 0);
}


if (strcmp (action, "prendre") != 0) if (strcmp (objet1, "bus") != 1)
{
   do {
   do {

Color(6,0);printf("Je crois qu'il n'y a rien a faire ici pour le moment.\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Allons faire un tour !");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");Color(15,0);

      } while (strcmp (action, "prendre") != 0);

      } while (strcmp (objet1, "bus") != 0);
}


if (strcmp (action, "prendre") != 1) if (strcmp (objet1, "bus") != 0)
{
   do {
   do {

Color(6,0);printf("Je crois qu'il n'y a rien a faire ici pour le moment.\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Allons faire un tour !");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");Color(15,0);

      } while (strcmp (action, "prendre") != 0);

      } while (strcmp (objet1, "bus") != 0);
}



Color(15,0);
printf("                                Maison\n\n");
Color(10,0);printf("                               1");Color(15,0);printf(" ");Color(0,10);printf(" ");Color(15,0);printf(" ");Color(0,11);printf(" ");Color(11,0);printf(" 2\n");
Color(15,0);printf("                            ");Color(0,10);printf("      ");Color(15,0);printf(" ");Color(0,11);printf("                 \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" ");Color(11,0);printf("  2\n");
Color(15,0);printf("         ");Color(10,0);printf("1                  ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf("    \n");
Color(15,0);printf("         ");Color(0,10);printf("                    ");Color(15,0);printf("                      ");Color(15,0);printf("      Rue des Lauriers\n");printf("     Zoo ");printf("                           ");
Color(15,0);printf("               ");Color(0,12);printf("    ");Color(15,0);printf("                        ");
Color(15,0);printf("          ");Color(0,13);printf("       ");Color(15,0);printf("                                   ");Color(0,12);printf(" ");Color(12,0);printf("  4\n");
Color(15,0);printf("         ");Color(13,0);printf("3     ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf("                  ");Color(15,0);printf(" ");Color(0,12);printf("                  \n");
Color(15,0);printf("                                ");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" \n");
Color(15,0);printf("                               ");Color(13,0);printf("3");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" ");Color(12,0);printf(" 4\n\n");
Color(15,0);printf("                         Au cafe des mysteres\n\n\n");Color(15,0);

Color(3,0);scanf("%ld", &ChoixBus12);printf("\n\n");Color(15,0);

if(ChoixBus12 == 1)
{
Color(6,0);printf("Impossible ! Cette ligne ne passe pas par ici.\n\n\n");

Color(15,0);system("PAUSE");printf("\n\n");



printf("                                Maison\n\n");
Color(10,0);printf("                               1");Color(15,0);printf(" ");Color(0,10);printf(" ");Color(15,0);printf(" ");Color(0,11);printf(" ");Color(11,0);printf(" 2\n");
Color(15,0);printf("                            ");Color(0,10);printf("      ");Color(15,0);printf(" ");Color(0,11);printf("                 \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" ");Color(11,0);printf("  2\n");
Color(15,0);printf("         ");Color(10,0);printf("1                  ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf("    \n");
Color(15,0);printf("         ");Color(0,10);printf("                    ");Color(15,0);printf("                      ");Color(15,0);printf("      Rue des Lauriers\n");printf("     Zoo ");printf("                           ");
Color(15,0);printf("               ");Color(0,12);printf("    ");Color(15,0);printf("                        ");
Color(15,0);printf("          ");Color(0,13);printf("       ");Color(15,0);printf("                                   ");Color(0,12);printf(" ");Color(12,0);printf("  4\n");
Color(15,0);printf("         ");Color(13,0);printf("3     ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf("                  ");Color(15,0);printf(" ");Color(0,12);printf("                  \n");
Color(15,0);printf("                                ");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" \n");
Color(15,0);printf("                               ");Color(13,0);printf("3");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" ");Color(12,0);printf(" 4\n\n");
Color(15,0);printf("                         Au cafe des mysteres\n\n\n");Color(15,0);

Color(3,0);scanf("%ld", &ChoixBus12);printf("\n\n");Color(15,0);
}

if(ChoixBus12 == 2)
{
Color(6,0);printf("Impossible ! Cette ligne ne passe pas par ici.\n\n\n");

Color(15,0);system("PAUSE");printf("\n\n");



printf("                                Maison\n\n");
Color(10,0);printf("                               1");Color(15,0);printf(" ");Color(0,10);printf(" ");Color(15,0);printf(" ");Color(0,11);printf(" ");Color(11,0);printf(" 2\n");
Color(15,0);printf("                            ");Color(0,10);printf("      ");Color(15,0);printf(" ");Color(0,11);printf("                 \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" ");Color(11,0);printf("  2\n");
Color(15,0);printf("         ");Color(10,0);printf("1                  ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf("    \n");
Color(15,0);printf("         ");Color(0,10);printf("                    ");Color(15,0);printf("                      ");Color(15,0);printf("      Rue des Lauriers\n");printf("     Zoo ");printf("                           ");
Color(15,0);printf("               ");Color(0,12);printf("    ");Color(15,0);printf("                        ");
Color(15,0);printf("          ");Color(0,13);printf("       ");Color(15,0);printf("                                   ");Color(0,12);printf(" ");Color(12,0);printf("  4\n");
Color(15,0);printf("         ");Color(13,0);printf("3     ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf("                  ");Color(15,0);printf(" ");Color(0,12);printf("                  \n");
Color(15,0);printf("                                ");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" \n");
Color(15,0);printf("                               ");Color(13,0);printf("3");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" ");Color(12,0);printf(" 4\n\n");
Color(15,0);printf("                         Au cafe des mysteres\n\n\n");Color(15,0);

Color(3,0);scanf("%ld", &ChoixBus12);printf("\n\n");Color(15,0);
}

switch (ChoixBus12)

{ /* Ouverture switch Bus 4 */

case 3 :

Color(11,0);printf("Le zoo est ferme, sans raison apparente. Je ne peux rien faire de plus\n");
printf("la-bas.\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");


printf("                                Maison\n\n");
Color(10,0);printf("                               1");Color(15,0);printf(" ");Color(0,10);printf(" ");Color(15,0);printf(" ");Color(0,11);printf(" ");Color(11,0);printf(" 2\n");
Color(15,0);printf("                            ");Color(0,10);printf("      ");Color(15,0);printf(" ");Color(0,11);printf("                 \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" ");Color(11,0);printf("  2\n");
Color(15,0);printf("         ");Color(10,0);printf("1                  ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf("    \n");
Color(15,0);printf("         ");Color(0,10);printf("                    ");Color(15,0);printf("                      ");Color(15,0);printf("      Rue des Lauriers\n");printf("     Zoo ");printf("                           ");
Color(15,0);printf("               ");Color(0,12);printf("    ");Color(15,0);printf("                        ");
Color(15,0);printf("          ");Color(0,13);printf("       ");Color(15,0);printf("                                   ");Color(0,12);printf(" ");Color(12,0);printf("  4\n");
Color(15,0);printf("         ");Color(13,0);printf("3     ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf("                  ");Color(15,0);printf(" ");Color(0,12);printf("                  \n");
Color(15,0);printf("                                ");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" \n");
Color(15,0);printf("                               ");Color(13,0);printf("3");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" ");Color(12,0);printf(" 4\n\n");
Color(15,0);printf("                         Au cafe des mysteres\n\n\n");Color(15,0);

     Color(3,0);scanf("%ld", &ChoixBus13);printf("\n\n");Color(15,0);



break;

} /* Fermeture switch Bus 4 */


break;

break;

} /* Fermeture switch Bus 3 */

break;
}/* Fermeture switch Bus 6 */

break;
}/* Fermeture switch Bus 2 */














case 1 :


Color(8,0);printf("Le bus vous depose juste en face du zoo. La grille est fermee, et le\n");
printf("guichet est vide.\n\n");

Color(11,0);printf("\"C'est etrange, le zoo est habituellement deja ouvert a cette heure-la...\n");
printf("Que se passe-t-il ?\"\n\n");

Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");



if (strcmp (action, "regarder") != 0) if (strcmp (objet1, "guichet") != 0)
{
   do {
   do {

Color(11,0);printf("Ca ne donne rien !\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Mais que se passe-t-il ?\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");

      } while (strcmp (action, "regarder") != 0);

      } while (strcmp (objet1, "guichet") != 0);
}


if (strcmp (action, "regarder") != 0) if (strcmp (objet1, "guichet") != 1)
{
   do {
   do {

Color(11,0);printf("Ca ne donne rien !\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Mais que se passe-t-il ?\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");

      } while (strcmp (action, "regarder") != 0);

      } while (strcmp (objet1, "guichet") != 0);
}


if (strcmp (action, "regarder") != 1) if (strcmp (objet1, "guichet") != 0)
{
   do {
   do {

Color(11,0);printf("Ca ne donne rien !\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Mais que se passe-t-il ?\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");

      } while (strcmp (action, "regarder") != 0);

      } while (strcmp (objet1, "guichet") != 0);
}


Color(11,0);printf("Il y a une petite note collee sur la vitre ! Voyons-voir ce qu'elle dit :\n\n");

Color(15,0);printf("\"Le parc animalier est exceptionnellement ferme aujourd'hui pour cause\n");
printf("de grand froid. Veuillez-nous en excuser pour la gene occasionnee...\"\n\n");

Color(11,0);printf("\"Zut ! C'est vraiment pas de chance ! Je voulais tellement aller au zoo\n");
printf("aujourd'hui. Hmm...Je me demande quel est le veritable probleme.\n");
printf("Puisque je suis dehors, allons faire un tour.\"\n\n\n");

Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");


if (strcmp (action, "prendre") != 0) if (strcmp (objet1, "bus") != 0)
{
   do {
   do {

Color(11,0);printf("Je crois qu'il n'y a rien a faire ici pour le moment.\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Allons faire un tour !");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");

      } while (strcmp (action, "prendre") != 0);

      } while (strcmp (objet1, "bus") != 0);
}


if (strcmp (action, "prendre") != 0) if (strcmp (objet1, "bus") != 1)
{
   do {
   do {

Color(11,0);printf("Je crois qu'il n'y a rien a faire ici pour le moment.\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Allons faire un tour !");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");

      } while (strcmp (action, "prendre") != 0);

      } while (strcmp (objet1, "bus") != 0);
}


if (strcmp (action, "prendre") != 1) if (strcmp (objet1, "bus") != 0)
{
   do {
   do {

Color(11,0);printf("Je crois qu'il n'y a rien a faire ici pour le moment.\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Allons faire un tour !");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");

      } while (strcmp (action, "prendre") != 0);

      } while (strcmp (objet1, "bus") != 0);
}




printf("                                Maison\n\n");
Color(10,0);printf("                               1");Color(15,0);printf(" ");Color(0,10);printf(" ");Color(15,0);printf(" ");Color(0,11);printf(" ");Color(11,0);printf(" 2\n");
Color(15,0);printf("                            ");Color(0,10);printf("      ");Color(15,0);printf(" ");Color(0,11);printf("                 \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" ");Color(11,0);printf("  2\n");
Color(15,0);printf("         ");Color(10,0);printf("1                  ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf("    \n");
Color(15,0);printf("         ");Color(0,10);printf("                    ");Color(15,0);printf("                      ");Color(15,0);printf("      Rue des Lauriers\n");printf("     Zoo ");printf("                           ");
Color(15,0);printf("               ");Color(0,12);printf("    ");Color(15,0);printf("                        ");
Color(15,0);printf("          ");Color(0,13);printf("       ");Color(15,0);printf("                                   ");Color(0,12);printf(" ");Color(12,0);printf("  4\n");
Color(15,0);printf("         ");Color(13,0);printf("3     ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf("                  ");Color(15,0);printf(" ");Color(0,12);printf("                  \n");
Color(15,0);printf("                                ");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" \n");
Color(15,0);printf("                               ");Color(13,0);printf("3");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" ");Color(12,0);printf(" 4\n\n");
Color(15,0);printf("                         Au cafe des mysteres\n\n\n");Color(15,0);

Color(3,0);scanf("%ld", &ChoixBus1);printf("\n\n");

if(ChoixBus1 == 2)
{
Color(8,0);printf("Impossible ! Cette ligne ne passe pas par ici.\n\n\n");

Color(15,0);system("PAUSE");printf("\n\n");



printf("                                Maison\n\n");
Color(10,0);printf("                               1");Color(15,0);printf(" ");Color(0,10);printf(" ");Color(15,0);printf(" ");Color(0,11);printf(" ");Color(11,0);printf(" 2\n");
Color(15,0);printf("                            ");Color(0,10);printf("      ");Color(15,0);printf(" ");Color(0,11);printf("                 \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" ");Color(11,0);printf("  2\n");
Color(15,0);printf("         ");Color(10,0);printf("1                  ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf("    \n");
Color(15,0);printf("         ");Color(0,10);printf("                    ");Color(15,0);printf("                      ");Color(15,0);printf("      Rue des Lauriers\n");printf("     Zoo ");printf("                           ");
Color(15,0);printf("               ");Color(0,12);printf("    ");Color(15,0);printf("                        ");
Color(15,0);printf("          ");Color(0,13);printf("       ");Color(15,0);printf("                                   ");Color(0,12);printf(" ");Color(12,0);printf("  4\n");
Color(15,0);printf("         ");Color(13,0);printf("3     ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf("                  ");Color(15,0);printf(" ");Color(0,12);printf("                  \n");
Color(15,0);printf("                                ");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" \n");
Color(15,0);printf("                               ");Color(13,0);printf("3");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" ");Color(12,0);printf(" 4\n\n");
Color(15,0);printf("                         Au cafe des mysteres\n\n\n");Color(15,0);

Color(3,0);scanf("%ld", &ChoixBus1);printf("\n\n");
}

if(ChoixBus1 == 4)
{
Color(8,0);printf("Impossible ! Cette ligne ne passe pas par ici.\n\n\n");

Color(15,0);system("PAUSE");printf("\n\n");



printf("                                Maison\n\n");
Color(10,0);printf("                               1");Color(15,0);printf(" ");Color(0,10);printf(" ");Color(15,0);printf(" ");Color(0,11);printf(" ");Color(11,0);printf(" 2\n");
Color(15,0);printf("                            ");Color(0,10);printf("      ");Color(15,0);printf(" ");Color(0,11);printf("                 \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" ");Color(11,0);printf("  2\n");
Color(15,0);printf("         ");Color(10,0);printf("1                  ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf("    \n");
Color(15,0);printf("         ");Color(0,10);printf("                    ");Color(15,0);printf("                      ");Color(15,0);printf("      Rue des Lauriers\n");printf("     Zoo ");printf("                           ");
Color(15,0);printf("               ");Color(0,12);printf("    ");Color(15,0);printf("                        ");
Color(15,0);printf("          ");Color(0,13);printf("       ");Color(15,0);printf("                                   ");Color(0,12);printf(" ");Color(12,0);printf("  4\n");
Color(15,0);printf("         ");Color(13,0);printf("3     ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf("                  ");Color(15,0);printf(" ");Color(0,12);printf("                  \n");
Color(15,0);printf("                                ");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" \n");
Color(15,0);printf("                               ");Color(13,0);printf("3");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" ");Color(12,0);printf(" 4\n\n");
Color(15,0);printf("                         Au cafe des mysteres\n\n\n");Color(15,0);

Color(3,0);scanf("%ld", &ChoixBus1);printf("\n\n");
}

switch (ChoixBus1)

{ /* Ouverture switch Bus 2 */
             case 1 :

Color(11,0);printf("Non, je n'ai pas envie de rentrer a la maison maintenant.\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");


printf("                                Maison\n\n");
Color(10,0);printf("                               1");Color(15,0);printf(" ");Color(0,10);printf(" ");Color(15,0);printf(" ");Color(0,11);printf(" ");Color(11,0);printf(" 2\n");
Color(15,0);printf("                            ");Color(0,10);printf("      ");Color(15,0);printf(" ");Color(0,11);printf("                 \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" ");Color(11,0);printf("  2\n");
Color(15,0);printf("         ");Color(10,0);printf("1                  ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf("    \n");
Color(15,0);printf("         ");Color(0,10);printf("                    ");Color(15,0);printf("                      ");Color(15,0);printf("      Rue des Lauriers\n");printf("     Zoo ");printf("                           ");
Color(15,0);printf("               ");Color(0,12);printf("    ");Color(15,0);printf("                        ");
Color(15,0);printf("          ");Color(0,13);printf("       ");Color(15,0);printf("                                   ");Color(0,12);printf(" ");Color(12,0);printf("  4\n");
Color(15,0);printf("         ");Color(13,0);printf("3     ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf("                  ");Color(15,0);printf(" ");Color(0,12);printf("                  \n");
Color(15,0);printf("                                ");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" \n");
Color(15,0);printf("                               ");Color(13,0);printf("3");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" ");Color(12,0);printf(" 4\n\n");
Color(15,0);printf("                         Au cafe des mysteres\n\n\n");Color(15,0);

     Color(3,0);scanf("%ld", &ChoixBus2);printf("\n\n");

     if(ChoixBus2 == 2)
{
Color(8,0);printf("Impossible ! Cette ligne ne passe pas par ici.\n\n\n");

Color(15,0);system("PAUSE");printf("\n\n");



printf("                                Maison\n\n");
Color(10,0);printf("                               1");Color(15,0);printf(" ");Color(0,10);printf(" ");Color(15,0);printf(" ");Color(0,11);printf(" ");Color(11,0);printf(" 2\n");
Color(15,0);printf("                            ");Color(0,10);printf("      ");Color(15,0);printf(" ");Color(0,11);printf("                 \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" ");Color(11,0);printf("  2\n");
Color(15,0);printf("         ");Color(10,0);printf("1                  ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf("    \n");
Color(15,0);printf("         ");Color(0,10);printf("                    ");Color(15,0);printf("                      ");Color(15,0);printf("      Rue des Lauriers\n");printf("     Zoo ");printf("                           ");
Color(15,0);printf("               ");Color(0,12);printf("    ");Color(15,0);printf("                        ");
Color(15,0);printf("          ");Color(0,13);printf("       ");Color(15,0);printf("                                   ");Color(0,12);printf(" ");Color(12,0);printf("  4\n");
Color(15,0);printf("         ");Color(13,0);printf("3     ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf("                  ");Color(15,0);printf(" ");Color(0,12);printf("                  \n");
Color(15,0);printf("                                ");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" \n");
Color(15,0);printf("                               ");Color(13,0);printf("3");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" ");Color(12,0);printf(" 4\n\n");
Color(15,0);printf("                         Au cafe des mysteres\n\n\n");Color(15,0);

Color(3,0);scanf("%ld", &ChoixBus2);printf("\n\n");
}

if(ChoixBus2 == 4)
{
Color(8,0);printf("Impossible ! Cette ligne ne passe pas par ici.\n\n\n");

Color(15,0);system("PAUSE");printf("\n\n");



printf("                                Maison\n\n");
Color(10,0);printf("                               1");Color(15,0);printf(" ");Color(0,10);printf(" ");Color(15,0);printf(" ");Color(0,11);printf(" ");Color(11,0);printf(" 2\n");
Color(15,0);printf("                            ");Color(0,10);printf("      ");Color(15,0);printf(" ");Color(0,11);printf("                 \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" ");Color(11,0);printf("  2\n");
Color(15,0);printf("         ");Color(10,0);printf("1                  ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf("    \n");
Color(15,0);printf("         ");Color(0,10);printf("                    ");Color(15,0);printf("                      ");Color(15,0);printf("      Rue des Lauriers\n");printf("     Zoo ");printf("                           ");
Color(15,0);printf("               ");Color(0,12);printf("    ");Color(15,0);printf("                        ");
Color(15,0);printf("          ");Color(0,13);printf("       ");Color(15,0);printf("                                   ");Color(0,12);printf(" ");Color(12,0);printf("  4\n");
Color(15,0);printf("         ");Color(13,0);printf("3     ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf("                  ");Color(15,0);printf(" ");Color(0,12);printf("                  \n");
Color(15,0);printf("                                ");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" \n");
Color(15,0);printf("                               ");Color(13,0);printf("3");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" ");Color(12,0);printf(" 4\n\n");
Color(15,0);printf("                         Au cafe des mysteres\n\n\n");Color(15,0);

Color(3,0);scanf("%ld", &ChoixBus2);printf("\n\n");
}

switch (ChoixBus2)

     { /* Ouverture switch Bus 3 */

     case 3 :

Color(8,0);printf("Le bus vous depose juste devant la porte du cafe des mysteres.\n\n");

Color(11,0);printf("\"C'est ici qu'on trouve les meilleurs thes et cafes de la ville,\n");
printf("j'adore cet endroit. En plus, une fois par mois un concours y est\n");
printf("organise pour gagner un cadeau mystere en rapport avec le the ou le cafe.\n");
printf("D'ailleurs, je crois que c'est justement aujourd'hui que commence le\n");
printf("nouveau concours de ce mois. Je me demande ce que c'est...\"\n\n\n");

printf("Que faire maintenant ?\n\n\n");

Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");

if (strcmp (action, "utiliser") != 0) if (strcmp (objet1, "porte") != 0)
{
   do {
   do {

Color(11,0);printf("Je ne suis pas sur de comprendre...\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Pourquoi pas prendre un bon cafe ?");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");

      } while (strcmp (action, "utiliser") != 0);

      } while (strcmp (objet1, "porte") != 0);
}


  if (strcmp (action, "utiliser") != 0) if (strcmp (objet1, "porte") != 1)
{
   do {
   do {

Color(11,0);printf("Je ne suis pas sur de comprendre...\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Pourquoi pas prendre un bon cafe ?");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");

      } while (strcmp (action, "utiliser") != 0);

      } while (strcmp (objet1, "porte") != 0);
}


if (strcmp (action, "utiliser") != 1) if (strcmp (objet1, "porte") != 0)
{
   do {
   do {

Color(11,0);printf("Je ne suis pas sur de comprendre...\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Pourquoi pas prendre un bon cafe ?");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");

      } while (strcmp (action, "utiliser") != 0);

      } while (strcmp (objet1, "porte") != 0);
}



Color(8,0);printf("Vous entrez au cafe des mysteres. Il y a le barman derriere son comptoir,\n");
printf("en train de ranger sa vaisselle en sifflant, tandis qu'un client boit\n");
printf("une tasse de the en lisant son journal. A droite se trouvent les tables\n");
printf("et les banquettes, vides. Tout au fond, un petit couloir qui mene aux\n");
printf("toilettes.\n\n\n");
Color(15,0);system("PAUSE");printf("\n\n\n");

Color(11,0);printf("\"Eh bien ! Il n'y a pas grand monde. Pas etonnant par ce froid.\"\n\n\n");
Color(15,0);system("PAUSE");printf("\n\n\n");

Color(15,0);printf("- Ah ! c'est toi ! Entre donc mon ami, ca fait plaisir de te voir !\n\n\n");

Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");



if (strcmp (action, "parler") != 0) if (strcmp (objet1, "barman") != 0)
{
   do {
   do {

Color(11,0);printf("Je ne veux pas faire ca, c'est inaproprie...\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Pourquoi pas prendre un bon cafe ?");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");

      } while (strcmp (action, "parler") != 0);

      } while (strcmp (objet1, "barman") != 0);
}


if (strcmp (action, "parler") != 0) if (strcmp (objet1, "barman") != 1)
{
   do {
   do {

Color(11,0);printf("Je ne veux pas faire ca, c'est inaproprie...\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Pourquoi pas prendre un bon cafe ?");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");

      } while (strcmp (action, "parler") != 0);

      } while (strcmp (objet1, "barman") != 0);
}



if (strcmp (action, "parler") != 1) if (strcmp (objet1, "barman") != 0)
{
   do {
   do {

Color(11,0);printf("Je ne veux pas faire ca, c'est inaproprie...\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Pourquoi pas prendre un bon cafe ?");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");

      } while (strcmp (action, "parler") != 0);

      } while (strcmp (objet1, "barman") != 0);
}


Color(15,0);printf("- Que puis-je faire pour toi ?\n\n\n");

Color(8,0);printf("1 : Un cafe\n\n");
printf("2 : Le zoo... ?\n\n\n");

Color(3,0);scanf("%ld", &conversation);printf("\n\n");

if(conversation == 2)
{
Color(11,0);printf("\"Sais-tu pourquoi le zoo est ferme aujourd'hui ?\"\n\n");
Color(15,0);system("PAUSE");printf("\n\n\n");
printf("- Non, je ne connais pas la raison exacte. Ce que je sais en revanche,\n");
printf("c'est que le gardien du zoo est coince ici pour la journee. Car vois-tu,\n");
printf("il vient au zoo en train ; or le prochain train est pour ce soir. Il avait\n");
printf("l'air bien embete. Il est venu prendre un cafe tout a l'heure.\n");
printf("Maintenant, je pense qu'il est parti tuer le temps a la patinoire a ciel\n");
printf("ouvert du parc municipal. Comme quoi, ce froid inhabituel en a surpris\n");
printf("plus d'un, mais fait aussi quelques heureux !\n\n\n");


system("PAUSE");printf("\n\n\n");

Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");


if (strcmp (action, "parler") != 0) if (strcmp (objet1, "barman") != 0)
{
   do {
   do {

Color(11,0);printf("Je ne veux pas faire ca, c'est inaproprie...\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Pourquoi pas prendre un bon cafe ?");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");

      } while (strcmp (action, "parler") != 0);

      } while (strcmp (objet1, "barman") != 0);
}


if (strcmp (action, "parler") != 0) if (strcmp (objet1, "barman") != 1)
{
   do {
   do {

Color(11,0);printf("Je ne veux pas faire ca, c'est inaproprie...\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Pourquoi pas prendre un bon cafe ?");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");

      } while (strcmp (action, "parler") != 0);

      } while (strcmp (objet1, "barman") != 0);
}



if (strcmp (action, "parler") != 1) if (strcmp (objet1, "barman") != 0)
{
   do {
   do {

Color(11,0);printf("Je ne veux pas faire ca, c'est inaproprie...\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Pourquoi pas prendre un bon cafe ?");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");

      } while (strcmp (action, "parler") != 0);

      } while (strcmp (objet1, "barman") != 0);
}


Color(15,0);printf("- Que puis-je faire pour toi ?\n\n\n");

Color(8,0);printf("1 : Un cafe\n\n");

Color(3,0);scanf("%ld", &conversation1);printf("\n\n");

if(conversation1 == 1)
{

Color(11,0);printf("\"Pourrais-je avoir un cafe s'il-te-plait ?\"\n\n\n");
Color(15,0);system("PAUSE");printf("\n\n\n");

printf("- Bien sur ! Je t'en prie, prends place sur une des banquettes.\n\n\n");

}
}

if(conversation == 1)
{

Color(11,0);printf("\"Pourrais-je avoir un cafe s'il-te-plait ?\"\n\n\n");
Color(15,0);system("PAUSE");printf("\n\n\n");

printf("- Bien sur ! Je t'en prie, prends place sur une des banquettes.\n\n\n");

}

Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");


if (strcmp (action, "utiliser") != 0) if (strcmp (objet1, "banquette") != 0)
{
   do {
   do {

Color(11,0);printf("Je devrais plutot m'asseoir, le cafe va bientot arriver.\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");

      } while (strcmp (action, "utiliser") != 0);

      } while (strcmp (objet1, "banquette") != 0);
}

if (strcmp (action, "utiliser") != 0) if (strcmp (objet1, "banquette") != 1)
{
   do {
   do {

Color(11,0);printf("Je devrais plutot m'asseoir, le cafe va bientot arriver.\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");

      } while (strcmp (action, "utiliser") != 0);

      } while (strcmp (objet1, "banquette") != 0);
}

if (strcmp (action, "utiliser") != 1) if (strcmp (objet1, "banquette") != 0)
{
   do {
   do {

Color(11,0);printf("Je devrais plutot m'asseoir, le cafe va bientot arriver.\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");

      } while (strcmp (action, "utiliser") != 0);

      } while (strcmp (objet1, "banquette") != 0);
}

Color(8,0);printf("Vous vous asseyez sur votre banquette favorite. Mais...\n\n\n");

Color(11,0);printf("\"Aie ! Sur quoi me suis-je assis ?\"\n\n\n");
Color(15,0);system("PAUSE");printf("\n\n\n");
Color(8,0);printf("Vous regardez le coussin et vous trouvez une boucle d'oreille !\n\n\n");
Color(15,0);system("PAUSE");printf("\n\n\n");

printf("- Et voila, un cafe pour monsieur, un !\n\n\n");

Color(8,0);printf("1 : Le zoo... ?\n\n");
printf("2 : La boucle d'oreille\n\n");
printf("3 : Le concours du mois...\n\n\n");

Color(3,0);scanf("%ld", &conversation2);printf("\n\n");

if(conversation2 == 1)
{
Color(11,0);printf("\"Sais-tu pourquoi le zoo est ferme aujourd'hui ?\"\n\n");
Color(15,0);system("PAUSE");printf("\n\n\n");
printf("- Non, je ne connais pas la raison exacte. Ce que je sais en revanche,\n");
printf("c'est que le gardien du zoo est coince ici pour la journee. Car vois-tu,\n");
printf("il vient au zoo en train ; or le prochain train est pour ce soir. Il avait\n");
printf("l'air bien embete. Il est venu prendre un cafe tout a l'heure.\n");
printf("Maintenant, je pense qu'il est parti tuer le temps a la patinoire a ciel\n");
printf("ouvert du parc municipal. Comme quoi, ce froid inhabituel en a surpris\n");
printf("plus d'un, mais fait aussi quelques heureux !\n\n\n");

system("PAUSE");printf("\n\n\n");

Color(8,0);printf("2 : La boucle d'oreille\n\n");
printf("3 : Le concours du mois...\n\n\n");
Color(3,0);scanf("%ld", &conversation2);printf("\n\n");
}

if(conversation2 == 2)
{
Color(15,0);printf("- Oh ! Ce doit etre a la jeune demoiselle de tout a l'heure...\n");
printf("Malheureusement, elle est de passage en ville seulement aujourd'hui.\n");
printf("Je pense que tu devrais la garder, tu as plus de chance que moi de la\n");
printf("rencontrer, surtout si elle est aussi venue en train, ca te laisse\n");
printf("jusqu'a ce soir pour la retrouver !\n\n\n");

system("PAUSE");printf("\n\n\n");

Color(8,0);printf("1 : Le zoo... ?\n\n");
printf("3 : Le concours du mois...\n\n\n");
Color(3,0);scanf("%ld", &conversation3);printf("\n\n");

if(conversation3 == 1)
{
Color(11,0);printf("\"Sais-tu pourquoi le zoo est ferme aujourd'hui ?\"\n\n");
Color(15,0);system("PAUSE");printf("\n\n\n");
printf("- Non, je ne connais pas la raison exacte. Ce que je sais en revanche,\n");
printf("c'est que le gardien du zoo est coince ici pour la journee. Car vois-tu,\n");
printf("il vient au zoo en train ; or le prochain train est pour ce soir. Il avait\n");
printf("l'air bien embete. Il est venu prendre un cafe tout a l'heure.\n");
printf("Maintenant, je pense qu'il est parti tuer le temps a la patinoire a ciel\n");
printf("ouvert du parc municipal. Comme quoi, ce froid inhabituel en a surpris\n");
printf("plus d'un, mais fait aussi quelques heureux !\n\n\n");

system("PAUSE");printf("\n\n\n");

Color(8,0);printf("3 : Le concours du mois...\n\n\n");
Color(3,0);scanf("%ld", &conversation2);printf("\n\n");
}
}

if(conversation2 == 3)
{

Color(11,0);printf("\"En quoi consiste le concours de ce mois-ci ?\"\n\n\n");
Color(15,0);printf("- Eh bah, tu ne perds pas de temps, toi ! Mais je crois que la surprise\n");
printf("va te plaire. Pour inaugurer cette borne d'arcade que je viens tout\n");
printf("juste d'installer, j'ai programme un petit jeu de devinette. Chaque\n");
printf("client qui battra l'ordinateur a ce petit jeu gagnera la surprise de ce\n");
printf("mois. Mais il va falloir que tu repasses dans une heure, car je n'ai pas\n");
printf("encore termine les branchements. C'est-a-dire que tu es bien matinale ^^\n\n\n");
}

Color(15,0);system("PAUSE");printf("\n\n\n");

Color(11,0);printf("\"Merci pour le cafe, il etait tres bon. A plus tard !\"\n\n\n");

Color(8,0);printf("Que faire maintenant ?\n\n\n");


Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");


if (strcmp (action, "prendre") != 0) if (strcmp (objet1, "bus") != 0)
{
   do {
   do {

Color(11,0);printf("Je crois qu'il n'y a rien a faire ici pour le moment.\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Allons faire un tour !");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");

      } while (strcmp (action, "prendre") != 0);

      } while (strcmp (objet1, "bus") != 0);
}


if (strcmp (action, "prendre") != 0) if (strcmp (objet1, "bus") != 1)
{
   do {
   do {

Color(11,0);printf("Je crois qu'il n'y a rien a faire ici pour le moment.\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Allons faire un tour !");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");

      } while (strcmp (action, "prendre") != 0);

      } while (strcmp (objet1, "bus") != 0);
}


if (strcmp (action, "prendre") != 1) if (strcmp (objet1, "bus") != 0)
{
   do {
   do {

Color(11,0);printf("Je crois qu'il n'y a rien a faire ici pour le moment.\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Allons faire un tour !");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");

      } while (strcmp (action, "prendre") != 0);

      } while (strcmp (objet1, "bus") != 0);
}




printf("                                Maison\n\n");
Color(10,0);printf("                               1");Color(15,0);printf(" ");Color(0,10);printf(" ");Color(15,0);printf(" ");Color(0,11);printf(" ");Color(11,0);printf(" 2\n");
Color(15,0);printf("                            ");Color(0,10);printf("      ");Color(15,0);printf(" ");Color(0,11);printf("                 \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" ");Color(11,0);printf("  2\n");
Color(15,0);printf("         ");Color(10,0);printf("1                  ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf("    \n");
Color(15,0);printf("         ");Color(0,10);printf("                    ");Color(15,0);printf("                      ");Color(15,0);printf("      Rue des Lauriers\n");printf("     Zoo ");printf("                           ");
Color(15,0);printf("               ");Color(0,12);printf("    ");Color(15,0);printf("                        ");
Color(15,0);printf("          ");Color(0,13);printf("       ");Color(15,0);printf("                                   ");Color(0,12);printf(" ");Color(12,0);printf("  4\n");
Color(15,0);printf("         ");Color(13,0);printf("3     ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf("                  ");Color(15,0);printf(" ");Color(0,12);printf("                  \n");
Color(15,0);printf("                                ");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" \n");
Color(15,0);printf("                               ");Color(13,0);printf("3");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" ");Color(12,0);printf(" 4\n\n");
Color(15,0);printf("                         Au cafe des mysteres\n\n\n");Color(15,0);

Color(3,0);scanf("%ld", &ChoixBus3);printf("\n\n");

if(ChoixBus3 == 1)
{
Color(8,0);printf("Impossible ! Cette ligne ne passe pas par ici.\n\n\n");

Color(15,0);system("PAUSE");printf("\n\n");



printf("                                Maison\n\n");
Color(10,0);printf("                               1");Color(15,0);printf(" ");Color(0,10);printf(" ");Color(15,0);printf(" ");Color(0,11);printf(" ");Color(11,0);printf(" 2\n");
Color(15,0);printf("                            ");Color(0,10);printf("      ");Color(15,0);printf(" ");Color(0,11);printf("                 \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" ");Color(11,0);printf("  2\n");
Color(15,0);printf("         ");Color(10,0);printf("1                  ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf("    \n");
Color(15,0);printf("         ");Color(0,10);printf("                    ");Color(15,0);printf("                      ");Color(15,0);printf("      Rue des Lauriers\n");printf("     Zoo ");printf("                           ");
Color(15,0);printf("               ");Color(0,12);printf("    ");Color(15,0);printf("                        ");
Color(15,0);printf("          ");Color(0,13);printf("       ");Color(15,0);printf("                                   ");Color(0,12);printf(" ");Color(12,0);printf("  4\n");
Color(15,0);printf("         ");Color(13,0);printf("3     ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf("                  ");Color(15,0);printf(" ");Color(0,12);printf("                  \n");
Color(15,0);printf("                                ");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" \n");
Color(15,0);printf("                               ");Color(13,0);printf("3");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" ");Color(12,0);printf(" 4\n\n");
Color(15,0);printf("                         Au cafe des mysteres\n\n\n");Color(15,0);

Color(3,0);scanf("%ld", &ChoixBus3);printf("\n\n");
}

if(ChoixBus3 == 2)
{
Color(8,0);printf("Impossible ! Cette ligne ne passe pas par ici.\n\n\n");

Color(15,0);system("PAUSE");printf("\n\n");



printf("                                Maison\n\n");
Color(10,0);printf("                               1");Color(15,0);printf(" ");Color(0,10);printf(" ");Color(15,0);printf(" ");Color(0,11);printf(" ");Color(11,0);printf(" 2\n");
Color(15,0);printf("                            ");Color(0,10);printf("      ");Color(15,0);printf(" ");Color(0,11);printf("                 \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" ");Color(11,0);printf("  2\n");
Color(15,0);printf("         ");Color(10,0);printf("1                  ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf("    \n");
Color(15,0);printf("         ");Color(0,10);printf("                    ");Color(15,0);printf("                      ");Color(15,0);printf("      Rue des Lauriers\n");printf("     Zoo ");printf("                           ");
Color(15,0);printf("               ");Color(0,12);printf("    ");Color(15,0);printf("                        ");
Color(15,0);printf("          ");Color(0,13);printf("       ");Color(15,0);printf("                                   ");Color(0,12);printf(" ");Color(12,0);printf("  4\n");
Color(15,0);printf("         ");Color(13,0);printf("3     ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf("                  ");Color(15,0);printf(" ");Color(0,12);printf("                  \n");
Color(15,0);printf("                                ");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" \n");
Color(15,0);printf("                               ");Color(13,0);printf("3");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" ");Color(12,0);printf(" 4\n\n");
Color(15,0);printf("                         Au cafe des mysteres\n\n\n");Color(15,0);

Color(3,0);scanf("%ld", &ChoixBus3);printf("\n\n");
}

switch (ChoixBus3)

{ /* Ouverture switch Bus 4 */

case 3 :

Color(11,0);printf("Le zoo est ferme, sans raison apparente. Je ne peux rien faire de plus\n");
printf("la-bas.\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");


printf("                                Maison\n\n");
Color(10,0);printf("                               1");Color(15,0);printf(" ");Color(0,10);printf(" ");Color(15,0);printf(" ");Color(0,11);printf(" ");Color(11,0);printf(" 2\n");
Color(15,0);printf("                            ");Color(0,10);printf("      ");Color(15,0);printf(" ");Color(0,11);printf("                 \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" ");Color(11,0);printf("  2\n");
Color(15,0);printf("         ");Color(10,0);printf("1                  ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf("    \n");
Color(15,0);printf("         ");Color(0,10);printf("                    ");Color(15,0);printf("                      ");Color(15,0);printf("      Rue des Lauriers\n");printf("     Zoo ");printf("                           ");
Color(15,0);printf("               ");Color(0,12);printf("    ");Color(15,0);printf("                        ");
Color(15,0);printf("          ");Color(0,13);printf("       ");Color(15,0);printf("                                   ");Color(0,12);printf(" ");Color(12,0);printf("  4\n");
Color(15,0);printf("         ");Color(13,0);printf("3     ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf("                  ");Color(15,0);printf(" ");Color(0,12);printf("                  \n");
Color(15,0);printf("                                ");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" \n");
Color(15,0);printf("                               ");Color(13,0);printf("3");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" ");Color(12,0);printf(" 4\n\n");
Color(15,0);printf("                         Au cafe des mysteres\n\n\n");Color(15,0);

     Color(3,0);scanf("%ld", &ChoixBus13);printf("\n\n");Color(15,0);


break ;


break ;

} /* Fermeture switch Bus 4 */


break ;

} /* Fermeture switch Bus 3 */






case 3 :

Color(8,0);printf("Le bus vous depose juste devant la porte du cafe des mysteres.\n\n");

Color(11,0);printf("\"C'est ici qu'on trouve les meilleurs thes et cafes de la ville,\n");
printf("j'adore cet endroit. En plus, une fois par mois un concours y est\n");
printf("organise pour gagner un cadeau mystere en rapport avec le the ou le cafe.\n");
printf("D'ailleurs, je crois que c'est justement aujourd'hui que commence le\n");
printf("nouveau concours de ce mois. Je me demande ce que c'est...\"\n\n\n");

Color(8,0);printf("Que faire maintenant ?\n\n\n");

Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");

if (strcmp (action, "utiliser") != 0) if (strcmp (objet1, "porte") != 0)
{
   do {
   do {

Color(11,0);printf("Je ne suis pas sur de comprendre...\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Pourquoi pas prendre un bon cafe ?");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");

      } while (strcmp (action, "utiliser") != 0);

      } while (strcmp (objet1, "porte") != 0);
}


  if (strcmp (action, "utiliser") != 0) if (strcmp (objet1, "porte") != 1)
{
   do {
   do {

Color(11,0);printf("Je ne suis pas sur de comprendre...\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Pourquoi pas prendre un bon cafe ?");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");

      } while (strcmp (action, "utiliser") != 0);

      } while (strcmp (objet1, "porte") != 0);
}


if (strcmp (action, "utiliser") != 1) if (strcmp (objet1, "porte") != 0)
{
   do {
   do {

Color(11,0);printf("Je ne suis pas sur de comprendre...\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Pourquoi pas prendre un bon cafe ?");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");

      } while (strcmp (action, "utiliser") != 0);

      } while (strcmp (objet1, "porte") != 0);
}



Color(8,0);printf("Vous entrez au cafe des mysteres. Il y a le barman derriere son comptoir,\n");
printf("en train de ranger sa vaisselle en sifflant, tandis qu'un client boit\n");
printf("une tasse de the en lisant son journal. A droite se trouvent les tables\n");
printf("et les banquettes, vides. Tout au fond, un petit couloir qui mene aux\n");
printf("toilettes.\n\n\n");
Color(15,0);system("PAUSE");printf("\n\n\n");

Color(11,0);printf("\"Eh bien ! Il n'y a pas grand monde. Pas etonnant par ce froid.\"\n\n\n");
Color(15,0);system("PAUSE");printf("\n\n\n");

printf("- Ah ! c'est toi ! Entre donc mon ami, ca fait plaisir de te voir !\n\n\n");

Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");



if (strcmp (action, "parler") != 0) if (strcmp (objet1, "barman") != 0)
{
   do {
   do {

Color(11,0);printf("Je ne veux pas faire ca, c'est inaproprie...\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Pourquoi pas prendre un bon cafe ?");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");

      } while (strcmp (action, "parler") != 0);

      } while (strcmp (objet1, "barman") != 0);
}


if (strcmp (action, "parler") != 0) if (strcmp (objet1, "barman") != 1)
{
   do {
   do {

Color(11,0);printf("Je ne veux pas faire ca, c'est inaproprie...\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Pourquoi pas prendre un bon cafe ?");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");

      } while (strcmp (action, "parler") != 0);

      } while (strcmp (objet1, "barman") != 0);
}



if (strcmp (action, "parler") != 1) if (strcmp (objet1, "barman") != 0)
{
   do {
   do {

Color(11,0);printf("Je ne veux pas faire ca, c'est inaproprie...\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Pourquoi pas prendre un bon cafe ?");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");

      } while (strcmp (action, "parler") != 0);

      } while (strcmp (objet1, "barman") != 0);
}


Color(15,0);printf("- Que puis-je faire pour toi ?\n\n\n");

Color(8,0);printf("1 : Un cafe\n\n");
printf("2 : Le zoo... ?\n\n\n");

Color(3,0);scanf("%ld", &conversation4);printf("\n\n");

if(conversation4 == 2)
{
Color(11,0);printf("\"Sais-tu pourquoi le zoo est ferme aujourd'hui ?\"\n\n");
Color(15,0);system("PAUSE");printf("\n\n\n");
printf("- Non, je ne connais pas la raison exacte. Ce que je sais en revanche,\n");
printf("c'est que le gardien du zoo est coince ici pour la journee. Car vois-tu,\n");
printf("il vient au zoo en train ; or le prochain train est pour ce soir. Il avait\n");
printf("l'air bien embete. Il est venu prendre un cafe tout a l'heure.\n");
printf("Maintenant, je pense qu'il est parti tuer le temps a la patinoire a ciel\n");
printf("ouvert du parc municipal. Comme quoi, ce froid inhabituel en a surpris\n");
printf("plus d'un, mais fait aussi quelques heureux !\n\n\n");


system("PAUSE");printf("\n\n\n");

Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");


if (strcmp (action, "parler") != 0) if (strcmp (objet1, "barman") != 0)
{
   do {
   do {

Color(11,0);printf("Je ne veux pas faire ca, c'est inaproprie...\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Pourquoi pas prendre un bon cafe ?");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");

      } while (strcmp (action, "parler") != 0);

      } while (strcmp (objet1, "barman") != 0);
}


if (strcmp (action, "parler") != 0) if (strcmp (objet1, "barman") != 1)
{
   do {
   do {

Color(11,0);printf("Je ne veux pas faire ca, c'est inaproprie...\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Pourquoi pas prendre un bon cafe ?");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");

      } while (strcmp (action, "parler") != 0);

      } while (strcmp (objet1, "barman") != 0);
}



if (strcmp (action, "parler") != 1) if (strcmp (objet1, "barman") != 0)
{
   do {
   do {

Color(11,0);printf("Je ne veux pas faire ca, c'est inaproprie...\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Pourquoi pas prendre un bon cafe ?");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");

      } while (strcmp (action, "parler") != 0);

      } while (strcmp (objet1, "barman") != 0);
}


Color(15,0);printf("- Que puis-je faire pour toi ?\n\n\n");

Color(8,0);printf("1 : Un cafe\n\n");

Color(3,0);scanf("%ld", &conversation5);printf("\n\n");

if(conversation5 == 1)
{

Color(11,0);printf("\"Pourrais-je avoir un cafe s'il-te-plait ?\"\n\n\n");
Color(15,0);system("PAUSE");printf("\n\n\n");

printf("- Bien sur ! Je t'en prie, prends place sur une des banquettes.\n\n\n");

}
}

if(conversation4 == 1)
{

Color(11,0);printf("\"Pourrais-je avoir un cafe s'il-te-plait ?\"\n\n\n");
Color(15,0);system("PAUSE");printf("\n\n\n");

printf("- Bien sur ! Je t'en prie, prends place sur une des banquettes.\n\n\n");

}

Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");


if (strcmp (action, "utiliser") != 0) if (strcmp (objet1, "banquette") != 0)
{
   do {
   do {

Color(11,0);printf("Je devrais plutot m'asseoir, le cafe va bientot arriver.\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");

      } while (strcmp (action, "utiliser") != 0);

      } while (strcmp (objet1, "banquette") != 0);
}

if (strcmp (action, "utiliser") != 0) if (strcmp (objet1, "banquette") != 1)
{
   do {
   do {

Color(11,0);printf("Je devrais plutot m'asseoir, le cafe va bientot arriver.\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");

      } while (strcmp (action, "utiliser") != 0);

      } while (strcmp (objet1, "banquette") != 0);
}

if (strcmp (action, "utiliser") != 1) if (strcmp (objet1, "banquette") != 0)
{
   do {
   do {

Color(11,0);printf("Je devrais plutot m'asseoir, le cafe va bientot arriver.\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");

      } while (strcmp (action, "utiliser") != 0);

      } while (strcmp (objet1, "banquette") != 0);
}

Color(8,0);printf("Vous vous asseyez sur votre banquette favorite. Mais...\n\n\n");

Color(11,0);printf("\"Aie ! Sur quoi me suis-je assis ?\"\n\n\n");
Color(15,0);system("PAUSE");printf("\n\n\n");
Color(8,0);printf("Vous regardez le coussin et vous trouvez une boucle d'oreille !\n\n\n");
Color(15,0);system("PAUSE");printf("\n\n\n");

printf("- Et voila, un cafe pour monsieur, un !\n\n\n");

Color(8,0);printf("1 : Le zoo... ?\n\n");
printf("2 : La boucle d'oreille\n\n");
printf("3 : Le concours du mois...\n\n\n");

Color(3,0);scanf("%ld", &conversation6);printf("\n\n");

if(conversation6 == 1)
{
Color(11,0);printf("\"Sais-tu pourquoi le zoo est ferme aujourd'hui ?\"\n\n");
Color(15,0);system("PAUSE");printf("\n\n\n");
printf("- Non, je ne connais pas la raison exacte. Ce que je sais en revanche,\n");
printf("c'est que le gardien du zoo est coince ici pour la journee. Car vois-tu,\n");
printf("il vient au zoo en train ; or le prochain train est pour ce soir. Il avait\n");
printf("l'air bien embete. Il est venu prendre un cafe tout a l'heure.\n");
printf("Maintenant, je pense qu'il est parti tuer le temps a la patinoire a ciel\n");
printf("ouvert du parc municipal. Comme quoi, ce froid inhabituel en a surpris\n");
printf("plus d'un, mais fait aussi quelques heureux !\n\n\n");

system("PAUSE");printf("\n\n\n");

Color(8,0);printf("2 : La boucle d'oreille\n\n");
printf("3 : Le concours du mois...\n\n\n");
Color(3,0);scanf("%ld", &conversation6);printf("\n\n");
}

if(conversation6 == 2)
{
Color(15,0);printf("- Oh ! Ce doit etre a la jeune demoiselle de tout a l'heure...\n");
printf("Malheureusement, elle est de passage en ville seulement aujourd'hui.\n");
printf("Je pense que tu devrais la garder, tu as plus de chance que moi de la\n");
printf("rencontrer, surtout si elle est aussi venue en train, ca te laisse\n");
printf("jusqu'a ce soir pour la retrouver !\n\n\n");

system("PAUSE");printf("\n\n\n");

Color(8,0);printf("1 : Le zoo... ?\n\n");
printf("3 : Le concours du mois...\n\n\n");
Color(3,0);scanf("%ld", &conversation7);printf("\n\n");

if(conversation7 == 1)
{
Color(11,0);printf("\"Sais-tu pourquoi le zoo est ferme aujourd'hui ?\"\n\n");
Color(15,0);system("PAUSE");printf("\n\n\n");
printf("- Non, je ne connais pas la raison exacte. Ce que je sais en revanche,\n");
printf("c'est que le gardien du zoo est coince ici pour la journee. Car vois-tu,\n");
printf("il vient au zoo en train ; or le prochain train est pour ce soir. Il avait\n");
printf("l'air bien embete. Il est venu prendre un cafe tout a l'heure.\n");
printf("Maintenant, je pense qu'il est parti tuer le temps a la patinoire a ciel\n");
printf("ouvert du parc municipal. Comme quoi, ce froid inhabituel en a surpris\n");
printf("plus d'un, mais fait aussi quelques heureux !\n\n\n");

system("PAUSE");printf("\n\n\n");

Color(8,0);printf("3 : Le concours du mois...\n\n\n");
Color(3,0);scanf("%ld", &conversation6);printf("\n\n");
}
}

if(conversation6 == 3)
{

Color(11,0);printf("\"En quoi consiste le concours de ce mois-ci ?\"\n\n\n");
Color(15,0);printf("- Eh bah, tu ne perds pas de temps, toi ! Mais je crois que la surprise\n");
printf("va te plaire. Pour inaugurer cette borne d'arcade que je viens tout\n");
printf("juste d'installer, j'ai programme un petit jeu de devinette. Chaque\n");
printf("client qui battra l'ordinateur a ce petit jeu gagnera la surprise de ce\n");
printf("mois. Mais il va falloir que tu repasses dans une heure, car je n'ai pas\n");
printf("encore termine les branchements. C'est-a-dire que tu es bien matinale ^^\n\n\n");
}

Color(15,0);system("PAUSE");printf("\n\n\n");

Color(11,0);printf("\"Merci pour le cafe, il etait tres bon. A plus tard !\"\n\n\n");

Color(8,0);printf("Que faire maintenant ?\n\n\n");


Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");


if (strcmp (action, "prendre") != 0) if (strcmp (objet1, "bus") != 0)
{
   do {
   do {

Color(11,0);printf("Je crois qu'il n'y a rien a faire ici pour le moment.\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Allons faire un tour !");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");

      } while (strcmp (action, "prendre") != 0);

      } while (strcmp (objet1, "bus") != 0);
}


if (strcmp (action, "prendre") != 0) if (strcmp (objet1, "bus") != 1)
{
   do {
   do {

Color(11,0);printf("Je crois qu'il n'y a rien a faire ici pour le moment.\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Allons faire un tour !");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");

      } while (strcmp (action, "prendre") != 0);

      } while (strcmp (objet1, "bus") != 0);
}


if (strcmp (action, "prendre") != 1) if (strcmp (objet1, "bus") != 0)
{
   do {
   do {

Color(11,0);printf("Je crois qu'il n'y a rien a faire ici pour le moment.\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Allons faire un tour !");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");

      } while (strcmp (action, "prendre") != 0);

      } while (strcmp (objet1, "bus") != 0);
}



Color(15,0);
printf("                                Maison\n\n");
Color(10,0);printf("                               1");Color(15,0);printf(" ");Color(0,10);printf(" ");Color(15,0);printf(" ");Color(0,11);printf(" ");Color(11,0);printf(" 2\n");
Color(15,0);printf("                            ");Color(0,10);printf("      ");Color(15,0);printf(" ");Color(0,11);printf("                 \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" ");Color(11,0);printf("  2\n");
Color(15,0);printf("         ");Color(10,0);printf("1                  ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf("    \n");
Color(15,0);printf("         ");Color(0,10);printf("                    ");Color(15,0);printf("                      ");Color(15,0);printf("      Rue des Lauriers\n");printf("     Zoo ");printf("                           ");
Color(15,0);printf("               ");Color(0,12);printf("    ");Color(15,0);printf("                        ");
Color(15,0);printf("          ");Color(0,13);printf("       ");Color(15,0);printf("                                   ");Color(0,12);printf(" ");Color(12,0);printf("  4\n");
Color(15,0);printf("         ");Color(13,0);printf("3     ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf("                  ");Color(15,0);printf(" ");Color(0,12);printf("                  \n");
Color(15,0);printf("                                ");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" \n");
Color(15,0);printf("                               ");Color(13,0);printf("3");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" ");Color(12,0);printf(" 4\n\n");
Color(15,0);printf("                         Au cafe des mysteres\n\n\n");Color(15,0);

Color(3,0);scanf("%ld", &ChoixBus5);printf("\n\n");

if(ChoixBus5 == 1)
{
Color(8,0);printf("Impossible ! Cette ligne ne passe pas par ici.\n\n\n");

Color(15,0);system("PAUSE");printf("\n\n");



printf("                                Maison\n\n");
Color(10,0);printf("                               1");Color(15,0);printf(" ");Color(0,10);printf(" ");Color(15,0);printf(" ");Color(0,11);printf(" ");Color(11,0);printf(" 2\n");
Color(15,0);printf("                            ");Color(0,10);printf("      ");Color(15,0);printf(" ");Color(0,11);printf("                 \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" ");Color(11,0);printf("  2\n");
Color(15,0);printf("         ");Color(10,0);printf("1                  ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf("    \n");
Color(15,0);printf("         ");Color(0,10);printf("                    ");Color(15,0);printf("                      ");Color(15,0);printf("      Rue des Lauriers\n");printf("     Zoo ");printf("                           ");
Color(15,0);printf("               ");Color(0,12);printf("    ");Color(15,0);printf("                        ");
Color(15,0);printf("          ");Color(0,13);printf("       ");Color(15,0);printf("                                   ");Color(0,12);printf(" ");Color(12,0);printf("  4\n");
Color(15,0);printf("         ");Color(13,0);printf("3     ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf("                  ");Color(15,0);printf(" ");Color(0,12);printf("                  \n");
Color(15,0);printf("                                ");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" \n");
Color(15,0);printf("                               ");Color(13,0);printf("3");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" ");Color(12,0);printf(" 4\n\n");
Color(15,0);printf("                         Au cafe des mysteres\n\n\n");Color(15,0);

Color(3,0);scanf("%ld", &ChoixBus5);printf("\n\n");Color(15,0);
}

if(ChoixBus5 == 2)
{
Color(8,0);printf("Impossible ! Cette ligne ne passe pas par ici.\n\n\n");

Color(15,0);system("PAUSE");printf("\n\n");



printf("                                Maison\n\n");
Color(10,0);printf("                               1");Color(15,0);printf(" ");Color(0,10);printf(" ");Color(15,0);printf(" ");Color(0,11);printf(" ");Color(11,0);printf(" 2\n");
Color(15,0);printf("                            ");Color(0,10);printf("      ");Color(15,0);printf(" ");Color(0,11);printf("                 \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" ");Color(11,0);printf("  2\n");
Color(15,0);printf("         ");Color(10,0);printf("1                  ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf("    \n");
Color(15,0);printf("         ");Color(0,10);printf("                    ");Color(15,0);printf("                      ");Color(15,0);printf("      Rue des Lauriers\n");printf("     Zoo ");printf("                           ");
Color(15,0);printf("               ");Color(0,12);printf("    ");Color(15,0);printf("                        ");
Color(15,0);printf("          ");Color(0,13);printf("       ");Color(15,0);printf("                                   ");Color(0,12);printf(" ");Color(12,0);printf("  4\n");
Color(15,0);printf("         ");Color(13,0);printf("3     ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf("                  ");Color(15,0);printf(" ");Color(0,12);printf("                  \n");
Color(15,0);printf("                                ");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" \n");
Color(15,0);printf("                               ");Color(13,0);printf("3");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" ");Color(12,0);printf(" 4\n\n");
Color(15,0);printf("                         Au cafe des mysteres\n\n\n");Color(15,0);

Color(3,0);scanf("%ld", &ChoixBus5);printf("\n\n");Color(15,0);
}

switch (ChoixBus5)

{ /* Ouverture switch Bus 4 */

case 3 :

Color(11,0);printf("Le zoo est ferme, sans raison apparente. Je ne peux rien faire de plus\n");
printf("la-bas.\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");


printf("                                Maison\n\n");
Color(10,0);printf("                               1");Color(15,0);printf(" ");Color(0,10);printf(" ");Color(15,0);printf(" ");Color(0,11);printf(" ");Color(11,0);printf(" 2\n");
Color(15,0);printf("                            ");Color(0,10);printf("      ");Color(15,0);printf(" ");Color(0,11);printf("                 \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" ");Color(11,0);printf("  2\n");
Color(15,0);printf("         ");Color(10,0);printf("1                  ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf("    \n");
Color(15,0);printf("         ");Color(0,10);printf("                    ");Color(15,0);printf("                      ");Color(15,0);printf("      Rue des Lauriers\n");printf("     Zoo ");printf("                           ");
Color(15,0);printf("               ");Color(0,12);printf("    ");Color(15,0);printf("                        ");
Color(15,0);printf("          ");Color(0,13);printf("       ");Color(15,0);printf("                                   ");Color(0,12);printf(" ");Color(12,0);printf("  4\n");
Color(15,0);printf("         ");Color(13,0);printf("3     ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf("                  ");Color(15,0);printf(" ");Color(0,12);printf("                  \n");
Color(15,0);printf("                                ");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" \n");
Color(15,0);printf("                               ");Color(13,0);printf("3");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" ");Color(12,0);printf(" 4\n\n");
Color(15,0);printf("                         Au cafe des mysteres\n\n\n");Color(15,0);

     Color(3,0);scanf("%ld", &ChoixBus13);printf("\n\n");Color(15,0);




break ;

} /* Fermeture switch Bus 4 */


break ;

} /* Fermeture switch Bus 3 */

break ;

} /* Fermeture switch Bus 1 */








Color(11,0);printf("\"Bonne idee ! C'est dans cette rue que se trouve le parc municipal.\n");
printf("Avec un peu chance, je trouverai le gardien du zoo, ou bien la\n");
printf("proprietaire de cette boucle d'oreille.\"\n\n\n");

Color(15,0);system("PAUSE");printf("\n\n\n");
Color(15,0);printf("Fin du chapitre 2 !\n\n\n");
system("PAUSE");printf("\n\n\n");
Color(14,0);printf("Code checkpoint 2 : 6455\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");




Color(15,0);printf("Veux-tu poursuivre ta partie maintenant ?\n\n");
Color(3,0);scanf("%s", oui2);printf("\n\n\n");Color(15,0);

if(strcmp (oui2, "non") == 0)
{
          Color(15,0);printf("Veux-tu retourner au menu principal ?\n\n");
  Color(3,0); scanf("%s", chaine);printf("\n\n\n\n\n");Color(15,0);
}










if(strcmp (oui2, "oui") == 0)    /* Chapitre 3 */
{

Color(2,0);printf("                      *   *   *   *  Chapitre 3  *   *   *   * \n\n\n\n");Color(15,0);




Color(11,0);printf("\"Me voici arrive au parc municipal. Je vais me diriger vers la patinoire\n");
printf("a ciel ouvert. Si je ne peux pas aller au zoo, j'irai au moins faire\n");
printf("quelques ronds sur la glace !\"\n\n\n");
Color(15,0);system("PAUSE");printf("\n\n\n");
Color(8,0);printf("Vous etes maintenant devant la patinoire. Que faire ?\n\n\n");Color(15,0);

Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");Color(15,0);


if (strcmp (action, "regarder") != 0) if (strcmp (objet1, "patinoire") != 0)
{
   do {
   do {

Color(11,0);printf("Non, ce ne sont pas mes plans !\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Que faire ?\n\n\n");Color(15,0);
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");Color(15,0);

      } while (strcmp (action, "regarder") != 0);

      } while (strcmp (objet1, "patinoire") != 0);
}

if (strcmp (action, "regarder") != 0) if (strcmp (objet1, "patinoire") != 1)
{
   do {
   do {

Color(11,0);printf("Euh... On verra ca plus tard !\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Que faire ?\n\n\n");Color(15,0);
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");Color(15,0);

      } while (strcmp (action, "regarder") != 0);

      } while (strcmp (objet1, "patinoire") != 0);
}

if (strcmp (action, "regarder") != 1) if (strcmp (objet1, "patinoire") != 0)
{
   do {
   do {

Color(11,0);printf("Ce n'est pas tres interessant !\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Que faire ?\n\n\n");Color(15,0);
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");Color(15,0);

      } while (strcmp (action, "regarder") != 0);

      } while (strcmp (objet1, "patinoire") != 0);
}

Color(11,0);printf("\"Wow ! Il y a vraiment beaucoup de monde aujourd'hui. Je crois que je\n");
printf("n'avais jamais vu la patinoire aussi frequentee. Ca fait plaisir a voir,\n");
printf("en revanche, ca va vraiment etre difficile de retrouver quelqu'un\n");
printf("la-dedans ! Voyons-voir, qui pourrait me renseigner ?\"\n\n\n");
Color(15,0);system("PAUSE");printf("\n\n\n");

        /*parler patineurs*/


do {    /* Ouverture boucle patineur */

printf("  ");Color(0,9);printf("       \n");Color(15,0);
printf("  ");Color(0,9);printf("       \n");Color(15,0);
printf("  ");Color(0,9);printf("       ");Color(15,0);       printf("                    ");Color(0,4);printf("      ");Color(15,0);    printf("      "); Color(0,5);printf("        \n");Color(15,0);

Color(0,9);printf("   ");Color(0,9);printf("      ");Color(0,9);printf("   ");Color(15,0);      printf("    ");Color(0,15);printf("      ");Color(15,0);printf(" ");      printf("     ");Color(0,4);printf(" ");Color(0,15);printf("      ");Color(0,4);printf(" ");Color(15,0);printf(" ");      printf("    ");Color(0,5);printf("  ");Color(0,5);printf("      ");Color(0,5);printf("     ");Color(15,0);      printf(" ");Color(0,15);printf("      ");Color(15,0);printf(" ");      printf("     ");Color(0,6);printf(" ");Color(0,6);printf("      ");Color(0,6);printf(" ");Color(15,0);printf(" \n");

printf("  ");Color(0,15);printf(" ");Color(15,0);printf("      ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("   ");Color(0,10);printf(" ");Color(0,10);printf(" ");Color(0,10);printf("      ");Color(0,10);printf(" ");Color(0,10);printf(" ");Color(15,0);printf(" ");      printf("  ");Color(0,4);printf(" ");Color(0,15);printf(" ");Color(15,0);printf("      ");Color(0,15);printf(" ");Color(0,4);printf(" ");Color(15,0);printf(" ");      printf("   ");Color(0,15);printf(" ");Color(15,0);printf("      ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("    ");Color(0,15);printf(" ");Color(15,0);printf("      ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("   ");Color(0,6);printf(" ");Color(0,6);printf(" ");Color(0,6);printf("      ");Color(0,6);printf("  ");Color(15,0);printf(" \n");

printf(" ");Color(0,15);printf(" ");Color(15,0);printf("        ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("  ");Color(0,15);printf(" ");Color(15,0);printf("        ");Color(0,15);printf(" ");Color(15,0);printf(" ");      Color(0,4);printf("  ");Color(0,15);printf(" ");Color(15,0);printf("        ");Color(0,15);printf(" ");Color(15,0);Color(0,4);printf("  ");Color(15,0);      printf(" ");Color(0,15);printf(" ");Color(15,0);printf("        ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("  ");Color(0,15);printf(" ");Color(15,0);printf("        ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf(" ");Color(0,6);printf(" ");Color(0,6);printf(" ");Color(15,0);printf("        ");Color(0,6);printf(" ");Color(0,6);printf(" ");Color(15,0);printf(" \n");

printf(" ");Color(0,15);printf(" ");Color(15,0);printf("  ");Color(0,15);printf(" ");Color(15,0);printf("  ");Color(0,15);printf(" ");Color(15,0);printf("  ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("  ");Color(0,15);printf(" ");Color(15,0);printf("  ");Color(0,15);printf(" ");Color(15,0);printf("  ");Color(0,15);printf(" ");Color(15,0);printf("  ");Color(0,15);printf(" ");Color(15,0);printf(" ");      Color(0,4);printf("  ");Color(0,15);printf(" ");Color(15,0);printf("  ");Color(0,15);printf(" ");Color(15,0);printf("  ");Color(0,15);printf(" ");Color(15,0);printf("  ");Color(0,15);printf(" ");Color(15,0);Color(0,4);printf("  ");Color(15,0);      printf(" ");Color(0,15);printf(" ");Color(15,0);printf("  ");Color(0,15);printf(" ");Color(15,0);printf("  ");Color(0,15);printf(" ");Color(15,0);printf("  ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("  ");Color(0,15);printf(" ");Color(15,0);printf("  ");Color(0,3);printf(" ");Color(15,0);printf("  ");Color(0,3);printf(" ");Color(15,0);printf("  ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf(" ");Color(0,6);printf(" ");Color(0,6);printf(" ");Color(15,0);printf("  ");Color(0,15);printf(" ");Color(15,0);printf("  ");Color(0,15);printf(" ");Color(15,0);printf("  ");Color(0,6);printf(" ");Color(0,6);printf(" ");Color(15,0);printf(" \n");

printf(" ");Color(0,15);printf(" ");Color(15,0);printf("        ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("  ");Color(0,15);printf(" ");Color(15,0);printf("        ");Color(0,15);printf(" ");Color(15,0);printf(" ");      Color(0,4);printf("  ");Color(0,15);printf(" ");Color(15,0);printf("        ");Color(0,15);printf(" ");Color(15,0);Color(0,4);printf("  ");Color(15,0);      printf(" ");Color(0,15);printf(" ");Color(15,0);printf("        ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("  ");Color(0,15);printf(" ");Color(15,0);printf("        ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("  ");Color(0,15);printf(" ");Color(15,0);printf("        ");Color(0,15);printf(" ");Color(15,0);printf(" \n");

printf(" ");Color(0,15);printf(" ");Color(15,0);printf("   ");Color(0,15);printf("  ");Color(15,0);printf("   ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("  ");Color(0,15);printf(" ");Color(15,0);printf("   ");Color(0,15);printf("  ");Color(15,0);printf("   ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("  ");Color(0,15);printf(" ");Color(15,0);printf("   ");Color(0,15);printf("  ");Color(15,0);printf("   ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("  ");Color(0,15);printf(" ");Color(15,0);printf("   ");Color(0,15);printf("  ");Color(15,0);printf("   ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("  ");Color(0,15);printf(" ");Color(15,0);printf("   ");Color(0,15);printf("  ");Color(15,0);printf("   ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("  ");Color(0,15);printf(" ");Color(15,0);printf("   ");Color(0,15);printf("  ");Color(15,0);printf("   ");Color(0,15);printf(" ");Color(15,0);printf(" \n");

printf("  ");Color(0,15);printf(" ");Color(15,0);printf("      ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("    ");Color(0,15);printf(" ");Color(15,0);printf("      ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("    ");Color(0,15);printf(" ");Color(15,0);printf("      ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("    ");Color(0,15);printf(" ");Color(15,0);printf("      ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("    ");Color(0,15);printf(" ");Color(15,0);printf("      ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("    ");Color(0,15);printf(" ");Color(15,0);printf("      ");Color(0,15);printf(" ");Color(15,0);printf(" \n");

Color(0,8);printf("1");Color(15,0);printf("  ");Color(0,15);printf("      ");Color(15,0);printf("    ");      Color(0,8);printf("2");Color(15,0);printf("  ");Color(0,15);printf("      ");Color(15,0);printf("    ");      Color(0,8);printf("3");Color(15,0);printf("  ");Color(0,15);printf("      ");Color(15,0);printf("    ");      Color(0,8);printf("4");Color(15,0);printf("  ");Color(0,15);printf("      ");Color(15,0);printf("    ");      Color(0,8);printf("5");Color(15,0);printf("  ");Color(0,15);printf("      ");Color(15,0);printf("    ");      Color(0,8);printf("6");Color(15,0);printf("  ");Color(0,15);printf("      ");Color(15,0);printf(" \n");



printf("\n");


printf("   ");Color(0,15);printf("      ");Color(15,0);printf(" ");      printf("      ");Color(0,15);printf("      ");Color(15,0);printf(" ");      printf("      ");Color(0,15);printf("      ");Color(15,0);printf(" ");      printf("      ");Color(0,15);printf("      ");Color(15,0);printf(" ");      printf("      ");Color(0,15);printf("      ");Color(15,0);printf(" ");      printf("      ");Color(0,15);printf("      ");Color(15,0);printf(" \n");

printf("  ");Color(0,15);printf(" ");Color(15,0);printf("      ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("    ");Color(0,15);printf(" ");Color(15,0);printf("      ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("    ");Color(0,15);printf(" ");Color(15,0);printf("      ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("    ");Color(0,15);printf(" ");Color(15,0);printf("      ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("    ");Color(0,15);printf(" ");Color(15,0);printf("      ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("    ");Color(0,15);printf(" ");Color(15,0);printf("      ");Color(0,15);printf(" ");Color(15,0);printf(" \n");

printf(" ");Color(0,15);printf(" ");Color(15,0);printf("        ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("  ");Color(0,15);printf(" ");Color(15,0);printf("        ");Color(0,15);printf(" ");Color(15,0);printf(" ");printf("  ");Color(0,15);printf(" ");Color(15,0);printf("        ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("  ");Color(0,15);printf(" ");Color(15,0);printf("        ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("  ");Color(0,15);printf(" ");Color(15,0);printf("        ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("  ");Color(0,15);printf(" ");Color(15,0);printf("        ");Color(0,15);printf(" ");Color(15,0);printf(" \n");

printf(" ");Color(0,15);printf(" ");Color(15,0);printf("  ");Color(0,15);printf(" ");Color(15,0);printf("  ");Color(0,15);printf(" ");Color(15,0);printf("  ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("  ");Color(0,15);printf(" ");Color(15,0);printf("  ");Color(0,15);printf(" ");Color(15,0);printf("  ");Color(0,15);printf(" ");Color(15,0);printf("  ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("  ");Color(0,15);printf(" ");Color(15,0);printf("  ");Color(0,15);printf(" ");Color(15,0);printf("  ");Color(0,15);printf(" ");Color(15,0);printf("  ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("  ");Color(0,15);printf(" ");Color(15,0);printf("  ");Color(0,15);printf(" ");Color(15,0);printf("  ");Color(0,15);printf(" ");Color(15,0);printf("  ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("  ");Color(0,15);printf(" ");Color(15,0);printf("  ");Color(0,15);printf(" ");Color(15,0);printf("  ");Color(0,15);printf(" ");Color(15,0);printf("  ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("  ");Color(0,15);printf(" ");Color(15,0);printf("  ");Color(0,2);printf(" ");Color(15,0);printf("  ");Color(0,2);printf(" ");Color(15,0);printf("  ");Color(0,15);printf(" ");Color(15,0);printf(" \n");

printf(" ");Color(0,15);printf(" ");Color(15,0);printf("        ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("  ");Color(0,15);printf(" ");Color(15,0);printf("        ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("  ");Color(0,15);printf(" ");Color(15,0);printf("        ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("  ");Color(0,15);printf(" ");Color(15,0);printf("        ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("  ");Color(0,15);printf(" ");Color(15,0);printf("        ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("  ");Color(0,15);printf(" ");Color(15,0);printf("        ");Color(0,15);printf(" ");Color(15,0);printf(" \n");

printf(" ");Color(0,15);printf(" ");Color(15,0);printf("   ");Color(0,15);printf("  ");Color(15,0);printf("   ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("  ");Color(0,15);printf(" ");Color(15,0);printf("   ");Color(0,15);printf("  ");Color(15,0);printf("   ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("  ");Color(0,15);printf(" ");Color(15,0);printf("  ");Color(0,8);printf(" ");Color(0,15);printf("  ");Color(0,8);printf(" ");Color(15,0);printf("  ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("  ");Color(0,15);printf(" ");Color(15,0);printf("   ");Color(0,15);printf("  ");Color(15,0);printf("   ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("  ");Color(0,15);printf(" ");Color(15,0);printf("   ");Color(0,15);printf("  ");Color(15,0);printf("   ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("  ");Color(0,15);printf(" ");Color(15,0);printf("   ");Color(0,15);printf("  ");Color(15,0);printf("   ");Color(0,15);printf(" ");Color(15,0);printf(" \n");

printf("  ");Color(0,13);printf(" ");Color(15,0);printf("      ");Color(0,13);printf(" ");Color(15,0);printf(" ");      printf("    ");Color(0,15);printf(" ");Color(15,0);printf("      ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("    ");Color(0,8);printf("   ");Color(15,0);printf("  ");Color(0,8);printf("   ");Color(15,0);printf(" ");      printf("    ");Color(0,15);printf(" ");Color(15,0);printf("      ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("    ");Color(0,15);printf(" ");Color(15,0);printf("");Color(0,12);printf("  ");Color(15,0);printf("  ");Color(0,12);printf("  ");Color(15,0);printf("");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("    ");Color(0,15);printf(" ");Color(15,0);printf("      ");Color(0,15);printf(" ");Color(15,0);printf(" \n");

Color(0,8);printf("7");Color(15,0);printf(" ");Color(0,13);printf(" ");Color(0,13);printf("      ");Color(0,13);printf(" ");Color(15,0);printf("  ");      Color(0,8);printf("8");Color(15,0);printf(" ");Color(0,14);printf(" ");Color(15,0);printf(" ");Color(0,15);printf("      ");Color(15,0);printf(" ");      Color(0,14);printf(" ");Color(15,0);printf("  ");      Color(0,8);printf("9");Color(15,0);printf(" ");Color(0,8);printf("        ");Color(15,0);printf(" ");      Color(0,8);printf("10");Color(15,0);printf(" ");Color(0,2);printf(" ");Color(15,0);printf(" ");Color(0,15);printf("      ");Color(15,0);printf("   ");      Color(0,8);printf("11");Color(15,0);printf("  ");Color(0,15);printf(" ");Color(0,12);printf("    ");Color(0,15);printf(" ");Color(15,0);printf("   ");      Color(0,8);printf("12");Color(15,0);printf("  ");Color(0,15);printf("      ");Color(15,0);printf(" \n");

printf("    ");Color(0,13);printf("   ");Color(15,0);       printf("                       "); Color(0,8);printf("    ");Color(15,0);      printf("                     ");Color(0,12);printf("  ");Color(15,0);printf("  ");Color(0,12);printf("  \n");Color(15,0);
printf("   ");Color(0,13);printf(" ");Color(15,0);printf("   ");Color(0,13);printf(" ");Color(15,0);      printf("                       "); Color(0,8);printf("  \n");Color(15,0);
printf("  ");Color(0,13);printf(" ");Color(15,0);printf("     ");Color(0,13);printf(" \n");Color(15,0);

Color(3,0);scanf("%ld", &Patineur);printf("\n\n");Color(15,0);



if(Patineur == 1)
{


Color(15,0);printf("-Oui, c'est pour quoi ?\n\n\n");essai++;
Color(8,0);printf("1 : Zoo\n\n");
printf("2 : Gardien\n\n");
printf("3 : Quitter\n\n\n");
Color(3,0);scanf("%ld", &P1);printf("\n\n");Color(15,0);


Color(11,0);printf("\"Bonjour.\"\n\n");Color(15,0);

do {

      if(P1 == 1)
      {
Color(11,0);printf("\"Sauriez-vous pourquoi le zoo est reste ferme ?\"\n\n\n");
Color(15,0);printf("-Ah non, aucune idee !\n\n\n");
system("PAUSE\n\n");printf("\n\n");
printf("-Quoi encore ?\n\n\n\n");
Color(8,0);printf("1 : Zoo\n\n");
printf("2 : Gardien\n\n");
printf("3 : Quitter\n\n\n");
Color(3,0);scanf("%ld", &P1);printf("\n\n");Color(15,0);
}




      if(P1 == 2)
      {
Color(11,0);printf("\"Auriez-vous vu le gardien du zoo trainer dans le coin, par hasard ?\"\n\n\n");
Color(15,0);printf("-A vous de me le dire, je ne sais meme pas a quoi il ressemble !\n\n\n");
Color(11,0);printf("\"D'accord, merci quand meme !\"\n\n\n");
Color(15,0);system("PAUSE\n\n");printf("\n\n");
printf("-Quoi encore ?\n\n\n\n");
Color(8,0);printf("1 : Zoo\n\n");
printf("2 : Gardien\n\n");
printf("3 : Quitter\n\n\n");
Color(3,0);scanf("%ld", &P1);printf("\n\n");Color(15,0);
             }



if(P1 == 3)
{
Color(11,0);printf("\"Euh... Non rien. Bonne journee !\"\n\n\n");Color(15,0);
}


}while(P1 <= 2); /* P1 */

}





if(Patineur == 2)
{


Color(15,0);printf("-Que me voulez-vous ?\n\n\n");essai++;
Color(8,0);printf("1 : Zoo \n\n");
printf("2 : Boucle d'oreille\n\n");
printf("3 : Quitter\n\n\n");
Color(3,0);scanf("%ld", &P2);printf("\n\n");Color(15,0);


Color(11,0);printf("\"Bonjour.\"\n\n");Color(15,0);

do {

      if(P2 == 1)
      {
Color(11,0);printf("\"Le zoo serait-il en greve ?\"\n\n\n");
Color(15,0);printf("-Demandez cela au journal !\n\n\n");
system("PAUSE\n\n");printf("\n\n");
printf("-Autre chose ?\n\n\n\n");
Color(8,0);printf("1 : Zoo \n\n");
printf("2 : Boucle d'oreille\n\n");
printf("3 : Quitter\n\n\n");
Color(3,0);scanf("%ld", &P2);printf("\n\n");Color(15,0);
}




      if(P2 == 2)
      {
Color(11,0);printf("\"Auriez-vous apercu une femme avec une seule boucle d'oreille ?\"\n\n\n");
Color(15,0);printf("-C'est possible, cherchez encore !\n\n\n");
Color(11,0);printf("\"Merci !\"\n\n\n");
Color(15,0);system("PAUSE\n\n");printf("\n\n");
printf("-Autre chose ?\n\n\n\n");
Color(8,0);printf("1 : Zoo \n\n");
printf("2 : Boucle d'oreille\n\n");
printf("3 : Quitter\n\n\n");
Color(3,0);scanf("%ld", &P2);printf("\n\n");Color(15,0);
             }



if(P2 == 3)
{
Color(11,0);printf("\"Euh... Non rien. Bonne journee !\"\n\n\n");Color(15,0);
}


}while(P2 <= 2); /* P2 */

}





if(Patineur == 3)
{


Color(15,0);printf("-Qu'est-ce que tu dis ?\n\n\n");essai++;
Color(8,0);printf("1 : Gardien \n\n");
printf("2 : Musique\n\n");
printf("3 : Quitter\n\n\n");
Color(3,0);scanf("%ld", &P3);printf("\n\n");Color(15,0);


Color(11,0);printf("\"Bonjour.\"\n\n");Color(15,0);

do {

      if(P3 == 1)
      {
Color(11,0);printf("\"Auriez-vous vu quelqu'un qui ressemble au gardien du zoo ?\"\n\n\n");
Color(15,0);printf("-Ca mec, j'en sais rien ! Mais demande donc a cet homme avec\n\n");
printf("le haut de forme, il connait presque tout le monde ici.\n\n\n");
system("PAUSE\n\n");printf("\n\n");
printf("-Tu disais ?\n\n\n\n");
Color(8,0);printf("1 : Gardien\n\n");
printf("2 : Musique\n\n");
printf("3 : Quitter\n\n\n");
Color(3,0);scanf("%ld", &P3);printf("\n\n");Color(15,0);
}




      if(P3 == 2)
      {
Color(11,0);printf("\"Qu'est-ce que vous ecoutez comme musique ?\"\n\n\n");
Color(15,0);printf("-Toujours Yiruma quand je suis sur la glace !\n\n\n");
Color(11,0);printf("\"Ah oui, quel virtuose du piano !\"\n\n\n");
Color(15,0);system("PAUSE\n\n");printf("\n\n");
printf("-Tu disais ?\n\n\n\n");
Color(8,0);printf("1 : Gardien\n\n");
printf("2 : Musique\n\n");
printf("3 : Quitter\n\n\n");
Color(3,0);scanf("%ld", &P3);printf("\n\n");Color(15,0);
             }



if(P3 == 3)
{
Color(11,0);printf("\"Euh... Non rien. Bonne journee !\"\n\n\n");Color(15,0);
}


}while(P3 <= 2); /* P3 */

}





if(Patineur == 4)
{


Color(15,0);printf("-Hmm... ?\n\n\n");essai++;
Color(8,0);printf("1 : Zoo\n\n");
printf("2 : Boucle d'oreille\n\n");
printf("3 : Quitter\n\n\n");
Color(3,0);scanf("%ld", &P4);printf("\n\n");Color(15,0);


Color(11,0);printf("\"Bonjour.\"\n\n");Color(15,0);

do {

      if(P4 == 1)
      {
Color(11,0);printf("\"Seriez-vous le gardien du zoo ?\"\n\n\n");solution++;
Color(15,0);printf("-En chair et en os !\n\n\n");
system("PAUSE\n\n");printf("\n\n");
Color(11,0);printf("\"Pourquoi le zoo est-il ferme ?\"\n\n\n");
Color(15,0);printf("-Je sais bien qu'il devrait etre ouvert, et je suis le premier\n\n");
Color(15,0);printf("a le deplorer, mais j'ai eu un petit souci en arrivant ce matin.\n\n");
Color(15,0);printf("Voila, la serrure etait gelee et je n'ai pas pu ouvrir la grille\n\n");
Color(15,0);printf("principale. Peut-etre les rayons du soleil auront-ils regle\n\n");
Color(15,0);printf("le probleme d'ici cette apres-midi.\n\n\n");
system("PAUSE\n\n");printf("\n\n");
Color(11,0);printf("\"Ne peut-on vraiment rien faire d'autre qu'attendre ?\"\n\n\n");
Color(15,0);printf("-Eh bien, je vois que vous avez une grande envie d'aller au zoo,\n\n");
Color(15,0);printf("jeune homme ! Tres bien, j'irai voir ce qu'il en est dans deux\n\n");
Color(15,0);printf("heures, mais je ne vous promets rien.\n\n\n");
system("PAUSE\n\n");printf("\n\n");
printf("-Hmm... ?\n\n\n\n");
Color(8,0);printf("1 : Zoo\n\n");
printf("2 : Boucle d'oreille\n\n");
printf("3 : Quitter\n\n\n");
Color(3,0);scanf("%ld", &P4);printf("\n\n");Color(15,0);
}




      if(P4 == 2)
      {
Color(11,0);printf("\"Auriez-vous apercu une femme avec une seule boucle d'oreille ?\"\n\n\n");
Color(15,0);printf("-Vous en avez de droles de questions, vous !\n\n\n");
Color(11,0);printf("\"Merci quand meme !\"\n\n\n");
Color(15,0);system("PAUSE\n\n");printf("\n\n");
printf("-Hmm... ?\n\n\n\n");
Color(8,0);printf("1 : Zoo\n\n");
printf("2 : Boucle d'oreille\n\n");
printf("3 : Quitter\n\n\n");
Color(3,0);scanf("%ld", &P4);printf("\n\n");Color(15,0);
             }



if(P4 == 3)
{
Color(11,0);printf("\"Euh... Non rien. Bonne journee !\"\n\n\n");Color(15,0);
}


}while(P4 <= 2); /* P4 */

}





if(Patineur == 5)
{


Color(15,0);printf("-Oui ?\n\n\n");essai++;
Color(8,0);printf("1 : Zoo\n\n");
printf("2 : Gardien\n\n");
printf("3 : Quitter\n\n\n");
Color(3,0);scanf("%ld", &P5);printf("\n\n");Color(15,0);


Color(11,0);printf("\"Bonjour.\"\n\n");Color(15,0);

do {

      if(P5 == 1)
      {
Color(11,0);printf("\"Sauriez-vous pourquoi le zoo est ferme ?\"\n\n\n");
Color(15,0);printf("-Ah non, pas du tout !\n\n\n");
system("PAUSE\n\n");printf("\n\n");
printf("-Oui ?\n\n\n\n");
Color(8,0);printf("1 : Zoo\n\n");
printf("2 : Gardien\n\n");
printf("3 : Quitter\n\n\n");
Color(3,0);scanf("%ld", &P5);printf("\n\n");Color(15,0);
}




      if(P5 == 2)
      {
Color(11,0);printf("\"Ou est le gardien du zoo ?\"\n\n\n");
Color(15,0);printf("-Allez demander a la mere Michelle, c'est celle avec l'echarpe\n\n\n");
Color(15,0);printf("rose, elle doit savoir quelque chose.\n\n\n");
Color(11,0);printf("\"Merci beaucoup !\"\n\n\n");
Color(15,0);system("PAUSE\n\n");printf("\n\n");
printf("-Oui ?\n\n\n\n");
Color(8,0);printf("1 : Zoo\n\n");
printf("2 : Gardien\n\n");
printf("3 : Quitter\n\n\n");
Color(3,0);scanf("%ld", &P5);printf("\n\n");Color(15,0);
             }



if(P5 == 3)
{
Color(11,0);printf("\"Euh... Non rien. Bonne journee !\"\n\n\n");Color(15,0);
}


}while(P5 <= 2); /* P5 */

}





if(Patineur == 6)
{


Color(15,0);printf("-... ?\n\n\n");essai++;
Color(8,0);printf("1 : Zoo\n\n");
printf("2 : Boucle d'oreille\n\n");
printf("3 : Quitter\n\n\n");
Color(3,0);scanf("%ld", &P6);printf("\n\n");Color(15,0);


Color(11,0);printf("\"Bonjour.\"\n\n");Color(15,0);

do {

      if(P6 == 1)
      {
Color(11,0);printf("\"Le gardien du zoo est-il un deserteur ?\"\n\n\n");
Color(15,0);printf("-Peut-etre !\n\n\n");
system("PAUSE\n\n");printf("\n\n");
printf("-... ?\n\n\n\n");
Color(8,0);printf("1 : Zoo\n\n");
printf("2 : Boucle d'oreille\n\n");
printf("3 : Quitter\n\n\n");
Color(3,0);scanf("%ld", &P6);printf("\n\n");Color(15,0);
}




      if(P6 == 2)
      {
Color(11,0);printf("\"A qui appartient cette boucle d'oreille ?\"\n\n\n");
Color(15,0);printf("-Oh, mais elle est d'un magnifique vert emeraude... J'en sais rien !\n\n\n");
Color(11,0);printf("\"Merci quand meme !\"\n\n\n");
Color(15,0);system("PAUSE\n\n");printf("\n\n");
printf("-... ?\n\n\n\n");
Color(8,0);printf("1 : Zoo\n\n");
printf("2 : Boucle d'oreille\n\n");
printf("3 : Quitter\n\n\n");
Color(3,0);scanf("%ld", &P6);printf("\n\n");Color(15,0);
             }



if(P6 == 3)
{
Color(11,0);printf("\"Euh... Non rien. Bonne journee !\"\n\n\n");Color(15,0);
}


}while(P6 <= 2); /* P6 */

}





if(Patineur == 7)
{


Color(15,0);printf("-Que puis-je faire pour vous, mon garcon ?\n\n\n");essai++;
Color(8,0);printf("1 : Gardien\n\n");
printf("2 : Chat\n\n");
printf("3 : Quitter\n\n\n");
Color(3,0);scanf("%ld", &P7);printf("\n\n");Color(15,0);


Color(11,0);printf("\"Bonjour.\"\n\n");Color(15,0);

do {

      if(P7 == 1)
      {
Color(11,0);printf("\"Auriez-vous vu le gardien du zoo ?\"\n\n\n");
Color(15,0);printf("-Je ne crois pas. Il devrait avoir une casquette, non ?\n\n\n");
system("PAUSE\n\n");printf("\n\n");
printf("-Autre chose ?\n\n\n\n");
Color(8,0);printf("1 : Gardien\n\n");
printf("2 : Chat\n\n");
printf("3 : Quitter\n\n\n");
Color(3,0);scanf("%ld", &P7);printf("\n\n");Color(15,0);
}




      if(P7 == 2)
      {
Color(11,0);printf("\"Vous n'auriez pas perdu votre chat par hasard ? Non, je rigole.\"\n\n\n");
Color(15,0);printf("-En fait si, il n'est pas rentre hier soir !\n\n");
Color(15,0);printf("Si jamais vous le retrouvez, je vous serai eternellement reconnaissante !\n\n\n");
Color(11,0);printf("\"C'est entendu !\"\n\n\n");
Color(15,0);system("PAUSE\n\n");printf("\n\n");
printf("-Autre chose ?\n\n\n\n");
Color(8,0);printf("1 : Gardien\n\n");
printf("2 : Chat\n\n");
printf("3 : Quitter\n\n\n");
Color(3,0);scanf("%ld", &P7);printf("\n\n");Color(15,0);
             }



if(P7 == 3)
{
Color(11,0);printf("\"Euh... Non rien. Bonne journee !\"\n\n\n");Color(15,0);
}


}while(P7 <= 2); /* P7 */

}





if(Patineur == 8)
{


Color(15,0);printf("-Comment ?\n\n\n");essai++;
Color(8,0);printf("1 : Boucle d'oreille\n\n");
printf("2 : Zoo\n\n");
printf("3 : Quitter\n\n\n");
Color(3,0);scanf("%ld", &P8);printf("\n\n");Color(15,0);


Color(11,0);printf("\"Bonjour.\"\n\n");Color(15,0);

do {

      if(P8 == 1)
      {
Color(11,0);printf("\"Est-ce l'une de vos boucles d'oreille ?\"\n\n\n");
Color(15,0);printf("-Faites-voir... Non, je n'en ai pas de cette couleur.\n\n\n");
system("PAUSE\n\n");printf("\n\n");
printf("-Comment ?\n\n\n\n");
Color(8,0);printf("1 : Boucle d'oreille\n\n");
printf("2 : Zoo\n\n");
printf("3 : Quitter\n\n\n");
Color(3,0);scanf("%ld", &P8);printf("\n\n");Color(15,0);
}




      if(P8 == 2)
      {
Color(11,0);printf("\"Que savez-vous a propos du zoo ?\"\n\n\n");
Color(15,0);printf("-Promettez-moi de ne pas le repeter. Il parait que le gardien\n\n");
Color(15,0);printf("a un poil dans la main, et que la direction songe a le remplacer !\n\n\n");
Color(11,0);printf("\"Sans blague !\"\n\n\n");
Color(15,0);system("PAUSE\n\n");printf("\n\n");
printf("-Comment ?\n\n\n\n");
Color(8,0);printf("1 : Boucle d'oreille\n\n");
printf("2 : Zoo\n\n");
printf("3 : Quitter\n\n\n");
Color(3,0);scanf("%ld", &P8);printf("\n\n");Color(15,0);
             }



if(P8 == 3)
{
Color(11,0);printf("\"Euh... Non rien. Bonne journee !\"\n\n\n");Color(15,0);
}


}while(P8 <= 2); /* P8 */

}





if(Patineur == 9)
{


Color(15,0);printf("-C'est a quel sujet ?\n\n\n");essai++;
Color(8,0);printf("1 : Zoo\n\n");
printf("2 : Gardien\n\n");
printf("3 : Quitter\n\n\n");
Color(3,0);scanf("%ld", &P9);printf("\n\n");Color(15,0);


Color(11,0);printf("\"Bonjour.\"\n\n");Color(15,0);

do {

      if(P9 == 1)
      {
Color(11,0);printf("\"Aimez-vous aller au zoo ?\"\n\n\n");
Color(15,0);printf("-Oui, mais il est ferme aujourd'hui !\n\n\n");
system("PAUSE\n\n");printf("\n\n");
printf("-Mais encore ?\n\n\n\n");
Color(8,0);printf("1 : Zoo\n\n");
printf("2 : Gardien\n\n");
printf("3 : Quitter\n\n\n");
Color(3,0);scanf("%ld", &P9);printf("\n\n");Color(15,0);
}




      if(P9 == 2)
      {
Color(11,0);printf("\"Que fait le gardien du zoo ?\"\n\n\n");
Color(15,0);printf("-Cet idiot n'a pas reussi a ouvrir la grille !\n\n\n");
Color(11,0);printf("\"C'est dommage !\"\n\n\n");
Color(15,0);system("PAUSE\n\n");printf("\n\n");
printf("-Mais encore ?\n\n\n\n");
Color(8,0);printf("1 : Zoo\n\n");
printf("2 : Gardien\n\n");
printf("3 : Quitter\n\n\n");
Color(3,0);scanf("%ld", &P9);printf("\n\n");Color(15,0);
             }



if(P9 == 3)
{
Color(11,0);printf("\"Euh... Non rien. Bonne journee !\"\n\n\n");Color(15,0);
}


}while(P9 <= 2); /* P9 */

}





if(Patineur == 10)
{


Color(15,0);printf("-Salut !\n\n\n");essai++;
Color(8,0);printf("1 : Zoo\n\n");
printf("2 : Boucle d'oreille\n\n");
printf("3 : Quitter\n\n\n");
Color(3,0);scanf("%ld", &P10);printf("\n\n");Color(15,0);


Color(11,0);printf("\"Bonjour.\"\n\n");Color(15,0);

do {

      if(P10 == 1)
      {
Color(11,0);printf("\"Que pensez-vous du zoo de cette ville ?\"\n\n\n");
Color(15,0);printf("-Helas, pas grand chose. Il est renomme pour ses beaux specimens\n\n");
Color(15,0);printf("de felins. J'aurai bien voulu le visiter, mais il faut croire\n\n");
Color(15,0);printf("que je n'ai pas choisi le bon jour !\n\n\n");
system("PAUSE\n\n");printf("\n\n");
printf("-Quoi d'autre ?\n\n\n\n");
Color(8,0);printf("1 : Zoo\n\n");
printf("2 : Boucle d'oreille\n\n");
printf("3 : Quitter\n\n\n");
Color(3,0);scanf("%ld", &P10);printf("\n\n");Color(15,0);
}




      if(P10 == 2)
      {
Color(11,0);printf("\"Est-ce que ceci... ?\"\n\n\n");solution++;
Color(15,0);printf("-Oh ! Mais c'est ma boucle d'oreille !\n\n");
Color(15,0);printf("Je croyais l'avoir perdue pour de bon. Ou l'avez-vous trouve ?\n\n\n");
Color(11,0);printf("\"Sur une banquette, au cafe des mysteres.\"\n\n\n");
Color(15,0);printf("-Pour vous remercier, je vous invite a boire un the en ma compagnie\n\n");
Color(15,0);printf("a ce fameux cafe des mysteres. J'en profiterai pour faire plus\n\n");
Color(15,0);printf("ample connaissance avec mon bienfaiteur ^^\n\n");
Color(15,0);printf("Cependant, j'aimerais encore faire quelques tours de piste. Cela\n\n");
Color(15,0);printf("ne vous derange pas si je y vous donne rendez-vous, disons dans une heure ?\n\n\n");
Color(15,0);system("PAUSE\n\n");printf("\n\n");
Color(11,0);printf("\"Pas du tout, tant que vous ne me posez pas un lapin !\"\n\n\n");
Color(15,0);printf("-Je vous promets que non.\n\n\n");
Color(15,0);system("PAUSE\n\n");printf("\n\n");
printf("-Quoi d'autre ?\n\n\n\n");
Color(8,0);printf("1 : Zoo\n\n");
printf("2 : Boucle d'oreille\n\n");
printf("3 : Quitter\n\n\n");
Color(3,0);scanf("%ld", &P10);printf("\n\n");Color(15,0);
             }



if(P10 == 3)
{
Color(11,0);printf("\"Euh... Non rien. Bonne journee !\"\n\n\n");Color(15,0);
}


}while(P10 <= 2); /* P10 */

}





if(Patineur == 11)
{


Color(15,0);printf("-C'est a quel sujet ?\n\n\n");essai++;
Color(8,0);printf("1 : Boucle d'oreille\n\n");
printf("2 : Zoo\n\n");
printf("3 : Quitter\n\n\n");
Color(3,0);scanf("%ld", &P11);printf("\n\n");Color(15,0);


Color(11,0);printf("\"Bonjour.\"\n\n");Color(15,0);

do {

      if(P11 == 1)
      {
Color(11,0);printf("\"Cette boucle d'oreille vous dit-elle quelque chose ?\"\n\n\n");
Color(15,0);printf("-Pas le moins du monde ! Mais demandez donc a la mere Michelle.\n\n");
Color(15,0);printf("Vous la reconnaitrez facilement, a son age, elle se couvre du froid.\n\n\n");
system("PAUSE\n\n");printf("\n\n");
printf("-Quoi donc ?\n\n\n\n");
Color(8,0);printf("1 : Boucle d'oreille\n\n");
printf("2 : Zoo\n\n");
printf("3 : Quitter\n\n\n");
Color(3,0);scanf("%ld", &P11);printf("\n\n");Color(15,0);
}




      if(P11 == 2)
      {
Color(11,0);printf("\"Si je vous dis zoo... ?\"\n\n\n");
Color(15,0);printf("-Quelle honte ! Enfermer ces pauvres animaux, si loin de chez eux !\n\n\n");
Color(11,0);printf("\"Vous n'avez pas tort... D'un autre cote, certaines especes menacees\n\n");
Color(11,0);printf("se reproduisent en toute securite, et sont parfois reintroduites\n\n");
Color(11,0);printf("dans leur milieu naturel, grace a des programme de protection.\"\n\n\n");
Color(15,0);printf("-L'etre humain peut bien tenter de reparer, ca n'effacera pas ses erreurs !\n\n\n");
Color(11,0);printf("\"...\"\n\n\n");
Color(15,0);system("PAUSE\n\n");printf("\n\n");
printf("-Quoi donc ?\n\n\n\n");
Color(8,0);printf("1 : Boucle d'oreille\n\n");
printf("2 : Zoo\n\n");
printf("3 : Quitter\n\n\n");
Color(3,0);scanf("%ld", &P11);printf("\n\n");Color(15,0);
             }



if(P11 == 3)
{
Color(11,0);printf("\"Euh... Non rien. Bonne journee !\"\n\n\n");Color(15,0);
}


}while(P11 <= 2); /* P11 */

}





if(Patineur == 12)
{


Color(15,0);printf("- Hello ! What's up ?\n\n\n");essai++;
Color(8,0);printf("1 : Francais\n\n");
printf("2 : Zoo\n\n");
printf("3 : Quitter\n\n\n");
Color(3,0);scanf("%ld", &P12);printf("\n\n");Color(15,0);


Color(11,0);printf("\"Hi !\"\n\n");Color(15,0);

do {

      if(P12 == 1)
      {
Color(11,0);printf("\"Vous ne parlez pas francais ?\"\n\n\n");
Color(15,0);printf("-Sorry, what ? I didn't understand.\n\n\n");
system("PAUSE\n\n");printf("\n\n");
Color(11,0);printf("\"I said, you don't speak French ?\"\n\n\n");
Color(15,0);printf("-Oh no, too hard for me. I'm here for my hollydays, and I've to\n\n");
Color(15,0);printf("say that I'm in love with this town !\n\n\n");
system("PAUSE\n\n");printf("\n\n");
printf("-What can I do for you ?\n\n\n\n");
Color(8,0);printf("1 : Francais\n\n");
printf("2 : Zoo\n\n");
printf("3 : Quitter\n\n\n");
Color(3,0);scanf("%ld", &P12);printf("\n\n");Color(15,0);
}




      if(P12 == 2)
      {
Color(11,0);printf("\"You must visit our zoo, he's wonderful. By the way, do you know\n\nwhere is the guard ?\"\n\n\n");
Color(15,0);printf("-Not really, but I think you should ask to this guy with the blue eyes.\n\n\n");
Color(11,0);printf("\"Thanks ! Enjoy your hollydays.\"\n\n\n");
Color(15,0);system("PAUSE\n\n");printf("\n\n");
printf("-What can I do for you ?\n\n\n\n");
Color(8,0);printf("1 : Francais\n\n");
printf("2 : Zoo\n\n");
printf("3 : Quitter\n\n\n");
Color(3,0);scanf("%ld", &P12);printf("\n\n");Color(15,0);
             }



if(P12 == 3)
{
Color(11,0);printf("\"Hum... No, forget it. Have a nice day !\"\n\n\n");Color(15,0);
}


}while(P12 <= 2); /* P12 */

}







 printf("\n\n");system("PAUSE");printf("\n\n\n");






if(essai >= 8)
{
Color(15,0);system("\n\nPAUSE\n\n\n");printf("\n\n\n");
Color(8,0);printf("Plus personne ne veut te parler, tu as epuise ta credibilite.\n\n\n");
Color(4,0);printf("GAME OVER\n\n\n");
Color(14,0);printf("Rappel code checkpoint 2 : 6455\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
return 0;
}

if (solution < 2)
{
Color(8,0);printf("Continuer a parler aux patineurs ?\n\n\n");                        /*Difficulté : compteur 8/12 --> game over*/
Color(3,0);scanf("%s", encore);printf("\n\n\n\n");Color(15,0);
}


if(strcmp (encore, "non") == 0)
{


if(solution <= 1)
{
Color(15,0);system("\n\nPAUSE\n\n\n");printf("\n\n\n");
Color(4,0);printf("GAME OVER\n\n\n");
Color(14,0);printf("Rappel code checkpoint 2 : 6455\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
return 0;
}

}

}while(solution < 2);    /* Fermeture boucle patineur */




if(solution == 2)      /* Suite chapitre 3 */
{
Color(11,0);printf("\"Bien, je sais maintenant pourquoi le zoo est ferme, et j'ai gagne un the !\n");
printf("J'en ai assez de tourner sur la glace, allons-voir ce qui se passe ailleurs.\n");
printf("Peut-etre que Karl aura fini d'installer sa machine...\"\n\n\n");
Color(15,0);system("PAUSE");printf("\n\n\n\n");
}


printf("                                Maison\n\n");
Color(10,0);printf("                               1");Color(15,0);printf(" ");Color(0,10);printf(" ");Color(15,0);printf(" ");Color(0,11);printf(" ");Color(11,0);printf(" 2\n");
Color(15,0);printf("                            ");Color(0,10);printf("      ");Color(15,0);printf(" ");Color(0,11);printf("                 \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" ");Color(11,0);printf("  2\n");
Color(15,0);printf("         ");Color(10,0);printf("1                  ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf("    \n");
Color(15,0);printf("         ");Color(0,10);printf("                    ");Color(15,0);printf("                      ");Color(15,0);printf("      Rue des Lauriers\n");printf("     Zoo ");printf("                           ");
Color(15,0);printf("               ");Color(0,12);printf("    ");Color(15,0);printf("                        ");
Color(15,0);printf("          ");Color(0,13);printf("       ");Color(15,0);printf("                                   ");Color(0,12);printf(" ");Color(12,0);printf("  4\n");
Color(15,0);printf("         ");Color(13,0);printf("3     ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf("                  ");Color(15,0);printf(" ");Color(0,12);printf("                  \n");
Color(15,0);printf("                                ");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" \n");
Color(15,0);printf("                               ");Color(13,0);printf("3");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" ");Color(12,0);printf(" 4\n\n");
Color(15,0);printf("                         Au cafe des mysteres\n\n\n");Color(15,0);

Color(3,0);scanf("%ld", &ChoixBus14);printf("\n\n");Color(15,0);


printf("Desole, le jeu s'arrete ici car il n'est pas encore fini... Patience !\n\n\n");



}

Color(15,0);printf("Veux-tu retourner au menu principal ?\n\n");
   Color(3,0);scanf("%s", chaine);printf("\n\n\n\n\n");
}




Color(15,0);printf("Veux-tu retourner au menu principal ?\n\n");
Color(3,0);scanf("%s", chaine);printf("\n\n\n\n\n");Color(15,0);

break; /* Fin du jeu principal */

      case 2:


printf("Rentre le mot de passe correspondant a ton checkpoint :\n\n");
Color(3,0);scanf("%ld", &checkpoint);printf("\n\n\n");

if(checkpoint == 2891)
{

      Color(2,0);printf("                      *   *   *   *  Chapitre 2  *   *   *   * \n\n\n\n");


Color(11,0);printf("\"Me voici dans la rue. Comment vais-je aller au zoo ?\"\n\n\n");
Color(8,0);printf("Dans la rue, il y a un lampadaire, une bouche a incendie, un poteau\n");
printf("telephonique et un arret de bus. La route va dans les deux sens.\n\n\n");

Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");Color(15,0);


if (strcmp (action, "prendre") != 0) if (strcmp (objet1, "bus") != 0)
{
   do {
   do {

Color(6,0);printf("Je ne peux pas faire ca !\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Comment vais-je pouvoir me rendre au zoo ?\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");Color(15,0);

      } while (strcmp (action, "prendre") != 0);

      } while (strcmp (objet1, "bus") != 0);
}

if (strcmp (action, "prendre") != 0) if (strcmp (objet1, "bus") != 1)
{
   do {
   do {

Color(6,0);printf("Je ne peux pas faire ca !\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Comment vais-je pouvoir me rendre au zoo ?\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");Color(15,0);

      } while (strcmp (action, "prendre") != 0);

      } while (strcmp (objet1, "bus") != 0);
}


if (strcmp (action, "prendre") != 1) if (strcmp (objet1, "bus") != 0)
{
   do {
   do {

Color(6,0);printf("Je ne peux pas faire ca !\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Comment vais-je pouvoir me rendre au zoo ?\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");Color(15,0);

      } while (strcmp (action, "prendre") != 0);

      } while (strcmp (objet1, "bus") != 0);
}

Color(11,0);printf("Bonne idee ! Alors, voyons voir la carte... Quelle ligne vais-je choisir ?\n\n");

Color(15,0);system("PAUSE");printf("\n\n");



printf("                                Maison\n\n");
Color(10,0);printf("                               1");Color(15,0);printf(" ");Color(0,10);printf(" ");Color(15,0);printf(" ");Color(0,11);printf(" ");Color(11,0);printf(" 2\n");
Color(15,0);printf("                            ");Color(0,10);printf("      ");Color(15,0);printf(" ");Color(0,11);printf("                 \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" ");Color(11,0);printf("  2\n");
Color(15,0);printf("         ");Color(10,0);printf("1                  ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf("    \n");
Color(15,0);printf("         ");Color(0,10);printf("                    ");Color(15,0);printf("                      ");Color(15,0);printf("      Rue des Lauriers\n");printf("     Zoo ");printf("                           ");
Color(15,0);printf("               ");Color(0,12);printf("    ");Color(15,0);printf("                        ");
Color(15,0);printf("          ");Color(0,13);printf("       ");Color(15,0);printf("                                   ");Color(0,12);printf(" ");Color(12,0);printf("  4\n");
Color(15,0);printf("         ");Color(13,0);printf("3     ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf("                  ");Color(15,0);printf(" ");Color(0,12);printf("                  \n");
Color(15,0);printf("                                ");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" \n");
Color(15,0);printf("                               ");Color(13,0);printf("3");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" ");Color(12,0);printf(" 4\n\n");
Color(15,0);printf("                         Au cafe des mysteres\n\n\n");Color(15,0);

Color(3,0);scanf("%ld", &ChoixBus);printf("\n\n");Color(15,0);

if(ChoixBus == 3)
{
Color(6,0);printf("Impossible ! Cette ligne ne passe pas par ici.\n\n\n");

Color(15,0);system("PAUSE");printf("\n\n");



printf("                                Maison\n\n");
Color(10,0);printf("                               1");Color(15,0);printf(" ");Color(0,10);printf(" ");Color(15,0);printf(" ");Color(0,11);printf(" ");Color(11,0);printf(" 2\n");
Color(15,0);printf("                            ");Color(0,10);printf("      ");Color(15,0);printf(" ");Color(0,11);printf("                 \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" ");Color(11,0);printf("  2\n");
Color(15,0);printf("         ");Color(10,0);printf("1                  ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf("    \n");
Color(15,0);printf("         ");Color(0,10);printf("                    ");Color(15,0);printf("                      ");Color(15,0);printf("      Rue des Lauriers\n");printf("     Zoo ");printf("                           ");
Color(15,0);printf("               ");Color(0,12);printf("    ");Color(15,0);printf("                        ");
Color(15,0);printf("          ");Color(0,13);printf("       ");Color(15,0);printf("                                   ");Color(0,12);printf(" ");Color(12,0);printf("  4\n");
Color(15,0);printf("         ");Color(13,0);printf("3     ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf("                  ");Color(15,0);printf(" ");Color(0,12);printf("                  \n");
Color(15,0);printf("                                ");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" \n");
Color(15,0);printf("                               ");Color(13,0);printf("3");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" ");Color(12,0);printf(" 4\n\n");
Color(15,0);printf("                         Au cafe des mysteres\n\n\n");Color(15,0);

Color(3,0);scanf("%ld", &ChoixBus);printf("\n\n");Color(15,0);
}

if(ChoixBus == 4)
{
Color(6,0);printf("Impossible ! Cette ligne ne passe pas par ici.\n\n\n");

Color(15,0);system("PAUSE");printf("\n\n");



printf("                                Maison\n\n");
Color(10,0);printf("                               1");Color(15,0);printf(" ");Color(0,10);printf(" ");Color(15,0);printf(" ");Color(0,11);printf(" ");Color(11,0);printf(" 2\n");
Color(15,0);printf("                            ");Color(0,10);printf("      ");Color(15,0);printf(" ");Color(0,11);printf("                 \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" ");Color(11,0);printf("  2\n");
Color(15,0);printf("         ");Color(10,0);printf("1                  ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf("    \n");
Color(15,0);printf("         ");Color(0,10);printf("                    ");Color(15,0);printf("                      ");Color(15,0);printf("      Rue des Lauriers\n");printf("     Zoo ");printf("                           ");
Color(15,0);printf("               ");Color(0,12);printf("    ");Color(15,0);printf("                        ");
Color(15,0);printf("          ");Color(0,13);printf("       ");Color(15,0);printf("                                   ");Color(0,12);printf(" ");Color(12,0);printf("  4\n");
Color(15,0);printf("         ");Color(13,0);printf("3     ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf("                  ");Color(15,0);printf(" ");Color(0,12);printf("                  \n");
Color(15,0);printf("                                ");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" \n");
Color(15,0);printf("                               ");Color(13,0);printf("3");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" ");Color(12,0);printf(" 4\n\n");
Color(15,0);printf("                         Au cafe des mysteres\n\n\n");Color(15,0);

Color(3,0);scanf("%ld", &ChoixBus);printf("\n\n");Color(15,0);
}

switch (ChoixBus)

{ /* Ouverture switch Bus 1 */



{ /* Ouverture switch Bus 6 */
             case 2 :

Color(6,0);printf("Non, c'est au zoo que je veux aller.\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");

printf("                                Maison\n\n");
Color(10,0);printf("                               1");Color(15,0);printf(" ");Color(0,10);printf(" ");Color(15,0);printf(" ");Color(0,11);printf(" ");Color(11,0);printf(" 2\n");
Color(15,0);printf("                            ");Color(0,10);printf("      ");Color(15,0);printf(" ");Color(0,11);printf("                 \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" ");Color(11,0);printf("  2\n");
Color(15,0);printf("         ");Color(10,0);printf("1                  ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf("    \n");
Color(15,0);printf("         ");Color(0,10);printf("                    ");Color(15,0);printf("                      ");Color(15,0);printf("      Rue des Lauriers\n");printf("     Zoo ");printf("                           ");
Color(15,0);printf("               ");Color(0,12);printf("    ");Color(15,0);printf("                        ");
Color(15,0);printf("          ");Color(0,13);printf("       ");Color(15,0);printf("                                   ");Color(0,12);printf(" ");Color(12,0);printf("  4\n");
Color(15,0);printf("         ");Color(13,0);printf("3     ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf("                  ");Color(15,0);printf(" ");Color(0,12);printf("                  \n");
Color(15,0);printf("                                ");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" \n");
Color(15,0);printf("                               ");Color(13,0);printf("3");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" ");Color(12,0);printf(" 4\n\n");
Color(15,0);printf("                         Au cafe des mysteres\n\n\n");Color(15,0);

Color(3,0);scanf("%ld", &ChoixBus7);printf("\n\n");Color(15,0);

if(ChoixBus7 == 3)
{
Color(6,0);printf("Impossible ! Cette ligne ne passe pas par ici.\n\n\n");

Color(15,0);system("PAUSE");printf("\n\n");



printf("                                Maison\n\n");
Color(10,0);printf("                               1");Color(15,0);printf(" ");Color(0,10);printf(" ");Color(15,0);printf(" ");Color(0,11);printf(" ");Color(11,0);printf(" 2\n");
Color(15,0);printf("                            ");Color(0,10);printf("      ");Color(15,0);printf(" ");Color(0,11);printf("                 \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" ");Color(11,0);printf("  2\n");
Color(15,0);printf("         ");Color(10,0);printf("1                  ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf("    \n");
Color(15,0);printf("         ");Color(0,10);printf("                    ");Color(15,0);printf("                      ");Color(15,0);printf("      Rue des Lauriers\n");printf("     Zoo ");printf("                           ");
Color(15,0);printf("               ");Color(0,12);printf("    ");Color(15,0);printf("                        ");
Color(15,0);printf("          ");Color(0,13);printf("       ");Color(15,0);printf("                                   ");Color(0,12);printf(" ");Color(12,0);printf("  4\n");
Color(15,0);printf("         ");Color(13,0);printf("3     ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf("                  ");Color(15,0);printf(" ");Color(0,12);printf("                  \n");
Color(15,0);printf("                                ");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" \n");
Color(15,0);printf("                               ");Color(13,0);printf("3");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" ");Color(12,0);printf(" 4\n\n");
Color(15,0);printf("                         Au cafe des mysteres\n\n\n");Color(15,0);

Color(3,0);scanf("%ld", &ChoixBus7);printf("\n\n");Color(15,0);
}

if(ChoixBus7 == 4)
{
Color(6,0);printf("Impossible ! Cette ligne ne passe pas par ici.\n\n\n");

Color(15,0);system("PAUSE");printf("\n\n");



printf("                                Maison\n\n");
Color(10,0);printf("                               1");Color(15,0);printf(" ");Color(0,10);printf(" ");Color(15,0);printf(" ");Color(0,11);printf(" ");Color(11,0);printf(" 2\n");
Color(15,0);printf("                            ");Color(0,10);printf("      ");Color(15,0);printf(" ");Color(0,11);printf("                 \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" ");Color(11,0);printf("  2\n");
Color(15,0);printf("         ");Color(10,0);printf("1                  ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf("    \n");
Color(15,0);printf("         ");Color(0,10);printf("                    ");Color(15,0);printf("                      ");Color(15,0);printf("      Rue des Lauriers\n");printf("     Zoo ");printf("                           ");
Color(15,0);printf("               ");Color(0,12);printf("    ");Color(15,0);printf("                        ");
Color(15,0);printf("          ");Color(0,13);printf("       ");Color(15,0);printf("                                   ");Color(0,12);printf(" ");Color(12,0);printf("  4\n");
Color(15,0);printf("         ");Color(13,0);printf("3     ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf("                  ");Color(15,0);printf(" ");Color(0,12);printf("                  \n");
Color(15,0);printf("                                ");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" \n");
Color(15,0);printf("                               ");Color(13,0);printf("3");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" ");Color(12,0);printf(" 4\n\n");
Color(15,0);printf("                         Au cafe des mysteres\n\n\n");Color(15,0);

Color(3,0);scanf("%ld", &ChoixBus7);printf("\n\n");Color(15,0);
}

switch (ChoixBus7)

{ /* Ouverture switch Bus 1 */

case 1 :

     Color(8,0);printf("\n\n ");
printf("Le bus vous depose juste en face du zoo. La grille est fermee, et le\n");
printf("guichet est vide.\n\n");

Color(11,0);printf("\"C'est etrange, le zoo est habituellement deja ouvert a cette heure-la...\n");
printf("Que se passe-t-il ?\"\n\n");

Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");Color(15,0);



if (strcmp (action, "regarder") != 0) if (strcmp (objet1, "guichet") != 0)
{
   do {
   do {

Color(6,0);printf("Ca ne donne rien !\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Mais que se passe-t-il ?\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");Color(15,0);

      } while (strcmp (action, "regarder") != 0);

      } while (strcmp (objet1, "guichet") != 0);
}


if (strcmp (action, "regarder") != 0) if (strcmp (objet1, "guichet") != 1)
{
   do {
   do {

Color(6,0);printf("Ca ne donne rien !\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Mais que se passe-t-il ?\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");Color(15,0);

      } while (strcmp (action, "regarder") != 0);

      } while (strcmp (objet1, "guichet") != 0);
}


if (strcmp (action, "regarder") != 1) if (strcmp (objet1, "guichet") != 0)
{
   do {
   do {

Color(6,0);printf("Ca ne donne rien !\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Mais que se passe-t-il ?\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");Color(15,0);

      } while (strcmp (action, "regarder") != 0);

      } while (strcmp (objet1, "guichet") != 0);
}


Color(11,0);printf("Il y a une petite note collee sur la vitre ! Voyons-voir ce qu'elle dit :\n\n");

Color(15,0);printf("\"Le parc animalier est exceptionnellement ferme aujourd'hui pour cause\n");
printf("de grand froid. Veuillez-nous excuser de la gene occasionnee...\"\n\n");

Color(15,0);system("PAUSE");printf("\n\n\n");

Color(11,0);printf("\"Zut ! C'est vraiment pas de chance ! Je voulais tellement aller au zoo\n");
printf("aujourd'hui. Hmm...Je me demande quel est le veritable probleme.\n");
printf("Puisque je suis dehors, allons faire un tour.\"\n\n\n");

Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");Color(15,0);


if (strcmp (action, "prendre") != 0) if (strcmp (objet1, "bus") != 0)
{
   do {
   do {

Color(6,0);printf("Je crois qu'il n'y a rien a faire ici pour le moment.\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Allons faire un tour !");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");Color(15,0);

      } while (strcmp (action, "prendre") != 0);

      } while (strcmp (objet1, "bus") != 0);
}


if (strcmp (action, "prendre") != 0) if (strcmp (objet1, "bus") != 1)
{
   do {
   do {

Color(6,0);printf("Je crois qu'il n'y a rien a faire ici pour le moment.\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Allons faire un tour !");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");Color(15,0);

      } while (strcmp (action, "prendre") != 0);

      } while (strcmp (objet1, "bus") != 0);
}


if (strcmp (action, "prendre") != 1) if (strcmp (objet1, "bus") != 0)
{
   do {
   do {

Color(6,0);printf("Je crois qu'il n'y a rien a faire ici pour le moment.\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Allons faire un tour !");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");Color(15,0);

      } while (strcmp (action, "prendre") != 0);

      } while (strcmp (objet1, "bus") != 0);
}



Color(15,0);
printf("                                Maison\n\n");
Color(10,0);printf("                               1");Color(15,0);printf(" ");Color(0,10);printf(" ");Color(15,0);printf(" ");Color(0,11);printf(" ");Color(11,0);printf(" 2\n");
Color(15,0);printf("                            ");Color(0,10);printf("      ");Color(15,0);printf(" ");Color(0,11);printf("                 \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" ");Color(11,0);printf("  2\n");
Color(15,0);printf("         ");Color(10,0);printf("1                  ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf("    \n");
Color(15,0);printf("         ");Color(0,10);printf("                    ");Color(15,0);printf("                      ");Color(15,0);printf("      Rue des Lauriers\n");printf("     Zoo ");printf("                           ");
Color(15,0);printf("               ");Color(0,12);printf("    ");Color(15,0);printf("                        ");
Color(15,0);printf("          ");Color(0,13);printf("       ");Color(15,0);printf("                                   ");Color(0,12);printf(" ");Color(12,0);printf("  4\n");
Color(15,0);printf("         ");Color(13,0);printf("3     ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf("                  ");Color(15,0);printf(" ");Color(0,12);printf("                  \n");
Color(15,0);printf("                                ");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" \n");
Color(15,0);printf("                               ");Color(13,0);printf("3");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" ");Color(12,0);printf(" 4\n\n");
Color(15,0);printf("                         Au cafe des mysteres\n\n\n");Color(15,0);

Color(3,0);scanf("%ld", &ChoixBus8);printf("\n\n");Color(15,0);

if(ChoixBus8 == 2)
{
Color(6,0);printf("Impossible ! Cette ligne ne passe pas par ici.\n\n\n");

Color(15,0);system("PAUSE");printf("\n\n");



printf("                                Maison\n\n");
Color(10,0);printf("                               1");Color(15,0);printf(" ");Color(0,10);printf(" ");Color(15,0);printf(" ");Color(0,11);printf(" ");Color(11,0);printf(" 2\n");
Color(15,0);printf("                            ");Color(0,10);printf("      ");Color(15,0);printf(" ");Color(0,11);printf("                 \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" ");Color(11,0);printf("  2\n");
Color(15,0);printf("         ");Color(10,0);printf("1                  ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf("    \n");
Color(15,0);printf("         ");Color(0,10);printf("                    ");Color(15,0);printf("                      ");Color(15,0);printf("      Rue des Lauriers\n");printf("     Zoo ");printf("                           ");
Color(15,0);printf("               ");Color(0,12);printf("    ");Color(15,0);printf("                        ");
Color(15,0);printf("          ");Color(0,13);printf("       ");Color(15,0);printf("                                   ");Color(0,12);printf(" ");Color(12,0);printf("  4\n");
Color(15,0);printf("         ");Color(13,0);printf("3     ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf("                  ");Color(15,0);printf(" ");Color(0,12);printf("                  \n");
Color(15,0);printf("                                ");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" \n");
Color(15,0);printf("                               ");Color(13,0);printf("3");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" ");Color(12,0);printf(" 4\n\n");
Color(15,0);printf("                         Au cafe des mysteres\n\n\n");Color(15,0);

Color(3,0);scanf("%ld", &ChoixBus8);printf("\n\n");Color(15,0);
}

if(ChoixBus8 == 4)
{
Color(6,0);printf("Impossible ! Cette ligne ne passe pas par ici.\n\n\n");

Color(15,0);system("PAUSE");printf("\n\n");



printf("                                Maison\n\n");
Color(10,0);printf("                               1");Color(15,0);printf(" ");Color(0,10);printf(" ");Color(15,0);printf(" ");Color(0,11);printf(" ");Color(11,0);printf(" 2\n");
Color(15,0);printf("                            ");Color(0,10);printf("      ");Color(15,0);printf(" ");Color(0,11);printf("                 \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" ");Color(11,0);printf("  2\n");
Color(15,0);printf("         ");Color(10,0);printf("1                  ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf("    \n");
Color(15,0);printf("         ");Color(0,10);printf("                    ");Color(15,0);printf("                      ");Color(15,0);printf("      Rue des Lauriers\n");printf("     Zoo ");printf("                           ");
Color(15,0);printf("               ");Color(0,12);printf("    ");Color(15,0);printf("                        ");
Color(15,0);printf("          ");Color(0,13);printf("       ");Color(15,0);printf("                                   ");Color(0,12);printf(" ");Color(12,0);printf("  4\n");
Color(15,0);printf("         ");Color(13,0);printf("3     ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf("                  ");Color(15,0);printf(" ");Color(0,12);printf("                  \n");
Color(15,0);printf("                                ");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" \n");
Color(15,0);printf("                               ");Color(13,0);printf("3");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" ");Color(12,0);printf(" 4\n\n");
Color(15,0);printf("                         Au cafe des mysteres\n\n\n");Color(15,0);

Color(3,0);scanf("%ld", &ChoixBus8);printf("\n\n");Color(15,0);
}

switch (ChoixBus8)

{ /* Ouverture switch Bus 2 */
             case 1 :

Color(6,0);printf("Non, je n'ai pas envie de rentrer a la maison maintenant.\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");


printf("                                Maison\n\n");
Color(10,0);printf("                               1");Color(15,0);printf(" ");Color(0,10);printf(" ");Color(15,0);printf(" ");Color(0,11);printf(" ");Color(11,0);printf(" 2\n");
Color(15,0);printf("                            ");Color(0,10);printf("      ");Color(15,0);printf(" ");Color(0,11);printf("                 \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" ");Color(11,0);printf("  2\n");
Color(15,0);printf("         ");Color(10,0);printf("1                  ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf("    \n");
Color(15,0);printf("         ");Color(0,10);printf("                    ");Color(15,0);printf("                      ");Color(15,0);printf("      Rue des Lauriers\n");printf("     Zoo ");printf("                           ");
Color(15,0);printf("               ");Color(0,12);printf("    ");Color(15,0);printf("                        ");
Color(15,0);printf("          ");Color(0,13);printf("       ");Color(15,0);printf("                                   ");Color(0,12);printf(" ");Color(12,0);printf("  4\n");
Color(15,0);printf("         ");Color(13,0);printf("3     ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf("                  ");Color(15,0);printf(" ");Color(0,12);printf("                  \n");
Color(15,0);printf("                                ");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" \n");
Color(15,0);printf("                               ");Color(13,0);printf("3");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" ");Color(12,0);printf(" 4\n\n");
Color(15,0);printf("                         Au cafe des mysteres\n\n\n");Color(15,0);

     Color(3,0);scanf("%ld", &ChoixBus9);printf("\n\n");Color(15,0);

     if(ChoixBus9 == 2)
{
Color(6,0);printf("Impossible ! Cette ligne ne passe pas par ici.\n\n\n");

Color(15,0);system("PAUSE");printf("\n\n");



printf("                                Maison\n\n");
Color(10,0);printf("                               1");Color(15,0);printf(" ");Color(0,10);printf(" ");Color(15,0);printf(" ");Color(0,11);printf(" ");Color(11,0);printf(" 2\n");
Color(15,0);printf("                            ");Color(0,10);printf("      ");Color(15,0);printf(" ");Color(0,11);printf("                 \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" ");Color(11,0);printf("  2\n");
Color(15,0);printf("         ");Color(10,0);printf("1                  ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf("    \n");
Color(15,0);printf("         ");Color(0,10);printf("                    ");Color(15,0);printf("                      ");Color(15,0);printf("      Rue des Lauriers\n");printf("     Zoo ");printf("                           ");
Color(15,0);printf("               ");Color(0,12);printf("    ");Color(15,0);printf("                        ");
Color(15,0);printf("          ");Color(0,13);printf("       ");Color(15,0);printf("                                   ");Color(0,12);printf(" ");Color(12,0);printf("  4\n");
Color(15,0);printf("         ");Color(13,0);printf("3     ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf("                  ");Color(15,0);printf(" ");Color(0,12);printf("                  \n");
Color(15,0);printf("                                ");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" \n");
Color(15,0);printf("                               ");Color(13,0);printf("3");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" ");Color(12,0);printf(" 4\n\n");
Color(15,0);printf("                         Au cafe des mysteres\n\n\n");Color(15,0);

Color(3,0);scanf("%ld", &ChoixBus9);printf("\n\n");Color(15,0);
}

if(ChoixBus9 == 4)
{
Color(6,0);printf("Impossible ! Cette ligne ne passe pas par ici.\n\n\n");

Color(15,0);system("PAUSE");printf("\n\n");



printf("                                Maison\n\n");
Color(10,0);printf("                               1");Color(15,0);printf(" ");Color(0,10);printf(" ");Color(15,0);printf(" ");Color(0,11);printf(" ");Color(11,0);printf(" 2\n");
Color(15,0);printf("                            ");Color(0,10);printf("      ");Color(15,0);printf(" ");Color(0,11);printf("                 \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" ");Color(11,0);printf("  2\n");
Color(15,0);printf("         ");Color(10,0);printf("1                  ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf("    \n");
Color(15,0);printf("         ");Color(0,10);printf("                    ");Color(15,0);printf("                      ");Color(15,0);printf("      Rue des Lauriers\n");printf("     Zoo ");printf("                           ");
Color(15,0);printf("               ");Color(0,12);printf("    ");Color(15,0);printf("                        ");
Color(15,0);printf("          ");Color(0,13);printf("       ");Color(15,0);printf("                                   ");Color(0,12);printf(" ");Color(12,0);printf("  4\n");
Color(15,0);printf("         ");Color(13,0);printf("3     ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf("                  ");Color(15,0);printf(" ");Color(0,12);printf("                  \n");
Color(15,0);printf("                                ");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" \n");
Color(15,0);printf("                               ");Color(13,0);printf("3");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" ");Color(12,0);printf(" 4\n\n");
Color(15,0);printf("                         Au cafe des mysteres\n\n\n");Color(15,0);

Color(3,0);scanf("%ld", &ChoixBus9);printf("\n\n");Color(15,0);
}

switch (ChoixBus9)

     { /* Ouverture switch Bus 3 */

     case 3 :

Color(8,0);printf("Le bus vous depose juste devant la porte du cafe des mysteres.\n\n");

Color(11,0);printf("\"C'est ici qu'on trouve les meilleurs thes et cafes de la ville,\n");
printf("j'adore cet endroit. En plus, une fois par mois un concours y est\n");
printf("organise pour gagner un cadeau mystere en rapport avec le the ou le cafe.\n");
printf("D'ailleurs, je crois que c'est justement aujourd'hui que commence le\n");
printf("nouveau concours de ce mois. Je me demande ce que c'est...\"\n\n\n");

Color(8,0);printf("Que faire maintenant ?\n\n\n");

Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");Color(15,0);

if (strcmp (action, "utiliser") != 0) if (strcmp (objet1, "porte") != 0)
{
   do {
   do {

Color(6,0);printf("Je ne suis pas sur de comprendre...\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Pourquoi pas prendre un bon cafe ?");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");Color(15,0);

      } while (strcmp (action, "utiliser") != 0);

      } while (strcmp (objet1, "porte") != 0);
}


  if (strcmp (action, "utiliser") != 0) if (strcmp (objet1, "porte") != 1)
{
   do {
   do {

Color(6,0);printf("Je ne suis pas sur de comprendre...\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Pourquoi pas prendre un bon cafe ?");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");Color(15,0);

      } while (strcmp (action, "utiliser") != 0);

      } while (strcmp (objet1, "porte") != 0);
}


if (strcmp (action, "utiliser") != 1) if (strcmp (objet1, "porte") != 0)
{
   do {
   do {

Color(6,0);printf("Je ne suis pas sur de comprendre...\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Pourquoi pas prendre un bon cafe ?");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");Color(15,0);

      } while (strcmp (action, "utiliser") != 0);

      } while (strcmp (objet1, "porte") != 0);
}



Color(8,0);printf("Vous entrez au cafe des mysteres. Il y a le barman derriere son comptoir,\n");
printf("en train de ranger sa vaisselle en sifflant, tandis qu'un client boit\n");
printf("une tasse de the en lisant son journal. A droite se trouvent les tables\n");
printf("et les banquettes, vides. Tout au fond, un petit couloir qui mene aux\n");
printf("toilettes.\n\n\n");
Color(15,0);system("PAUSE");printf("\n\n\n");

Color(11,0);printf("\"Eh bien ! Il n'y a pas grand monde. Pas etonnant par ce froid.\"\n\n\n");
Color(15,0);system("PAUSE");printf("\n\n\n");

Color(15,0);printf("- Ah ! c'est toi ! Entre donc mon ami, ca fait plaisir de te voir !\n\n\n");

Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");Color(15,0);



if (strcmp (action, "parler") != 0) if (strcmp (objet1, "barman") != 0)
{
   do {
   do {

Color(6,0);printf("Je ne veux pas faire ca, c'est inaproprie...\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Pourquoi pas prendre un bon cafe ?");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");Color(15,0);

      } while (strcmp (action, "parler") != 0);

      } while (strcmp (objet1, "barman") != 0);
}


if (strcmp (action, "parler") != 0) if (strcmp (objet1, "barman") != 1)
{
   do {
   do {

Color(6,0);printf("Je ne veux pas faire ca, c'est inaproprie...\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Pourquoi pas prendre un bon cafe ?");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");Color(15,0);

      } while (strcmp (action, "parler") != 0);

      } while (strcmp (objet1, "barman") != 0);
}



if (strcmp (action, "parler") != 1) if (strcmp (objet1, "barman") != 0)
{
   do {
   do {

Color(6,0);printf("Je ne veux pas faire ca, c'est inaproprie...\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Pourquoi pas prendre un bon cafe ?");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");Color(15,0);

      } while (strcmp (action, "parler") != 0);

      } while (strcmp (objet1, "barman") != 0);
}


Color(15,0);printf("- Que puis-je faire pour toi ?\n\n\n");
Color(11,0);printf("\"Salut Karl !\"\n\n\n");


Color(8,0);printf("1 : Un cafe\n\n");
printf("2 : Le zoo... ?\n\n\n");

Color(3,0);scanf("%ld", &conversation8);printf("\n\n");Color(15,0);

if(conversation8 == 2)
{
Color(11,0);printf("\"Sais-tu pourquoi le zoo est ferme aujourd'hui ?\"\n\n");
Color(15,0);system("PAUSE");printf("\n\n\n");
printf("- Non, je ne connais pas la raison exacte. Ce que je sais en revanche,\n");
printf("c'est que le gardien du zoo est coince ici pour la journee. Car vois-tu,\n");
printf("il vient au zoo en train ; or le prochain train est pour ce soir. Il avait\n");
printf("l'air bien embete. Il est venu prendre un cafe tout a l'heure.\n");
printf("Maintenant, je pense qu'il est parti tuer le temps a la patinoire a ciel\n");
printf("ouvert du parc municipal. Comme quoi, ce froid inhabituel en a surpris\n");
printf("plus d'un, mais fait aussi quelques heureux !\n\n\n");


system("PAUSE");printf("\n\n\n");

Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");Color(15,0);


if (strcmp (action, "parler") != 0) if (strcmp (objet1, "barman") != 0)
{
   do {
   do {

Color(6,0);printf("Je ne veux pas faire ca, c'est inaproprie...\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Pourquoi pas prendre un bon cafe ?");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");Color(15,0);

      } while (strcmp (action, "parler") != 0);

      } while (strcmp (objet1, "barman") != 0);
}


if (strcmp (action, "parler") != 0) if (strcmp (objet1, "barman") != 1)
{
   do {
   do {

Color(6,0);printf("Je ne veux pas faire ca, c'est inaproprie...\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Pourquoi pas prendre un bon cafe ?");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");Color(15,0);

      } while (strcmp (action, "parler") != 0);

      } while (strcmp (objet1, "barman") != 0);
}



if (strcmp (action, "parler") != 1) if (strcmp (objet1, "barman") != 0)
{
   do {
   do {

Color(6,0);printf("Je ne veux pas faire ca, c'est inaproprie...\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Pourquoi pas prendre un bon cafe ?");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");Color(15,0);

      } while (strcmp (action, "parler") != 0);

      } while (strcmp (objet1, "barman") != 0);
}


Color(15,0);printf("- Que puis-je faire pour toi ?\n\n\n");

Color(8,0);printf("1 : Un cafe\n\n");

Color(3,0);scanf("%ld", &conversation9);printf("\n\n");Color(15,0);

if(conversation9 == 1)
{

Color(11,0);printf("\"Pourrais-je avoir un cafe s'il-te-plait ?\"\n\n\n");
Color(15,0);system("PAUSE");printf("\n\n\n");

printf("- Bien sur ! Je t'en prie, prends place sur une des banquettes.\n\n\n");

}
}

if(conversation8 == 1)
{

Color(11,0);printf("\"Pourrais-je avoir un cafe s'il-te-plait ?\"\n\n\n");
Color(15,0);system("PAUSE");printf("\n\n\n");

printf("- Bien sur ! Je t'en prie, prends place sur une des banquettes.\n\n\n");

}

Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");Color(15,0);


if (strcmp (action, "utiliser") != 0) if (strcmp (objet1, "banquette") != 0)
{
   do {
   do {

Color(6,0);printf("Je devrais plutot m'asseoir, le cafe va bientot arriver.\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");Color(15,0);

      } while (strcmp (action, "utiliser") != 0);

      } while (strcmp (objet1, "banquette") != 0);
}

if (strcmp (action, "utiliser") != 0) if (strcmp (objet1, "banquette") != 1)
{
   do {
   do {

Color(6,0);printf("Je devrais plutot m'asseoir, le cafe va bientot arriver.\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");Color(15,0);

      } while (strcmp (action, "utiliser") != 0);

      } while (strcmp (objet1, "banquette") != 0);
}

if (strcmp (action, "utiliser") != 1) if (strcmp (objet1, "banquette") != 0)
{
   do {
   do {

Color(6,0);printf("Je devrais plutot m'asseoir, le cafe va bientot arriver.\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");Color(15,0);

      } while (strcmp (action, "utiliser") != 0);

      } while (strcmp (objet1, "banquette") != 0);
}

Color(8,0);printf("Vous vous asseyez sur votre banquette favorite. Mais...\n\n\n");

Color(11,0);printf("\"Aie ! Sur quoi me suis-je assis ?\"\n\n\n");
Color(15,0);system("PAUSE");printf("\n\n\n");
Color(8,0);printf("Vous regardez le coussin et vous trouvez une boucle d'oreille !\n\n\n");
Color(15,0);system("PAUSE");printf("\n\n\n");

printf("- Et voila, un cafe pour monsieur, un !\n\n\n");

Color(8,0);printf("1 : Le zoo... ?\n\n");
printf("2 : La boucle d'oreille\n\n");
printf("3 : Le concours du mois...\n\n\n");

Color(3,0);scanf("%ld", &conversation10);printf("\n\n");Color(15,0);

if(conversation10 == 1)
{
Color(11,0);printf("\"Sais-tu pourquoi le zoo est ferme aujourd'hui ?\"\n\n");
Color(15,0);system("PAUSE");printf("\n\n\n");
printf("- Non, je ne connais pas la raison exacte. Ce que je sais en revanche,\n");
printf("c'est que le gardien du zoo est coince ici pour la journee. Car vois-tu,\n");
printf("il vient au zoo en train ; or le prochain train est pour ce soir. Il avait\n");
printf("l'air bien embete. Il est venu prendre un cafe tout a l'heure.\n");
printf("Maintenant, je pense qu'il est parti tuer le temps a la patinoire a ciel\n");
printf("ouvert du parc municipal. Comme quoi, ce froid inhabituel en a surpris\n");
printf("plus d'un, mais fait aussi quelques heureux !\n\n\n");

system("PAUSE");printf("\n\n\n");

Color(8,0);printf("2 : La boucle d'oreille\n\n");
printf("3 : Le concours du mois...\n\n\n");
Color(3,0);scanf("%ld", &conversation10);printf("\n\n");Color(15,0);
}

if(conversation10 == 2)
{
Color(15,0);printf("- Oh ! Ce doit etre a la jeune demoiselle de tout a l'heure...\n");
printf("Malheureusement, elle est de passage en ville seulement aujourd'hui.\n");
printf("Je pense que tu devrais la garder, tu as plus de chance que moi de la\n");
printf("rencontrer, surtout si elle est aussi venue en train, ca te laisse\n");
printf("jusqu'a ce soir pour la retrouver !\n\n\n");

system("PAUSE");printf("\n\n\n");

Color(8,0);printf("1 : Le zoo... ?\n\n");
printf("3 : Le concours du mois...\n\n\n");
Color(3,0);scanf("%ld", &conversation11);printf("\n\n");Color(15,0);

if(conversation11 == 1)
{
Color(11,0);printf("\"Sais-tu pourquoi le zoo est ferme aujourd'hui ?\"\n\n");
Color(15,0);system("PAUSE");printf("\n\n\n");
printf("- Non, je ne connais pas la raison exacte. Ce que je sais en revanche,\n");
printf("c'est que le gardien du zoo est coince ici pour la journee. Car vois-tu,\n");
printf("il vient au zoo en train ; or le prochain train est pour ce soir. Il avait\n");
printf("l'air bien embete. Il est venu prendre un cafe tout a l'heure.\n");
printf("Maintenant, je pense qu'il est parti tuer le temps a la patinoire a ciel\n");
printf("ouvert du parc municipal. Comme quoi, ce froid inhabituel en a surpris\n");
printf("plus d'un, mais fait aussi quelques heureux !\n\n\n");

system("PAUSE");printf("\n\n\n");

Color(8,0);printf("3 : Le concours du mois...\n\n\n");
Color(3,0);scanf("%ld", &conversation10);printf("\n\n");Color(15,0);
}
}

if(conversation10 == 3)
{

Color(11,0);printf("\"En quoi consiste le concours de ce mois-ci ?\"\n\n\n");
Color(15,0);printf("- Eh bah, tu ne perds pas de temps, toi ! Mais je crois que la surprise\n");
printf("va te plaire. Pour inaugurer cette borne d'arcade que je viens tout\n");
printf("juste d'installer, j'ai programme un petit jeu de devinette. Chaque\n");
printf("client qui battra l'ordinateur a ce petit jeu gagnera la surprise de ce\n");
printf("mois. Mais il va falloir que tu repasses dans une heure, car je n'ai pas\n");
printf("encore termine les branchements. C'est-a-dire que tu es bien matinale ^^\n\n\n");
}

Color(15,0);system("PAUSE");printf("\n\n\n");

Color(11,0);printf("\"Merci pour le cafe, il etait tres bon. A plus tard !\"\n\n\n");

Color(8,0);printf("Que faire maintenant ?\n\n\n");


Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");Color(15,0);


if (strcmp (action, "prendre") != 0) if (strcmp (objet1, "bus") != 0)
{
   do {
   do {

Color(6,0);printf("Je crois qu'il n'y a rien a faire ici pour le moment.\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Allons faire un tour !");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");Color(15,0);

      } while (strcmp (action, "prendre") != 0);

      } while (strcmp (objet1, "bus") != 0);
}


if (strcmp (action, "prendre") != 0) if (strcmp (objet1, "bus") != 1)
{
   do {
   do {

Color(6,0);printf("Je crois qu'il n'y a rien a faire ici pour le moment.\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Allons faire un tour !");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");Color(15,0);

      } while (strcmp (action, "prendre") != 0);

      } while (strcmp (objet1, "bus") != 0);
}


if (strcmp (action, "prendre") != 1) if (strcmp (objet1, "bus") != 0)
{
   do {
   do {

Color(6,0);printf("Je crois qu'il n'y a rien a faire ici pour le moment.\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Allons faire un tour !");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");Color(15,0);

      } while (strcmp (action, "prendre") != 0);

      } while (strcmp (objet1, "bus") != 0);
}



Color(15,0);
printf("                                Maison\n\n");
Color(10,0);printf("                               1");Color(15,0);printf(" ");Color(0,10);printf(" ");Color(15,0);printf(" ");Color(0,11);printf(" ");Color(11,0);printf(" 2\n");
Color(15,0);printf("                            ");Color(0,10);printf("      ");Color(15,0);printf(" ");Color(0,11);printf("                 \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" ");Color(11,0);printf("  2\n");
Color(15,0);printf("         ");Color(10,0);printf("1                  ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf("    \n");
Color(15,0);printf("         ");Color(0,10);printf("                    ");Color(15,0);printf("                      ");Color(15,0);printf("      Rue des Lauriers\n");printf("     Zoo ");printf("                           ");
Color(15,0);printf("               ");Color(0,12);printf("    ");Color(15,0);printf("                        ");
Color(15,0);printf("          ");Color(0,13);printf("       ");Color(15,0);printf("                                   ");Color(0,12);printf(" ");Color(12,0);printf("  4\n");
Color(15,0);printf("         ");Color(13,0);printf("3     ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf("                  ");Color(15,0);printf(" ");Color(0,12);printf("                  \n");
Color(15,0);printf("                                ");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" \n");
Color(15,0);printf("                               ");Color(13,0);printf("3");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" ");Color(12,0);printf(" 4\n\n");
Color(15,0);printf("                         Au cafe des mysteres\n\n\n");Color(15,0);

Color(3,0);scanf("%ld", &ChoixBus10);printf("\n\n");Color(15,0);

if(ChoixBus10 == 1)
{
Color(6,0);printf("Impossible ! Cette ligne ne passe pas par ici.\n\n\n");

Color(15,0);system("PAUSE");printf("\n\n");



printf("                                Maison\n\n");
Color(10,0);printf("                               1");Color(15,0);printf(" ");Color(0,10);printf(" ");Color(15,0);printf(" ");Color(0,11);printf(" ");Color(11,0);printf(" 2\n");
Color(15,0);printf("                            ");Color(0,10);printf("      ");Color(15,0);printf(" ");Color(0,11);printf("                 \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" ");Color(11,0);printf("  2\n");
Color(15,0);printf("         ");Color(10,0);printf("1                  ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf("    \n");
Color(15,0);printf("         ");Color(0,10);printf("                    ");Color(15,0);printf("                      ");Color(15,0);printf("      Rue des Lauriers\n");printf("     Zoo ");printf("                           ");
Color(15,0);printf("               ");Color(0,12);printf("    ");Color(15,0);printf("                        ");
Color(15,0);printf("          ");Color(0,13);printf("       ");Color(15,0);printf("                                   ");Color(0,12);printf(" ");Color(12,0);printf("  4\n");
Color(15,0);printf("         ");Color(13,0);printf("3     ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf("                  ");Color(15,0);printf(" ");Color(0,12);printf("                  \n");
Color(15,0);printf("                                ");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" \n");
Color(15,0);printf("                               ");Color(13,0);printf("3");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" ");Color(12,0);printf(" 4\n\n");
Color(15,0);printf("                         Au cafe des mysteres\n\n\n");Color(15,0);

Color(3,0);scanf("%ld", &ChoixBus10);printf("\n\n");Color(15,0);
}

if(ChoixBus10 == 2)
{
Color(6,0);printf("Impossible ! Cette ligne ne passe pas par ici.\n\n\n");

Color(15,0);system("PAUSE");printf("\n\n");



printf("                                Maison\n\n");
Color(10,0);printf("                               1");Color(15,0);printf(" ");Color(0,10);printf(" ");Color(15,0);printf(" ");Color(0,11);printf(" ");Color(11,0);printf(" 2\n");
Color(15,0);printf("                            ");Color(0,10);printf("      ");Color(15,0);printf(" ");Color(0,11);printf("                 \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" ");Color(11,0);printf("  2\n");
Color(15,0);printf("         ");Color(10,0);printf("1                  ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf("    \n");
Color(15,0);printf("         ");Color(0,10);printf("                    ");Color(15,0);printf("                      ");Color(15,0);printf("      Rue des Lauriers\n");printf("     Zoo ");printf("                           ");
Color(15,0);printf("               ");Color(0,12);printf("    ");Color(15,0);printf("                        ");
Color(15,0);printf("          ");Color(0,13);printf("       ");Color(15,0);printf("                                   ");Color(0,12);printf(" ");Color(12,0);printf("  4\n");
Color(15,0);printf("         ");Color(13,0);printf("3     ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf("                  ");Color(15,0);printf(" ");Color(0,12);printf("                  \n");
Color(15,0);printf("                                ");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" \n");
Color(15,0);printf("                               ");Color(13,0);printf("3");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" ");Color(12,0);printf(" 4\n\n");
Color(15,0);printf("                         Au cafe des mysteres\n\n\n");Color(15,0);

Color(3,0);scanf("%ld", &ChoixBus10);printf("\n\n");Color(15,0);
}

switch (ChoixBus10)

{ /* Ouverture switch Bus 4 */

case 3 :

Color(11,0);printf("Le zoo est ferme, sans raison apparente. Je ne peux rien faire de plus\n");
printf("la-bas.\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");


printf("                                Maison\n\n");
Color(10,0);printf("                               1");Color(15,0);printf(" ");Color(0,10);printf(" ");Color(15,0);printf(" ");Color(0,11);printf(" ");Color(11,0);printf(" 2\n");
Color(15,0);printf("                            ");Color(0,10);printf("      ");Color(15,0);printf(" ");Color(0,11);printf("                 \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" ");Color(11,0);printf("  2\n");
Color(15,0);printf("         ");Color(10,0);printf("1                  ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf("    \n");
Color(15,0);printf("         ");Color(0,10);printf("                    ");Color(15,0);printf("                      ");Color(15,0);printf("      Rue des Lauriers\n");printf("     Zoo ");printf("                           ");
Color(15,0);printf("               ");Color(0,12);printf("    ");Color(15,0);printf("                        ");
Color(15,0);printf("          ");Color(0,13);printf("       ");Color(15,0);printf("                                   ");Color(0,12);printf(" ");Color(12,0);printf("  4\n");
Color(15,0);printf("         ");Color(13,0);printf("3     ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf("                  ");Color(15,0);printf(" ");Color(0,12);printf("                  \n");
Color(15,0);printf("                                ");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" \n");
Color(15,0);printf("                               ");Color(13,0);printf("3");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" ");Color(12,0);printf(" 4\n\n");
Color(15,0);printf("                         Au cafe des mysteres\n\n\n");Color(15,0);

     Color(3,0);scanf("%ld", &ChoixBus13);printf("\n\n");Color(15,0);

     if(ChoixBus13 == 2)
{
Color(6,0);printf("Impossible ! Cette ligne ne passe pas par ici.\n\n\n");

Color(15,0);system("PAUSE");printf("\n\n");



printf("                                Maison\n\n");
Color(10,0);printf("                               1");Color(15,0);printf(" ");Color(0,10);printf(" ");Color(15,0);printf(" ");Color(0,11);printf(" ");Color(11,0);printf(" 2\n");
Color(15,0);printf("                            ");Color(0,10);printf("      ");Color(15,0);printf(" ");Color(0,11);printf("                 \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" ");Color(11,0);printf("  2\n");
Color(15,0);printf("         ");Color(10,0);printf("1                  ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf("    \n");
Color(15,0);printf("         ");Color(0,10);printf("                    ");Color(15,0);printf("                      ");Color(15,0);printf("      Rue des Lauriers\n");printf("     Zoo ");printf("                           ");
Color(15,0);printf("               ");Color(0,12);printf("    ");Color(15,0);printf("                        ");
Color(15,0);printf("          ");Color(0,13);printf("       ");Color(15,0);printf("                                   ");Color(0,12);printf(" ");Color(12,0);printf("  4\n");
Color(15,0);printf("         ");Color(13,0);printf("3     ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf("                  ");Color(15,0);printf(" ");Color(0,12);printf("                  \n");
Color(15,0);printf("                                ");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" \n");
Color(15,0);printf("                               ");Color(13,0);printf("3");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" ");Color(12,0);printf(" 4\n\n");
Color(15,0);printf("                         Au cafe des mysteres\n\n\n");Color(15,0);

Color(3,0);scanf("%ld", &ChoixBus13);printf("\n\n");Color(15,0);
}

if(ChoixBus13 == 4)
{
Color(6,0);printf("Impossible ! Cette ligne ne passe pas par ici.\n\n\n");

Color(15,0);system("PAUSE");printf("\n\n");



printf("                                Maison\n\n");
Color(10,0);printf("                               1");Color(15,0);printf(" ");Color(0,10);printf(" ");Color(15,0);printf(" ");Color(0,11);printf(" ");Color(11,0);printf(" 2\n");
Color(15,0);printf("                            ");Color(0,10);printf("      ");Color(15,0);printf(" ");Color(0,11);printf("                 \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" ");Color(11,0);printf("  2\n");
Color(15,0);printf("         ");Color(10,0);printf("1                  ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf("    \n");
Color(15,0);printf("         ");Color(0,10);printf("                    ");Color(15,0);printf("                      ");Color(15,0);printf("      Rue des Lauriers\n");printf("     Zoo ");printf("                           ");
Color(15,0);printf("               ");Color(0,12);printf("    ");Color(15,0);printf("                        ");
Color(15,0);printf("          ");Color(0,13);printf("       ");Color(15,0);printf("                                   ");Color(0,12);printf(" ");Color(12,0);printf("  4\n");
Color(15,0);printf("         ");Color(13,0);printf("3     ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf("                  ");Color(15,0);printf(" ");Color(0,12);printf("                  \n");
Color(15,0);printf("                                ");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" \n");
Color(15,0);printf("                               ");Color(13,0);printf("3");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" ");Color(12,0);printf(" 4\n\n");
Color(15,0);printf("                         Au cafe des mysteres\n\n\n");Color(15,0);

Color(3,0);scanf("%ld", &ChoixBus13);printf("\n\n");Color(15,0);
}



break ;

} /* Fermeture switch Bus 4 */

break ;

} /* Fermeture switch Bus 3 */


case 3 :

Color(8,0);printf("Le bus vous depose juste devant la porte du cafe des mysteres.\n\n");

Color(11,0);printf("\"C'est ici qu'on trouve les meilleurs thes et cafes de la ville,\n");
printf("j'adore cet endroit. En plus, une fois par mois un concours y est\n");
printf("organise pour gagner un cadeau mystere en rapport avec le the ou le cafe.\n");
printf("D'ailleurs, je crois que c'est justement aujourd'hui que commence le\n");
printf("nouveau concours de ce mois. Je me demande ce que c'est...\"\n\n\n");

Color(8,0);printf("Que faire maintenant ?\n\n\n");

Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");Color(15,0);

if (strcmp (action, "utiliser") != 0) if (strcmp (objet1, "porte") != 0)
{
   do {
   do {

Color(6,0);printf("Je ne suis pas sur de comprendre...\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Pourquoi pas prendre un bon cafe ?");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");Color(15,0);

      } while (strcmp (action, "utiliser") != 0);

      } while (strcmp (objet1, "porte") != 0);
}


  if (strcmp (action, "utiliser") != 0) if (strcmp (objet1, "porte") != 1)
{
   do {
   do {

Color(6,0);printf("Je ne suis pas sur de comprendre...\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Pourquoi pas prendre un bon cafe ?");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");Color(15,0);

      } while (strcmp (action, "utiliser") != 0);

      } while (strcmp (objet1, "porte") != 0);
}


if (strcmp (action, "utiliser") != 1) if (strcmp (objet1, "porte") != 0)
{
   do {
   do {

Color(6,0);printf("Je ne suis pas sur de comprendre...\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Pourquoi pas prendre un bon cafe ?");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");Color(15,0);

      } while (strcmp (action, "utiliser") != 0);

      } while (strcmp (objet1, "porte") != 0);
}



Color(8,0);printf("Vous entrez au cafe des mysteres. Il y a le barman derriere son comptoir,\n");
printf("en train de ranger sa vaisselle en sifflant, tandis qu'un client boit\n");
printf("une tasse de the en lisant son journal. A droite se trouvent les tables\n");
printf("et les banquettes, vides. Tout au fond, un petit couloir qui mene aux\n");
printf("toilettes.\n\n\n");
Color(15,0);system("PAUSE");printf("\n\n\n");

Color(11,0);printf("\"Eh bien ! Il n'y a pas grand monde. Pas etonnant par ce froid.\"\n\n\n");
Color(15,0);system("PAUSE");printf("\n\n\n");

printf("- Ah ! c'est toi ! Entre donc mon ami, ca fait plaisir de te voir !\n\n\n");

Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");Color(15,0);



if (strcmp (action, "parler") != 0) if (strcmp (objet1, "barman") != 0)
{
   do {
   do {

Color(6,0);printf("Je ne veux pas faire ca, c'est inaproprie...\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Pourquoi pas prendre un bon cafe ?");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");Color(15,0);

      } while (strcmp (action, "parler") != 0);

      } while (strcmp (objet1, "barman") != 0);
}


if (strcmp (action, "parler") != 0) if (strcmp (objet1, "barman") != 1)
{
   do {
   do {

Color(6,0);printf("Je ne veux pas faire ca, c'est inaproprie...\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Pourquoi pas prendre un bon cafe ?");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");Color(15,0);

      } while (strcmp (action, "parler") != 0);

      } while (strcmp (objet1, "barman") != 0);
}



if (strcmp (action, "parler") != 1) if (strcmp (objet1, "barman") != 0)
{
   do {
   do {

Color(6,0);printf("Je ne veux pas faire ca, c'est inaproprie...\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Pourquoi pas prendre un bon cafe ?");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");Color(15,0);

      } while (strcmp (action, "parler") != 0);

      } while (strcmp (objet1, "barman") != 0);
}


Color(15,0);printf("- Que puis-je faire pour toi ?\n\n\n");

Color(8,0);printf("1 : Un cafe\n\n");
printf("2 : Le zoo... ?\n\n\n");

Color(3,0);scanf("%ld", &conversation12);printf("\n\n");Color(15,0);

if(conversation12 == 2)
{
Color(11,0);printf("\"Sais-tu pourquoi le zoo est ferme aujourd'hui ?\"\n\n");
Color(15,0);system("PAUSE");printf("\n\n\n");
printf("- Non, je ne connais pas la raison exacte. Ce que je sais en revanche,\n");
printf("c'est que le gardien du zoo est coince ici pour la journee. Car vois-tu,\n");
printf("il vient au zoo en train ; or le prochain train est pour ce soir. Il avait\n");
printf("l'air bien embete. Il est venu prendre un cafe tout a l'heure.\n");
printf("Maintenant, je pense qu'il est parti tuer le temps a la patinoire a ciel\n");
printf("ouvert du parc municipal. Comme quoi, ce froid inhabituel en a surpris\n");
printf("plus d'un, mais fait aussi quelques heureux !\n\n\n");


system("PAUSE");printf("\n\n\n");

Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");Color(15,0);


if (strcmp (action, "parler") != 0) if (strcmp (objet1, "barman") != 0)
{
   do {
   do {

Color(6,0);printf("Je ne veux pas faire ca, c'est inaproprie...\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Pourquoi pas prendre un bon cafe ?");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");Color(15,0);

      } while (strcmp (action, "parler") != 0);

      } while (strcmp (objet1, "barman") != 0);
}


if (strcmp (action, "parler") != 0) if (strcmp (objet1, "barman") != 1)
{
   do {
   do {

Color(6,0);printf("Je ne veux pas faire ca, c'est inaproprie...\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Pourquoi pas prendre un bon cafe ?");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");Color(15,0);

      } while (strcmp (action, "parler") != 0);

      } while (strcmp (objet1, "barman") != 0);
}



if (strcmp (action, "parler") != 1) if (strcmp (objet1, "barman") != 0)
{
   do {
   do {

Color(6,0);printf("Je ne veux pas faire ca, c'est inaproprie...\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Pourquoi pas prendre un bon cafe ?");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");Color(15,0);

      } while (strcmp (action, "parler") != 0);

      } while (strcmp (objet1, "barman") != 0);
}


Color(15,0);printf("- Que puis-je faire pour toi ?\n\n\n");

Color(8,0);printf("1 : Un cafe\n\n");

Color(3,0);scanf("%ld", &conversation13);printf("\n\n");Color(15,0);

if(conversation13 == 1)
{

Color(11,0);printf("\"Pourrais-je avoir un cafe s'il-te-plait ?\"\n\n\n");
Color(15,0);system("PAUSE");printf("\n\n\n");

printf("- Bien sur ! Je t'en prie, prends place sur une des banquettes.\n\n\n");

}
}

if(conversation12 == 1)
{

Color(11,0);printf("\"Pourrais-je avoir un cafe s'il-te-plait ?\"\n\n\n");
Color(15,0);system("PAUSE");printf("\n\n\n");

printf("- Bien sur ! Je t'en prie, prends place sur une des banquettes.\n\n\n");

}

Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");Color(15,0);


if (strcmp (action, "utiliser") != 0) if (strcmp (objet1, "banquette") != 0)
{
   do {
   do {

Color(6,0);printf("Je devrais plutot m'asseoir, le cafe va bientot arriver.\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");Color(15,0);

      } while (strcmp (action, "utiliser") != 0);

      } while (strcmp (objet1, "banquette") != 0);
}

if (strcmp (action, "utiliser") != 0) if (strcmp (objet1, "banquette") != 1)
{
   do {
   do {

Color(6,0);printf("Je devrais plutot m'asseoir, le cafe va bientot arriver.\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");Color(15,0);

      } while (strcmp (action, "utiliser") != 0);

      } while (strcmp (objet1, "banquette") != 0);
}

if (strcmp (action, "utiliser") != 1) if (strcmp (objet1, "banquette") != 0)
{
   do {
   do {

Color(6,0);printf("Je devrais plutot m'asseoir, le cafe va bientot arriver.\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");Color(15,0);

      } while (strcmp (action, "utiliser") != 0);

      } while (strcmp (objet1, "banquette") != 0);
}

Color(8,0);printf("Vous vous asseyez sur votre banquette favorite. Mais...\n\n\n");

Color(11,0);printf("\"Aie ! Sur quoi me suis-je assis ?\"\n\n\n");
Color(15,0);system("PAUSE");printf("\n\n\n");
Color(8,0);printf("Vous regardez le coussin et vous trouvez une boucle d'oreille !\n\n\n");
Color(15,0);system("PAUSE");printf("\n\n\n");

printf("- Et voila, un cafe pour monsieur, un !\n\n\n");

Color(8,0);printf("1 : Le zoo... ?\n\n");
printf("2 : La boucle d'oreille\n\n");
printf("3 : Le concours du mois...\n\n\n");

Color(3,0);scanf("%ld", &conversation14);printf("\n\n");Color(15,0);

if(conversation14 == 1)
{
Color(11,0);printf("\"Sais-tu pourquoi le zoo est ferme aujourd'hui ?\"\n\n");
Color(15,0);system("PAUSE");printf("\n\n\n");
printf("- Non, je ne connais pas la raison exacte. Ce que je sais en revanche,\n");
printf("c'est que le gardien du zoo est coince ici pour la journee. Car vois-tu,\n");
printf("il vient au zoo en train ; or le prochain train est pour ce soir. Il avait\n");
printf("l'air bien embete. Il est venu prendre un cafe tout a l'heure.\n");
printf("Maintenant, je pense qu'il est parti tuer le temps a la patinoire a ciel\n");
printf("ouvert du parc municipal. Comme quoi, ce froid inhabituel en a surpris\n");
printf("plus d'un, mais fait aussi quelques heureux !\n\n\n");

system("PAUSE");printf("\n\n\n");

Color(8,0);printf("2 : La boucle d'oreille\n\n");
printf("3 : Le concours du mois...\n\n\n");
Color(3,0);scanf("%ld", &conversation14);printf("\n\n");Color(15,0);
}

if(conversation14 == 2)
{
Color(15,0);printf("- Oh ! Ce doit etre a la jeune demoiselle de tout a l'heure...\n");
printf("Malheureusement, elle est de passage en ville seulement aujourd'hui.\n");
printf("Je pense que tu devrais la garder, tu as plus de chance que moi de la\n");
printf("rencontrer, surtout si elle est aussi venue en train, ca te laisse\n");
printf("jusqu'a ce soir pour la retrouver !\n\n\n");

system("PAUSE");printf("\n\n\n");

Color(8,0);printf("1 : Le zoo... ?\n\n");
printf("3 : Le concours du mois...\n\n\n");
Color(3,0);scanf("%ld", &conversation15);printf("\n\n");Color(15,0);

if(conversation15 == 1)
{
Color(11,0);printf("\"Sais-tu pourquoi le zoo est ferme aujourd'hui ?\"\n\n");
Color(15,0);system("PAUSE");printf("\n\n\n");
printf("- Non, je ne connais pas la raison exacte. Ce que je sais en revanche,\n");
printf("c'est que le gardien du zoo est coince ici pour la journee. Car vois-tu,\n");
printf("il vient au zoo en train ; or le prochain train est pour ce soir. Il avait\n");
printf("l'air bien embete. Il est venu prendre un cafe tout a l'heure.\n");
printf("Maintenant, je pense qu'il est parti tuer le temps a la patinoire a ciel\n");
printf("ouvert du parc municipal. Comme quoi, ce froid inhabituel en a surpris\n");
printf("plus d'un, mais fait aussi quelques heureux !\n\n\n");

system("PAUSE");printf("\n\n\n");

Color(8,0);printf("3 : Le concours du mois...\n\n\n");
Color(3,0);scanf("%ld", &conversation14);printf("\n\n");Color(15,0);
}
}

if(conversation14 == 3)
{

Color(11,0);printf("\"En quoi consiste le concours de ce mois-ci ?\"\n\n\n");
Color(15,0);printf("- Eh bah, tu ne perds pas de temps, toi ! Mais je crois que la surprise\n");
printf("va te plaire. Pour inaugurer cette borne d'arcade que je viens tout\n");
printf("juste d'installer, j'ai programme un petit jeu de devinette. Chaque\n");
printf("client qui battra l'ordinateur a ce petit jeu gagnera la surprise de ce\n");
printf("mois. Mais il va falloir que tu repasses dans une heure, car je n'ai pas\n");
printf("encore termine les branchements. C'est-a-dire que tu es bien matinale ^^\n\n\n");
}

Color(15,0);system("PAUSE");printf("\n\n\n");

Color(11,0);printf("\"Merci pour le cafe, il etait tres bon. A plus tard !\"\n\n\n");

Color(8,0);printf("Que faire maintenant ?\n\n\n");


Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");Color(15,0);


if (strcmp (action, "prendre") != 0) if (strcmp (objet1, "bus") != 0)
{
   do {
   do {

Color(6,0);printf("Je crois qu'il n'y a rien a faire ici pour le moment.\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Allons faire un tour !");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");Color(15,0);

      } while (strcmp (action, "prendre") != 0);

      } while (strcmp (objet1, "bus") != 0);
}


if (strcmp (action, "prendre") != 0) if (strcmp (objet1, "bus") != 1)
{
   do {
   do {

Color(6,0);printf("Je crois qu'il n'y a rien a faire ici pour le moment.\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Allons faire un tour !");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");Color(15,0);

      } while (strcmp (action, "prendre") != 0);

      } while (strcmp (objet1, "bus") != 0);
}


if (strcmp (action, "prendre") != 1) if (strcmp (objet1, "bus") != 0)
{
   do {
   do {

Color(6,0);printf("Je crois qu'il n'y a rien a faire ici pour le moment.\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Allons faire un tour !");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");Color(15,0);

      } while (strcmp (action, "prendre") != 0);

      } while (strcmp (objet1, "bus") != 0);
}



Color(15,0);
printf("                                Maison\n\n");
Color(10,0);printf("                               1");Color(15,0);printf(" ");Color(0,10);printf(" ");Color(15,0);printf(" ");Color(0,11);printf(" ");Color(11,0);printf(" 2\n");
Color(15,0);printf("                            ");Color(0,10);printf("      ");Color(15,0);printf(" ");Color(0,11);printf("                 \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" ");Color(11,0);printf("  2\n");
Color(15,0);printf("         ");Color(10,0);printf("1                  ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf("    \n");
Color(15,0);printf("         ");Color(0,10);printf("                    ");Color(15,0);printf("                      ");Color(15,0);printf("      Rue des Lauriers\n");printf("     Zoo ");printf("                           ");
Color(15,0);printf("               ");Color(0,12);printf("    ");Color(15,0);printf("                        ");
Color(15,0);printf("          ");Color(0,13);printf("       ");Color(15,0);printf("                                   ");Color(0,12);printf(" ");Color(12,0);printf("  4\n");
Color(15,0);printf("         ");Color(13,0);printf("3     ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf("                  ");Color(15,0);printf(" ");Color(0,12);printf("                  \n");
Color(15,0);printf("                                ");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" \n");
Color(15,0);printf("                               ");Color(13,0);printf("3");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" ");Color(12,0);printf(" 4\n\n");
Color(15,0);printf("                         Au cafe des mysteres\n\n\n");Color(15,0);

Color(3,0);scanf("%ld", &ChoixBus12);printf("\n\n");Color(15,0);

if(ChoixBus12 == 1)
{
Color(6,0);printf("Impossible ! Cette ligne ne passe pas par ici.\n\n\n");

Color(15,0);system("PAUSE");printf("\n\n");



printf("                                Maison\n\n");
Color(10,0);printf("                               1");Color(15,0);printf(" ");Color(0,10);printf(" ");Color(15,0);printf(" ");Color(0,11);printf(" ");Color(11,0);printf(" 2\n");
Color(15,0);printf("                            ");Color(0,10);printf("      ");Color(15,0);printf(" ");Color(0,11);printf("                 \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" ");Color(11,0);printf("  2\n");
Color(15,0);printf("         ");Color(10,0);printf("1                  ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf("    \n");
Color(15,0);printf("         ");Color(0,10);printf("                    ");Color(15,0);printf("                      ");Color(15,0);printf("      Rue des Lauriers\n");printf("     Zoo ");printf("                           ");
Color(15,0);printf("               ");Color(0,12);printf("    ");Color(15,0);printf("                        ");
Color(15,0);printf("          ");Color(0,13);printf("       ");Color(15,0);printf("                                   ");Color(0,12);printf(" ");Color(12,0);printf("  4\n");
Color(15,0);printf("         ");Color(13,0);printf("3     ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf("                  ");Color(15,0);printf(" ");Color(0,12);printf("                  \n");
Color(15,0);printf("                                ");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" \n");
Color(15,0);printf("                               ");Color(13,0);printf("3");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" ");Color(12,0);printf(" 4\n\n");
Color(15,0);printf("                         Au cafe des mysteres\n\n\n");Color(15,0);

Color(3,0);scanf("%ld", &ChoixBus12);printf("\n\n");Color(15,0);
}

if(ChoixBus12 == 2)
{
Color(6,0);printf("Impossible ! Cette ligne ne passe pas par ici.\n\n\n");

Color(15,0);system("PAUSE");printf("\n\n");



printf("                                Maison\n\n");
Color(10,0);printf("                               1");Color(15,0);printf(" ");Color(0,10);printf(" ");Color(15,0);printf(" ");Color(0,11);printf(" ");Color(11,0);printf(" 2\n");
Color(15,0);printf("                            ");Color(0,10);printf("      ");Color(15,0);printf(" ");Color(0,11);printf("                 \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" ");Color(11,0);printf("  2\n");
Color(15,0);printf("         ");Color(10,0);printf("1                  ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf("    \n");
Color(15,0);printf("         ");Color(0,10);printf("                    ");Color(15,0);printf("                      ");Color(15,0);printf("      Rue des Lauriers\n");printf("     Zoo ");printf("                           ");
Color(15,0);printf("               ");Color(0,12);printf("    ");Color(15,0);printf("                        ");
Color(15,0);printf("          ");Color(0,13);printf("       ");Color(15,0);printf("                                   ");Color(0,12);printf(" ");Color(12,0);printf("  4\n");
Color(15,0);printf("         ");Color(13,0);printf("3     ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf("                  ");Color(15,0);printf(" ");Color(0,12);printf("                  \n");
Color(15,0);printf("                                ");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" \n");
Color(15,0);printf("                               ");Color(13,0);printf("3");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" ");Color(12,0);printf(" 4\n\n");
Color(15,0);printf("                         Au cafe des mysteres\n\n\n");Color(15,0);

Color(3,0);scanf("%ld", &ChoixBus12);printf("\n\n");Color(15,0);
}

switch (ChoixBus12)

{ /* Ouverture switch Bus 4 */

case 3 :

Color(11,0);printf("Le zoo est ferme, sans raison apparente. Je ne peux rien faire de plus\n");
printf("la-bas.\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");


printf("                                Maison\n\n");
Color(10,0);printf("                               1");Color(15,0);printf(" ");Color(0,10);printf(" ");Color(15,0);printf(" ");Color(0,11);printf(" ");Color(11,0);printf(" 2\n");
Color(15,0);printf("                            ");Color(0,10);printf("      ");Color(15,0);printf(" ");Color(0,11);printf("                 \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" ");Color(11,0);printf("  2\n");
Color(15,0);printf("         ");Color(10,0);printf("1                  ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf("    \n");
Color(15,0);printf("         ");Color(0,10);printf("                    ");Color(15,0);printf("                      ");Color(15,0);printf("      Rue des Lauriers\n");printf("     Zoo ");printf("                           ");
Color(15,0);printf("               ");Color(0,12);printf("    ");Color(15,0);printf("                        ");
Color(15,0);printf("          ");Color(0,13);printf("       ");Color(15,0);printf("                                   ");Color(0,12);printf(" ");Color(12,0);printf("  4\n");
Color(15,0);printf("         ");Color(13,0);printf("3     ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf("                  ");Color(15,0);printf(" ");Color(0,12);printf("                  \n");
Color(15,0);printf("                                ");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" \n");
Color(15,0);printf("                               ");Color(13,0);printf("3");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" ");Color(12,0);printf(" 4\n\n");
Color(15,0);printf("                         Au cafe des mysteres\n\n\n");Color(15,0);

     Color(3,0);scanf("%ld", &ChoixBus13);printf("\n\n");Color(15,0);



break;

} /* Fermeture switch Bus 4 */


break;

break;

} /* Fermeture switch Bus 3 */

break;
}/* Fermeture switch Bus 6 */

break;
}/* Fermeture switch Bus 2 */














case 1 :


Color(8,0);printf("Le bus vous depose juste en face du zoo. La grille est fermee, et le\n");
printf("guichet est vide.\n\n");

Color(11,0);printf("\"C'est etrange, le zoo est habituellement deja ouvert a cette heure-la...\n");
printf("Que se passe-t-il ?\"\n\n");

Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");



if (strcmp (action, "regarder") != 0) if (strcmp (objet1, "guichet") != 0)
{
   do {
   do {

Color(11,0);printf("Ca ne donne rien !\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Mais que se passe-t-il ?\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");

      } while (strcmp (action, "regarder") != 0);

      } while (strcmp (objet1, "guichet") != 0);
}


if (strcmp (action, "regarder") != 0) if (strcmp (objet1, "guichet") != 1)
{
   do {
   do {

Color(11,0);printf("Ca ne donne rien !\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Mais que se passe-t-il ?\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");

      } while (strcmp (action, "regarder") != 0);

      } while (strcmp (objet1, "guichet") != 0);
}


if (strcmp (action, "regarder") != 1) if (strcmp (objet1, "guichet") != 0)
{
   do {
   do {

Color(11,0);printf("Ca ne donne rien !\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Mais que se passe-t-il ?\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");

      } while (strcmp (action, "regarder") != 0);

      } while (strcmp (objet1, "guichet") != 0);
}


Color(11,0);printf("Il y a une petite note collee sur la vitre ! Voyons-voir ce qu'elle dit :\n\n");

Color(15,0);printf("\"Le parc animalier est exceptionnellement ferme aujourd'hui pour cause\n");
printf("de grand froid. Veuillez-nous en excuser pour la gene occasionnee...\"\n\n");

Color(11,0);printf("\"Zut ! C'est vraiment pas de chance ! Je voulais tellement aller au zoo\n");
printf("aujourd'hui. Hmm...Je me demande quel est le veritable probleme.\n");
printf("Puisque je suis dehors, allons faire un tour.\"\n\n\n");

Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");


if (strcmp (action, "prendre") != 0) if (strcmp (objet1, "bus") != 0)
{
   do {
   do {

Color(11,0);printf("Je crois qu'il n'y a rien a faire ici pour le moment.\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Allons faire un tour !");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");

      } while (strcmp (action, "prendre") != 0);

      } while (strcmp (objet1, "bus") != 0);
}


if (strcmp (action, "prendre") != 0) if (strcmp (objet1, "bus") != 1)
{
   do {
   do {

Color(11,0);printf("Je crois qu'il n'y a rien a faire ici pour le moment.\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Allons faire un tour !");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");

      } while (strcmp (action, "prendre") != 0);

      } while (strcmp (objet1, "bus") != 0);
}


if (strcmp (action, "prendre") != 1) if (strcmp (objet1, "bus") != 0)
{
   do {
   do {

Color(11,0);printf("Je crois qu'il n'y a rien a faire ici pour le moment.\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Allons faire un tour !");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");

      } while (strcmp (action, "prendre") != 0);

      } while (strcmp (objet1, "bus") != 0);
}




printf("                                Maison\n\n");
Color(10,0);printf("                               1");Color(15,0);printf(" ");Color(0,10);printf(" ");Color(15,0);printf(" ");Color(0,11);printf(" ");Color(11,0);printf(" 2\n");
Color(15,0);printf("                            ");Color(0,10);printf("      ");Color(15,0);printf(" ");Color(0,11);printf("                 \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" ");Color(11,0);printf("  2\n");
Color(15,0);printf("         ");Color(10,0);printf("1                  ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf("    \n");
Color(15,0);printf("         ");Color(0,10);printf("                    ");Color(15,0);printf("                      ");Color(15,0);printf("      Rue des Lauriers\n");printf("     Zoo ");printf("                           ");
Color(15,0);printf("               ");Color(0,12);printf("    ");Color(15,0);printf("                        ");
Color(15,0);printf("          ");Color(0,13);printf("       ");Color(15,0);printf("                                   ");Color(0,12);printf(" ");Color(12,0);printf("  4\n");
Color(15,0);printf("         ");Color(13,0);printf("3     ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf("                  ");Color(15,0);printf(" ");Color(0,12);printf("                  \n");
Color(15,0);printf("                                ");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" \n");
Color(15,0);printf("                               ");Color(13,0);printf("3");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" ");Color(12,0);printf(" 4\n\n");
Color(15,0);printf("                         Au cafe des mysteres\n\n\n");Color(15,0);

Color(3,0);scanf("%ld", &ChoixBus1);printf("\n\n");

if(ChoixBus1 == 2)
{
Color(8,0);printf("Impossible ! Cette ligne ne passe pas par ici.\n\n\n");

Color(15,0);system("PAUSE");printf("\n\n");



printf("                                Maison\n\n");
Color(10,0);printf("                               1");Color(15,0);printf(" ");Color(0,10);printf(" ");Color(15,0);printf(" ");Color(0,11);printf(" ");Color(11,0);printf(" 2\n");
Color(15,0);printf("                            ");Color(0,10);printf("      ");Color(15,0);printf(" ");Color(0,11);printf("                 \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" ");Color(11,0);printf("  2\n");
Color(15,0);printf("         ");Color(10,0);printf("1                  ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf("    \n");
Color(15,0);printf("         ");Color(0,10);printf("                    ");Color(15,0);printf("                      ");Color(15,0);printf("      Rue des Lauriers\n");printf("     Zoo ");printf("                           ");
Color(15,0);printf("               ");Color(0,12);printf("    ");Color(15,0);printf("                        ");
Color(15,0);printf("          ");Color(0,13);printf("       ");Color(15,0);printf("                                   ");Color(0,12);printf(" ");Color(12,0);printf("  4\n");
Color(15,0);printf("         ");Color(13,0);printf("3     ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf("                  ");Color(15,0);printf(" ");Color(0,12);printf("                  \n");
Color(15,0);printf("                                ");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" \n");
Color(15,0);printf("                               ");Color(13,0);printf("3");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" ");Color(12,0);printf(" 4\n\n");
Color(15,0);printf("                         Au cafe des mysteres\n\n\n");Color(15,0);

Color(3,0);scanf("%ld", &ChoixBus1);printf("\n\n");
}

if(ChoixBus1 == 4)
{
Color(8,0);printf("Impossible ! Cette ligne ne passe pas par ici.\n\n\n");

Color(15,0);system("PAUSE");printf("\n\n");



printf("                                Maison\n\n");
Color(10,0);printf("                               1");Color(15,0);printf(" ");Color(0,10);printf(" ");Color(15,0);printf(" ");Color(0,11);printf(" ");Color(11,0);printf(" 2\n");
Color(15,0);printf("                            ");Color(0,10);printf("      ");Color(15,0);printf(" ");Color(0,11);printf("                 \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" ");Color(11,0);printf("  2\n");
Color(15,0);printf("         ");Color(10,0);printf("1                  ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf("    \n");
Color(15,0);printf("         ");Color(0,10);printf("                    ");Color(15,0);printf("                      ");Color(15,0);printf("      Rue des Lauriers\n");printf("     Zoo ");printf("                           ");
Color(15,0);printf("               ");Color(0,12);printf("    ");Color(15,0);printf("                        ");
Color(15,0);printf("          ");Color(0,13);printf("       ");Color(15,0);printf("                                   ");Color(0,12);printf(" ");Color(12,0);printf("  4\n");
Color(15,0);printf("         ");Color(13,0);printf("3     ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf("                  ");Color(15,0);printf(" ");Color(0,12);printf("                  \n");
Color(15,0);printf("                                ");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" \n");
Color(15,0);printf("                               ");Color(13,0);printf("3");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" ");Color(12,0);printf(" 4\n\n");
Color(15,0);printf("                         Au cafe des mysteres\n\n\n");Color(15,0);

Color(3,0);scanf("%ld", &ChoixBus1);printf("\n\n");
}

switch (ChoixBus1)

{ /* Ouverture switch Bus 2 */
             case 1 :

Color(11,0);printf("Non, je n'ai pas envie de rentrer a la maison maintenant.\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");


printf("                                Maison\n\n");
Color(10,0);printf("                               1");Color(15,0);printf(" ");Color(0,10);printf(" ");Color(15,0);printf(" ");Color(0,11);printf(" ");Color(11,0);printf(" 2\n");
Color(15,0);printf("                            ");Color(0,10);printf("      ");Color(15,0);printf(" ");Color(0,11);printf("                 \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" ");Color(11,0);printf("  2\n");
Color(15,0);printf("         ");Color(10,0);printf("1                  ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf("    \n");
Color(15,0);printf("         ");Color(0,10);printf("                    ");Color(15,0);printf("                      ");Color(15,0);printf("      Rue des Lauriers\n");printf("     Zoo ");printf("                           ");
Color(15,0);printf("               ");Color(0,12);printf("    ");Color(15,0);printf("                        ");
Color(15,0);printf("          ");Color(0,13);printf("       ");Color(15,0);printf("                                   ");Color(0,12);printf(" ");Color(12,0);printf("  4\n");
Color(15,0);printf("         ");Color(13,0);printf("3     ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf("                  ");Color(15,0);printf(" ");Color(0,12);printf("                  \n");
Color(15,0);printf("                                ");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" \n");
Color(15,0);printf("                               ");Color(13,0);printf("3");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" ");Color(12,0);printf(" 4\n\n");
Color(15,0);printf("                         Au cafe des mysteres\n\n\n");Color(15,0);

     Color(3,0);scanf("%ld", &ChoixBus2);printf("\n\n");

     if(ChoixBus2 == 2)
{
Color(8,0);printf("Impossible ! Cette ligne ne passe pas par ici.\n\n\n");

Color(15,0);system("PAUSE");printf("\n\n");



printf("                                Maison\n\n");
Color(10,0);printf("                               1");Color(15,0);printf(" ");Color(0,10);printf(" ");Color(15,0);printf(" ");Color(0,11);printf(" ");Color(11,0);printf(" 2\n");
Color(15,0);printf("                            ");Color(0,10);printf("      ");Color(15,0);printf(" ");Color(0,11);printf("                 \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" ");Color(11,0);printf("  2\n");
Color(15,0);printf("         ");Color(10,0);printf("1                  ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf("    \n");
Color(15,0);printf("         ");Color(0,10);printf("                    ");Color(15,0);printf("                      ");Color(15,0);printf("      Rue des Lauriers\n");printf("     Zoo ");printf("                           ");
Color(15,0);printf("               ");Color(0,12);printf("    ");Color(15,0);printf("                        ");
Color(15,0);printf("          ");Color(0,13);printf("       ");Color(15,0);printf("                                   ");Color(0,12);printf(" ");Color(12,0);printf("  4\n");
Color(15,0);printf("         ");Color(13,0);printf("3     ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf("                  ");Color(15,0);printf(" ");Color(0,12);printf("                  \n");
Color(15,0);printf("                                ");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" \n");
Color(15,0);printf("                               ");Color(13,0);printf("3");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" ");Color(12,0);printf(" 4\n\n");
Color(15,0);printf("                         Au cafe des mysteres\n\n\n");Color(15,0);

Color(3,0);scanf("%ld", &ChoixBus2);printf("\n\n");
}

if(ChoixBus2 == 4)
{
Color(8,0);printf("Impossible ! Cette ligne ne passe pas par ici.\n\n\n");

Color(15,0);system("PAUSE");printf("\n\n");



printf("                                Maison\n\n");
Color(10,0);printf("                               1");Color(15,0);printf(" ");Color(0,10);printf(" ");Color(15,0);printf(" ");Color(0,11);printf(" ");Color(11,0);printf(" 2\n");
Color(15,0);printf("                            ");Color(0,10);printf("      ");Color(15,0);printf(" ");Color(0,11);printf("                 \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" ");Color(11,0);printf("  2\n");
Color(15,0);printf("         ");Color(10,0);printf("1                  ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf("    \n");
Color(15,0);printf("         ");Color(0,10);printf("                    ");Color(15,0);printf("                      ");Color(15,0);printf("      Rue des Lauriers\n");printf("     Zoo ");printf("                           ");
Color(15,0);printf("               ");Color(0,12);printf("    ");Color(15,0);printf("                        ");
Color(15,0);printf("          ");Color(0,13);printf("       ");Color(15,0);printf("                                   ");Color(0,12);printf(" ");Color(12,0);printf("  4\n");
Color(15,0);printf("         ");Color(13,0);printf("3     ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf("                  ");Color(15,0);printf(" ");Color(0,12);printf("                  \n");
Color(15,0);printf("                                ");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" \n");
Color(15,0);printf("                               ");Color(13,0);printf("3");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" ");Color(12,0);printf(" 4\n\n");
Color(15,0);printf("                         Au cafe des mysteres\n\n\n");Color(15,0);

Color(3,0);scanf("%ld", &ChoixBus2);printf("\n\n");
}

switch (ChoixBus2)

     { /* Ouverture switch Bus 3 */

     case 3 :

Color(8,0);printf("Le bus vous depose juste devant la porte du cafe des mysteres.\n\n");

Color(11,0);printf("\"C'est ici qu'on trouve les meilleurs thes et cafes de la ville,\n");
printf("j'adore cet endroit. En plus, une fois par mois un concours y est\n");
printf("organise pour gagner un cadeau mystere en rapport avec le the ou le cafe.\n");
printf("D'ailleurs, je crois que c'est justement aujourd'hui que commence le\n");
printf("nouveau concours de ce mois. Je me demande ce que c'est...\"\n\n\n");

printf("Que faire maintenant ?\n\n\n");

Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");

if (strcmp (action, "utiliser") != 0) if (strcmp (objet1, "porte") != 0)
{
   do {
   do {

Color(11,0);printf("Je ne suis pas sur de comprendre...\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Pourquoi pas prendre un bon cafe ?");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");

      } while (strcmp (action, "utiliser") != 0);

      } while (strcmp (objet1, "porte") != 0);
}


  if (strcmp (action, "utiliser") != 0) if (strcmp (objet1, "porte") != 1)
{
   do {
   do {

Color(11,0);printf("Je ne suis pas sur de comprendre...\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Pourquoi pas prendre un bon cafe ?");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");

      } while (strcmp (action, "utiliser") != 0);

      } while (strcmp (objet1, "porte") != 0);
}


if (strcmp (action, "utiliser") != 1) if (strcmp (objet1, "porte") != 0)
{
   do {
   do {

Color(11,0);printf("Je ne suis pas sur de comprendre...\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Pourquoi pas prendre un bon cafe ?");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");

      } while (strcmp (action, "utiliser") != 0);

      } while (strcmp (objet1, "porte") != 0);
}



Color(8,0);printf("Vous entrez au cafe des mysteres. Il y a le barman derriere son comptoir,\n");
printf("en train de ranger sa vaisselle en sifflant, tandis qu'un client boit\n");
printf("une tasse de the en lisant son journal. A droite se trouvent les tables\n");
printf("et les banquettes, vides. Tout au fond, un petit couloir qui mene aux\n");
printf("toilettes.\n\n\n");
Color(15,0);system("PAUSE");printf("\n\n\n");

Color(11,0);printf("\"Eh bien ! Il n'y a pas grand monde. Pas etonnant par ce froid.\"\n\n\n");
Color(15,0);system("PAUSE");printf("\n\n\n");

Color(15,0);printf("- Ah ! c'est toi ! Entre donc mon ami, ca fait plaisir de te voir !\n\n\n");

Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");



if (strcmp (action, "parler") != 0) if (strcmp (objet1, "barman") != 0)
{
   do {
   do {

Color(11,0);printf("Je ne veux pas faire ca, c'est inaproprie...\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Pourquoi pas prendre un bon cafe ?");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");

      } while (strcmp (action, "parler") != 0);

      } while (strcmp (objet1, "barman") != 0);
}


if (strcmp (action, "parler") != 0) if (strcmp (objet1, "barman") != 1)
{
   do {
   do {

Color(11,0);printf("Je ne veux pas faire ca, c'est inaproprie...\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Pourquoi pas prendre un bon cafe ?");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");

      } while (strcmp (action, "parler") != 0);

      } while (strcmp (objet1, "barman") != 0);
}



if (strcmp (action, "parler") != 1) if (strcmp (objet1, "barman") != 0)
{
   do {
   do {

Color(11,0);printf("Je ne veux pas faire ca, c'est inaproprie...\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Pourquoi pas prendre un bon cafe ?");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");

      } while (strcmp (action, "parler") != 0);

      } while (strcmp (objet1, "barman") != 0);
}


Color(15,0);printf("- Que puis-je faire pour toi ?\n\n\n");

Color(8,0);printf("1 : Un cafe\n\n");
printf("2 : Le zoo... ?\n\n\n");

Color(3,0);scanf("%ld", &conversation);printf("\n\n");

if(conversation == 2)
{
Color(11,0);printf("\"Sais-tu pourquoi le zoo est ferme aujourd'hui ?\"\n\n");
Color(15,0);system("PAUSE");printf("\n\n\n");
printf("- Non, je ne connais pas la raison exacte. Ce que je sais en revanche,\n");
printf("c'est que le gardien du zoo est coince ici pour la journee. Car vois-tu,\n");
printf("il vient au zoo en train ; or le prochain train est pour ce soir. Il avait\n");
printf("l'air bien embete. Il est venu prendre un cafe tout a l'heure.\n");
printf("Maintenant, je pense qu'il est parti tuer le temps a la patinoire a ciel\n");
printf("ouvert du parc municipal. Comme quoi, ce froid inhabituel en a surpris\n");
printf("plus d'un, mais fait aussi quelques heureux !\n\n\n");


system("PAUSE");printf("\n\n\n");

Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");


if (strcmp (action, "parler") != 0) if (strcmp (objet1, "barman") != 0)
{
   do {
   do {

Color(11,0);printf("Je ne veux pas faire ca, c'est inaproprie...\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Pourquoi pas prendre un bon cafe ?");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");

      } while (strcmp (action, "parler") != 0);

      } while (strcmp (objet1, "barman") != 0);
}


if (strcmp (action, "parler") != 0) if (strcmp (objet1, "barman") != 1)
{
   do {
   do {

Color(11,0);printf("Je ne veux pas faire ca, c'est inaproprie...\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Pourquoi pas prendre un bon cafe ?");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");

      } while (strcmp (action, "parler") != 0);

      } while (strcmp (objet1, "barman") != 0);
}



if (strcmp (action, "parler") != 1) if (strcmp (objet1, "barman") != 0)
{
   do {
   do {

Color(11,0);printf("Je ne veux pas faire ca, c'est inaproprie...\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Pourquoi pas prendre un bon cafe ?");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");

      } while (strcmp (action, "parler") != 0);

      } while (strcmp (objet1, "barman") != 0);
}


Color(15,0);printf("- Que puis-je faire pour toi ?\n\n\n");

Color(8,0);printf("1 : Un cafe\n\n");

Color(3,0);scanf("%ld", &conversation1);printf("\n\n");

if(conversation1 == 1)
{

Color(11,0);printf("\"Pourrais-je avoir un cafe s'il-te-plait ?\"\n\n\n");
Color(15,0);system("PAUSE");printf("\n\n\n");

printf("- Bien sur ! Je t'en prie, prends place sur une des banquettes.\n\n\n");

}
}

if(conversation == 1)
{

Color(11,0);printf("\"Pourrais-je avoir un cafe s'il-te-plait ?\"\n\n\n");
Color(15,0);system("PAUSE");printf("\n\n\n");

printf("- Bien sur ! Je t'en prie, prends place sur une des banquettes.\n\n\n");

}

Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");


if (strcmp (action, "utiliser") != 0) if (strcmp (objet1, "banquette") != 0)
{
   do {
   do {

Color(11,0);printf("Je devrais plutot m'asseoir, le cafe va bientot arriver.\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");

      } while (strcmp (action, "utiliser") != 0);

      } while (strcmp (objet1, "banquette") != 0);
}

if (strcmp (action, "utiliser") != 0) if (strcmp (objet1, "banquette") != 1)
{
   do {
   do {

Color(11,0);printf("Je devrais plutot m'asseoir, le cafe va bientot arriver.\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");

      } while (strcmp (action, "utiliser") != 0);

      } while (strcmp (objet1, "banquette") != 0);
}

if (strcmp (action, "utiliser") != 1) if (strcmp (objet1, "banquette") != 0)
{
   do {
   do {

Color(11,0);printf("Je devrais plutot m'asseoir, le cafe va bientot arriver.\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");

      } while (strcmp (action, "utiliser") != 0);

      } while (strcmp (objet1, "banquette") != 0);
}

Color(8,0);printf("Vous vous asseyez sur votre banquette favorite. Mais...\n\n\n");

Color(11,0);printf("\"Aie ! Sur quoi me suis-je assis ?\"\n\n\n");
Color(15,0);system("PAUSE");printf("\n\n\n");
Color(8,0);printf("Vous regardez le coussin et vous trouvez une boucle d'oreille !\n\n\n");
Color(15,0);system("PAUSE");printf("\n\n\n");

printf("- Et voila, un cafe pour monsieur, un !\n\n\n");

Color(8,0);printf("1 : Le zoo... ?\n\n");
printf("2 : La boucle d'oreille\n\n");
printf("3 : Le concours du mois...\n\n\n");

Color(3,0);scanf("%ld", &conversation2);printf("\n\n");

if(conversation2 == 1)
{
Color(11,0);printf("\"Sais-tu pourquoi le zoo est ferme aujourd'hui ?\"\n\n");
Color(15,0);system("PAUSE");printf("\n\n\n");
printf("- Non, je ne connais pas la raison exacte. Ce que je sais en revanche,\n");
printf("c'est que le gardien du zoo est coince ici pour la journee. Car vois-tu,\n");
printf("il vient au zoo en train ; or le prochain train est pour ce soir. Il avait\n");
printf("l'air bien embete. Il est venu prendre un cafe tout a l'heure.\n");
printf("Maintenant, je pense qu'il est parti tuer le temps a la patinoire a ciel\n");
printf("ouvert du parc municipal. Comme quoi, ce froid inhabituel en a surpris\n");
printf("plus d'un, mais fait aussi quelques heureux !\n\n\n");

system("PAUSE");printf("\n\n\n");

Color(8,0);printf("2 : La boucle d'oreille\n\n");
printf("3 : Le concours du mois...\n\n\n");
Color(3,0);scanf("%ld", &conversation2);printf("\n\n");
}

if(conversation2 == 2)
{
Color(15,0);printf("- Oh ! Ce doit etre a la jeune demoiselle de tout a l'heure...\n");
printf("Malheureusement, elle est de passage en ville seulement aujourd'hui.\n");
printf("Je pense que tu devrais la garder, tu as plus de chance que moi de la\n");
printf("rencontrer, surtout si elle est aussi venue en train, ca te laisse\n");
printf("jusqu'a ce soir pour la retrouver !\n\n\n");

system("PAUSE");printf("\n\n\n");

Color(8,0);printf("1 : Le zoo... ?\n\n");
printf("3 : Le concours du mois...\n\n\n");
Color(3,0);scanf("%ld", &conversation3);printf("\n\n");

if(conversation3 == 1)
{
Color(11,0);printf("\"Sais-tu pourquoi le zoo est ferme aujourd'hui ?\"\n\n");
Color(15,0);system("PAUSE");printf("\n\n\n");
printf("- Non, je ne connais pas la raison exacte. Ce que je sais en revanche,\n");
printf("c'est que le gardien du zoo est coince ici pour la journee. Car vois-tu,\n");
printf("il vient au zoo en train ; or le prochain train est pour ce soir. Il avait\n");
printf("l'air bien embete. Il est venu prendre un cafe tout a l'heure.\n");
printf("Maintenant, je pense qu'il est parti tuer le temps a la patinoire a ciel\n");
printf("ouvert du parc municipal. Comme quoi, ce froid inhabituel en a surpris\n");
printf("plus d'un, mais fait aussi quelques heureux !\n\n\n");

system("PAUSE");printf("\n\n\n");

Color(8,0);printf("3 : Le concours du mois...\n\n\n");
Color(3,0);scanf("%ld", &conversation2);printf("\n\n");
}
}

if(conversation2 == 3)
{

Color(11,0);printf("\"En quoi consiste le concours de ce mois-ci ?\"\n\n\n");
Color(15,0);printf("- Eh bah, tu ne perds pas de temps, toi ! Mais je crois que la surprise\n");
printf("va te plaire. Pour inaugurer cette borne d'arcade que je viens tout\n");
printf("juste d'installer, j'ai programme un petit jeu de devinette. Chaque\n");
printf("client qui battra l'ordinateur a ce petit jeu gagnera la surprise de ce\n");
printf("mois. Mais il va falloir que tu repasses dans une heure, car je n'ai pas\n");
printf("encore termine les branchements. C'est-a-dire que tu es bien matinale ^^\n\n\n");
}

Color(15,0);system("PAUSE");printf("\n\n\n");

Color(11,0);printf("\"Merci pour le cafe, il etait tres bon. A plus tard !\"\n\n\n");

Color(8,0);printf("Que faire maintenant ?\n\n\n");


Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");


if (strcmp (action, "prendre") != 0) if (strcmp (objet1, "bus") != 0)
{
   do {
   do {

Color(11,0);printf("Je crois qu'il n'y a rien a faire ici pour le moment.\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Allons faire un tour !");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");

      } while (strcmp (action, "prendre") != 0);

      } while (strcmp (objet1, "bus") != 0);
}


if (strcmp (action, "prendre") != 0) if (strcmp (objet1, "bus") != 1)
{
   do {
   do {

Color(11,0);printf("Je crois qu'il n'y a rien a faire ici pour le moment.\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Allons faire un tour !");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");

      } while (strcmp (action, "prendre") != 0);

      } while (strcmp (objet1, "bus") != 0);
}


if (strcmp (action, "prendre") != 1) if (strcmp (objet1, "bus") != 0)
{
   do {
   do {

Color(11,0);printf("Je crois qu'il n'y a rien a faire ici pour le moment.\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Allons faire un tour !");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");

      } while (strcmp (action, "prendre") != 0);

      } while (strcmp (objet1, "bus") != 0);
}




printf("                                Maison\n\n");
Color(10,0);printf("                               1");Color(15,0);printf(" ");Color(0,10);printf(" ");Color(15,0);printf(" ");Color(0,11);printf(" ");Color(11,0);printf(" 2\n");
Color(15,0);printf("                            ");Color(0,10);printf("      ");Color(15,0);printf(" ");Color(0,11);printf("                 \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" ");Color(11,0);printf("  2\n");
Color(15,0);printf("         ");Color(10,0);printf("1                  ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf("    \n");
Color(15,0);printf("         ");Color(0,10);printf("                    ");Color(15,0);printf("                      ");Color(15,0);printf("      Rue des Lauriers\n");printf("     Zoo ");printf("                           ");
Color(15,0);printf("               ");Color(0,12);printf("    ");Color(15,0);printf("                        ");
Color(15,0);printf("          ");Color(0,13);printf("       ");Color(15,0);printf("                                   ");Color(0,12);printf(" ");Color(12,0);printf("  4\n");
Color(15,0);printf("         ");Color(13,0);printf("3     ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf("                  ");Color(15,0);printf(" ");Color(0,12);printf("                  \n");
Color(15,0);printf("                                ");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" \n");
Color(15,0);printf("                               ");Color(13,0);printf("3");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" ");Color(12,0);printf(" 4\n\n");
Color(15,0);printf("                         Au cafe des mysteres\n\n\n");Color(15,0);

Color(3,0);scanf("%ld", &ChoixBus3);printf("\n\n");

if(ChoixBus3 == 1)
{
Color(8,0);printf("Impossible ! Cette ligne ne passe pas par ici.\n\n\n");

Color(15,0);system("PAUSE");printf("\n\n");



printf("                                Maison\n\n");
Color(10,0);printf("                               1");Color(15,0);printf(" ");Color(0,10);printf(" ");Color(15,0);printf(" ");Color(0,11);printf(" ");Color(11,0);printf(" 2\n");
Color(15,0);printf("                            ");Color(0,10);printf("      ");Color(15,0);printf(" ");Color(0,11);printf("                 \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" ");Color(11,0);printf("  2\n");
Color(15,0);printf("         ");Color(10,0);printf("1                  ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf("    \n");
Color(15,0);printf("         ");Color(0,10);printf("                    ");Color(15,0);printf("                      ");Color(15,0);printf("      Rue des Lauriers\n");printf("     Zoo ");printf("                           ");
Color(15,0);printf("               ");Color(0,12);printf("    ");Color(15,0);printf("                        ");
Color(15,0);printf("          ");Color(0,13);printf("       ");Color(15,0);printf("                                   ");Color(0,12);printf(" ");Color(12,0);printf("  4\n");
Color(15,0);printf("         ");Color(13,0);printf("3     ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf("                  ");Color(15,0);printf(" ");Color(0,12);printf("                  \n");
Color(15,0);printf("                                ");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" \n");
Color(15,0);printf("                               ");Color(13,0);printf("3");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" ");Color(12,0);printf(" 4\n\n");
Color(15,0);printf("                         Au cafe des mysteres\n\n\n");Color(15,0);

Color(3,0);scanf("%ld", &ChoixBus3);printf("\n\n");
}

if(ChoixBus3 == 2)
{
Color(8,0);printf("Impossible ! Cette ligne ne passe pas par ici.\n\n\n");

Color(15,0);system("PAUSE");printf("\n\n");



printf("                                Maison\n\n");
Color(10,0);printf("                               1");Color(15,0);printf(" ");Color(0,10);printf(" ");Color(15,0);printf(" ");Color(0,11);printf(" ");Color(11,0);printf(" 2\n");
Color(15,0);printf("                            ");Color(0,10);printf("      ");Color(15,0);printf(" ");Color(0,11);printf("                 \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" ");Color(11,0);printf("  2\n");
Color(15,0);printf("         ");Color(10,0);printf("1                  ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf("    \n");
Color(15,0);printf("         ");Color(0,10);printf("                    ");Color(15,0);printf("                      ");Color(15,0);printf("      Rue des Lauriers\n");printf("     Zoo ");printf("                           ");
Color(15,0);printf("               ");Color(0,12);printf("    ");Color(15,0);printf("                        ");
Color(15,0);printf("          ");Color(0,13);printf("       ");Color(15,0);printf("                                   ");Color(0,12);printf(" ");Color(12,0);printf("  4\n");
Color(15,0);printf("         ");Color(13,0);printf("3     ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf("                  ");Color(15,0);printf(" ");Color(0,12);printf("                  \n");
Color(15,0);printf("                                ");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" \n");
Color(15,0);printf("                               ");Color(13,0);printf("3");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" ");Color(12,0);printf(" 4\n\n");
Color(15,0);printf("                         Au cafe des mysteres\n\n\n");Color(15,0);

Color(3,0);scanf("%ld", &ChoixBus3);printf("\n\n");
}

switch (ChoixBus3)

{ /* Ouverture switch Bus 4 */

case 3 :

Color(11,0);printf("Le zoo est ferme, sans raison apparente. Je ne peux rien faire de plus\n");
printf("la-bas.\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");


printf("                                Maison\n\n");
Color(10,0);printf("                               1");Color(15,0);printf(" ");Color(0,10);printf(" ");Color(15,0);printf(" ");Color(0,11);printf(" ");Color(11,0);printf(" 2\n");
Color(15,0);printf("                            ");Color(0,10);printf("      ");Color(15,0);printf(" ");Color(0,11);printf("                 \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" ");Color(11,0);printf("  2\n");
Color(15,0);printf("         ");Color(10,0);printf("1                  ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf("    \n");
Color(15,0);printf("         ");Color(0,10);printf("                    ");Color(15,0);printf("                      ");Color(15,0);printf("      Rue des Lauriers\n");printf("     Zoo ");printf("                           ");
Color(15,0);printf("               ");Color(0,12);printf("    ");Color(15,0);printf("                        ");
Color(15,0);printf("          ");Color(0,13);printf("       ");Color(15,0);printf("                                   ");Color(0,12);printf(" ");Color(12,0);printf("  4\n");
Color(15,0);printf("         ");Color(13,0);printf("3     ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf("                  ");Color(15,0);printf(" ");Color(0,12);printf("                  \n");
Color(15,0);printf("                                ");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" \n");
Color(15,0);printf("                               ");Color(13,0);printf("3");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" ");Color(12,0);printf(" 4\n\n");
Color(15,0);printf("                         Au cafe des mysteres\n\n\n");Color(15,0);

     Color(3,0);scanf("%ld", &ChoixBus13);printf("\n\n");Color(15,0);


break ;


break ;

} /* Fermeture switch Bus 4 */


break ;

} /* Fermeture switch Bus 3 */






case 3 :

Color(8,0);printf("Le bus vous depose juste devant la porte du cafe des mysteres.\n\n");

Color(11,0);printf("\"C'est ici qu'on trouve les meilleurs thes et cafes de la ville,\n");
printf("j'adore cet endroit. En plus, une fois par mois un concours y est\n");
printf("organise pour gagner un cadeau mystere en rapport avec le the ou le cafe.\n");
printf("D'ailleurs, je crois que c'est justement aujourd'hui que commence le\n");
printf("nouveau concours de ce mois. Je me demande ce que c'est...\"\n\n\n");

Color(8,0);printf("Que faire maintenant ?\n\n\n");

Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");

if (strcmp (action, "utiliser") != 0) if (strcmp (objet1, "porte") != 0)
{
   do {
   do {

Color(11,0);printf("Je ne suis pas sur de comprendre...\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Pourquoi pas prendre un bon cafe ?");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");

      } while (strcmp (action, "utiliser") != 0);

      } while (strcmp (objet1, "porte") != 0);
}


  if (strcmp (action, "utiliser") != 0) if (strcmp (objet1, "porte") != 1)
{
   do {
   do {

Color(11,0);printf("Je ne suis pas sur de comprendre...\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Pourquoi pas prendre un bon cafe ?");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");

      } while (strcmp (action, "utiliser") != 0);

      } while (strcmp (objet1, "porte") != 0);
}


if (strcmp (action, "utiliser") != 1) if (strcmp (objet1, "porte") != 0)
{
   do {
   do {

Color(11,0);printf("Je ne suis pas sur de comprendre...\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Pourquoi pas prendre un bon cafe ?");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");

      } while (strcmp (action, "utiliser") != 0);

      } while (strcmp (objet1, "porte") != 0);
}



Color(8,0);printf("Vous entrez au cafe des mysteres. Il y a le barman derriere son comptoir,\n");
printf("en train de ranger sa vaisselle en sifflant, tandis qu'un client boit\n");
printf("une tasse de the en lisant son journal. A droite se trouvent les tables\n");
printf("et les banquettes, vides. Tout au fond, un petit couloir qui mene aux\n");
printf("toilettes.\n\n\n");
Color(15,0);system("PAUSE");printf("\n\n\n");

Color(11,0);printf("\"Eh bien ! Il n'y a pas grand monde. Pas etonnant par ce froid.\"\n\n\n");
Color(15,0);system("PAUSE");printf("\n\n\n");

printf("- Ah ! c'est toi ! Entre donc mon ami, ca fait plaisir de te voir !\n\n\n");

Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");



if (strcmp (action, "parler") != 0) if (strcmp (objet1, "barman") != 0)
{
   do {
   do {

Color(11,0);printf("Je ne veux pas faire ca, c'est inaproprie...\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Pourquoi pas prendre un bon cafe ?");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");

      } while (strcmp (action, "parler") != 0);

      } while (strcmp (objet1, "barman") != 0);
}


if (strcmp (action, "parler") != 0) if (strcmp (objet1, "barman") != 1)
{
   do {
   do {

Color(11,0);printf("Je ne veux pas faire ca, c'est inaproprie...\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Pourquoi pas prendre un bon cafe ?");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");

      } while (strcmp (action, "parler") != 0);

      } while (strcmp (objet1, "barman") != 0);
}



if (strcmp (action, "parler") != 1) if (strcmp (objet1, "barman") != 0)
{
   do {
   do {

Color(11,0);printf("Je ne veux pas faire ca, c'est inaproprie...\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Pourquoi pas prendre un bon cafe ?");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");

      } while (strcmp (action, "parler") != 0);

      } while (strcmp (objet1, "barman") != 0);
}


Color(15,0);printf("- Que puis-je faire pour toi ?\n\n\n");

Color(8,0);printf("1 : Un cafe\n\n");
printf("2 : Le zoo... ?\n\n\n");

Color(3,0);scanf("%ld", &conversation4);printf("\n\n");

if(conversation4 == 2)
{
Color(11,0);printf("\"Sais-tu pourquoi le zoo est ferme aujourd'hui ?\"\n\n");
Color(15,0);system("PAUSE");printf("\n\n\n");
printf("- Non, je ne connais pas la raison exacte. Ce que je sais en revanche,\n");
printf("c'est que le gardien du zoo est coince ici pour la journee. Car vois-tu,\n");
printf("il vient au zoo en train ; or le prochain train est pour ce soir. Il avait\n");
printf("l'air bien embete. Il est venu prendre un cafe tout a l'heure.\n");
printf("Maintenant, je pense qu'il est parti tuer le temps a la patinoire a ciel\n");
printf("ouvert du parc municipal. Comme quoi, ce froid inhabituel en a surpris\n");
printf("plus d'un, mais fait aussi quelques heureux !\n\n\n");


system("PAUSE");printf("\n\n\n");

Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");


if (strcmp (action, "parler") != 0) if (strcmp (objet1, "barman") != 0)
{
   do {
   do {

Color(11,0);printf("Je ne veux pas faire ca, c'est inaproprie...\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Pourquoi pas prendre un bon cafe ?");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");

      } while (strcmp (action, "parler") != 0);

      } while (strcmp (objet1, "barman") != 0);
}


if (strcmp (action, "parler") != 0) if (strcmp (objet1, "barman") != 1)
{
   do {
   do {

Color(11,0);printf("Je ne veux pas faire ca, c'est inaproprie...\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Pourquoi pas prendre un bon cafe ?");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");

      } while (strcmp (action, "parler") != 0);

      } while (strcmp (objet1, "barman") != 0);
}



if (strcmp (action, "parler") != 1) if (strcmp (objet1, "barman") != 0)
{
   do {
   do {

Color(11,0);printf("Je ne veux pas faire ca, c'est inaproprie...\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Pourquoi pas prendre un bon cafe ?");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");

      } while (strcmp (action, "parler") != 0);

      } while (strcmp (objet1, "barman") != 0);
}


Color(15,0);printf("- Que puis-je faire pour toi ?\n\n\n");

Color(8,0);printf("1 : Un cafe\n\n");

Color(3,0);scanf("%ld", &conversation5);printf("\n\n");

if(conversation5 == 1)
{

Color(11,0);printf("\"Pourrais-je avoir un cafe s'il-te-plait ?\"\n\n\n");
Color(15,0);system("PAUSE");printf("\n\n\n");

printf("- Bien sur ! Je t'en prie, prends place sur une des banquettes.\n\n\n");

}
}

if(conversation4 == 1)
{

Color(11,0);printf("\"Pourrais-je avoir un cafe s'il-te-plait ?\"\n\n\n");
Color(15,0);system("PAUSE");printf("\n\n\n");

printf("- Bien sur ! Je t'en prie, prends place sur une des banquettes.\n\n\n");

}

Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");


if (strcmp (action, "utiliser") != 0) if (strcmp (objet1, "banquette") != 0)
{
   do {
   do {

Color(11,0);printf("Je devrais plutot m'asseoir, le cafe va bientot arriver.\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");

      } while (strcmp (action, "utiliser") != 0);

      } while (strcmp (objet1, "banquette") != 0);
}

if (strcmp (action, "utiliser") != 0) if (strcmp (objet1, "banquette") != 1)
{
   do {
   do {

Color(11,0);printf("Je devrais plutot m'asseoir, le cafe va bientot arriver.\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");

      } while (strcmp (action, "utiliser") != 0);

      } while (strcmp (objet1, "banquette") != 0);
}

if (strcmp (action, "utiliser") != 1) if (strcmp (objet1, "banquette") != 0)
{
   do {
   do {

Color(11,0);printf("Je devrais plutot m'asseoir, le cafe va bientot arriver.\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");

      } while (strcmp (action, "utiliser") != 0);

      } while (strcmp (objet1, "banquette") != 0);
}

Color(8,0);printf("Vous vous asseyez sur votre banquette favorite. Mais...\n\n\n");

Color(11,0);printf("\"Aie ! Sur quoi me suis-je assis ?\"\n\n\n");
Color(15,0);system("PAUSE");printf("\n\n\n");
Color(8,0);printf("Vous regardez le coussin et vous trouvez une boucle d'oreille !\n\n\n");
Color(15,0);system("PAUSE");printf("\n\n\n");

printf("- Et voila, un cafe pour monsieur, un !\n\n\n");

Color(8,0);printf("1 : Le zoo... ?\n\n");
printf("2 : La boucle d'oreille\n\n");
printf("3 : Le concours du mois...\n\n\n");

Color(3,0);scanf("%ld", &conversation6);printf("\n\n");

if(conversation6 == 1)
{
Color(11,0);printf("\"Sais-tu pourquoi le zoo est ferme aujourd'hui ?\"\n\n");
Color(15,0);system("PAUSE");printf("\n\n\n");
printf("- Non, je ne connais pas la raison exacte. Ce que je sais en revanche,\n");
printf("c'est que le gardien du zoo est coince ici pour la journee. Car vois-tu,\n");
printf("il vient au zoo en train ; or le prochain train est pour ce soir. Il avait\n");
printf("l'air bien embete. Il est venu prendre un cafe tout a l'heure.\n");
printf("Maintenant, je pense qu'il est parti tuer le temps a la patinoire a ciel\n");
printf("ouvert du parc municipal. Comme quoi, ce froid inhabituel en a surpris\n");
printf("plus d'un, mais fait aussi quelques heureux !\n\n\n");

system("PAUSE");printf("\n\n\n");

Color(8,0);printf("2 : La boucle d'oreille\n\n");
printf("3 : Le concours du mois...\n\n\n");
Color(3,0);scanf("%ld", &conversation6);printf("\n\n");
}

if(conversation6 == 2)
{
Color(15,0);printf("- Oh ! Ce doit etre a la jeune demoiselle de tout a l'heure...\n");
printf("Malheureusement, elle est de passage en ville seulement aujourd'hui.\n");
printf("Je pense que tu devrais la garder, tu as plus de chance que moi de la\n");
printf("rencontrer, surtout si elle est aussi venue en train, ca te laisse\n");
printf("jusqu'a ce soir pour la retrouver !\n\n\n");

system("PAUSE");printf("\n\n\n");

Color(8,0);printf("1 : Le zoo... ?\n\n");
printf("3 : Le concours du mois...\n\n\n");
Color(3,0);scanf("%ld", &conversation7);printf("\n\n");

if(conversation7 == 1)
{
Color(11,0);printf("\"Sais-tu pourquoi le zoo est ferme aujourd'hui ?\"\n\n");
Color(15,0);system("PAUSE");printf("\n\n\n");
printf("- Non, je ne connais pas la raison exacte. Ce que je sais en revanche,\n");
printf("c'est que le gardien du zoo est coince ici pour la journee. Car vois-tu,\n");
printf("il vient au zoo en train ; or le prochain train est pour ce soir. Il avait\n");
printf("l'air bien embete. Il est venu prendre un cafe tout a l'heure.\n");
printf("Maintenant, je pense qu'il est parti tuer le temps a la patinoire a ciel\n");
printf("ouvert du parc municipal. Comme quoi, ce froid inhabituel en a surpris\n");
printf("plus d'un, mais fait aussi quelques heureux !\n\n\n");

system("PAUSE");printf("\n\n\n");

Color(8,0);printf("3 : Le concours du mois...\n\n\n");
Color(3,0);scanf("%ld", &conversation6);printf("\n\n");
}
}

if(conversation6 == 3)
{

Color(11,0);printf("\"En quoi consiste le concours de ce mois-ci ?\"\n\n\n");
Color(15,0);printf("- Eh bah, tu ne perds pas de temps, toi ! Mais je crois que la surprise\n");
printf("va te plaire. Pour inaugurer cette borne d'arcade que je viens tout\n");
printf("juste d'installer, j'ai programme un petit jeu de devinette. Chaque\n");
printf("client qui battra l'ordinateur a ce petit jeu gagnera la surprise de ce\n");
printf("mois. Mais il va falloir que tu repasses dans une heure, car je n'ai pas\n");
printf("encore termine les branchements. C'est-a-dire que tu es bien matinale ^^\n\n\n");
}

Color(15,0);system("PAUSE");printf("\n\n\n");

Color(11,0);printf("\"Merci pour le cafe, il etait tres bon. A plus tard !\"\n\n\n");

Color(8,0);printf("Que faire maintenant ?\n\n\n");


Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");


if (strcmp (action, "prendre") != 0) if (strcmp (objet1, "bus") != 0)
{
   do {
   do {

Color(11,0);printf("Je crois qu'il n'y a rien a faire ici pour le moment.\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Allons faire un tour !");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");

      } while (strcmp (action, "prendre") != 0);

      } while (strcmp (objet1, "bus") != 0);
}


if (strcmp (action, "prendre") != 0) if (strcmp (objet1, "bus") != 1)
{
   do {
   do {

Color(11,0);printf("Je crois qu'il n'y a rien a faire ici pour le moment.\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Allons faire un tour !");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");

      } while (strcmp (action, "prendre") != 0);

      } while (strcmp (objet1, "bus") != 0);
}


if (strcmp (action, "prendre") != 1) if (strcmp (objet1, "bus") != 0)
{
   do {
   do {

Color(11,0);printf("Je crois qu'il n'y a rien a faire ici pour le moment.\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Allons faire un tour !");
printf("\n\n\n");
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");

      } while (strcmp (action, "prendre") != 0);

      } while (strcmp (objet1, "bus") != 0);
}



Color(15,0);
printf("                                Maison\n\n");
Color(10,0);printf("                               1");Color(15,0);printf(" ");Color(0,10);printf(" ");Color(15,0);printf(" ");Color(0,11);printf(" ");Color(11,0);printf(" 2\n");
Color(15,0);printf("                            ");Color(0,10);printf("      ");Color(15,0);printf(" ");Color(0,11);printf("                 \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" ");Color(11,0);printf("  2\n");
Color(15,0);printf("         ");Color(10,0);printf("1                  ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf("    \n");
Color(15,0);printf("         ");Color(0,10);printf("                    ");Color(15,0);printf("                      ");Color(15,0);printf("      Rue des Lauriers\n");printf("     Zoo ");printf("                           ");
Color(15,0);printf("               ");Color(0,12);printf("    ");Color(15,0);printf("                        ");
Color(15,0);printf("          ");Color(0,13);printf("       ");Color(15,0);printf("                                   ");Color(0,12);printf(" ");Color(12,0);printf("  4\n");
Color(15,0);printf("         ");Color(13,0);printf("3     ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf("                  ");Color(15,0);printf(" ");Color(0,12);printf("                  \n");
Color(15,0);printf("                                ");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" \n");
Color(15,0);printf("                               ");Color(13,0);printf("3");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" ");Color(12,0);printf(" 4\n\n");
Color(15,0);printf("                         Au cafe des mysteres\n\n\n");Color(15,0);

Color(3,0);scanf("%ld", &ChoixBus5);printf("\n\n");

if(ChoixBus5 == 1)
{
Color(8,0);printf("Impossible ! Cette ligne ne passe pas par ici.\n\n\n");

Color(15,0);system("PAUSE");printf("\n\n");



printf("                                Maison\n\n");
Color(10,0);printf("                               1");Color(15,0);printf(" ");Color(0,10);printf(" ");Color(15,0);printf(" ");Color(0,11);printf(" ");Color(11,0);printf(" 2\n");
Color(15,0);printf("                            ");Color(0,10);printf("      ");Color(15,0);printf(" ");Color(0,11);printf("                 \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" ");Color(11,0);printf("  2\n");
Color(15,0);printf("         ");Color(10,0);printf("1                  ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf("    \n");
Color(15,0);printf("         ");Color(0,10);printf("                    ");Color(15,0);printf("                      ");Color(15,0);printf("      Rue des Lauriers\n");printf("     Zoo ");printf("                           ");
Color(15,0);printf("               ");Color(0,12);printf("    ");Color(15,0);printf("                        ");
Color(15,0);printf("          ");Color(0,13);printf("       ");Color(15,0);printf("                                   ");Color(0,12);printf(" ");Color(12,0);printf("  4\n");
Color(15,0);printf("         ");Color(13,0);printf("3     ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf("                  ");Color(15,0);printf(" ");Color(0,12);printf("                  \n");
Color(15,0);printf("                                ");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" \n");
Color(15,0);printf("                               ");Color(13,0);printf("3");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" ");Color(12,0);printf(" 4\n\n");
Color(15,0);printf("                         Au cafe des mysteres\n\n\n");Color(15,0);

Color(3,0);scanf("%ld", &ChoixBus5);printf("\n\n");Color(15,0);
}

if(ChoixBus5 == 2)
{
Color(8,0);printf("Impossible ! Cette ligne ne passe pas par ici.\n\n\n");

Color(15,0);system("PAUSE");printf("\n\n");



printf("                                Maison\n\n");
Color(10,0);printf("                               1");Color(15,0);printf(" ");Color(0,10);printf(" ");Color(15,0);printf(" ");Color(0,11);printf(" ");Color(11,0);printf(" 2\n");
Color(15,0);printf("                            ");Color(0,10);printf("      ");Color(15,0);printf(" ");Color(0,11);printf("                 \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" ");Color(11,0);printf("  2\n");
Color(15,0);printf("         ");Color(10,0);printf("1                  ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf("    \n");
Color(15,0);printf("         ");Color(0,10);printf("                    ");Color(15,0);printf("                      ");Color(15,0);printf("      Rue des Lauriers\n");printf("     Zoo ");printf("                           ");
Color(15,0);printf("               ");Color(0,12);printf("    ");Color(15,0);printf("                        ");
Color(15,0);printf("          ");Color(0,13);printf("       ");Color(15,0);printf("                                   ");Color(0,12);printf(" ");Color(12,0);printf("  4\n");
Color(15,0);printf("         ");Color(13,0);printf("3     ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf("                  ");Color(15,0);printf(" ");Color(0,12);printf("                  \n");
Color(15,0);printf("                                ");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" \n");
Color(15,0);printf("                               ");Color(13,0);printf("3");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" ");Color(12,0);printf(" 4\n\n");
Color(15,0);printf("                         Au cafe des mysteres\n\n\n");Color(15,0);

Color(3,0);scanf("%ld", &ChoixBus5);printf("\n\n");Color(15,0);
}

switch (ChoixBus5)

{ /* Ouverture switch Bus 4 */

case 3 :

Color(11,0);printf("Le zoo est ferme, sans raison apparente. Je ne peux rien faire de plus\n");
printf("la-bas.\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");


printf("                                Maison\n\n");
Color(10,0);printf("                               1");Color(15,0);printf(" ");Color(0,10);printf(" ");Color(15,0);printf(" ");Color(0,11);printf(" ");Color(11,0);printf(" 2\n");
Color(15,0);printf("                            ");Color(0,10);printf("      ");Color(15,0);printf(" ");Color(0,11);printf("                 \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" ");Color(11,0);printf("  2\n");
Color(15,0);printf("         ");Color(10,0);printf("1                  ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf("    \n");
Color(15,0);printf("         ");Color(0,10);printf("                    ");Color(15,0);printf("                      ");Color(15,0);printf("      Rue des Lauriers\n");printf("     Zoo ");printf("                           ");
Color(15,0);printf("               ");Color(0,12);printf("    ");Color(15,0);printf("                        ");
Color(15,0);printf("          ");Color(0,13);printf("       ");Color(15,0);printf("                                   ");Color(0,12);printf(" ");Color(12,0);printf("  4\n");
Color(15,0);printf("         ");Color(13,0);printf("3     ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf("                  ");Color(15,0);printf(" ");Color(0,12);printf("                  \n");
Color(15,0);printf("                                ");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" \n");
Color(15,0);printf("                               ");Color(13,0);printf("3");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" ");Color(12,0);printf(" 4\n\n");
Color(15,0);printf("                         Au cafe des mysteres\n\n\n");Color(15,0);

     Color(3,0);scanf("%ld", &ChoixBus13);printf("\n\n");Color(15,0);




break ;

} /* Fermeture switch Bus 4 */


break ;

} /* Fermeture switch Bus 3 */

break ;

} /* Fermeture switch Bus 1 */








Color(11,0);printf("\"Bonne idee ! C'est dans cette rue que se trouve le parc municipal.\n");
printf("Avec un peu chance, je trouverai le gardien du zoo, ou bien la\n");
printf("proprietaire de cette boucle d'oreille.\"\n\n\n");

Color(15,0);system("PAUSE");printf("\n\n\n");
Color(15,0);printf("Fin du chapitre 2 !\n\n\n");
system("PAUSE");printf("\n\n\n");
Color(14,0);printf("Code checkpoint 2 : 6455\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");




Color(15,0);printf("Veux-tu poursuivre ta partie maintenant ?\n\n");
Color(3,0);scanf("%s", oui2);printf("\n\n\n");Color(15,0);

if(strcmp (oui2, "non") == 0)
{
          Color(15,0);printf("Veux-tu retourner au menu principal ?\n\n");
  Color(3,0); scanf("%s", chaine);printf("\n\n\n\n\n");Color(15,0);
}










if(strcmp (oui2, "oui") == 0)    /* Chapitre 3 */
{

Color(2,0);printf("                      *   *   *   *  Chapitre 3  *   *   *   * \n\n\n\n");Color(15,0);




Color(11,0);printf("\"Me voici arrive au parc municipal. Je vais me diriger vers la patinoire\n");
printf("a ciel ouvert. Si je ne peux pas aller au zoo, j'irai au moins faire\n");
printf("quelques ronds sur la glace !\"\n\n\n");
Color(15,0);system("PAUSE");printf("\n\n\n");
Color(8,0);printf("Vous etes maintenant devant la patinoire. Que faire ?\n\n\n");Color(15,0);

Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");Color(15,0);


if (strcmp (action, "regarder") != 0) if (strcmp (objet1, "patinoire") != 0)
{
   do {
   do {

Color(11,0);printf("Non, ce ne sont pas mes plans !\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Que faire ?\n\n\n");Color(15,0);
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");Color(15,0);

      } while (strcmp (action, "regarder") != 0);

      } while (strcmp (objet1, "patinoire") != 0);
}

if (strcmp (action, "regarder") != 0) if (strcmp (objet1, "patinoire") != 1)
{
   do {
   do {

Color(11,0);printf("Euh... On verra ca plus tard !\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Que faire ?\n\n\n");Color(15,0);
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");Color(15,0);

      } while (strcmp (action, "regarder") != 0);

      } while (strcmp (objet1, "patinoire") != 0);
}

if (strcmp (action, "regarder") != 1) if (strcmp (objet1, "patinoire") != 0)
{
   do {
   do {

Color(11,0);printf("Ce n'est pas tres interessant !\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Que faire ?\n\n\n");Color(15,0);
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");Color(15,0);

      } while (strcmp (action, "regarder") != 0);

      } while (strcmp (objet1, "patinoire") != 0);
}

Color(11,0);printf("\"Wow ! Il y a vraiment beaucoup de monde aujourd'hui. Je crois que je\n");
printf("n'avais jamais vu la patinoire aussi frequentee. Ca fait plaisir a voir,\n");
printf("en revanche, ca va vraiment etre difficile de retrouver quelqu'un\n");
printf("la-dedans ! Voyons-voir, qui pourrait me renseigner ?\"\n\n\n");
Color(15,0);system("PAUSE");printf("\n\n\n");

        /*parler patineurs*/


do {    /* Ouverture boucle patineur */

printf("  ");Color(0,9);printf("       \n");Color(15,0);
printf("  ");Color(0,9);printf("       \n");Color(15,0);
printf("  ");Color(0,9);printf("       ");Color(15,0);       printf("                    ");Color(0,4);printf("      ");Color(15,0);    printf("      "); Color(0,5);printf("        \n");Color(15,0);

Color(0,9);printf("   ");Color(0,9);printf("      ");Color(0,9);printf("   ");Color(15,0);      printf("    ");Color(0,15);printf("      ");Color(15,0);printf(" ");      printf("     ");Color(0,4);printf(" ");Color(0,15);printf("      ");Color(0,4);printf(" ");Color(15,0);printf(" ");      printf("    ");Color(0,5);printf("  ");Color(0,5);printf("      ");Color(0,5);printf("     ");Color(15,0);      printf(" ");Color(0,15);printf("      ");Color(15,0);printf(" ");      printf("     ");Color(0,6);printf(" ");Color(0,6);printf("      ");Color(0,6);printf(" ");Color(15,0);printf(" \n");

printf("  ");Color(0,15);printf(" ");Color(15,0);printf("      ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("   ");Color(0,10);printf(" ");Color(0,10);printf(" ");Color(0,10);printf("      ");Color(0,10);printf(" ");Color(0,10);printf(" ");Color(15,0);printf(" ");      printf("  ");Color(0,4);printf(" ");Color(0,15);printf(" ");Color(15,0);printf("      ");Color(0,15);printf(" ");Color(0,4);printf(" ");Color(15,0);printf(" ");      printf("   ");Color(0,15);printf(" ");Color(15,0);printf("      ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("    ");Color(0,15);printf(" ");Color(15,0);printf("      ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("   ");Color(0,6);printf(" ");Color(0,6);printf(" ");Color(0,6);printf("      ");Color(0,6);printf("  ");Color(15,0);printf(" \n");

printf(" ");Color(0,15);printf(" ");Color(15,0);printf("        ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("  ");Color(0,15);printf(" ");Color(15,0);printf("        ");Color(0,15);printf(" ");Color(15,0);printf(" ");      Color(0,4);printf("  ");Color(0,15);printf(" ");Color(15,0);printf("        ");Color(0,15);printf(" ");Color(15,0);Color(0,4);printf("  ");Color(15,0);      printf(" ");Color(0,15);printf(" ");Color(15,0);printf("        ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("  ");Color(0,15);printf(" ");Color(15,0);printf("        ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf(" ");Color(0,6);printf(" ");Color(0,6);printf(" ");Color(15,0);printf("        ");Color(0,6);printf(" ");Color(0,6);printf(" ");Color(15,0);printf(" \n");

printf(" ");Color(0,15);printf(" ");Color(15,0);printf("  ");Color(0,15);printf(" ");Color(15,0);printf("  ");Color(0,15);printf(" ");Color(15,0);printf("  ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("  ");Color(0,15);printf(" ");Color(15,0);printf("  ");Color(0,15);printf(" ");Color(15,0);printf("  ");Color(0,15);printf(" ");Color(15,0);printf("  ");Color(0,15);printf(" ");Color(15,0);printf(" ");      Color(0,4);printf("  ");Color(0,15);printf(" ");Color(15,0);printf("  ");Color(0,15);printf(" ");Color(15,0);printf("  ");Color(0,15);printf(" ");Color(15,0);printf("  ");Color(0,15);printf(" ");Color(15,0);Color(0,4);printf("  ");Color(15,0);      printf(" ");Color(0,15);printf(" ");Color(15,0);printf("  ");Color(0,15);printf(" ");Color(15,0);printf("  ");Color(0,15);printf(" ");Color(15,0);printf("  ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("  ");Color(0,15);printf(" ");Color(15,0);printf("  ");Color(0,3);printf(" ");Color(15,0);printf("  ");Color(0,3);printf(" ");Color(15,0);printf("  ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf(" ");Color(0,6);printf(" ");Color(0,6);printf(" ");Color(15,0);printf("  ");Color(0,15);printf(" ");Color(15,0);printf("  ");Color(0,15);printf(" ");Color(15,0);printf("  ");Color(0,6);printf(" ");Color(0,6);printf(" ");Color(15,0);printf(" \n");

printf(" ");Color(0,15);printf(" ");Color(15,0);printf("        ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("  ");Color(0,15);printf(" ");Color(15,0);printf("        ");Color(0,15);printf(" ");Color(15,0);printf(" ");      Color(0,4);printf("  ");Color(0,15);printf(" ");Color(15,0);printf("        ");Color(0,15);printf(" ");Color(15,0);Color(0,4);printf("  ");Color(15,0);      printf(" ");Color(0,15);printf(" ");Color(15,0);printf("        ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("  ");Color(0,15);printf(" ");Color(15,0);printf("        ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("  ");Color(0,15);printf(" ");Color(15,0);printf("        ");Color(0,15);printf(" ");Color(15,0);printf(" \n");

printf(" ");Color(0,15);printf(" ");Color(15,0);printf("   ");Color(0,15);printf("  ");Color(15,0);printf("   ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("  ");Color(0,15);printf(" ");Color(15,0);printf("   ");Color(0,15);printf("  ");Color(15,0);printf("   ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("  ");Color(0,15);printf(" ");Color(15,0);printf("   ");Color(0,15);printf("  ");Color(15,0);printf("   ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("  ");Color(0,15);printf(" ");Color(15,0);printf("   ");Color(0,15);printf("  ");Color(15,0);printf("   ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("  ");Color(0,15);printf(" ");Color(15,0);printf("   ");Color(0,15);printf("  ");Color(15,0);printf("   ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("  ");Color(0,15);printf(" ");Color(15,0);printf("   ");Color(0,15);printf("  ");Color(15,0);printf("   ");Color(0,15);printf(" ");Color(15,0);printf(" \n");

printf("  ");Color(0,15);printf(" ");Color(15,0);printf("      ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("    ");Color(0,15);printf(" ");Color(15,0);printf("      ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("    ");Color(0,15);printf(" ");Color(15,0);printf("      ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("    ");Color(0,15);printf(" ");Color(15,0);printf("      ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("    ");Color(0,15);printf(" ");Color(15,0);printf("      ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("    ");Color(0,15);printf(" ");Color(15,0);printf("      ");Color(0,15);printf(" ");Color(15,0);printf(" \n");

Color(0,8);printf("1");Color(15,0);printf("  ");Color(0,15);printf("      ");Color(15,0);printf("    ");      Color(0,8);printf("2");Color(15,0);printf("  ");Color(0,15);printf("      ");Color(15,0);printf("    ");      Color(0,8);printf("3");Color(15,0);printf("  ");Color(0,15);printf("      ");Color(15,0);printf("    ");      Color(0,8);printf("4");Color(15,0);printf("  ");Color(0,15);printf("      ");Color(15,0);printf("    ");      Color(0,8);printf("5");Color(15,0);printf("  ");Color(0,15);printf("      ");Color(15,0);printf("    ");      Color(0,8);printf("6");Color(15,0);printf("  ");Color(0,15);printf("      ");Color(15,0);printf(" \n");



printf("\n");


printf("   ");Color(0,15);printf("      ");Color(15,0);printf(" ");      printf("      ");Color(0,15);printf("      ");Color(15,0);printf(" ");      printf("      ");Color(0,15);printf("      ");Color(15,0);printf(" ");      printf("      ");Color(0,15);printf("      ");Color(15,0);printf(" ");      printf("      ");Color(0,15);printf("      ");Color(15,0);printf(" ");      printf("      ");Color(0,15);printf("      ");Color(15,0);printf(" \n");

printf("  ");Color(0,15);printf(" ");Color(15,0);printf("      ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("    ");Color(0,15);printf(" ");Color(15,0);printf("      ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("    ");Color(0,15);printf(" ");Color(15,0);printf("      ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("    ");Color(0,15);printf(" ");Color(15,0);printf("      ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("    ");Color(0,15);printf(" ");Color(15,0);printf("      ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("    ");Color(0,15);printf(" ");Color(15,0);printf("      ");Color(0,15);printf(" ");Color(15,0);printf(" \n");

printf(" ");Color(0,15);printf(" ");Color(15,0);printf("        ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("  ");Color(0,15);printf(" ");Color(15,0);printf("        ");Color(0,15);printf(" ");Color(15,0);printf(" ");printf("  ");Color(0,15);printf(" ");Color(15,0);printf("        ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("  ");Color(0,15);printf(" ");Color(15,0);printf("        ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("  ");Color(0,15);printf(" ");Color(15,0);printf("        ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("  ");Color(0,15);printf(" ");Color(15,0);printf("        ");Color(0,15);printf(" ");Color(15,0);printf(" \n");

printf(" ");Color(0,15);printf(" ");Color(15,0);printf("  ");Color(0,15);printf(" ");Color(15,0);printf("  ");Color(0,15);printf(" ");Color(15,0);printf("  ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("  ");Color(0,15);printf(" ");Color(15,0);printf("  ");Color(0,15);printf(" ");Color(15,0);printf("  ");Color(0,15);printf(" ");Color(15,0);printf("  ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("  ");Color(0,15);printf(" ");Color(15,0);printf("  ");Color(0,15);printf(" ");Color(15,0);printf("  ");Color(0,15);printf(" ");Color(15,0);printf("  ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("  ");Color(0,15);printf(" ");Color(15,0);printf("  ");Color(0,15);printf(" ");Color(15,0);printf("  ");Color(0,15);printf(" ");Color(15,0);printf("  ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("  ");Color(0,15);printf(" ");Color(15,0);printf("  ");Color(0,15);printf(" ");Color(15,0);printf("  ");Color(0,15);printf(" ");Color(15,0);printf("  ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("  ");Color(0,15);printf(" ");Color(15,0);printf("  ");Color(0,2);printf(" ");Color(15,0);printf("  ");Color(0,2);printf(" ");Color(15,0);printf("  ");Color(0,15);printf(" ");Color(15,0);printf(" \n");

printf(" ");Color(0,15);printf(" ");Color(15,0);printf("        ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("  ");Color(0,15);printf(" ");Color(15,0);printf("        ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("  ");Color(0,15);printf(" ");Color(15,0);printf("        ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("  ");Color(0,15);printf(" ");Color(15,0);printf("        ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("  ");Color(0,15);printf(" ");Color(15,0);printf("        ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("  ");Color(0,15);printf(" ");Color(15,0);printf("        ");Color(0,15);printf(" ");Color(15,0);printf(" \n");

printf(" ");Color(0,15);printf(" ");Color(15,0);printf("   ");Color(0,15);printf("  ");Color(15,0);printf("   ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("  ");Color(0,15);printf(" ");Color(15,0);printf("   ");Color(0,15);printf("  ");Color(15,0);printf("   ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("  ");Color(0,15);printf(" ");Color(15,0);printf("  ");Color(0,8);printf(" ");Color(0,15);printf("  ");Color(0,8);printf(" ");Color(15,0);printf("  ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("  ");Color(0,15);printf(" ");Color(15,0);printf("   ");Color(0,15);printf("  ");Color(15,0);printf("   ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("  ");Color(0,15);printf(" ");Color(15,0);printf("   ");Color(0,15);printf("  ");Color(15,0);printf("   ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("  ");Color(0,15);printf(" ");Color(15,0);printf("   ");Color(0,15);printf("  ");Color(15,0);printf("   ");Color(0,15);printf(" ");Color(15,0);printf(" \n");

printf("  ");Color(0,13);printf(" ");Color(15,0);printf("      ");Color(0,13);printf(" ");Color(15,0);printf(" ");      printf("    ");Color(0,15);printf(" ");Color(15,0);printf("      ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("    ");Color(0,8);printf("   ");Color(15,0);printf("  ");Color(0,8);printf("   ");Color(15,0);printf(" ");      printf("    ");Color(0,15);printf(" ");Color(15,0);printf("      ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("    ");Color(0,15);printf(" ");Color(15,0);printf("");Color(0,12);printf("  ");Color(15,0);printf("  ");Color(0,12);printf("  ");Color(15,0);printf("");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("    ");Color(0,15);printf(" ");Color(15,0);printf("      ");Color(0,15);printf(" ");Color(15,0);printf(" \n");

Color(0,8);printf("7");Color(15,0);printf(" ");Color(0,13);printf(" ");Color(0,13);printf("      ");Color(0,13);printf(" ");Color(15,0);printf("  ");      Color(0,8);printf("8");Color(15,0);printf(" ");Color(0,14);printf(" ");Color(15,0);printf(" ");Color(0,15);printf("      ");Color(15,0);printf(" ");      Color(0,14);printf(" ");Color(15,0);printf("  ");      Color(0,8);printf("9");Color(15,0);printf(" ");Color(0,8);printf("        ");Color(15,0);printf(" ");      Color(0,8);printf("10");Color(15,0);printf(" ");Color(0,2);printf(" ");Color(15,0);printf(" ");Color(0,15);printf("      ");Color(15,0);printf("   ");      Color(0,8);printf("11");Color(15,0);printf("  ");Color(0,15);printf(" ");Color(0,12);printf("    ");Color(0,15);printf(" ");Color(15,0);printf("   ");      Color(0,8);printf("12");Color(15,0);printf("  ");Color(0,15);printf("      ");Color(15,0);printf(" \n");

printf("    ");Color(0,13);printf("   ");Color(15,0);       printf("                       "); Color(0,8);printf("    ");Color(15,0);      printf("                     ");Color(0,12);printf("  ");Color(15,0);printf("  ");Color(0,12);printf("  \n");Color(15,0);
printf("   ");Color(0,13);printf(" ");Color(15,0);printf("   ");Color(0,13);printf(" ");Color(15,0);      printf("                       "); Color(0,8);printf("  \n");Color(15,0);
printf("  ");Color(0,13);printf(" ");Color(15,0);printf("     ");Color(0,13);printf(" \n");Color(15,0);

Color(3,0);scanf("%ld", &Patineur);printf("\n\n");Color(15,0);



if(Patineur == 1)
{


Color(15,0);printf("-Oui, c'est pour quoi ?\n\n\n");essai++;
Color(8,0);printf("1 : Zoo\n\n");
printf("2 : Gardien\n\n");
printf("3 : Quitter\n\n\n");
Color(3,0);scanf("%ld", &P1);printf("\n\n");Color(15,0);


Color(11,0);printf("\"Bonjour.\"\n\n");Color(15,0);

do {

      if(P1 == 1)
      {
Color(11,0);printf("\"Sauriez-vous pourquoi le zoo est reste ferme ?\"\n\n\n");
Color(15,0);printf("-Ah non, aucune idee !\n\n\n");
system("PAUSE\n\n");printf("\n\n");
printf("-Quoi encore ?\n\n\n\n");
Color(8,0);printf("1 : Zoo\n\n");
printf("2 : Gardien\n\n");
printf("3 : Quitter\n\n\n");
Color(3,0);scanf("%ld", &P1);printf("\n\n");Color(15,0);
}




      if(P1 == 2)
      {
Color(11,0);printf("\"Auriez-vous vu le gardien du zoo trainer dans le coin, par hasard ?\"\n\n\n");
Color(15,0);printf("-A vous de me le dire, je ne sais meme pas a quoi il ressemble !\n\n\n");
Color(11,0);printf("\"D'accord, merci quand meme !\"\n\n\n");
Color(15,0);system("PAUSE\n\n");printf("\n\n");
printf("-Quoi encore ?\n\n\n\n");
Color(8,0);printf("1 : Zoo\n\n");
printf("2 : Gardien\n\n");
printf("3 : Quitter\n\n\n");
Color(3,0);scanf("%ld", &P1);printf("\n\n");Color(15,0);
             }



if(P1 == 3)
{
Color(11,0);printf("\"Euh... Non rien. Bonne journee !\"\n\n\n");Color(15,0);
}


}while(P1 <= 2); /* P1 */

}





if(Patineur == 2)
{


Color(15,0);printf("-Que me voulez-vous ?\n\n\n");essai++;
Color(8,0);printf("1 : Zoo \n\n");
printf("2 : Boucle d'oreille\n\n");
printf("3 : Quitter\n\n\n");
Color(3,0);scanf("%ld", &P2);printf("\n\n");Color(15,0);


Color(11,0);printf("\"Bonjour.\"\n\n");Color(15,0);

do {

      if(P2 == 1)
      {
Color(11,0);printf("\"Le zoo serait-il en greve ?\"\n\n\n");
Color(15,0);printf("-Demandez cela au journal !\n\n\n");
system("PAUSE\n\n");printf("\n\n");
printf("-Autre chose ?\n\n\n\n");
Color(8,0);printf("1 : Zoo \n\n");
printf("2 : Boucle d'oreille\n\n");
printf("3 : Quitter\n\n\n");
Color(3,0);scanf("%ld", &P2);printf("\n\n");Color(15,0);
}




      if(P2 == 2)
      {
Color(11,0);printf("\"Auriez-vous apercu une femme avec une seule boucle d'oreille ?\"\n\n\n");
Color(15,0);printf("-C'est possible, cherchez encore !\n\n\n");
Color(11,0);printf("\"Merci !\"\n\n\n");
Color(15,0);system("PAUSE\n\n");printf("\n\n");
printf("-Autre chose ?\n\n\n\n");
Color(8,0);printf("1 : Zoo \n\n");
printf("2 : Boucle d'oreille\n\n");
printf("3 : Quitter\n\n\n");
Color(3,0);scanf("%ld", &P2);printf("\n\n");Color(15,0);
             }



if(P2 == 3)
{
Color(11,0);printf("\"Euh... Non rien. Bonne journee !\"\n\n\n");Color(15,0);
}


}while(P2 <= 2); /* P2 */

}





if(Patineur == 3)
{


Color(15,0);printf("-Qu'est-ce que tu dis ?\n\n\n");essai++;
Color(8,0);printf("1 : Gardien \n\n");
printf("2 : Musique\n\n");
printf("3 : Quitter\n\n\n");
Color(3,0);scanf("%ld", &P3);printf("\n\n");Color(15,0);


Color(11,0);printf("\"Bonjour.\"\n\n");Color(15,0);

do {

      if(P3 == 1)
      {
Color(11,0);printf("\"Auriez-vous vu quelqu'un qui ressemble au gardien du zoo ?\"\n\n\n");
Color(15,0);printf("-Ca mec, j'en sais rien ! Mais demande donc a cet homme avec\n\n");
printf("le haut de forme, il connait presque tout le monde ici.\n\n\n");
system("PAUSE\n\n");printf("\n\n");
printf("-Tu disais ?\n\n\n\n");
Color(8,0);printf("1 : Gardien\n\n");
printf("2 : Musique\n\n");
printf("3 : Quitter\n\n\n");
Color(3,0);scanf("%ld", &P3);printf("\n\n");Color(15,0);
}




      if(P3 == 2)
      {
Color(11,0);printf("\"Qu'est-ce que vous ecoutez comme musique ?\"\n\n\n");
Color(15,0);printf("-Toujours Yiruma quand je suis sur la glace !\n\n\n");
Color(11,0);printf("\"Ah oui, quel virtuose du piano !\"\n\n\n");
Color(15,0);system("PAUSE\n\n");printf("\n\n");
printf("-Tu disais ?\n\n\n\n");
Color(8,0);printf("1 : Gardien\n\n");
printf("2 : Musique\n\n");
printf("3 : Quitter\n\n\n");
Color(3,0);scanf("%ld", &P3);printf("\n\n");Color(15,0);
             }



if(P3 == 3)
{
Color(11,0);printf("\"Euh... Non rien. Bonne journee !\"\n\n\n");Color(15,0);
}


}while(P3 <= 2); /* P3 */

}





if(Patineur == 4)
{


Color(15,0);printf("-Hmm... ?\n\n\n");essai++;
Color(8,0);printf("1 : Zoo\n\n");
printf("2 : Boucle d'oreille\n\n");
printf("3 : Quitter\n\n\n");
Color(3,0);scanf("%ld", &P4);printf("\n\n");Color(15,0);


Color(11,0);printf("\"Bonjour.\"\n\n");Color(15,0);

do {

      if(P4 == 1)
      {
Color(11,0);printf("\"Seriez-vous le gardien du zoo ?\"\n\n\n");solution++;
Color(15,0);printf("-En chair et en os !\n\n\n");
system("PAUSE\n\n");printf("\n\n");
Color(11,0);printf("\"Pourquoi le zoo est-il ferme ?\"\n\n\n");
Color(15,0);printf("-Je sais bien qu'il devrait etre ouvert, et je suis le premier\n\n");
Color(15,0);printf("a le deplorer, mais j'ai eu un petit souci en arrivant ce matin.\n\n");
Color(15,0);printf("Voila, la serrure etait gelee et je n'ai pas pu ouvrir la grille\n\n");
Color(15,0);printf("principale. Peut-etre les rayons du soleil auront-ils regle\n\n");
Color(15,0);printf("le probleme d'ici cette apres-midi.\n\n\n");
system("PAUSE\n\n");printf("\n\n");
Color(11,0);printf("\"Ne peut-on vraiment rien faire d'autre qu'attendre ?\"\n\n\n");
Color(15,0);printf("-Eh bien, je vois que vous avez une grande envie d'aller au zoo,\n\n");
Color(15,0);printf("jeune homme ! Tres bien, j'irai voir ce qu'il en est dans deux\n\n");
Color(15,0);printf("heures, mais je ne vous promets rien.\n\n\n");
system("PAUSE\n\n");printf("\n\n");
printf("-Hmm... ?\n\n\n\n");
Color(8,0);printf("1 : Zoo\n\n");
printf("2 : Boucle d'oreille\n\n");
printf("3 : Quitter\n\n\n");
Color(3,0);scanf("%ld", &P4);printf("\n\n");Color(15,0);
}




      if(P4 == 2)
      {
Color(11,0);printf("\"Auriez-vous apercu une femme avec une seule boucle d'oreille ?\"\n\n\n");
Color(15,0);printf("-Vous en avez de droles de questions, vous !\n\n\n");
Color(11,0);printf("\"Merci quand meme !\"\n\n\n");
Color(15,0);system("PAUSE\n\n");printf("\n\n");
printf("-Hmm... ?\n\n\n\n");
Color(8,0);printf("1 : Zoo\n\n");
printf("2 : Boucle d'oreille\n\n");
printf("3 : Quitter\n\n\n");
Color(3,0);scanf("%ld", &P4);printf("\n\n");Color(15,0);
             }



if(P4 == 3)
{
Color(11,0);printf("\"Euh... Non rien. Bonne journee !\"\n\n\n");Color(15,0);
}


}while(P4 <= 2); /* P4 */

}





if(Patineur == 5)
{


Color(15,0);printf("-Oui ?\n\n\n");essai++;
Color(8,0);printf("1 : Zoo\n\n");
printf("2 : Gardien\n\n");
printf("3 : Quitter\n\n\n");
Color(3,0);scanf("%ld", &P5);printf("\n\n");Color(15,0);


Color(11,0);printf("\"Bonjour.\"\n\n");Color(15,0);

do {

      if(P5 == 1)
      {
Color(11,0);printf("\"Sauriez-vous pourquoi le zoo est ferme ?\"\n\n\n");
Color(15,0);printf("-Ah non, pas du tout !\n\n\n");
system("PAUSE\n\n");printf("\n\n");
printf("-Oui ?\n\n\n\n");
Color(8,0);printf("1 : Zoo\n\n");
printf("2 : Gardien\n\n");
printf("3 : Quitter\n\n\n");
Color(3,0);scanf("%ld", &P5);printf("\n\n");Color(15,0);
}




      if(P5 == 2)
      {
Color(11,0);printf("\"Ou est le gardien du zoo ?\"\n\n\n");
Color(15,0);printf("-Allez demander a la mere Michelle, c'est celle avec l'echarpe\n\n\n");
Color(15,0);printf("rose, elle doit savoir quelque chose.\n\n\n");
Color(11,0);printf("\"Merci beaucoup !\"\n\n\n");
Color(15,0);system("PAUSE\n\n");printf("\n\n");
printf("-Oui ?\n\n\n\n");
Color(8,0);printf("1 : Zoo\n\n");
printf("2 : Gardien\n\n");
printf("3 : Quitter\n\n\n");
Color(3,0);scanf("%ld", &P5);printf("\n\n");Color(15,0);
             }



if(P5 == 3)
{
Color(11,0);printf("\"Euh... Non rien. Bonne journee !\"\n\n\n");Color(15,0);
}


}while(P5 <= 2); /* P5 */

}





if(Patineur == 6)
{


Color(15,0);printf("-... ?\n\n\n");essai++;
Color(8,0);printf("1 : Zoo\n\n");
printf("2 : Boucle d'oreille\n\n");
printf("3 : Quitter\n\n\n");
Color(3,0);scanf("%ld", &P6);printf("\n\n");Color(15,0);


Color(11,0);printf("\"Bonjour.\"\n\n");Color(15,0);

do {

      if(P6 == 1)
      {
Color(11,0);printf("\"Le gardien du zoo est-il un deserteur ?\"\n\n\n");
Color(15,0);printf("-Peut-etre !\n\n\n");
system("PAUSE\n\n");printf("\n\n");
printf("-... ?\n\n\n\n");
Color(8,0);printf("1 : Zoo\n\n");
printf("2 : Boucle d'oreille\n\n");
printf("3 : Quitter\n\n\n");
Color(3,0);scanf("%ld", &P6);printf("\n\n");Color(15,0);
}




      if(P6 == 2)
      {
Color(11,0);printf("\"A qui appartient cette boucle d'oreille ?\"\n\n\n");
Color(15,0);printf("-Oh, mais elle est d'un magnifique vert emeraude... J'en sais rien !\n\n\n");
Color(11,0);printf("\"Merci quand meme !\"\n\n\n");
Color(15,0);system("PAUSE\n\n");printf("\n\n");
printf("-... ?\n\n\n\n");
Color(8,0);printf("1 : Zoo\n\n");
printf("2 : Boucle d'oreille\n\n");
printf("3 : Quitter\n\n\n");
Color(3,0);scanf("%ld", &P6);printf("\n\n");Color(15,0);
             }



if(P6 == 3)
{
Color(11,0);printf("\"Euh... Non rien. Bonne journee !\"\n\n\n");Color(15,0);
}


}while(P6 <= 2); /* P6 */

}





if(Patineur == 7)
{


Color(15,0);printf("-Que puis-je faire pour vous, mon garcon ?\n\n\n");essai++;
Color(8,0);printf("1 : Gardien\n\n");
printf("2 : Chat\n\n");
printf("3 : Quitter\n\n\n");
Color(3,0);scanf("%ld", &P7);printf("\n\n");Color(15,0);


Color(11,0);printf("\"Bonjour.\"\n\n");Color(15,0);

do {

      if(P7 == 1)
      {
Color(11,0);printf("\"Auriez-vous vu le gardien du zoo ?\"\n\n\n");
Color(15,0);printf("-Je ne crois pas. Il devrait avoir une casquette, non ?\n\n\n");
system("PAUSE\n\n");printf("\n\n");
printf("-Autre chose ?\n\n\n\n");
Color(8,0);printf("1 : Gardien\n\n");
printf("2 : Chat\n\n");
printf("3 : Quitter\n\n\n");
Color(3,0);scanf("%ld", &P7);printf("\n\n");Color(15,0);
}




      if(P7 == 2)
      {
Color(11,0);printf("\"Vous n'auriez pas perdu votre chat par hasard ? Non, je rigole.\"\n\n\n");
Color(15,0);printf("-En fait si, il n'est pas rentre hier soir !\n\n");
Color(15,0);printf("Si jamais vous le retrouvez, je vous serai eternellement reconnaissante !\n\n\n");
Color(11,0);printf("\"C'est entendu !\"\n\n\n");
Color(15,0);system("PAUSE\n\n");printf("\n\n");
printf("-Autre chose ?\n\n\n\n");
Color(8,0);printf("1 : Gardien\n\n");
printf("2 : Chat\n\n");
printf("3 : Quitter\n\n\n");
Color(3,0);scanf("%ld", &P7);printf("\n\n");Color(15,0);
             }



if(P7 == 3)
{
Color(11,0);printf("\"Euh... Non rien. Bonne journee !\"\n\n\n");Color(15,0);
}


}while(P7 <= 2); /* P7 */

}





if(Patineur == 8)
{


Color(15,0);printf("-Comment ?\n\n\n");essai++;
Color(8,0);printf("1 : Boucle d'oreille\n\n");
printf("2 : Zoo\n\n");
printf("3 : Quitter\n\n\n");
Color(3,0);scanf("%ld", &P8);printf("\n\n");Color(15,0);


Color(11,0);printf("\"Bonjour.\"\n\n");Color(15,0);

do {

      if(P8 == 1)
      {
Color(11,0);printf("\"Est-ce l'une de vos boucles d'oreille ?\"\n\n\n");
Color(15,0);printf("-Faites-voir... Non, je n'en ai pas de cette couleur.\n\n\n");
system("PAUSE\n\n");printf("\n\n");
printf("-Comment ?\n\n\n\n");
Color(8,0);printf("1 : Boucle d'oreille\n\n");
printf("2 : Zoo\n\n");
printf("3 : Quitter\n\n\n");
Color(3,0);scanf("%ld", &P8);printf("\n\n");Color(15,0);
}




      if(P8 == 2)
      {
Color(11,0);printf("\"Que savez-vous a propos du zoo ?\"\n\n\n");
Color(15,0);printf("-Promettez-moi de ne pas le repeter. Il parait que le gardien\n\n");
Color(15,0);printf("a un poil dans la main, et que la direction songe a le remplacer !\n\n\n");
Color(11,0);printf("\"Sans blague !\"\n\n\n");
Color(15,0);system("PAUSE\n\n");printf("\n\n");
printf("-Comment ?\n\n\n\n");
Color(8,0);printf("1 : Boucle d'oreille\n\n");
printf("2 : Zoo\n\n");
printf("3 : Quitter\n\n\n");
Color(3,0);scanf("%ld", &P8);printf("\n\n");Color(15,0);
             }



if(P8 == 3)
{
Color(11,0);printf("\"Euh... Non rien. Bonne journee !\"\n\n\n");Color(15,0);
}


}while(P8 <= 2); /* P8 */

}





if(Patineur == 9)
{


Color(15,0);printf("-C'est a quel sujet ?\n\n\n");essai++;
Color(8,0);printf("1 : Zoo\n\n");
printf("2 : Gardien\n\n");
printf("3 : Quitter\n\n\n");
Color(3,0);scanf("%ld", &P9);printf("\n\n");Color(15,0);


Color(11,0);printf("\"Bonjour.\"\n\n");Color(15,0);

do {

      if(P9 == 1)
      {
Color(11,0);printf("\"Aimez-vous aller au zoo ?\"\n\n\n");
Color(15,0);printf("-Oui, mais il est ferme aujourd'hui !\n\n\n");
system("PAUSE\n\n");printf("\n\n");
printf("-Mais encore ?\n\n\n\n");
Color(8,0);printf("1 : Zoo\n\n");
printf("2 : Gardien\n\n");
printf("3 : Quitter\n\n\n");
Color(3,0);scanf("%ld", &P9);printf("\n\n");Color(15,0);
}




      if(P9 == 2)
      {
Color(11,0);printf("\"Que fait le gardien du zoo ?\"\n\n\n");
Color(15,0);printf("-Cet idiot n'a pas reussi a ouvrir la grille !\n\n\n");
Color(11,0);printf("\"C'est dommage !\"\n\n\n");
Color(15,0);system("PAUSE\n\n");printf("\n\n");
printf("-Mais encore ?\n\n\n\n");
Color(8,0);printf("1 : Zoo\n\n");
printf("2 : Gardien\n\n");
printf("3 : Quitter\n\n\n");
Color(3,0);scanf("%ld", &P9);printf("\n\n");Color(15,0);
             }



if(P9 == 3)
{
Color(11,0);printf("\"Euh... Non rien. Bonne journee !\"\n\n\n");Color(15,0);
}


}while(P9 <= 2); /* P9 */

}





if(Patineur == 10)
{


Color(15,0);printf("-Salut !\n\n\n");essai++;
Color(8,0);printf("1 : Zoo\n\n");
printf("2 : Boucle d'oreille\n\n");
printf("3 : Quitter\n\n\n");
Color(3,0);scanf("%ld", &P10);printf("\n\n");Color(15,0);


Color(11,0);printf("\"Bonjour.\"\n\n");Color(15,0);

do {

      if(P10 == 1)
      {
Color(11,0);printf("\"Que pensez-vous du zoo de cette ville ?\"\n\n\n");
Color(15,0);printf("-Helas, pas grand chose. Il est renomme pour ses beaux specimens\n\n");
Color(15,0);printf("de felins. J'aurai bien voulu le visiter, mais il faut croire\n\n");
Color(15,0);printf("que je n'ai pas choisi le bon jour !\n\n\n");
system("PAUSE\n\n");printf("\n\n");
printf("-Quoi d'autre ?\n\n\n\n");
Color(8,0);printf("1 : Zoo\n\n");
printf("2 : Boucle d'oreille\n\n");
printf("3 : Quitter\n\n\n");
Color(3,0);scanf("%ld", &P10);printf("\n\n");Color(15,0);
}




      if(P10 == 2)
      {
Color(11,0);printf("\"Est-ce que ceci... ?\"\n\n\n");solution++;
Color(15,0);printf("-Oh ! Mais c'est ma boucle d'oreille !\n\n");
Color(15,0);printf("Je croyais l'avoir perdue pour de bon. Ou l'avez-vous trouve ?\n\n\n");
Color(11,0);printf("\"Sur une banquette, au cafe des mysteres.\"\n\n\n");
Color(15,0);printf("-Pour vous remercier, je vous invite a boire un the en ma compagnie\n\n");
Color(15,0);printf("a ce fameux cafe des mysteres. J'en profiterai pour faire plus\n\n");
Color(15,0);printf("ample connaissance avec mon bienfaiteur ^^\n\n");
Color(15,0);printf("Cependant, j'aimerais encore faire quelques tours de piste. Cela\n\n");
Color(15,0);printf("ne vous derange pas si je y vous donne rendez-vous, disons dans une heure ?\n\n\n");
Color(15,0);system("PAUSE\n\n");printf("\n\n");
Color(11,0);printf("\"Pas du tout, tant que vous ne me posez pas un lapin !\"\n\n\n");
Color(15,0);printf("-Je vous promets que non.\n\n\n");
Color(15,0);system("PAUSE\n\n");printf("\n\n");
printf("-Quoi d'autre ?\n\n\n\n");
Color(8,0);printf("1 : Zoo\n\n");
printf("2 : Boucle d'oreille\n\n");
printf("3 : Quitter\n\n\n");
Color(3,0);scanf("%ld", &P10);printf("\n\n");Color(15,0);
             }



if(P10 == 3)
{
Color(11,0);printf("\"Euh... Non rien. Bonne journee !\"\n\n\n");Color(15,0);
}


}while(P10 <= 2); /* P10 */

}





if(Patineur == 11)
{


Color(15,0);printf("-C'est a quel sujet ?\n\n\n");essai++;
Color(8,0);printf("1 : Boucle d'oreille\n\n");
printf("2 : Zoo\n\n");
printf("3 : Quitter\n\n\n");
Color(3,0);scanf("%ld", &P11);printf("\n\n");Color(15,0);


Color(11,0);printf("\"Bonjour.\"\n\n");Color(15,0);

do {

      if(P11 == 1)
      {
Color(11,0);printf("\"Cette boucle d'oreille vous dit-elle quelque chose ?\"\n\n\n");
Color(15,0);printf("-Pas le moins du monde ! Mais demandez donc a la mere Michelle.\n\n");
Color(15,0);printf("Vous la reconnaitrez facilement, a son age, elle se couvre du froid.\n\n\n");
system("PAUSE\n\n");printf("\n\n");
printf("-Quoi donc ?\n\n\n\n");
Color(8,0);printf("1 : Boucle d'oreille\n\n");
printf("2 : Zoo\n\n");
printf("3 : Quitter\n\n\n");
Color(3,0);scanf("%ld", &P11);printf("\n\n");Color(15,0);
}




      if(P11 == 2)
      {
Color(11,0);printf("\"Si je vous dis zoo... ?\"\n\n\n");
Color(15,0);printf("-Quelle honte ! Enfermer ces pauvres animaux, si loin de chez eux !\n\n\n");
Color(11,0);printf("\"Vous n'avez pas tort... D'un autre cote, certaines especes menacees\n\n");
Color(11,0);printf("se reproduisent en toute securite, et sont parfois reintroduites\n\n");
Color(11,0);printf("dans leur milieu naturel, grace a des programme de protection.\"\n\n\n");
Color(15,0);printf("-L'etre humain peut bien tenter de reparer, ca n'effacera pas ses erreurs !\n\n\n");
Color(11,0);printf("\"...\"\n\n\n");
Color(15,0);system("PAUSE\n\n");printf("\n\n");
printf("-Quoi donc ?\n\n\n\n");
Color(8,0);printf("1 : Boucle d'oreille\n\n");
printf("2 : Zoo\n\n");
printf("3 : Quitter\n\n\n");
Color(3,0);scanf("%ld", &P11);printf("\n\n");Color(15,0);
             }



if(P11 == 3)
{
Color(11,0);printf("\"Euh... Non rien. Bonne journee !\"\n\n\n");Color(15,0);
}


}while(P11 <= 2); /* P11 */

}





if(Patineur == 12)
{


Color(15,0);printf("- Hello ! What's up ?\n\n\n");essai++;
Color(8,0);printf("1 : Francais\n\n");
printf("2 : Zoo\n\n");
printf("3 : Quitter\n\n\n");
Color(3,0);scanf("%ld", &P12);printf("\n\n");Color(15,0);


Color(11,0);printf("\"Hi !\"\n\n");Color(15,0);

do {

      if(P12 == 1)
      {
Color(11,0);printf("\"Vous ne parlez pas francais ?\"\n\n\n");
Color(15,0);printf("-Sorry, what ? I didn't understand.\n\n\n");
system("PAUSE\n\n");printf("\n\n");
Color(11,0);printf("\"I said, you don't speak French ?\"\n\n\n");
Color(15,0);printf("-Oh no, too hard for me. I'm here for my hollydays, and I've to\n\n");
Color(15,0);printf("say that I'm in love with this town !\n\n\n");
system("PAUSE\n\n");printf("\n\n");
printf("-What can I do for you ?\n\n\n\n");
Color(8,0);printf("1 : Francais\n\n");
printf("2 : Zoo\n\n");
printf("3 : Quitter\n\n\n");
Color(3,0);scanf("%ld", &P12);printf("\n\n");Color(15,0);
}




      if(P12 == 2)
      {
Color(11,0);printf("\"You must visit our zoo, he's wonderful. By the way, do you know\n\nwhere is the guard ?\"\n\n\n");
Color(15,0);printf("-Not really, but I think you should ask to this guy with the blue eyes.\n\n\n");
Color(11,0);printf("\"Thanks ! Enjoy your hollydays.\"\n\n\n");
Color(15,0);system("PAUSE\n\n");printf("\n\n");
printf("-What can I do for you ?\n\n\n\n");
Color(8,0);printf("1 : Francais\n\n");
printf("2 : Zoo\n\n");
printf("3 : Quitter\n\n\n");
Color(3,0);scanf("%ld", &P12);printf("\n\n");Color(15,0);
             }



if(P12 == 3)
{
Color(11,0);printf("\"Hum... No, forget it. Have a nice day !\"\n\n\n");Color(15,0);
}


}while(P12 <= 2); /* P12 */

}







 printf("\n\n");system("PAUSE");printf("\n\n\n");






if(essai >= 8)
{
Color(15,0);system("\n\nPAUSE\n\n\n");printf("\n\n\n");
Color(8,0);printf("Plus personne ne veut te parler, tu as epuise ta credibilite.\n\n\n");
Color(4,0);printf("GAME OVER\n\n\n");
Color(14,0);printf("Rappel code checkpoint 2 : 6455\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
return 0;
}

if (solution < 2)
{
Color(8,0);printf("Continuer a parler aux patineurs ?\n\n\n");                        /*Difficulté : compteur 8/12 --> game over*/
Color(3,0);scanf("%s", encore);printf("\n\n\n\n");Color(15,0);
}


if(strcmp (encore, "non") == 0)
{


if(solution <= 1)
{
Color(15,0);system("\n\nPAUSE\n\n\n");printf("\n\n\n");
Color(4,0);printf("GAME OVER\n\n\n");
Color(14,0);printf("Rappel code checkpoint 2 : 6455\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
return 0;
}

}

}while(solution < 2);    /* Fermeture boucle patineur */




if(solution == 2)      /* Suite chapitre 3 */
{
Color(11,0);printf("\"Bien, je sais maintenant pourquoi le zoo est ferme, et j'ai gagne un the !\n");
printf("J'en ai assez de tourner sur la glace, allons-voir ce qui se passe ailleurs.\n");
printf("Peut-etre que Karl aura fini d'installer sa machine...\"\n\n\n");
Color(15,0);system("PAUSE");printf("\n\n\n\n");
}


printf("                                Maison\n\n");
Color(10,0);printf("                               1");Color(15,0);printf(" ");Color(0,10);printf(" ");Color(15,0);printf(" ");Color(0,11);printf(" ");Color(11,0);printf(" 2\n");
Color(15,0);printf("                            ");Color(0,10);printf("      ");Color(15,0);printf(" ");Color(0,11);printf("                 \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" ");Color(11,0);printf("  2\n");
Color(15,0);printf("         ");Color(10,0);printf("1                  ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf("    \n");
Color(15,0);printf("         ");Color(0,10);printf("                    ");Color(15,0);printf("                      ");Color(15,0);printf("      Rue des Lauriers\n");printf("     Zoo ");printf("                           ");
Color(15,0);printf("               ");Color(0,12);printf("    ");Color(15,0);printf("                        ");
Color(15,0);printf("          ");Color(0,13);printf("       ");Color(15,0);printf("                                   ");Color(0,12);printf(" ");Color(12,0);printf("  4\n");
Color(15,0);printf("         ");Color(13,0);printf("3     ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf("                  ");Color(15,0);printf(" ");Color(0,12);printf("                  \n");
Color(15,0);printf("                                ");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" \n");
Color(15,0);printf("                               ");Color(13,0);printf("3");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" ");Color(12,0);printf(" 4\n\n");
Color(15,0);printf("                         Au cafe des mysteres\n\n\n");Color(15,0);

Color(3,0);scanf("%ld", &ChoixBus14);printf("\n\n");Color(15,0);


printf("Desole, le jeu s'arrete ici car il n'est pas encore fini... Patience !\n\n\n");



}

}/* Fin checkpoint 1 */











if(checkpoint == 6455)
{

           Color(2,0);    printf("                      *   *   *   *  Chapitre 3  *   *   *   * \n\n\n\n");



Color(11,0);printf("\"Me voici arrive au parc municipal. Je vais me diriger vers la patinoire\n");
printf("a ciel ouvert. Si je ne peux pas aller au zoo, j'irai au moins faire\n");
printf("quelques ronds sur la glace !\"\n\n\n");
Color(15,0);system("PAUSE");printf("\n\n\n");
Color(8,0);printf("Vous etes maintenant devant la patinoire. Que faire ?\n\n\n");Color(15,0);

Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");Color(15,0);


if (strcmp (action, "regarder") != 0) if (strcmp (objet1, "patinoire") != 0)
{
   do {
   do {

Color(11,0);printf("Non, ce ne sont pas mes plans !\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Que faire ?\n\n\n");Color(15,0);
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");Color(15,0);

      } while (strcmp (action, "regarder") != 0);

      } while (strcmp (objet1, "patinoire") != 0);
}

if (strcmp (action, "regarder") != 0) if (strcmp (objet1, "patinoire") != 1)
{
   do {
   do {

Color(11,0);printf("Euh... On verra ca plus tard !\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Que faire ?\n\n\n");Color(15,0);
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");Color(15,0);

      } while (strcmp (action, "regarder") != 0);

      } while (strcmp (objet1, "patinoire") != 0);
}

if (strcmp (action, "regarder") != 1) if (strcmp (objet1, "patinoire") != 0)
{
   do {
   do {

Color(11,0);printf("Ce n'est pas tres interessant !\n\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
Color(11,0);printf("Que faire ?\n\n\n");Color(15,0);
Color(3,0);scanf("%s", action);scanf("%s", objet1);printf("\n\n");Color(15,0);

      } while (strcmp (action, "regarder") != 0);

      } while (strcmp (objet1, "patinoire") != 0);
}

Color(11,0);printf("\"Wow ! Il y a vraiment beaucoup de monde aujourd'hui. Je crois que je\n");
printf("n'avais jamais vu la patinoire aussi frequentee. Ca fait plaisir a voir,\n");
printf("en revanche, ca va vraiment etre difficile de retrouver quelqu'un\n");
printf("la-dedans ! Voyons-voir, qui pourrait me renseigner ?\"\n\n\n");
Color(15,0);system("PAUSE");printf("\n\n\n");

        /*parler patineurs*/


do {    /* Ouverture boucle patineur */

printf("  ");Color(0,9);printf("       \n");Color(15,0);
printf("  ");Color(0,9);printf("       \n");Color(15,0);
printf("  ");Color(0,9);printf("       ");Color(15,0);       printf("                    ");Color(0,4);printf("      ");Color(15,0);    printf("      "); Color(0,5);printf("        \n");Color(15,0);

Color(0,9);printf("   ");Color(0,9);printf("      ");Color(0,9);printf("   ");Color(15,0);      printf("    ");Color(0,15);printf("      ");Color(15,0);printf(" ");      printf("     ");Color(0,4);printf(" ");Color(0,15);printf("      ");Color(0,4);printf(" ");Color(15,0);printf(" ");      printf("    ");Color(0,5);printf("  ");Color(0,5);printf("      ");Color(0,5);printf("     ");Color(15,0);      printf(" ");Color(0,15);printf("      ");Color(15,0);printf(" ");      printf("     ");Color(0,6);printf(" ");Color(0,6);printf("      ");Color(0,6);printf(" ");Color(15,0);printf(" \n");

printf("  ");Color(0,15);printf(" ");Color(15,0);printf("      ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("   ");Color(0,10);printf(" ");Color(0,10);printf(" ");Color(0,10);printf("      ");Color(0,10);printf(" ");Color(0,10);printf(" ");Color(15,0);printf(" ");      printf("  ");Color(0,4);printf(" ");Color(0,15);printf(" ");Color(15,0);printf("      ");Color(0,15);printf(" ");Color(0,4);printf(" ");Color(15,0);printf(" ");      printf("   ");Color(0,15);printf(" ");Color(15,0);printf("      ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("    ");Color(0,15);printf(" ");Color(15,0);printf("      ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("   ");Color(0,6);printf(" ");Color(0,6);printf(" ");Color(0,6);printf("      ");Color(0,6);printf("  ");Color(15,0);printf(" \n");

printf(" ");Color(0,15);printf(" ");Color(15,0);printf("        ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("  ");Color(0,15);printf(" ");Color(15,0);printf("        ");Color(0,15);printf(" ");Color(15,0);printf(" ");      Color(0,4);printf("  ");Color(0,15);printf(" ");Color(15,0);printf("        ");Color(0,15);printf(" ");Color(15,0);Color(0,4);printf("  ");Color(15,0);      printf(" ");Color(0,15);printf(" ");Color(15,0);printf("        ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("  ");Color(0,15);printf(" ");Color(15,0);printf("        ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf(" ");Color(0,6);printf(" ");Color(0,6);printf(" ");Color(15,0);printf("        ");Color(0,6);printf(" ");Color(0,6);printf(" ");Color(15,0);printf(" \n");

printf(" ");Color(0,15);printf(" ");Color(15,0);printf("  ");Color(0,15);printf(" ");Color(15,0);printf("  ");Color(0,15);printf(" ");Color(15,0);printf("  ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("  ");Color(0,15);printf(" ");Color(15,0);printf("  ");Color(0,15);printf(" ");Color(15,0);printf("  ");Color(0,15);printf(" ");Color(15,0);printf("  ");Color(0,15);printf(" ");Color(15,0);printf(" ");      Color(0,4);printf("  ");Color(0,15);printf(" ");Color(15,0);printf("  ");Color(0,15);printf(" ");Color(15,0);printf("  ");Color(0,15);printf(" ");Color(15,0);printf("  ");Color(0,15);printf(" ");Color(15,0);Color(0,4);printf("  ");Color(15,0);      printf(" ");Color(0,15);printf(" ");Color(15,0);printf("  ");Color(0,15);printf(" ");Color(15,0);printf("  ");Color(0,15);printf(" ");Color(15,0);printf("  ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("  ");Color(0,15);printf(" ");Color(15,0);printf("  ");Color(0,3);printf(" ");Color(15,0);printf("  ");Color(0,3);printf(" ");Color(15,0);printf("  ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf(" ");Color(0,6);printf(" ");Color(0,6);printf(" ");Color(15,0);printf("  ");Color(0,15);printf(" ");Color(15,0);printf("  ");Color(0,15);printf(" ");Color(15,0);printf("  ");Color(0,6);printf(" ");Color(0,6);printf(" ");Color(15,0);printf(" \n");

printf(" ");Color(0,15);printf(" ");Color(15,0);printf("        ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("  ");Color(0,15);printf(" ");Color(15,0);printf("        ");Color(0,15);printf(" ");Color(15,0);printf(" ");      Color(0,4);printf("  ");Color(0,15);printf(" ");Color(15,0);printf("        ");Color(0,15);printf(" ");Color(15,0);Color(0,4);printf("  ");Color(15,0);      printf(" ");Color(0,15);printf(" ");Color(15,0);printf("        ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("  ");Color(0,15);printf(" ");Color(15,0);printf("        ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("  ");Color(0,15);printf(" ");Color(15,0);printf("        ");Color(0,15);printf(" ");Color(15,0);printf(" \n");

printf(" ");Color(0,15);printf(" ");Color(15,0);printf("   ");Color(0,15);printf("  ");Color(15,0);printf("   ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("  ");Color(0,15);printf(" ");Color(15,0);printf("   ");Color(0,15);printf("  ");Color(15,0);printf("   ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("  ");Color(0,15);printf(" ");Color(15,0);printf("   ");Color(0,15);printf("  ");Color(15,0);printf("   ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("  ");Color(0,15);printf(" ");Color(15,0);printf("   ");Color(0,15);printf("  ");Color(15,0);printf("   ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("  ");Color(0,15);printf(" ");Color(15,0);printf("   ");Color(0,15);printf("  ");Color(15,0);printf("   ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("  ");Color(0,15);printf(" ");Color(15,0);printf("   ");Color(0,15);printf("  ");Color(15,0);printf("   ");Color(0,15);printf(" ");Color(15,0);printf(" \n");

printf("  ");Color(0,15);printf(" ");Color(15,0);printf("      ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("    ");Color(0,15);printf(" ");Color(15,0);printf("      ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("    ");Color(0,15);printf(" ");Color(15,0);printf("      ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("    ");Color(0,15);printf(" ");Color(15,0);printf("      ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("    ");Color(0,15);printf(" ");Color(15,0);printf("      ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("    ");Color(0,15);printf(" ");Color(15,0);printf("      ");Color(0,15);printf(" ");Color(15,0);printf(" \n");

Color(0,8);printf("1");Color(15,0);printf("  ");Color(0,15);printf("      ");Color(15,0);printf("    ");      Color(0,8);printf("2");Color(15,0);printf("  ");Color(0,15);printf("      ");Color(15,0);printf("    ");      Color(0,8);printf("3");Color(15,0);printf("  ");Color(0,15);printf("      ");Color(15,0);printf("    ");      Color(0,8);printf("4");Color(15,0);printf("  ");Color(0,15);printf("      ");Color(15,0);printf("    ");      Color(0,8);printf("5");Color(15,0);printf("  ");Color(0,15);printf("      ");Color(15,0);printf("    ");      Color(0,8);printf("6");Color(15,0);printf("  ");Color(0,15);printf("      ");Color(15,0);printf(" \n");



printf("\n");


printf("   ");Color(0,15);printf("      ");Color(15,0);printf(" ");      printf("      ");Color(0,15);printf("      ");Color(15,0);printf(" ");      printf("      ");Color(0,15);printf("      ");Color(15,0);printf(" ");      printf("      ");Color(0,15);printf("      ");Color(15,0);printf(" ");      printf("      ");Color(0,15);printf("      ");Color(15,0);printf(" ");      printf("      ");Color(0,15);printf("      ");Color(15,0);printf(" \n");

printf("  ");Color(0,15);printf(" ");Color(15,0);printf("      ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("    ");Color(0,15);printf(" ");Color(15,0);printf("      ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("    ");Color(0,15);printf(" ");Color(15,0);printf("      ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("    ");Color(0,15);printf(" ");Color(15,0);printf("      ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("    ");Color(0,15);printf(" ");Color(15,0);printf("      ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("    ");Color(0,15);printf(" ");Color(15,0);printf("      ");Color(0,15);printf(" ");Color(15,0);printf(" \n");

printf(" ");Color(0,15);printf(" ");Color(15,0);printf("        ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("  ");Color(0,15);printf(" ");Color(15,0);printf("        ");Color(0,15);printf(" ");Color(15,0);printf(" ");printf("  ");Color(0,15);printf(" ");Color(15,0);printf("        ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("  ");Color(0,15);printf(" ");Color(15,0);printf("        ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("  ");Color(0,15);printf(" ");Color(15,0);printf("        ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("  ");Color(0,15);printf(" ");Color(15,0);printf("        ");Color(0,15);printf(" ");Color(15,0);printf(" \n");

printf(" ");Color(0,15);printf(" ");Color(15,0);printf("  ");Color(0,15);printf(" ");Color(15,0);printf("  ");Color(0,15);printf(" ");Color(15,0);printf("  ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("  ");Color(0,15);printf(" ");Color(15,0);printf("  ");Color(0,15);printf(" ");Color(15,0);printf("  ");Color(0,15);printf(" ");Color(15,0);printf("  ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("  ");Color(0,15);printf(" ");Color(15,0);printf("  ");Color(0,15);printf(" ");Color(15,0);printf("  ");Color(0,15);printf(" ");Color(15,0);printf("  ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("  ");Color(0,15);printf(" ");Color(15,0);printf("  ");Color(0,15);printf(" ");Color(15,0);printf("  ");Color(0,15);printf(" ");Color(15,0);printf("  ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("  ");Color(0,15);printf(" ");Color(15,0);printf("  ");Color(0,15);printf(" ");Color(15,0);printf("  ");Color(0,15);printf(" ");Color(15,0);printf("  ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("  ");Color(0,15);printf(" ");Color(15,0);printf("  ");Color(0,2);printf(" ");Color(15,0);printf("  ");Color(0,2);printf(" ");Color(15,0);printf("  ");Color(0,15);printf(" ");Color(15,0);printf(" \n");

printf(" ");Color(0,15);printf(" ");Color(15,0);printf("        ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("  ");Color(0,15);printf(" ");Color(15,0);printf("        ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("  ");Color(0,15);printf(" ");Color(15,0);printf("        ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("  ");Color(0,15);printf(" ");Color(15,0);printf("        ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("  ");Color(0,15);printf(" ");Color(15,0);printf("        ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("  ");Color(0,15);printf(" ");Color(15,0);printf("        ");Color(0,15);printf(" ");Color(15,0);printf(" \n");

printf(" ");Color(0,15);printf(" ");Color(15,0);printf("   ");Color(0,15);printf("  ");Color(15,0);printf("   ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("  ");Color(0,15);printf(" ");Color(15,0);printf("   ");Color(0,15);printf("  ");Color(15,0);printf("   ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("  ");Color(0,15);printf(" ");Color(15,0);printf("  ");Color(0,8);printf(" ");Color(0,15);printf("  ");Color(0,8);printf(" ");Color(15,0);printf("  ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("  ");Color(0,15);printf(" ");Color(15,0);printf("   ");Color(0,15);printf("  ");Color(15,0);printf("   ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("  ");Color(0,15);printf(" ");Color(15,0);printf("   ");Color(0,15);printf("  ");Color(15,0);printf("   ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("  ");Color(0,15);printf(" ");Color(15,0);printf("   ");Color(0,15);printf("  ");Color(15,0);printf("   ");Color(0,15);printf(" ");Color(15,0);printf(" \n");

printf("  ");Color(0,13);printf(" ");Color(15,0);printf("      ");Color(0,13);printf(" ");Color(15,0);printf(" ");      printf("    ");Color(0,15);printf(" ");Color(15,0);printf("      ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("    ");Color(0,8);printf("   ");Color(15,0);printf("  ");Color(0,8);printf("   ");Color(15,0);printf(" ");      printf("    ");Color(0,15);printf(" ");Color(15,0);printf("      ");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("    ");Color(0,15);printf(" ");Color(15,0);printf("");Color(0,12);printf("  ");Color(15,0);printf("  ");Color(0,12);printf("  ");Color(15,0);printf("");Color(0,15);printf(" ");Color(15,0);printf(" ");      printf("    ");Color(0,15);printf(" ");Color(15,0);printf("      ");Color(0,15);printf(" ");Color(15,0);printf(" \n");

Color(0,8);printf("7");Color(15,0);printf(" ");Color(0,13);printf(" ");Color(0,13);printf("      ");Color(0,13);printf(" ");Color(15,0);printf("  ");      Color(0,8);printf("8");Color(15,0);printf(" ");Color(0,14);printf(" ");Color(15,0);printf(" ");Color(0,15);printf("      ");Color(15,0);printf(" ");      Color(0,14);printf(" ");Color(15,0);printf("  ");      Color(0,8);printf("9");Color(15,0);printf(" ");Color(0,8);printf("        ");Color(15,0);printf(" ");      Color(0,8);printf("10");Color(15,0);printf(" ");Color(0,2);printf(" ");Color(15,0);printf(" ");Color(0,15);printf("      ");Color(15,0);printf("   ");      Color(0,8);printf("11");Color(15,0);printf("  ");Color(0,15);printf(" ");Color(0,12);printf("    ");Color(0,15);printf(" ");Color(15,0);printf("   ");      Color(0,8);printf("12");Color(15,0);printf("  ");Color(0,15);printf("      ");Color(15,0);printf(" \n");

printf("    ");Color(0,13);printf("   ");Color(15,0);       printf("                       "); Color(0,8);printf("    ");Color(15,0);      printf("                     ");Color(0,12);printf("  ");Color(15,0);printf("  ");Color(0,12);printf("  \n");Color(15,0);
printf("   ");Color(0,13);printf(" ");Color(15,0);printf("   ");Color(0,13);printf(" ");Color(15,0);      printf("                       "); Color(0,8);printf("  \n");Color(15,0);
printf("  ");Color(0,13);printf(" ");Color(15,0);printf("     ");Color(0,13);printf(" \n");Color(15,0);

Color(3,0);scanf("%ld", &Patineur);printf("\n\n");Color(15,0);



if(Patineur == 1)
{


Color(15,0);printf("-Oui, c'est pour quoi ?\n\n\n");essai++;
Color(8,0);printf("1 : Zoo\n\n");
printf("2 : Gardien\n\n");
printf("3 : Quitter\n\n\n");
Color(3,0);scanf("%ld", &P1);printf("\n\n");Color(15,0);


Color(11,0);printf("\"Bonjour.\"\n\n");Color(15,0);

do {

      if(P1 == 1)
      {
Color(11,0);printf("\"Sauriez-vous pourquoi le zoo est reste ferme ?\"\n\n\n");
Color(15,0);printf("-Ah non, aucune idee !\n\n\n");
system("PAUSE\n\n");printf("\n\n");
printf("-Quoi encore ?\n\n\n\n");
Color(8,0);printf("1 : Zoo\n\n");
printf("2 : Gardien\n\n");
printf("3 : Quitter\n\n\n");
Color(3,0);scanf("%ld", &P1);printf("\n\n");Color(15,0);
}




      if(P1 == 2)
      {
Color(11,0);printf("\"Auriez-vous vu le gardien du zoo trainer dans le coin, par hasard ?\"\n\n\n");
Color(15,0);printf("-A vous de me le dire, je ne sais meme pas a quoi il ressemble !\n\n\n");
Color(11,0);printf("\"D'accord, merci quand meme !\"\n\n\n");
Color(15,0);system("PAUSE\n\n");printf("\n\n");
printf("-Quoi encore ?\n\n\n\n");
Color(8,0);printf("1 : Zoo\n\n");
printf("2 : Gardien\n\n");
printf("3 : Quitter\n\n\n");
Color(3,0);scanf("%ld", &P1);printf("\n\n");Color(15,0);
             }



if(P1 == 3)
{
Color(11,0);printf("\"Euh... Non rien. Bonne journee !\"\n\n\n");Color(15,0);
}


}while(P1 <= 2); /* P1 */

}





if(Patineur == 2)
{


Color(15,0);printf("-Que me voulez-vous ?\n\n\n");essai++;
Color(8,0);printf("1 : Zoo \n\n");
printf("2 : Boucle d'oreille\n\n");
printf("3 : Quitter\n\n\n");
Color(3,0);scanf("%ld", &P2);printf("\n\n");Color(15,0);


Color(11,0);printf("\"Bonjour.\"\n\n");Color(15,0);

do {

      if(P2 == 1)
      {
Color(11,0);printf("\"Le zoo serait-il en greve ?\"\n\n\n");
Color(15,0);printf("-Demandez cela au journal !\n\n\n");
system("PAUSE\n\n");printf("\n\n");
printf("-Autre chose ?\n\n\n\n");
Color(8,0);printf("1 : Zoo \n\n");
printf("2 : Boucle d'oreille\n\n");
printf("3 : Quitter\n\n\n");
Color(3,0);scanf("%ld", &P2);printf("\n\n");Color(15,0);
}




      if(P2 == 2)
      {
Color(11,0);printf("\"Auriez-vous apercu une femme avec une seule boucle d'oreille ?\"\n\n\n");
Color(15,0);printf("-C'est possible, cherchez encore !\n\n\n");
Color(11,0);printf("\"Merci !\"\n\n\n");
Color(15,0);system("PAUSE\n\n");printf("\n\n");
printf("-Autre chose ?\n\n\n\n");
Color(8,0);printf("1 : Zoo \n\n");
printf("2 : Boucle d'oreille\n\n");
printf("3 : Quitter\n\n\n");
Color(3,0);scanf("%ld", &P2);printf("\n\n");Color(15,0);
             }



if(P2 == 3)
{
Color(11,0);printf("\"Euh... Non rien. Bonne journee !\"\n\n\n");Color(15,0);
}


}while(P2 <= 2); /* P2 */

}





if(Patineur == 3)
{


Color(15,0);printf("-Qu'est-ce que tu dis ?\n\n\n");essai++;
Color(8,0);printf("1 : Gardien \n\n");
printf("2 : Musique\n\n");
printf("3 : Quitter\n\n\n");
Color(3,0);scanf("%ld", &P3);printf("\n\n");Color(15,0);


Color(11,0);printf("\"Bonjour.\"\n\n");Color(15,0);

do {

      if(P3 == 1)
      {
Color(11,0);printf("\"Auriez-vous vu quelqu'un qui ressemble au gardien du zoo ?\"\n\n\n");
Color(15,0);printf("-Ca mec, j'en sais rien ! Mais demande donc a cet homme avec\n\n");
printf("le haut de forme, il connait presque tout le monde ici.\n\n\n");
system("PAUSE\n\n");printf("\n\n");
printf("-Tu disais ?\n\n\n\n");
Color(8,0);printf("1 : Gardien\n\n");
printf("2 : Musique\n\n");
printf("3 : Quitter\n\n\n");
Color(3,0);scanf("%ld", &P3);printf("\n\n");Color(15,0);
}




      if(P3 == 2)
      {
Color(11,0);printf("\"Qu'est-ce que vous ecoutez comme musique ?\"\n\n\n");
Color(15,0);printf("-Toujours Yiruma quand je suis sur la glace !\n\n\n");
Color(11,0);printf("\"Ah oui, quel virtuose du piano !\"\n\n\n");
Color(15,0);system("PAUSE\n\n");printf("\n\n");
printf("-Tu disais ?\n\n\n\n");
Color(8,0);printf("1 : Gardien\n\n");
printf("2 : Musique\n\n");
printf("3 : Quitter\n\n\n");
Color(3,0);scanf("%ld", &P3);printf("\n\n");Color(15,0);
             }



if(P3 == 3)
{
Color(11,0);printf("\"Euh... Non rien. Bonne journee !\"\n\n\n");Color(15,0);
}


}while(P3 <= 2); /* P3 */

}





if(Patineur == 4)
{


Color(15,0);printf("-Hmm... ?\n\n\n");essai++;
Color(8,0);printf("1 : Zoo\n\n");
printf("2 : Boucle d'oreille\n\n");
printf("3 : Quitter\n\n\n");
Color(3,0);scanf("%ld", &P4);printf("\n\n");Color(15,0);


Color(11,0);printf("\"Bonjour.\"\n\n");Color(15,0);

do {

      if(P4 == 1)
      {
Color(11,0);printf("\"Seriez-vous le gardien du zoo ?\"\n\n\n");solution++;
Color(15,0);printf("-En chair et en os !\n\n\n");
system("PAUSE\n\n");printf("\n\n");
Color(11,0);printf("\"Pourquoi le zoo est-il ferme ?\"\n\n\n");
Color(15,0);printf("-Je sais bien qu'il devrait etre ouvert, et je suis le premier\n\n");
Color(15,0);printf("a le deplorer, mais j'ai eu un petit souci en arrivant ce matin.\n\n");
Color(15,0);printf("Voila, la serrure etait gelee et je n'ai pas pu ouvrir la grille\n\n");
Color(15,0);printf("principale. Peut-etre les rayons du soleil auront-ils regle\n\n");
Color(15,0);printf("le probleme d'ici cette apres-midi.\n\n\n");
system("PAUSE\n\n");printf("\n\n");
Color(11,0);printf("\"Ne peut-on vraiment rien faire d'autre qu'attendre ?\"\n\n\n");
Color(15,0);printf("-Eh bien, je vois que vous avez une grande envie d'aller au zoo,\n\n");
Color(15,0);printf("jeune homme ! Tres bien, j'irai voir ce qu'il en est dans deux\n\n");
Color(15,0);printf("heures, mais je ne vous promets rien.\n\n\n");
system("PAUSE\n\n");printf("\n\n");
printf("-Hmm... ?\n\n\n\n");
Color(8,0);printf("1 : Zoo\n\n");
printf("2 : Boucle d'oreille\n\n");
printf("3 : Quitter\n\n\n");
Color(3,0);scanf("%ld", &P4);printf("\n\n");Color(15,0);
}




      if(P4 == 2)
      {
Color(11,0);printf("\"Auriez-vous apercu une femme avec une seule boucle d'oreille ?\"\n\n\n");
Color(15,0);printf("-Vous en avez de droles de questions, vous !\n\n\n");
Color(11,0);printf("\"Merci quand meme !\"\n\n\n");
Color(15,0);system("PAUSE\n\n");printf("\n\n");
printf("-Hmm... ?\n\n\n\n");
Color(8,0);printf("1 : Zoo\n\n");
printf("2 : Boucle d'oreille\n\n");
printf("3 : Quitter\n\n\n");
Color(3,0);scanf("%ld", &P4);printf("\n\n");Color(15,0);
             }



if(P4 == 3)
{
Color(11,0);printf("\"Euh... Non rien. Bonne journee !\"\n\n\n");Color(15,0);
}


}while(P4 <= 2); /* P4 */

}





if(Patineur == 5)
{


Color(15,0);printf("-Oui ?\n\n\n");essai++;
Color(8,0);printf("1 : Zoo\n\n");
printf("2 : Gardien\n\n");
printf("3 : Quitter\n\n\n");
Color(3,0);scanf("%ld", &P5);printf("\n\n");Color(15,0);


Color(11,0);printf("\"Bonjour.\"\n\n");Color(15,0);

do {

      if(P5 == 1)
      {
Color(11,0);printf("\"Sauriez-vous pourquoi le zoo est ferme ?\"\n\n\n");
Color(15,0);printf("-Ah non, pas du tout !\n\n\n");
system("PAUSE\n\n");printf("\n\n");
printf("-Oui ?\n\n\n\n");
Color(8,0);printf("1 : Zoo\n\n");
printf("2 : Gardien\n\n");
printf("3 : Quitter\n\n\n");
Color(3,0);scanf("%ld", &P5);printf("\n\n");Color(15,0);
}




      if(P5 == 2)
      {
Color(11,0);printf("\"Ou est le gardien du zoo ?\"\n\n\n");
Color(15,0);printf("-Allez demander a la mere Michelle, c'est celle avec l'echarpe\n\n\n");
Color(15,0);printf("rose, elle doit savoir quelque chose.\n\n\n");
Color(11,0);printf("\"Merci beaucoup !\"\n\n\n");
Color(15,0);system("PAUSE\n\n");printf("\n\n");
printf("-Oui ?\n\n\n\n");
Color(8,0);printf("1 : Zoo\n\n");
printf("2 : Gardien\n\n");
printf("3 : Quitter\n\n\n");
Color(3,0);scanf("%ld", &P5);printf("\n\n");Color(15,0);
             }



if(P5 == 3)
{
Color(11,0);printf("\"Euh... Non rien. Bonne journee !\"\n\n\n");Color(15,0);
}


}while(P5 <= 2); /* P5 */

}





if(Patineur == 6)
{


Color(15,0);printf("-... ?\n\n\n");essai++;
Color(8,0);printf("1 : Zoo\n\n");
printf("2 : Boucle d'oreille\n\n");
printf("3 : Quitter\n\n\n");
Color(3,0);scanf("%ld", &P6);printf("\n\n");Color(15,0);


Color(11,0);printf("\"Bonjour.\"\n\n");Color(15,0);

do {

      if(P6 == 1)
      {
Color(11,0);printf("\"Le gardien du zoo est-il un deserteur ?\"\n\n\n");
Color(15,0);printf("-Peut-etre !\n\n\n");
system("PAUSE\n\n");printf("\n\n");
printf("-... ?\n\n\n\n");
Color(8,0);printf("1 : Zoo\n\n");
printf("2 : Boucle d'oreille\n\n");
printf("3 : Quitter\n\n\n");
Color(3,0);scanf("%ld", &P6);printf("\n\n");Color(15,0);
}




      if(P6 == 2)
      {
Color(11,0);printf("\"A qui appartient cette boucle d'oreille ?\"\n\n\n");
Color(15,0);printf("-Oh, mais elle est d'un magnifique vert emeraude... J'en sais rien !\n\n\n");
Color(11,0);printf("\"Merci quand meme !\"\n\n\n");
Color(15,0);system("PAUSE\n\n");printf("\n\n");
printf("-... ?\n\n\n\n");
Color(8,0);printf("1 : Zoo\n\n");
printf("2 : Boucle d'oreille\n\n");
printf("3 : Quitter\n\n\n");
Color(3,0);scanf("%ld", &P6);printf("\n\n");Color(15,0);
             }



if(P6 == 3)
{
Color(11,0);printf("\"Euh... Non rien. Bonne journee !\"\n\n\n");Color(15,0);
}


}while(P6 <= 2); /* P6 */

}





if(Patineur == 7)
{


Color(15,0);printf("-Que puis-je faire pour vous, mon garcon ?\n\n\n");essai++;
Color(8,0);printf("1 : Gardien\n\n");
printf("2 : Chat\n\n");
printf("3 : Quitter\n\n\n");
Color(3,0);scanf("%ld", &P7);printf("\n\n");Color(15,0);


Color(11,0);printf("\"Bonjour.\"\n\n");Color(15,0);

do {

      if(P7 == 1)
      {
Color(11,0);printf("\"Auriez-vous vu le gardien du zoo ?\"\n\n\n");
Color(15,0);printf("-Je ne crois pas. Il devrait avoir une casquette, non ?\n\n\n");
system("PAUSE\n\n");printf("\n\n");
printf("-Autre chose ?\n\n\n\n");
Color(8,0);printf("1 : Gardien\n\n");
printf("2 : Chat\n\n");
printf("3 : Quitter\n\n\n");
Color(3,0);scanf("%ld", &P7);printf("\n\n");Color(15,0);
}




      if(P7 == 2)
      {
Color(11,0);printf("\"Vous n'auriez pas perdu votre chat par hasard ? Non, je rigole.\"\n\n\n");
Color(15,0);printf("-En fait si, il n'est pas rentre hier soir !\n\n");
Color(15,0);printf("Si jamais vous le retrouvez, je vous serai eternellement reconnaissante !\n\n\n");
Color(11,0);printf("\"C'est entendu !\"\n\n\n");
Color(15,0);system("PAUSE\n\n");printf("\n\n");
printf("-Autre chose ?\n\n\n\n");
Color(8,0);printf("1 : Gardien\n\n");
printf("2 : Chat\n\n");
printf("3 : Quitter\n\n\n");
Color(3,0);scanf("%ld", &P7);printf("\n\n");Color(15,0);
             }



if(P7 == 3)
{
Color(11,0);printf("\"Euh... Non rien. Bonne journee !\"\n\n\n");Color(15,0);
}


}while(P7 <= 2); /* P7 */

}





if(Patineur == 8)
{


Color(15,0);printf("-Comment ?\n\n\n");essai++;
Color(8,0);printf("1 : Boucle d'oreille\n\n");
printf("2 : Zoo\n\n");
printf("3 : Quitter\n\n\n");
Color(3,0);scanf("%ld", &P8);printf("\n\n");Color(15,0);


Color(11,0);printf("\"Bonjour.\"\n\n");Color(15,0);

do {

      if(P8 == 1)
      {
Color(11,0);printf("\"Est-ce l'une de vos boucles d'oreille ?\"\n\n\n");
Color(15,0);printf("-Faites-voir... Non, je n'en ai pas de cette couleur.\n\n\n");
system("PAUSE\n\n");printf("\n\n");
printf("-Comment ?\n\n\n\n");
Color(8,0);printf("1 : Boucle d'oreille\n\n");
printf("2 : Zoo\n\n");
printf("3 : Quitter\n\n\n");
Color(3,0);scanf("%ld", &P8);printf("\n\n");Color(15,0);
}




      if(P8 == 2)
      {
Color(11,0);printf("\"Que savez-vous a propos du zoo ?\"\n\n\n");
Color(15,0);printf("-Promettez-moi de ne pas le repeter. Il parait que le gardien\n\n");
Color(15,0);printf("a un poil dans la main, et que la direction songe a le remplacer !\n\n\n");
Color(11,0);printf("\"Sans blague !\"\n\n\n");
Color(15,0);system("PAUSE\n\n");printf("\n\n");
printf("-Comment ?\n\n\n\n");
Color(8,0);printf("1 : Boucle d'oreille\n\n");
printf("2 : Zoo\n\n");
printf("3 : Quitter\n\n\n");
Color(3,0);scanf("%ld", &P8);printf("\n\n");Color(15,0);
             }



if(P8 == 3)
{
Color(11,0);printf("\"Euh... Non rien. Bonne journee !\"\n\n\n");Color(15,0);
}


}while(P8 <= 2); /* P8 */

}





if(Patineur == 9)
{


Color(15,0);printf("-C'est a quel sujet ?\n\n\n");essai++;
Color(8,0);printf("1 : Zoo\n\n");
printf("2 : Gardien\n\n");
printf("3 : Quitter\n\n\n");
Color(3,0);scanf("%ld", &P9);printf("\n\n");Color(15,0);


Color(11,0);printf("\"Bonjour.\"\n\n");Color(15,0);

do {

      if(P9 == 1)
      {
Color(11,0);printf("\"Aimez-vous aller au zoo ?\"\n\n\n");
Color(15,0);printf("-Oui, mais il est ferme aujourd'hui !\n\n\n");
system("PAUSE\n\n");printf("\n\n");
printf("-Mais encore ?\n\n\n\n");
Color(8,0);printf("1 : Zoo\n\n");
printf("2 : Gardien\n\n");
printf("3 : Quitter\n\n\n");
Color(3,0);scanf("%ld", &P9);printf("\n\n");Color(15,0);
}




      if(P9 == 2)
      {
Color(11,0);printf("\"Que fait le gardien du zoo ?\"\n\n\n");
Color(15,0);printf("-Cet idiot n'a pas reussi a ouvrir la grille !\n\n\n");
Color(11,0);printf("\"C'est dommage !\"\n\n\n");
Color(15,0);system("PAUSE\n\n");printf("\n\n");
printf("-Mais encore ?\n\n\n\n");
Color(8,0);printf("1 : Zoo\n\n");
printf("2 : Gardien\n\n");
printf("3 : Quitter\n\n\n");
Color(3,0);scanf("%ld", &P9);printf("\n\n");Color(15,0);
             }



if(P9 == 3)
{
Color(11,0);printf("\"Euh... Non rien. Bonne journee !\"\n\n\n");Color(15,0);
}


}while(P9 <= 2); /* P9 */

}





if(Patineur == 10)
{


Color(15,0);printf("-Salut !\n\n\n");essai++;
Color(8,0);printf("1 : Zoo\n\n");
printf("2 : Boucle d'oreille\n\n");
printf("3 : Quitter\n\n\n");
Color(3,0);scanf("%ld", &P10);printf("\n\n");Color(15,0);


Color(11,0);printf("\"Bonjour.\"\n\n");Color(15,0);

do {

      if(P10 == 1)
      {
Color(11,0);printf("\"Que pensez-vous du zoo de cette ville ?\"\n\n\n");
Color(15,0);printf("-Helas, pas grand chose. Il est renomme pour ses beaux specimens\n\n");
Color(15,0);printf("de felins. J'aurai bien voulu le visiter, mais il faut croire\n\n");
Color(15,0);printf("que je n'ai pas choisi le bon jour !\n\n\n");
system("PAUSE\n\n");printf("\n\n");
printf("-Quoi d'autre ?\n\n\n\n");
Color(8,0);printf("1 : Zoo\n\n");
printf("2 : Boucle d'oreille\n\n");
printf("3 : Quitter\n\n\n");
Color(3,0);scanf("%ld", &P10);printf("\n\n");Color(15,0);
}




      if(P10 == 2)
      {
Color(11,0);printf("\"Est-ce que ceci... ?\"\n\n\n");solution++;
Color(15,0);printf("-Oh ! Mais c'est ma boucle d'oreille !\n\n");
Color(15,0);printf("Je croyais l'avoir perdue pour de bon. Ou l'avez-vous trouve ?\n\n\n");
Color(11,0);printf("\"Sur une banquette, au cafe des mysteres.\"\n\n\n");
Color(15,0);printf("-Pour vous remercier, je vous invite a boire un the en ma compagnie\n\n");
Color(15,0);printf("a ce fameux cafe des mysteres. J'en profiterai pour faire plus\n\n");
Color(15,0);printf("ample connaissance avec mon bienfaiteur ^^\n\n");
Color(15,0);printf("Cependant, j'aimerais encore faire quelques tours de piste. Cela\n\n");
Color(15,0);printf("ne vous derange pas si je y vous donne rendez-vous, disons dans une heure ?\n\n\n");
Color(15,0);system("PAUSE\n\n");printf("\n\n");
Color(11,0);printf("\"Pas du tout, tant que vous ne me posez pas un lapin !\"\n\n\n");
Color(15,0);printf("-Je vous promets que non.\n\n\n");
Color(15,0);system("PAUSE\n\n");printf("\n\n");
printf("-Quoi d'autre ?\n\n\n\n");
Color(8,0);printf("1 : Zoo\n\n");
printf("2 : Boucle d'oreille\n\n");
printf("3 : Quitter\n\n\n");
Color(3,0);scanf("%ld", &P10);printf("\n\n");Color(15,0);
             }



if(P10 == 3)
{
Color(11,0);printf("\"Euh... Non rien. Bonne journee !\"\n\n\n");Color(15,0);
}


}while(P10 <= 2); /* P10 */

}





if(Patineur == 11)
{


Color(15,0);printf("-C'est a quel sujet ?\n\n\n");essai++;
Color(8,0);printf("1 : Boucle d'oreille\n\n");
printf("2 : Zoo\n\n");
printf("3 : Quitter\n\n\n");
Color(3,0);scanf("%ld", &P11);printf("\n\n");Color(15,0);


Color(11,0);printf("\"Bonjour.\"\n\n");Color(15,0);

do {

      if(P11 == 1)
      {
Color(11,0);printf("\"Cette boucle d'oreille vous dit-elle quelque chose ?\"\n\n\n");
Color(15,0);printf("-Pas le moins du monde ! Mais demandez donc a la mere Michelle.\n\n");
Color(15,0);printf("Vous la reconnaitrez facilement, a son age, elle se couvre du froid.\n\n\n");
system("PAUSE\n\n");printf("\n\n");
printf("-Quoi donc ?\n\n\n\n");
Color(8,0);printf("1 : Boucle d'oreille\n\n");
printf("2 : Zoo\n\n");
printf("3 : Quitter\n\n\n");
Color(3,0);scanf("%ld", &P11);printf("\n\n");Color(15,0);
}




      if(P11 == 2)
      {
Color(11,0);printf("\"Si je vous dis zoo... ?\"\n\n\n");
Color(15,0);printf("-Quelle honte ! Enfermer ces pauvres animaux, si loin de chez eux !\n\n\n");
Color(11,0);printf("\"Vous n'avez pas tort... D'un autre cote, certaines especes menacees\n\n");
Color(11,0);printf("se reproduisent en toute securite, et sont parfois reintroduites\n\n");
Color(11,0);printf("dans leur milieu naturel, grace a des programme de protection.\"\n\n\n");
Color(15,0);printf("-L'etre humain peut bien tenter de reparer, ca n'effacera pas ses erreurs !\n\n\n");
Color(11,0);printf("\"...\"\n\n\n");
Color(15,0);system("PAUSE\n\n");printf("\n\n");
printf("-Quoi donc ?\n\n\n\n");
Color(8,0);printf("1 : Boucle d'oreille\n\n");
printf("2 : Zoo\n\n");
printf("3 : Quitter\n\n\n");
Color(3,0);scanf("%ld", &P11);printf("\n\n");Color(15,0);
             }



if(P11 == 3)
{
Color(11,0);printf("\"Euh... Non rien. Bonne journee !\"\n\n\n");Color(15,0);
}


}while(P11 <= 2); /* P11 */

}





if(Patineur == 12)
{


Color(15,0);printf("- Hello ! What's up ?\n\n\n");essai++;
Color(8,0);printf("1 : Francais\n\n");
printf("2 : Zoo\n\n");
printf("3 : Quitter\n\n\n");
Color(3,0);scanf("%ld", &P12);printf("\n\n");Color(15,0);


Color(11,0);printf("\"Hi !\"\n\n");Color(15,0);

do {

      if(P12 == 1)
      {
Color(11,0);printf("\"Vous ne parlez pas francais ?\"\n\n\n");
Color(15,0);printf("-Sorry, what ? I didn't understand.\n\n\n");
system("PAUSE\n\n");printf("\n\n");
Color(11,0);printf("\"I said, you don't speak French ?\"\n\n\n");
Color(15,0);printf("-Oh no, too hard for me. I'm here for my hollydays, and I've to\n\n");
Color(15,0);printf("say that I'm in love with this town !\n\n\n");
system("PAUSE\n\n");printf("\n\n");
printf("-What can I do for you ?\n\n\n\n");
Color(8,0);printf("1 : Francais\n\n");
printf("2 : Zoo\n\n");
printf("3 : Quitter\n\n\n");
Color(3,0);scanf("%ld", &P12);printf("\n\n");Color(15,0);
}




      if(P12 == 2)
      {
Color(11,0);printf("\"You must visit our zoo, he's wonderful. By the way, do you know\n\nwhere is the guard ?\"\n\n\n");
Color(15,0);printf("-Not really, but I think you should ask to this guy with the blue eyes.\n\n\n");
Color(11,0);printf("\"Thanks ! Enjoy your hollydays.\"\n\n\n");
Color(15,0);system("PAUSE\n\n");printf("\n\n");
printf("-What can I do for you ?\n\n\n\n");
Color(8,0);printf("1 : Francais\n\n");
printf("2 : Zoo\n\n");
printf("3 : Quitter\n\n\n");
Color(3,0);scanf("%ld", &P12);printf("\n\n");Color(15,0);
             }



if(P12 == 3)
{
Color(11,0);printf("\"Hum... No, forget it. Have a nice day !\"\n\n\n");Color(15,0);
}


}while(P12 <= 2); /* P12 */

}







 printf("\n\n");system("PAUSE");printf("\n\n\n");






if(essai >= 8)
{
Color(15,0);system("\n\nPAUSE\n\n\n");printf("\n\n\n");
Color(8,0);printf("Plus personne ne veut te parler, tu as epuise ta credibilite.\n\n\n");
Color(4,0);printf("GAME OVER\n\n\n");
Color(14,0);printf("Rappel code checkpoint 2 : 6455\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
return 0;
}

if (solution < 2)
{
Color(8,0);printf("Continuer a parler aux patineurs ?\n\n\n");                        /*Difficulté : compteur 8/12 --> game over*/
Color(3,0);scanf("%s", encore);printf("\n\n\n\n");Color(15,0);
}


if(strcmp (encore, "non") == 0)
{


if(solution <= 1)
{
Color(15,0);system("\n\nPAUSE\n\n\n");printf("\n\n\n");
Color(4,0);printf("GAME OVER\n\n\n");
Color(14,0);printf("Rappel code checkpoint 2 : 6455\n\n\n");Color(15,0);system("PAUSE");printf("\n\n\n");
return 0;
}

}

}while(solution < 2);    /* Fermeture boucle patineur */




if(solution == 2)      /* Suite chapitre 3 */
{
Color(11,0);printf("\"Bien, je sais maintenant pourquoi le zoo est ferme, et j'ai gagne un the !\n");
printf("J'en ai assez de tourner sur la glace, allons-voir ce qui se passe ailleurs.\n");
printf("Peut-etre que Karl aura fini d'installer sa machine...\"\n\n\n");
Color(15,0);system("PAUSE");printf("\n\n\n\n");
}


printf("                                Maison\n\n");
Color(10,0);printf("                               1");Color(15,0);printf(" ");Color(0,10);printf(" ");Color(15,0);printf(" ");Color(0,11);printf(" ");Color(11,0);printf(" 2\n");
Color(15,0);printf("                            ");Color(0,10);printf("      ");Color(15,0);printf(" ");Color(0,11);printf("                 \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" \n");
Color(15,0);printf("                            ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf(" ");Color(11,0);printf("  2\n");
Color(15,0);printf("         ");Color(10,0);printf("1                  ");Color(0,10);printf(" ");Color(15,0);printf("                      ");Color(0,11);printf("    \n");
Color(15,0);printf("         ");Color(0,10);printf("                    ");Color(15,0);printf("                      ");Color(15,0);printf("      Rue des Lauriers\n");printf("     Zoo ");printf("                           ");
Color(15,0);printf("               ");Color(0,12);printf("    ");Color(15,0);printf("                        ");
Color(15,0);printf("          ");Color(0,13);printf("       ");Color(15,0);printf("                                   ");Color(0,12);printf(" ");Color(12,0);printf("  4\n");
Color(15,0);printf("         ");Color(13,0);printf("3     ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf(" ");Color(15,0);printf("                                   ");Color(0,12);printf(" \n");
Color(15,0);printf("               ");Color(0,13);printf("                  ");Color(15,0);printf(" ");Color(0,12);printf("                  \n");
Color(15,0);printf("                                ");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" \n");
Color(15,0);printf("                               ");Color(13,0);printf("3");Color(0,13);printf(" ");Color(15,0);printf(" ");Color(0,12);printf(" ");Color(12,0);printf(" 4\n\n");
Color(15,0);printf("                         Au cafe des mysteres\n\n\n");Color(15,0);

Color(3,0);scanf("%ld", &ChoixBus14);printf("\n\n");Color(15,0);

}   /* Fin checkpoint 2 */





Color(15,0);printf("Veux-tu retourner au menu principal ?\n\n");
Color(3,0);scanf("%s", chaine);printf("\n\n\n\n\n");Color(15,0);

break;


      case 3:


Color(14,0);
printf("                                 =Bonus=\n\n\n\n");Color(15,0);

 printf("Ici tu decouvriras des mini-jeux d'aventure grace a des mots de passe");
 printf(" que tu\ngagneras en jouant. Finis le mode bonus pour decouvrir le grand");
 printf(" secret reserve\nau vainqueur. Je n'en dis pas plus, a toi de jouer !\n\n\n");
 printf("Mot de passe :                           (Attention au respect de la majuscule)\n\n\n");
 Color(3,0);scanf("%s", ChoixBonus);printf("\n\n\n");Color(15,0);

 if (strcmp (ChoixBonus, "Quetzal") == 0)

 { /* Quetzal ouverture début */


             char chaine [7]; long ChoixMenu; long nombre = 0,resultat = 0; long nombre1 = 0; char chaine1 [4];




Color(14,0);
printf("                       ²°²°² La plume d'or du Quetzal ²°²°²\n\n\n");  Color(15,0);        /* Ecran titre */
system("PAUSE"); printf("\n\n");
Color(8,0);
printf("Bienvenue dans la Plume d'or du Quetzal, un formidable jeu d'aventure !\n\n");Color(15,0);
system("PAUSE");printf("\n\n");
Color(5,0);printf("DIDACTICIEL\n\n");
Color(8,0);printf("Voici une aventure pas comme les autres puisque tu en es le heros ! Chaque\nparagraphe t'expose une situation et te propose plusieurs facons de t'en\nsortir...\n\n");
Color(15,0);system("PAUSE");Color(8,0);printf("\n\nC'est ton choix qui determine la suite des evenements. Les chiffres qui te\nseront proposes correspondent au choix que tu fais. Pour les valider, il suffit de les taper a l'ecran avec ton clavier et d'appuyer sur entree. La suite\ns'affichera alors.\n\n");
printf("Tout au long de ton aventure, tu collecteras des trophees selon tes choix\nd'action. Si tu relances une partie sans fermer le programme, ils se cumuleront et t'indiqueront a la fin le pourcentage accompli. Eh oui desole, \nmais je suis trop basique pour integrer une sauvegarde de jeu !\n\n");
Color(15,0);system("PAUSE");printf("\n\n");
Color(12,0);printf("PROLOGUE\n\n");
Color(6,0);printf("Le soleil vient de se lever sur le lac Texcoco, pourtant, la chaleur est deja\ninsoutenable...");
printf("Cela fait bientot deux mois qu'il n'est pas tombe une goutte\nd'eau ! Les habitants de Tenochtitlan sont inquiets car dans les champs alentourla recolte de mais fait triste mine..."); printf("\n\n");
Color(15,0);system("PAUSE"); printf("\n\n");Color(6,0);
printf("La vieille Tzitzimil, qui connait les secrets d'autrefois, a une idee pour\nsauver les mais et ainsi rendre vie a la region...");
printf("Elle appelle ses petits\nenfants : Mayahvel et Ehecalte, et leur propose de sauver la situation : si tu\nacceptes de partir avec eux, tapes vite 1."); printf("\n\n");
Color(3,0);scanf("%ld", &nombre); printf("\n\n");Color(15,0);
if(nombre!=1)
{
Color(12,0);printf("Trophe obtenu : Tricheur !\n\n\n");compteur++;Color(15,0);
system("PAUSE");
  return 0;
}


do { /* Ouverture boucle pour remonter */

if(nombre==1)
{
Color(6,0);printf("Mes chers enfants, dit Tzitzimil, je connais une vieille legende que je tiens deceux qui ont construit ces maisons.");
printf(" Ils savaient des choses qu'aujourd'hui nous\navons oubliees et ils disaient qu'il suffirait qu'un enfant plante une plume\nd'or sur la tete du grand Quetzal - le dieu serpent dont la statue s'eleve sur\nla grande pyramide - pour qu'aussitot la secheresse cesse.");
printf("\n\n");Color(15,0);system("PAUSE");printf("\n");
Color(6,0);printf("Mes enfants, allez dans la grande foret et trouvez la plume d'or puis rejoignez la grande statue et sauvez-nous...");printf("\n\n");
printf("Si tu veux accompagner le jeune Ehecalt et la jolie Mayahvel, tape 15.");printf("\n");
printf("Si au contraire tu preferes qu'ils partent seuls, tape 55.");printf("\n\n");
Color(3,0);scanf("%ld", &nombre); printf("\n\n");Color(15,0);
if(nombre!=15)if(nombre!=55)
{
Color(12,0);printf("Trophe obtenu : Tricheur !\n\n\n");compteur++;
Color(15,0);system("PAUSE");
  return 0;
}
}

if(nombre==15)
{
Color(6,0);printf("Vous allez rencontrer des pretres puissants, dit Tzitzimil, et, pour obtenir\nleurs faveurs, vous devrez leur remettre une offrande.");
printf(" Choisis un de ces objets\npour eux, mais choisis bien...");printf("\n\n");
Color(15,0);system("PAUSE");printf("\n\n");
Color(6,0);printf("Alors, elle ouvre une armoire sculptee et vous devoile une etagere qui porte un superbe coquillage aux parois nacrees gravee qui contient des renseignements surles habitudes de chacuns des dieux, et enfin un sac contenant des pepites d'or.");printf("\n\n");
printf("Choisis un de ces objets et tape 38.");printf("\n\n");
Color(3,0);scanf("%ld", &nombre);printf("\n\n");Color(15,0);
if(nombre!=38)
{
Color(12,0);printf("Trophe obtenu : Tricheur !\n\n\n");compteur++;
Color(15,0);system("PAUSE");
  return 0;
}
}

if(nombre==38)
{
Color(6,0);printf("La jolie Mayahvel et le jeune Ehecalt decident de te faire confiance.");
printf(" Ils te\nsuivront. Vous voici a l'oree de la foret. Deux voies s'ouvrent devant vous :");printf("\n\n");
printf("Une piste qui serpente entre les arbres geants en 6, et un bras du grand fleuve que vous pouvez suivre en pirogue en 23");printf("\n\n");
printf("Par ou decide-tu d'aller ?");printf("\n\n");
Color(3,0);scanf("%ld", &nombre);printf("\n\n");Color(15,0);
if(nombre!=6)if(nombre!=23)
{
Color(12,0);printf("Trophe obtenu : Tricheur !\n\n\n");compteur++;
Color(15,0);system("PAUSE");
  return 0;
}
}

if (nombre==18)
{
Color(6,0);printf("A l'interieur de cette petite cabane, s'ouvre une trappe qui dissimule un\nescalier s'enffoncant tres vite dans des souterrains...");
printf("Inquietant, penses-tu."); printf("\n\n");
printf("Si tu as peur, ressors de la cabane et passe ton chemin en tapant 47, sinon\ndescend en 32");printf("\n\n");
Color(3,0);scanf("%ld", &nombre);printf("\n\n");Color(15,0);
if(nombre!=32)if(nombre!=47)
{
Color(12,0);printf("Trophe obtenu : Tricheur !\n\n\n");compteur++;
Color(15,0);system("PAUSE");
  return 0;
}
}

if(nombre==32)
{
Color(12,0);printf("Trophee obtenu : Temeraire !\n\n");compteur++;
Color(6,0);printf("L'escalier est tres sombre mais tu decides de le suivre a tatons. Quelques\nminutes se sont a peine ecoulees que soudain Ehecalt s'ecrie :");printf("\n\n");
printf("La, une lumiere, venez...");printf("\n\n");Color(15,0);system("PAUSE");printf("\n\n");
Color(6,0);printf("Vous continuez et vous parvenez a une grande et belle salle de pierre ou se\ndresse un autel. Mayahvel s'en approche et dit:");printf("\n\n");
printf("Regardez, la ! Je vois une plume d'or comme Tzitzimil l'avait annonce !");
printf(" Elle\nprend la plume et tu dis :");printf("\n\n");printf("Il ne nous reste qu'a trouver le temple du Quetzal");printf("\n\n");Color(15,0);system("PAUSE");printf("\n\n");
Color(6,0);printf("Vers ou te diriges-tu maintenant ? Si tu choisis de remonter l'escalier tapes 11 Ou bien tu cherches une autre issue en 19");printf("\n\n");
Color(3,0);scanf("%ld", &nombre);printf("\n\n");Color(15,0);
if(nombre!=11)if(nombre!=19)
{
Color(12,0);printf("Trophe obtenu : Tricheur !\n\n\n");compteur++;
Color(15,0);system("PAUSE");
  return 0;
}
}

if(nombre==11)
{
Color(6,0);printf("Tu remontes l'escalier qui maintenant ne t'impressione plus du tout ! Tes\ncompagnons te suivent. Vous sortez de la cabane et Ehecalt te demande :");printf("\n\n");
printf("Vers ou allons-nous maintenant ?");printf("\n\n");
printf("Decides-tu de reprendre le chemin qui vous a mene a la clairiere en 30 ? Ou bienchoisis-tu la piste qui debouche de l'autre cote, derriere la cabane en 44 ?\n\n");
Color(3,0);scanf("%ld", &nombre);printf("\n\n");Color(15,0);
if(nombre!=30)if(nombre!=44)
{
Color(12,0);printf("Trophe obtenu : Tricheur !\n\n\n");compteur++;
Color(15,0);system("PAUSE");
  return 0;
}
}

if(nombre==30)
{
Color(6,0);printf("Tu reconnais sans peine la route et tu conduis tes compagnons vers le lac\nTexcoco. Tzitzimil, ravie de vous revoir sains et saufs, vous felicite pour\navoir trouve si vite la plume d'or, mais il vous reste a chercher la statue du\ndieu serpent pour l'y placer.");printf("\n\n");
printf("Quelle route decides-tu de suivre ? La foret en 6 ou le fleuve en 23");printf("\n\n");
Color(3,0);scanf("%ld", &nombre);printf("\n\n");Color(15,0);
if(nombre!=6)if(nombre!=23)
{
Color(12,0);printf("Trophe obtenu : Tricheur !\n\n\n");compteur++;
Color(15,0);system("PAUSE");
  return 0;
}
}

if(nombre==6)
{
Color(6,0);printf("Voici une journee entiere que vous marchez tous les trois l'un derriere l'autre au coeur de la foret, soudain, vous debouchez sur une petite clairiere dont le\ncentre est occupe par une cabane fermee.");printf("\n\n");
printf("Si vous y entrez tapes 18");printf("\n");
printf("Si vous preferez passer votre chemin tapes 44");printf("\n\n");
Color(3,0);scanf("%ld", &nombre);printf("\n\n");Color(15,0);
if(nombre!=18)if(nombre!=44)
{
Color(12,0);printf("Trophe obtenu : Tricheur !\n\n\n");compteur++;
Color(15,0);system("PAUSE");
  return 0;
}
}

if(nombre==23)
{
Color(6,0);printf("C'est Ehecalt qui pagaie. Mayahvel et toi, vous reflechissez...");printf("\n\n");
printf("Comment trouver ce temple ?");printf("\n\n");Color(15,0);system("PAUSE");printf("\n\n");
Color(6,0);printf("Quand soudain, sur une hauteur, non loin des rives du fleuve, tu apercois un\nsuperbe batiment. Veux-tu accoster pour aller visiter ce qui te parait etre un\ntemple en 41 ? Ou preferes-tu continuer a remonter le fleuve en 48 !");printf("\n\n");
Color(3,0);scanf("%ld", &nombre);printf("\n\n");Color(15,0);
if(nombre!=48)if(nombre!=41)
{
Color(12,0);printf("Trophe obtenu : Tricheur !\n\n\n");compteur++;
Color(15,0);system("PAUSE");
  return 0;
}
}

if(nombre==41)
{
Color(6,0);printf("Tu es au pied d'un superbe temple. Mayahvel le reconnait :");printf("\n\n");
printf("Tzitzimil m'a parle de ce temple, dit-elle, c'est celui du dieu Teccucuztecatl\nqui regne sur la mer. Peut-etre ses pretres accepteront-ils de nous aider.\nVenez !");printf("\n\n");
printf("Si tu acceptes de la suivre tapes 2. Si tu choisis plus prudemment de faire\nd'abord le tour du temple pour examiner les environs tapes 34");printf("\n\n");
Color(3,0);scanf("%ld", &nombre);printf("\n\n");Color(15,0);
if(nombre!=2)if(nombre!=34)
{
Color(12,0);printf("Trophe obtenu : Tricheur !\n\n\n");compteur++;
Color(15,0);system("PAUSE");
  return 0;
}
}

if(nombre==34)
{
Color(6,0);printf("Vous contournez le temple et vous decouvrez a l'arriere, un passage bien degage ou l'herbe ecrasee temoigne de passages frequents.\n\nVeux-tu emprunter ce passage en 14 ou preferes-tu faire le tour du temple en 41 ?\n\n");
Color(3,0);scanf("%ld",&nombre);printf("\n\n");Color(15,0);
if(nombre!=14)if(nombre!=41)
{
Color(12,0);printf("Trophe obtenu : Tricheur !\n\n\n");compteur++;
Color(15,0);system("PAUSE");
  return 0;
}
}

if(nombre==14)
{
Color(6,0);printf("Le petit passage serpente entre de hauts murs. Et apres un dernier coude, tu te trouves devant une porte que tu pousses immediatement. Elle s'ouvre et...tapes 2 pour le savoir\n\n");
Color(3,0);scanf("%ld",&nombre);printf("\n\n");Color(15,0);
if(nombre!=2)
{
Color(12,0);printf("Trophe obtenu : Tricheur !\n\n\n");compteur++;
Color(15,0);system("PAUSE");
  return 0;
}
}

if(nombre==2)
{
Color(12,0);printf("Trophee obtenu : Traquenard !\n\n");compteur++;Color(15,0);system("PAUSE");printf("\n\n");
Color(6,0);printf("La porte se referme brutalement derriere vous.\n\nElle est bloquee, hurle Mayahvel, nous sommes prisonniers...\n\nCalmons-nous, reponds-tu et faisons le tour de cette grande piece...Peut-etre y trouverons-nous un passage\n\n");Color(15,0);system("PAUSE");printf("\n\n");
Color(6,0);printf("Vous vous mettez aussitot au travail, quand soudain, une voix retentit derriere vous et dit :\n\nQui etes-vous enfants, et que cherchez-vous ici ?\n\nTapez 36\n\n");
Color(3,0);scanf("%ld", &nombre);printf("\n\n");Color(15,0);
if(nombre!=36)
{
Color(12,0);printf("Trophe obtenu : Tricheur !\n\n\n");compteur++;
Color(15,0);system("PAUSE");
  return 0;
}
}

if(nombre==36)
{
Color(6,0);printf("C'est un pretre qui vous parle.\n\nEnfants, je puis peut-etre vous aider mais que me donnerez-vous en echange ?\n\nSi tu lui donnes un coquillage va en 7\n\nSi tu lui donnes de l'or va en 25\n\nSi tu lui donnes une ancienne tablette va en 42\n\nSi tu lui donnes une plume d'or va en 3\n\nSi tu ne lui donnes rien du tout va en 51\n\n");
Color(3,0);scanf("%ld", &nombre);printf("\n\n");Color(15,0);
if(nombre!=7)if(nombre!=25)if(nombre!=42)if(nombre!=3)if(nombre!=51)
{
Color(12,0);printf("Trophe obtenu : Tricheur !\n\n\n");compteur++;
Color(15,0);system("PAUSE");
  return 0;
}
}

if(nombre==7)
{
Color(12,0);printf("Trophee obtenu : Intello !\n\n");compteur++;
Color(6,0);printf("Un coquillage ! Quelle bonne idee ! Aucun cadeau ne pourrait plaire davantage a un dieu de la mer !\n\nAussitot le pretre se retourne et vous declare gravement:\n\nJe vais vous indiquer le chemin a suivre pour atteindre le temple du Quetzal et aussi vous donner un precieux renseignement :\n\n");
printf("Ne franchissez sous aucun pretexte la petite porte de la pyramide...Elle cache\nun piege redoutable !\n\n");Color(15,0);system("PAUSE");printf("\n\n");
Color(6,0);printf("Enfin, avant de vous laisser partir, le pretre vous donne une grande clef d'or, puis il vous souhaite bonne chance...\n\nTapez maintenant 5\n\n");
Color(3,0);scanf("%ld", &nombre);printf("\n\n");Color(15,0);
if(nombre!=5)
{
Color(12,0);printf("Trophe obtenu : Tricheur !\n\n\n");compteur++;
Color(15,0);system("PAUSE");
  return 0;
}
}

if(nombre==25)
{
Color(12,0);printf("Trophee obtenu : La main sur le coeur !\n\n");compteur++;
Color(6,0);printf("Merci d'offrir cet or au dieu des mers, mes enfants !\n\nPour vous remercier, il va vous donner un conseil :\n\nRetournez en ville rapidement car un redoutable orage se prepare et\npourrait bien rendre impraticable cette contree.\n\n");
printf("Si tu acceptes de suivre ce conseil tapes 49. Si tu pars quand meme tapes 46.\n\n");
Color(3,0);scanf("%ld",&nombre);printf("\n\n");Color(15,0);
if(nombre!=49)if(nombre!=46)
{
Color(12,0);printf("Trophe obtenu : Tricheur !\n\n\n");compteur++;
Color(15,0);system("PAUSE");
  return 0;
}
}

if(nombre==42)
{
Color(12,0);printf("Trophee obtenu : Altruiste !\n\n");compteur++;
Color(6,0);printf("Cette tablette sacree est un tres ancien document qui prendra place dans la\nbibliotheque du temple. Je suis tres fier d'en devenir le gardien ! Pour vous\nremercier de me l'avoir apporte, je vais vous donner une clef qui vous ouvrira\nla porte du temple du Quetzal.\n\n");
Color(15,0);system("PAUSE");Color(6,0);printf("\n\nAllez, mes enfants !\n\nEt le vieillard vous indique la route a suivre.\n\nTapes maintenant 5.\n\n");
Color(3,0);scanf("%ld", &nombre);printf("\n\n");Color(15,0);
if(nombre!=5)
{
Color(12,0);printf("Trophe obtenu : Tricheur !\n\n\n");compteur++;
Color(15,0);system("PAUSE");
  return 0;
}
}

if(nombre==3)
{
Color(12,0);printf("Trophee obtenu : Presque !\n\n");compteur++;
Color(6,0);printf("Une plume d'or ? Merci, dit le grand pretre, mais vous feriez mieux de l'offrir au dieu Quetzal. Ne perdez pas de temps. Son temple se trouve dans cette\ndirection, a quelques heures de marche vers le soleil couchant. Bonne route !\n\nVous vous mettez aussitot en route vers le temple du Quetzal. Tapes 5\n\n");
Color(3,0);scanf("%ld",&nombre);printf("\n\n");Color(15,0);
if(nombre!=5)
{
Color(12,0);printf("Trophe obtenu : Tricheur !\n\n\n");compteur++;
Color(15,0);system("PAUSE");
  return 0;
}
}

if(nombre==5)
{
Color(6,0);printf("Quelques heures plus tard, epuises, vous arrivez au pied d'une montagne au\nsommet de laquelle resplendit un mur dore. Vous l'escaladez et vous vous trouvez\ndevant une porte monumentale.\n\nAs-tu une clef qui entre dans cette enorme serrure ?\n\n");
printf("Si oui tapes 8\n\nSi non tapes 50\n\n");
Color(3,0);scanf("%ld", &nombre);printf("\n\n");Color(15,0);
if(nombre!=8)if(nombre!=50)
{
Color(12,0);printf("Trophe obtenu : Tricheur !\n\n\n");compteur++;
Color(15,0);system("PAUSE");
  return 0;
}
}

if(nombre==8)
{
Color(6,0);printf("Tu confies la clef a Mayahvel. Elle se hausse sur la pointe des pieds et\nintroduit la clef d'or dans la serrure. Aussitot, dans un grand fracas, la portes'ouvre, devoilant un escalier monumental qui escalade une gigantesque pyramide au pied de laquelle une petite porte s'ouvre.\n\n");Color(15,0);system("PAUSE");printf("\n\n");
Color(6,0);printf("Choisis-tu de grimper le long de cet escalier en 13 ? Ou bien d'entrer par la\npetite porte a l'interieur de la pyramide en 53 ?\n\n");
Color(3,0);scanf("%ld", &nombre);printf("\n\n");Color(15,0);
if(nombre!=13)if(nombre!=53)
{
Color(12,0);printf("Trophe obtenu : Tricheur !\n\n\n");compteur++;
Color(15,0);system("PAUSE");
  return 0;
}
}

if(nombre==21)
{
Color(6,0);printf("Tu touches de la main la muraille et...quelle surprise ! Tu t'apercois que tu la traverses ! Une illusion ? Un mirage ? Un rideau de fumee ?\n\n");Color(12,0);printf("Trophee obtenu : Magicien !\n\n");Color(6,0);printf("Quel est donc ce lieu etrange ? As-tu une tablette sacree ? Si oui va en 26\nsinon en 33\n\n");compteur++;
Color(3,0);scanf("%ld",&nombre);printf("\n\n");Color(15,0);
if(nombre!=26)if(nombre!=33)
{
Color(12,0);printf("Trophe obtenu : Tricheur !\n\n\n");compteur++;
Color(15,0);system("PAUSE");
  return 0;
}
}

if(nombre==26)
{
Color(6,0);printf("Tu repenses a la tablette sacree que t'a confiee Tzitzimil et tu y lis ce texte etrange :\n\nAu pied du royaume de Tezcatlipoca, noir seigneur des sorciers, depose cette\ntablette et ferme les yeux\n\n");
Color(15,0);system("PAUSE");Color(6,0);printf("\n\nTu deposes la tablette, mais si tu decides qu'il est plus prudent de garder les yeux ouverts...on ne sait jamais, va en 33. Ou bien tu fais confiance a la\ntablette et tu fermes les paupieres en 29.\n\n");
Color(3,0);scanf("%ld",&nombre);printf("\n\n");Color(15,0);
if(nombre!=29)if(nombre!=33)
{
Color(12,0);printf("Trophe obtenu : Tricheur !\n\n\n");compteur++;
Color(15,0);system("PAUSE");
  return 0;
}
}

if(nombre==33)
{
Color(12,0);printf("Trophee obtenu : Pas fou !\n\n");compteur++;
Color(6,0);printf("Tu es la, sans oser bouger, tes compagnons, petrifies de surprise a tes cotes.\nQuand soudain, une lumiere resplendit. Vous la regardez, fascines, et vous vous endormez.\n\nTapes maintenant 52.\n\n");
Color(3,0);scanf("%ld",&nombre);printf("\n\n");Color(15,0);
if(nombre!=52)
{
Color(12,0);printf("Trophe obtenu : Tricheur !\n\n\n");compteur++;
Color(15,0);system("PAUSE");
  return 0;
}
}

if(nombre==29)
{
Color(12,0);printf("Trophee obtenu : Surprise !\n\n");compteur++;
Color(16,0);printf("A peine as-tu ferme les yeux que tu t'endors. En reve, tu entends une voix qui\nte dit :\n\nRetourne au labyrinthe et tache d'y trouver le chemin qui te menera au temple\nque tu cherches.\n\nTapes maintenant 19.\n\n");
Color(3,0);scanf("%ld",&nombre);printf("\n\n");Color(15,0);
if(nombre!=19)
{
Color(12,0);printf("Trophe obtenu : Tricheur !\n\n\n");compteur++;
Color(15,0);system("PAUSE");
  return 0;
}
}

if(nombre==19)
{
Color(6,0);printf("Ehecalt dit :\n\nSi nous explorions tous les murs, peut-etre que nous trouverions un passage !\n\nAussitot dit, aussitot fait et voila que sous tes doigts, tu sens une grosse\npierre qui vascille. Tu appuies dessus, elle bascule, entrainant dans sa chute\nun pan entier du mur.\n\n");
Color(15,0);system("PAUSE");Color(6,0);printf("\n\nTu viens de trouver l'entree d'un passage secret.\n\n");Color(12,0);printf("Trophee obtenu : Fouineur !\n\n");Color(6,0);printf(" Tu t'y engouffres suivi de tes deux compagnons...\n\nLe passage secret debouche rapidement sur un grand labyrinthe. Suis-y le chemin de ton choix :\n\n");compteur++;
printf("Tu peux taper 35, 39, 41 ou 44\n\n");
Color(3,0);scanf("%ld",&nombre);printf("\n\n");Color(15,0);
if(nombre!=35)if(nombre!=39)if(nombre!=41)if(nombre!=44)
{
Color(12,0);printf("Trophe obtenu : Tricheur !\n\n\n");compteur++;
Color(15,0);system("PAUSE");
  return 0;
}
}

if(nombre==35)
{
Color(6,0);printf("A la sortie de ce grand labyrinthe, tu vois un grand temple noir et effrayant...Oseras-tu t'en approcher ? Si non, retourne dans le labyrinthe a la recherche\nd'une autre sortie en 13. Si tu prends le risque va en 16\n\n");
Color(3,0);scanf("%ld",&nombre);printf("\n\n");Color(15,0);
if(nombre!=13)if(nombre!=16)
{
Color(12,0);printf("Trophe obtenu : Tricheur !\n\n\n");compteur++;
Color(15,0);system("PAUSE");
  return 0;
}
}

if(nombre==16)
{
Color(6,0);printf("Te voici au pied d'une noire muraille. Tes deux compagnons semblent très inquiets et te proposent de la contourner de loin, par la foret.\n\nSi tu es d'accord va en 44. Si tu reussis a les convaincre d'approcher va en 21\n\n");
Color(3,0);scanf("%ld",&nombre);printf("\n\n");Color(15,0);
if(nombre!=21)if(nombre!=44)
{
Color(12,0);printf("Trophe obtenu : Tricheur !\n\n\n");compteur++;
Color(15,0);system("PAUSE");
  return 0;
}
}

if(nombre==39)
{
Color(6,0);printf("Curieux endroit ! Tu arrives dans une grande salle souterraine qui presente 3\nissues : une petite porte sur le cote en 17, un couloir tout illumine en 22 et une sorte de longue et haute echelle qui monte vers une trappe en 24\n\n");
Color(3,0);scanf("%ld",&nombre);printf("\n\n");Color(15,0);
if(nombre!=17)if(nombre!=22)if(nombre!=24)
{
Color(12,0);printf("Trophe obtenu : Tricheur !\n\n\n");compteur++;
Color(15,0);system("PAUSE");
  return 0;
}
}

if(nombre==17)
{
Color(6,0);printf("Tu pousses cette petite porte et tes compagnons te suivent immediatement. Vous\nvous retrouvez au pied d'une grande pyramide au sommet de laquelle resplendit la statue du grand dieu serpent : Quetzal. Tu touches au but.\n\nTapes maintenant 13.\n\n");
Color(3,0);scanf("%ld",&nombre); printf("\n\n");Color(15,0);
if(nombre!=13)
{
Color(12,0);printf("Trophe obtenu : Tricheur !\n\n\n");compteur++;
Color(15,0);system("PAUSE");
  return 0;
}
}

if(nombre==13)
{
Color(12,0);printf("Trophee obtenu : Dans la sueur !\n\n");compteur++;
Color(6,0);printf("Prenant votre courage a deux mains, vous commencez a gravir les marches du grand escalier. En haut de la grande pyramide, tu decouvres une statue du grand dieu serpent : le Quetzal.\n\nSi tu as une plume d'or va en 43, sinon tapes 54.\n\n");
Color(3,0);scanf("%ld", &nombre);printf("\n\n");Color(15,0);
if(nombre!=54)if(nombre!=43)
{
Color(12,0);printf("Trophe obtenu : Tricheur !\n\n\n");compteur++;
Color(15,0);system("PAUSE");
  return 0;
}
}

if(nombre==22)
{
Color(6,0);printf("Tu suis depuis de nombreuses heures ce long couloir illumine et la chaleur y\ndevient de plus en plus intense. Soudain, tu comprends tout : vous etes dans une galerie qui mene a un volcan ! Vite ! Vite ! Faites demi-tour et retournez dans la grande salle en 39.\n\n");
Color(3,0);scanf("%ld",&nombre);printf("\n\n");Color(15,0);
if(nombre!=39)
{
Color(12,0);printf("Trophe obtenu : Tricheur !\n\n\n");compteur++;
Color(15,0);system("PAUSE");
}
}

if(nombre==24)
{
Color(6,0);printf("Cette echelle est longue et etroite. Tu t'y engages courageusement, suivi par\ntes deux amis. Arrives tout en haut, vous poussez une trappe qui s'ouvre en\ngrincant.\n\nTapes maintenant 28.\n\n");
Color(3,0);scanf("%ld",&nombre);printf("\n\n");Color(15,0);
if(nombre!=28)
{
Color(12,0);printf("Trophe obtenu : Tricheur !\n\n\n");compteur++;
Color(15,0);system("PAUSE");
  return 0;
}
}

if(nombre==28)
{
Color(6,0);printf("La trappe bascule et vous voici parvenus au sommet d'une haute pyramide ! Devant vous, se dresse la statue du dieu serpent. Ce Quetzal sacre que tu devais\ntrouver ! Quelle chance !\n\nTapes maintenant 43.\n\n");
Color(3,0);scanf("%ld",&nombre);printf("\n\n");Color(15,0);
if(nombre!=43)
{
Color(12,0);printf("Trophe obtenu : Tricheur !\n\n\n");compteur++;
Color(15,0);system("PAUSE");
  return 0;
}
}

if(nombre==43)
{
Color(12,0);printf("Trophee obtenu : Revelation !\n\n");compteur++;
Color(6,0);printf("Sans hesiter tu plantes la plume d'or sur la tete du grand serpent sacre. Il\ns'anime aussitot et te regarde en souriant...Tu t'endors, comme hypnotise par\nson regard.\n\nTapes maintenant 45.\n\n");
Color(3,0);scanf("%ld", &nombre);printf("\n\n");Color(15,0);
if(nombre!=45)
{
Color(12,0);printf("Trophe obtenu : Tricheur !\n\n\n");compteur++;
Color(15,0);system("PAUSE");
  return 0;
}
}

} while (nombre <= 43); /* Fermeture boucle pour remonter */



if(nombre==48) /* Fin 1 */
{
Color(8,0);printf("Soudain, un lugubre craquement retentit...votre pirogue vient de heurter un\nrocher a fleur d'eau...Perdu !\n\n");
Color(15,0);system("PAUSE");printf("\n\n");
Color(12,0);printf("Trophee obtenu : Myro !\n\n");compteur++;
Color(8,0);printf("Tu viens de decouvrir la fin numero 9.\n\nIl y en a plusieurs, alors n'hesite pas a recommencer une partie et essaye de\ndecouvrir toutes les fins alternatives.\n\n");
Color(15,0);system("PAUSE");printf("\n\n");
Color(8,0);printf("Merci d'avoir joue !");printf("\n\n\n");
Color(15,0);system("PAUSE");printf("\n\n");
Color(8,0);printf("Une derniere question : Combien y a-t-il de fins alternatives ?\n\n");
Color(3,0);scanf("%ld",&nombre1);printf("\n\n");Color(15,0);
if(nombre1==10)
{
Color(12,0);printf("Trophee obtenu : De A a Z !\n\n\n");compteur++;Color(15,0);
}
if(nombre1!=10)
{
Color(8,0);printf("Visiblement tu n'as pas explore toutes les possibilites du jeu,\nje t'invite donc a recommencer !\n\n\n");
}
Color(15,0);system("PAUSE");
}

if(nombre==49) /* Fin 2 */
{
Color(12,0);printf("Trophe obtenu : Trouillard !\n\n");compteur++;Color(15,0);system("PAUSE");printf("\n\n");
Color(8,0);printf("Vous revenez en ville a temps pour echapper a l'orage qui devaste le pays et les recoltes. Vous ne risquez plus rien personnellement, mais vous avez echoue dans votre mission...\n\n");
Color(15,0);system("PAUSE");printf("\n\n");
Color(8,0);printf("Tu viens de decouvrir la fin numero 8.\n\nIl y en a plusieurs, alors n'hesite pas a recommencer une partie et essaye de\ndecouvrir toutes les fins alternatives.\n\n");
Color(15,0);system("PAUSE");printf("\n\n");
Color(8,0);printf("Merci d'avoir joue !");printf("\n\n\n");
Color(15,0);system("PAUSE");printf("\n\n");
Color(8,0);printf("Une derniere question : Combien y a-t-il de fins alternatives ?\n\n");
Color(3,0);scanf("%ld",&nombre1);printf("\n\n");Color(15,0);
if(nombre1==10)
{
Color(12,0);printf("Trophee obtenu : De A a Z !\n\n\n");compteur++;Color(15,0);
}
if(nombre1!=10)
{
Color(8,0);printf("Visiblement tu n'as pas explore toutes les possibilites du jeu,\nje t'invite donc a recommencer !\n\n\n");
}
Color(15,0);system("PAUSE");
}

if(nombre==46) /* Fin 3 */
{
Color(12,0);printf("Trophe obtenu : Sceptique !\n\n");compteur++;Color(15,0);system("PAUSE");printf("\n\n");
Color(6,0);printf("La petite piste serpente tant et tant et vous avez suivi tant et tant de viragesqu'aucun de vous trois n'est plus capable de s'orienter.");printf("\n\n");
Color(15,0);system("PAUSE");printf("\n\n");
Color(8,0);printf("Vous etes perdus ! Ton aventure s'arrete ici.");printf("\n\n");
Color(15,0);system("PAUSE");printf("\n\n");
Color(8,0);printf("Tu viens de decouvrir la fin numero 4.\n\nIl y en a plusieurs, alors n'hesite pas a recommencer une partie et essaye de\ndecouvrir toutes les fins alternatives.\n\n");
Color(15,0);system("PAUSE");printf("\n\n");
Color(8,0);printf("Merci d'avoir joue !");printf("\n\n\n");
Color(15,0);system("PAUSE");printf("\n\n");
Color(8,0);printf("Une derniere question : Combien y a-t-il de fins alternatives ?\n\n");
Color(3,0);scanf("%ld",&nombre1);printf("\n\n");Color(15,0);
if(nombre1==10)
{
Color(12,0);printf("Trophee obtenu : De A a Z !\n\n\n");compteur++;Color(15,0);
}
if(nombre1!=10)
{
Color(8,0);printf("Visiblement tu n'as pas explore toutes les possibilites du jeu,\nje t'invite donc a recommencer !\n\n\n");
}
Color(15,0);system("PAUSE");
}

if(nombre==50) /* Fin 4 */
{
Color(6,0);printf("Sans la clef, impossible d'ouvrir cette porte ! Que faire ? Tu poses la plume\nd'or au pied de la grande porte en esperant que le Quetzal se satisfera de cette offrande et tu t'eloignes en entrainant tes compagnons.\n\n");
Color(15,0);system("PAUSE");printf("\n\n");
Color(8,0);printf("Alors, un redoutable grondement surgit d'au-dela de la montagne. Ah oui, la\nriviere coule en effet ! Mais cette eau torrentielle est bien trop forte et le\nlac Texcoco deborde et les mais sont noyes et...ta mission est manquee...\n\n");
Color(15,0);system("PAUSE");printf("\n\n");
Color(8,0);printf("Tu viens de decouvrir la fin numero 7.\n\nIl y en a plusieurs, alors n'hesite pas a recommencer une partie et essaye de\ndecouvrir toutes les fins alternatives.\n\n");
Color(15,0);system("PAUSE");printf("\n\n");
Color(12,0);printf("Trophe obtenu : Sauve qui peut !");compteur++;printf("\n\n");Color(8,0);printf("Merci d'avoir joue !");printf("\n\n\n");
Color(15,0);system("PAUSE");printf("\n\n");
Color(8,0);printf("Une derniere question : Combien y a-t-il de fins alternatives ?\n\n");
Color(3,0);scanf("%ld",&nombre1);printf("\n\n");Color(15,0);
if(nombre1==10)
{
Color(12,0);printf("Trophee obtenu : De A a Z !\n\n\n");compteur++;Color(15,0);
}
if(nombre1!=10)
{
Color(8,0);printf("Visiblement tu n'as pas explore toutes les possibilites du jeu,\nje t'invite donc a recommencer !\n\n\n");
}
Color(15,0);system("PAUSE");
}

if(nombre==51) /* Fin 5 */
{
Color(12,0);printf("Trophe obtenu : Radin !\n\n");Color(8,0);printf("Rien ? Et vous esperez que je vous aiderai pour rien ? Vous vous trompez, mes\nenfants...\n\nAlors dans un grand rire il disparait dans un nuage de fumee qui envahit tout et...vous vous endormez...Perdu !\n\n");compteur++;
Color(15,0);system("PAUSE");printf("\n\n");
Color(8,0);printf("Tu viens de decouvrir la fin numero 6.\n\nIl y en a plusieurs, alors n'hesite pas a recommencer une partie et essaye de\ndecouvrir toutes les fins alternatives.\n\n");
Color(15,0);system("PAUSE");printf("\n\n");
Color(8,0);printf("Une derniere question : Combien y a-t-il de fins alternatives ?\n\n");
Color(3,0);scanf("%ld",&nombre1);printf("\n\n");Color(15,0);
if(nombre1==10)
{
Color(12,0);printf("Trophee obtenu : De A a Z !\n\n\n");compteur++;Color(15,0);
}
if(nombre1!=10)
{
Color(8,0);printf("Visiblement tu n'as pas explore toutes les possibilites du jeu,\nje t'invite donc a recommencer !\n\n\n");
}
Color(15,0);system("PAUSE");
}

if(nombre==52) /* Fin 6 */
{
Color(8,0);printf("Quand vous vous reveillez, vous vous trouvez dans une profonde foret,\ncompletement egares. Perdu !\n\n");
Color(15,0);system("PAUSE");printf("\n\n");
Color(8,0);printf("Tu viens de decouvrir la fin numero 5.\n\nIl y en a plusieurs, alors n'hesite pas a recommencer une partie et essaye de\ndecouvrir toutes les fins alternatives.\n\n");
Color(15,0);system("PAUSE");printf("\n\n");
Color(12,0);printf("Trophe obtenu : Sens de l'orientation !");compteur++;printf("\n\n");Color(8,0);printf("Merci d'avoir joue !");printf("\n\n\n");
Color(15,0);system("PAUSE");printf("\n\n");
Color(8,0);printf("Une derniere question : Combien y a-t-il de fins alternatives ?\n\n");
Color(3,0);scanf("%ld",&nombre1);printf("\n\n");Color(15,0);
if(nombre1==10)
{
Color(12,0);printf("Trophee obtenu : De A a Z !\n\n\n");compteur++;Color(15,0);
}
if(nombre1!=10)
{
Color(8,0);printf("Visiblement tu n'as pas explore toutes les possibilites du jeu,\nje t'invite donc a recommencer !\n\n\n");
}
Color(15,0);system("PAUSE");
}

if(nombre==44) /* Fin 7 */
{
Color(12,0);printf("Trophee obtenu : Muraille chinoise !\n\n");compteur++;
Color(6,0);printf("La petite piste serpente tant et tant et vous avez suivi tant et tant de viragesqu'aucun de vous trois n'est plus capable de s'orienter.");printf("\n\n");
Color(15,0);system("PAUSE");printf("\n\n");
Color(8,0);printf("Vous etes perdus ! Ton aventure s'arrete ici.");printf("\n\n");
Color(15,0);system("PAUSE");printf("\n\n");
Color(8,0);printf("Tu viens de decouvrir la fin numero 4.\n\nIl y en a plusieurs, alors n'hesite pas a recommencer une partie et essaye de\ndecouvrir toutes les fins alternatives.\n\n");
Color(15,0);system("PAUSE");printf("\n\n");
Color(8,0);printf("Merci d'avoir joue !");printf("\n\n\n");
Color(15,0);system("PAUSE");printf("\n\n");
Color(8,0);printf("Une derniere question : Combien y a-t-il de fins alternatives ?\n\n");
Color(3,0);scanf("%ld",&nombre1);printf("\n\n");Color(15,0);
if(nombre1==10)
{
Color(12,0);printf("Trophee obtenu : De A a Z !\n\n\n");compteur++;Color(15,0);
}
if(nombre1!=10)
{
Color(8,0);printf("Visiblement tu n'as pas explore toutes les possibilites du jeu,\nje t'invite donc a recommencer !\n\n\n");
}
Color(15,0);system("PAUSE");
}

if(nombre==53) /* Fin 8 */
{
Color(12,0);printf("Trophee obtenu : Sportif du dimanche !\n\n");compteur++;
Color(8,0);printf("Tu franchis la petite porte, tes amis te suivent et...une herse se referme\nderriere vous. Vous voici prisonniers du Quetzal ! Perdu !\n\n");
Color(15,0);system("PAUSE");printf("\n\n");
Color(8,0);printf("Tu viens de decouvrir la fin numero 3.\n\nIl y en a plusieurs, alors n'hesite pas a recommencer une partie et essaye de\ndecouvrir toutes les fins alternatives.\n\n");
Color(15,0);system("PAUSE");printf("\n\n");
Color(12,0);printf("Trophe obtenu : Clostrophobe !");compteur++;printf("\n\n");Color(8,0);printf("Merci d'avoir joue !");printf("\n\n\n");
Color(15,0);system("PAUSE");printf("\n\n");
Color(8,0);printf("Une derniere question : Combien y a-t-il de fins alternatives ?\n\n");
Color(3,0);scanf("%ld",&nombre1);printf("\n\n");Color(15,0);
if(nombre1==10)
{
Color(12,0);printf("Trophee obtenu : De A a Z !\n\n\n");compteur++;Color(15,0);
}
if(nombre1!=10)
{
Color(8,0);printf("Visiblement tu n'as pas explore toutes les possibilites du jeu,\nje t'invite donc a recommencer !\n\n\n");
}
Color(15,0);system("PAUSE");
}

if(nombre==54) /* Fin 9 */
{
Color(6,0);printf("Le dieu serpent s'anime et te demande :\n\nQue veux-tu de moi, enfant ?\n\n");Color(15,0);system("PAUSE");printf("\n\n");
Color(6,0);printf("Tu expliques alors au grand Quetzal la situation, et que tu attends de lui qu'il fasse couler l'eau de la riviere. Alors le grand serpent declare :\n\nSi tu avais une plume d'or pour moi, tout serait simple, mais puisque tu n'en a pas, je vais te proposer un marche. Je vais faire couler la riviere comme tu me le demandes, mais en echange, toi et tes deux compagnons vous resterez\neternellement ici, dans mon temple, pour me servir.\n\n");
Color(15,0);system("PAUSE");printf("\n\n");
Color(10,0);printf("Ta mission est donc accomplie, mais le prix que tu dois payer est bien lourd !\nCependant, tu as gagne l'admiration de tout le peuple de Tenochtitlan.\n\n");
Color(15,0);system("PAUSE");printf("\n\n");
Color(10,0);printf("Felicitation, tu viens de decouvrir la fin numero 2.\n\nIl y en a plusieurs, alors n'hesite pas a recommencer une partie et essaye de\ndecouvrir toutes les fins alternatives.\n\n");
Color(15,0);system("PAUSE");printf("\n\n");
Color(12,0);printf("Trophe obtenu : Roi de la piete !");compteur++;printf("\n\n");Color(14,0);printf("Mot de passe obtenu : Moctezuma");printf("\n\n\n");
Color(15,0);system("PAUSE");printf("\n\n");
Color(8,0);printf("Une derniere question : Combien y a-t-il de fins alternatives ?\n\n");
Color(3,0);scanf("%ld",&nombre1);printf("\n\n");Color(15,0);
if(nombre1==10)
{
Color(12,0);printf("Trophee obtenu : De A a Z !\n\n\n");compteur++;Color(15,0);
}
if(nombre1!=10)
{
Color(8,0);printf("Visiblement tu n'as pas explore toutes les possibilites du jeu,\nje t'invite donc a recommencer !\n\n\n");
}
Color(15,0);system("PAUSE");
  return 0;
}

if(nombre==45) /* Fin 10 */
{
Color(10,0);printf("Tu te reveilles a Tenochtitlan dans la maison de Tzitzimil ; son sourire te dit que ta mission a ete un grand succes et les bruits que tu entends dans la rue te comblent de joie. Toute la ville est en liesse et des centaines d'habitants de Tenochtitlan defilent en scandant ton nom. Tu es leur bienfaiteur : grace a toi, en effet, la recolte est sauvee. Bravo !\n\n");
Color(10,0);printf("Tu ne t'expliques pas toi-meme cet exploit, mais la vieille Tzitzimil avait\nraison, puisqu'apres ton exploit, la riviere qui irriguait les cultures s'est\nmysterieusement remis a couler abondamment...\n\n");
Color(15,0);system("PAUSE");printf("\n\n");
Color(10,0);printf("Felicitation, tu viens de decouvrir la fin numero 1.\n\nIl y en a plusieurs, alors n'hesite pas a recommencer une partie et essaye de\ndecouvrir toutes les fins alternatives.\n\n");
Color(15,0);system("PAUSE");printf("\n\n");
Color(12,0);printf("Trophee obtenu : Trop facile !");compteur++;printf("\n\n");Color(14,0);printf("Mot de passe obtenu : Moctezuma");printf("\n\n\n");
Color(15,0);system("PAUSE");printf("\n\n");
Color(8,0);printf("Une derniere question : Combien y a-t-il de fins alternatives ?\n\n");
Color(3,0);scanf("%ld",&nombre1);printf("\n\n");Color(15,0);
if(nombre1==10)
{
Color(12,0);printf("Trophee obtenu : De A a Z !\n\n\n");compteur++;Color(15,0);
}
if(nombre1!=10)
{
Color(8,0);printf("Visiblement tu n'as pas explore toutes les possibilites du jeu,\nje t'invite donc a recommencer !\n\n\n");
}
Color(15,0);system("PAUSE");
}

if(nombre==47) /* Fin 11 */
{
Color(12,0);printf("Trophee obtenu : Peur du noir !\n\n");compteur++;
Color(6,0);printf("La petite piste serpente tant et tant et vous avez suivi tant et tant de viragesqu'aucun de vous trois n'est plus capable de s'orienter.");printf("\n\n");
Color(15,0);system("PAUSE");printf("\n\n");
Color(8,0);printf("Vous etes perdus ! Ton aventure s'arrete ici.");printf("\n\n");
Color(15,0);system("PAUSE");printf("\n\n");
Color(8,0);printf("Tu viens de decouvrir la fin numero 4.\n\nIl y en a plusieurs, alors n'hesite pas a recommencer une partie et essaye de\ndecouvrir toutes les fins alternatives.\n\n");
Color(15,0);system("PAUSE");printf("\n\n");
Color(8,0);printf("Merci d'avoir joue !");printf("\n\n\n");
Color(15,0);system("PAUSE");printf("\n\n");
Color(8,0);printf("Une derniere question : Combien y a-t-il de fins alternatives ?\n\n");
Color(3,0);scanf("%ld",&nombre1);printf("\n\n");Color(15,0);
if(nombre1==10)
{
Color(12,0);printf("Trophee obtenu : De A a Z !\n\n\n");compteur++;Color(15,0);
}
if(nombre1!=10)
{
Color(8,0);printf("Visiblement tu n'as pas explore toutes les possibilites du jeu,\nje t'invite donc a recommencer !\n\n\n");
}
Color(15,0);system("PAUSE");printf("\n\n");
}

if(nombre==55) /* Fin 12 */
{
Color(8,0);printf("Ehecalt et Mayahvel partent seuls. Ils vivent une aventure inoubliable et grace a eux le peuple de Tenochtitlan est sauve de la secheresse.");printf("\n\n");
Color(8,0);printf("Quel dommage de ne pas les avoir accompagnes ! Si tu regrettes, relance le jeu\net bon voyage...sinon, au revoir.\n\n");
Color(15,0);system("PAUSE");printf("\n\n");
Color(8,0);printf("Tu viens de decouvrir la fin numero 10.\n\nIl y en a plusieurs, alors n'hesite pas a recommencer une partie et essaye de\ndecouvrir toutes les fins alternatives.\n\n");
Color(15,0);system("PAUSE");printf("\n\n");
Color(12,0);printf("Trophee obtenu : Defaitiste !\n\n");compteur++;printf("\n\n");Color(8,0);printf("Merci d'avoir joue !");printf("\n\n\n");
Color(15,0);system("PAUSE");printf("\n\n");
Color(8,0);printf("Une derniere question : Combien y a-t-il de fins alternatives ?\n\n");
Color(3,0);scanf("%ld",&nombre1);printf("\n\n");Color(15,0);
if(nombre1==10)
{
Color(12,0);printf("Trophee obtenu : De A a Z !\n\n\n");compteur++;Color(15,0);
}
if(nombre1!=10)
{
Color(8,0);printf("Visiblement tu n'as pas explore toutes les possibilites du jeu,\nje t'invite donc a recommencer !\n\n\n");
}
Color(15,0);system("PAUSE");
}

Color(14,0);printf("\n\n\nSTATISTIQUES\n\n");                                                     /* Stats */
Color(9,0);printf("Tu as obtenu %i trophee\n\n", compteur);
resultat= compteur/0.34;
printf("Soit %ld",resultat);printf(" pour cent du jeu complete\n\n\n");Color(15,0);

/* Pour n'avoir a ecrire les situations qu'une seule fois, dans l'ordre que l'on veut,
il faut permettre au programme de remonter les situations, ce qu'il ne fait pas
naturellement. En temps normal, il ne fait que les descendre. Pour cela, il suffit de
rajouter une boucle "do {" juste avant la première situation, et la fermer juste
après la dernière situation, avec le nombre total de situations possibles,
pour lui permettre d'aller et venir sans probleme. Cela s'écrit ainsi :
     "} while (nombre <= x);", où "nombre" est le nom de la variable qui permet
     au joueur de choisir sa situation, et x est le nombre total de situations.
     En revanche, il est nécessaire d'isoler les fins de la boucle, car sinon la boucle
     pour remonter empêche la boucle restart de fonctionner. Etant donne que l'on
     ne peut aller qu'une fois dans une même partie à une fin, il n'est pas nécessaire
     de les inclure dans la boucle pour remonter, d'autant qu'elles nous permettent
     justement d'en sortir, ce qui fait ainsi fonctionner la boucle restart finale. */

 } /* Quetzal Fermeture finale */




if (strcmp (ChoixBonus, "Moctezuma") == 0)

 { /* Moctézuma ouverture début */


                long nombre = 0, resultat = 0; long nombre1 = 0;
    char chaine [7]; char chaine1 [4]; char chaine2 [4]; long nombre2 = 0;



Color(10,0);printf("                       °²°²° Le tresor de Moctezuma °²°²°\n\n\n");          /* Ecran titre */
Color(15,0);system("PAUSE"); printf("\n\n");

Color(5,0);printf("DIDACTICIEL\n\n");
Color(4,0);printf("En route pour l'aventure ! Reussiras-tu a decouvrir ce fameux tresor ?\n"); /*Didacticiel */
printf("C'est a toi, Pedro, de determiner la suite des evenements en choisissant\n");
printf("l'une des solutions qui te sont proposees d'un tiret suivi d'un numero !\n");
printf("Tu continueras ton aventure en fonction des choix que tu feras...\n\n");
printf("Bonne chance !\n\n");
Color(15,0);system("PAUSE"); printf("\n\n");

Color(12,0);printf("PROLOGUE\n\n");                                                             /* Introduction */
Color(6,0);printf("Le soleil espagnol et la passion qu'eprouve Pedro pour l'histoire des\n");
printf("conquistadors l'entraine frequemment vers la fraiche demeure de son ami\n");
printf("archeologue, le professeur Alguera, aventurier a ses heures et bavard\n");
printf("captivant.\n\n");
Color(15,0);system("PAUSE"); printf("\n\n");
Color(6,0);printf("Bavard a tel point qu'il revele le but de sa prochaine expedition :\n");
printf("\"le tresor de Moctezuma\" ! \"Fernando Cortes escorte de 600 conquistadors\"\n");
printf("explique-t-il, \"atteignit l'amerique centrale en 1519. Il fit de Moctezuma,\n");
printf("l'empereur azteque, son prisonnier mais ne decouvrit jamais ses richesses\n");
printf("et, bientot repousses par une revolte, les envahisseurs batirent en retraite !\"\n\n");
Color(15,0);system("PAUSE"); printf("\n\n");
Color(6,0);printf("La soif d'aventure de Pedro le rendit si convaincant qu'il vint a bout des\n");
printf("reticences de son ami et un mois plus tard, vous debarquez au Mexique !\n\n");

Color(4,0);printf("Entre vite 1 pour commencer l'aventure\n\n");                               /* Début du jeu */
Color(3,0);scanf("%ld", &nombre); printf("\n\n");Color(15,0);
if(nombre!=1)
{
printf("Game over !\n\n\n");
system("PAUSE");
  return 0;
}

do {  /* Ouverture boucle pour remonter */

if (nombre == 1)
    {
Color(6,0);printf("Le port de Veracruz, eclatant de couleurs pittoresques, ne fut qu'une\n");
printf("breve etape, et bientot, la jungle etouffante etreint de toutes ses lianes\n");
printf("ton avancee laborieuse... Tu es tres vite distance par la colonne des\n");
printf("porteurs et te voici perdu dans ce labyrinthe de verdure ! Au loin se\n");
printf("dessine une forme etrange et immobile...\n\n");
Color(15,0);system("PAUSE"); printf("\n\n");
Color(6,0);printf("- Tu te diriges vers elle... 13\n");
printf("- Tu continues ta route... 18\n\n");
Color(3,0);scanf("%ld", &nombre); printf("\n\n");Color(15,0);
    if (nombre != 13) if (nombre != 18)
{
    printf("Game over !");
    system("PAUSE");
  return 0;
}
         }



if (nombre == 2)
    {
Color(6,0);printf("A ton grand malheur, ce n'est pas le professeur Alguera que tu rencontres\n");
printf("mais la tribu azteque plus belliqueuse que jamais ! Tu es a nouveau\n");
printf("prisonnier et :\n\n");
printf("- Tu les accompagnes vers ta destinee... 15\n");
printf("- Furieux, tu insultes le chef... 33\n\n");
Color(3,0);scanf("%ld", &nombre); printf("\n\n");   Color(15,0);
   if (nombre != 15) if (nombre != 33)
{
printf("Game over !\n\n\n");
system("PAUSE");
  return 0;
}
    }


if (nombre == 4)
    {
Color(6,0);printf("Tu debouche dans une grande piece aux murs eventres d'ou emergent de\n");
printf("grosses racines dissimulant presque entierement une inscription gravee\n");
printf("sur l'un d'eux...\n\n");
printf("- Tu avances lentement... 20\n\n");
Color(3,0);scanf("%ld", &nombre); printf("\n\n");Color(15,0);
if (nombre != 20)
{
printf("Game over !\n\n\n");
system("PAUSE");
  return 0;
}
    }



if (nombre == 5)
    {
Color(6,0);printf("Tu poses la main a quelques centimetres d'une migale impressionante !\n\n");
printf("- Tu laches prise et tombe dans le trou... 10\n");
printf("- Tu tentes d'ecraser l'araignee... 35\n\n");
Color(3,0);scanf("%ld", &nombre); printf("\n\n"); Color(15,0);
   if (nombre != 10) if (nombre != 35)
  {
printf("Game over !\n\n\n");
system("PAUSE");
  return 0;
}
    }


if (nombre == 7)
   {
Color(6,0);printf("Si tu as le codex avec toi, place-le dans la cavite et... 21\n");
printf("Sinon, tu t'engages dans une galerie qui debouche sur la jungle, et tu\n");
printf("pars a sa recherche... 13\n\n");
Color(3,0);scanf("%ld", &nombre); printf("\n\n");Color(15,0);
   if (nombre != 21) if (nombre != 13)
  {
printf("Game over !\n\n\n");
system("PAUSE");
  return 0;
}
    }


if (nombre == 8)
    {
Color(6,0);printf("Tout a coup, un bruit te fait sursauter et surgit derriere toi un homme\n");
printf("pare de plumes multicolores et arme d'une sarbacane ! Un guerrier azteque ?\n");
printf("N'ont-ils pas tous disparus ?\n\n");
printf("- Tu fuis sans te poser d'autres questions... 23\n");
printf("- L'homme leve son arme et tu tombes foudroye... 19\n\n");
Color(3,0);scanf("%ld", &nombre); printf("\n\n");Color(15,0);
if (nombre != 23) if (nombre != 19)
  {
printf("Game over !\n\n\n");
system("PAUSE");
  return 0;
}
    }


if (nombre == 9)
    {
Color(6,0);printf("Tu finis par semer tes ennemis emplumes et plus egare que jamais, tu\n");
printf("entends au loin un claquement sec ! Peut-etre le fusil d'un membre de\n");
printf("l'expedition ?\n\n");
printf("- Tu grimpes au sommet d'un arbre... 29\n");
printf("- Tu te diriges vers le bruit... 2\n\n");
Color(3,0);scanf("%ld", &nombre); printf("\n\n");Color(15,0);
if (nombre != 29) if (nombre != 2)
  {
printf("Game over !\n\n\n");
system("PAUSE");
  return 0;
}
    }



if (nombre == 10)
    {
Color(6,0);printf("Tu retombes sur les fesses et, le coccyx un peu meurtri, decouvres l'une\n");
printf("des salles du \"Temple du Serpent\" dedie au fameux empereur Moctezuma !\n");
printf("Tres vite, tu t'apercois qu'il porte bien son nom : un serpent corail des\n");
printf("plus venimeux surgit de derriere une colonne ouvragee !\n\n");
printf("- Tu tentes de l'effrayer... 35\n");
printf("- Tu t'en ecartes et t'engouffres dans un couloir... 25\n\n");
Color(3,0);scanf("%ld", &nombre); printf("\n\n");Color(15,0);
if (nombre != 35) if (nombre != 25)
  {
printf("Game over !\n\n\n");
system("PAUSE");
  return 0;
}
    }


if (nombre == 11)
    {
Color(6,0);printf("\"Tu as profane un lieu sacre\" aboie le chef, \"nous allons te sacrifier\n");
printf("aux dieux !\" Il te detache et :\n\n");
printf("- Tu en profites pour t'echapper vers la jungle... 9\n");
printf("- Atterre, tu le suis vers le lieu du sacrifice... 15\n\n");
Color(3,0);scanf("%ld", &nombre); printf("\n\n");Color(15,0);
if (nombre != 9) if (nombre != 15)
  {
printf("Game over !\n\n\n");
system("PAUSE");
  return 0;
}
    }



if (nombre == 12)
    {
Color(6,0);printf("Au bout de dix metres de reptations ereintantes, le mince boyau est obstrue\n");
printf("par un ecoulement !\n\n");
printf("- Tu fais demi-tour et tu poursuis ta descente... 17\n");
printf("- Tu degages les pierres qui t'empechent d'avancer... 4\n\n");
Color(3,0);scanf("%ld", &nombre); printf("\n\n");Color(15,0);
if (nombre != 17) if (nombre != 4)
  {
printf("Game over !\n\n\n");
system("PAUSE");
  return 0;
}
    }



if (nombre == 13)
    {
Color(6,0);printf("Tu ouvres ton chemin a coup de machette et debouches soudain sur une\n");
printf("statue grimacante : l'effigie d'un dieu azteque, Huitzilopochtli !\n\n");
printf("- Tu t'approches, intrigue... 23\n");
printf("- Prudent, tu inspectes les alentours... 8\n\n");
Color(3,0);scanf("%ld", &nombre); printf("\n\n");Color(15,0);
if (nombre != 8) if (nombre != 23)
  {
printf("Game over !\n\n\n");
system("PAUSE");
  return 0;
}
    }



if (nombre == 14)
    {
Color(6,0);printf("Soudain, le calendrier pivote sur lui-meme et decouvre une salle\n");
printf("gigantesque ou trone la statue du dieu Quetzalcoatl ! Sa main droite\n");
printf("semble indiquer une cavite pratiquee dans son ventre !\n\n");
printf("- Tu t'approches de la statue... 7\n");
printf("- Circonspect, tu longes les murs... 22\n\n");
Color(3,0);scanf("%ld", &nombre); printf("\n\n");Color(15,0);
if (nombre != 7) if (nombre != 22)
  {
printf("Game over !\n\n\n");
system("PAUSE");
  return 0;
}
    }



if (nombre == 15)
    {
Color(6,0);printf("Les hommes t'escortent le long d'un chemin dalle termine par un gouffre\n");
printf("au fond duquel une eau limpide laisse transparaitre quelques objets brillants,\n");
printf("te voici devant le puit des sacrifices !!\n\n");
printf("- Tres digne, tu t'approches du precipice et te jettes dans le vide... 24\n");
printf("- Tu resistes, mais un homme t'assomme et te propulse dans le gouffre... 36\n\n");
Color(3,0);scanf("%ld", &nombre); printf("\n\n");Color(15,0);
if (nombre != 24) if (nombre != 36)
  {
printf("Game over !\n\n\n");
system("PAUSE");
  return 0;
}
    }



if (nombre == 17)
    {
Color(6,0);printf("Un essaim virevoltant de chauve-souris salue ton arrivee au fond du puits\n");
printf("lorsque tu percois un leger courant d'air issu de l'interstice d'une porte\n");
printf("entrebaillee. Juste a cote, une grosse pierre sculptee repose sur le sol...\n\n");
printf("- Tu ouvres la porte... 4\n");
printf("- Tu t'approches de la pierre... 20\n\n");
Color(3,0);scanf("%ld", &nombre); printf("\n\n");Color(15,0);
if (nombre != 20) if (nombre != 4)
  {
printf("Game over !\n\n\n");
system("PAUSE");
  return 0;
}
    }


 if (nombre == 18)
    {
Color(6,0);printf("La sueur te brouille la vue et attire une nuee de moustiques sanguinaires\n");
printf("qui te harcelent sans repit ! Harasse, tu t'assieds entre les racines d'un\n");
printf("hevea lorsque, tout a coup, le sol se derobe sous tes pieds !!\n\n");
printf("- Tu te laisses glisser dans le trou... 10\n");
printf("- Tu t'accroches aux racines et... 5\n\n");
Color(3,0);scanf("%ld", &nombre); printf("\n\n");Color(15,0);
if (nombre != 10) if (nombre != 5)
  {
printf("Game over !\n\n\n");
system("PAUSE");
  return 0;
}
    }


if (nombre == 19)
    {
Color(6,0);printf("Le soporifique de la flechette n'a eu qu'un court effet et tu te reveilles\n");
printf("ligote a un poteau, le regard percant du chef des guerriers rive sur ta\n");
printf("pauvre personne ! Il s'approche et te fait comprendre que tu es le prisonnier\n");
printf("de la derniere tribu azteque !!\n\n");
printf("- Tu lui ris au nez... 33\n");
printf("- Tu attends la suite des evenements... 11\n\n");
Color(3,0);scanf("%ld", &nombre); printf("\n\n");Color(15,0);
if (nombre != 33) if (nombre != 11)
  {
printf("Game over !\n\n\n");
system("PAUSE");
  return 0;
}
    }


if (nombre == 20)
    {
Color(6,0);printf("Tu decouvres, stupefait, l'un des fameux calendriers azteques ! Un soleil\n");
printf("vient le frapper en plein centre !\n\n");
printf("- Tu poses ta main a l'endroit que t'indique la lumiere... 31\n");
printf("- Tu n'oses y toucher et attends... 14\n\n");
Color(3,0);scanf("%ld", &nombre); printf("\n\n");Color(15,0);
if (nombre != 31) if (nombre != 14)
  {
printf("Game over !\n\n\n");
system("PAUSE");
  return 0;
}
    }


if (nombre == 21)
    {
Color(6,0);printf("Dans un grondement terrifiant, la machoire divine s'ouvre et laisse jaillir\n");
printf("des monceaux d'or !! Le tresor de Moctézuma ! Hourra ! Apres t'etre remis\n");
printf("de tes emotions :\n\n");
printf("- Tu regagnes la sortie en jalonnant ton chemin de quelques pieces d'or... 34\n");
printf("- Tu te charges le plus possible et retourne dans la jungle... 30\n\n");
Color(3,0);scanf("%ld", &nombre); printf("\n\n");Color(15,0);
if (nombre != 34) if (nombre != 30)
  {
printf("Game over !\n\n\n");
system("PAUSE");
  return 0;
}
    }


if (nombre == 22)
    {
Color(6,0);printf("Ta prudence est tres vite recompensee car soudain une volee de flechettes\n");
printf("empoisonnees vient se ficher au pied de la statue ! Ouf ! Le danger passe\n");
printf("tu t'approches du dieu... 7\n\n");
Color(3,0);scanf("%ld", &nombre); printf("\n\n");Color(15,0);
if (nombre != 7)
  {
printf("Game over !\n\n\n");
system("PAUSE");
  return 0;
}
    }


if (nombre == 23)
   {
Color(6,0);printf("Aussitot, une nuee de flechettes vole autour de toi et les cris sauvages\n");
printf("d'une multitude de guerriers azteques accompagnent ta fuite ! Soudain,\n");
printf("l'un des dards te touche au bras et tu tombes evanoui ! ... 19\n\n");
Color(3,0);scanf("%ld", &nombre); printf("\n\n");Color(15,0);
if (nombre != 19)
  {
printf("Game over !\n\n\n");
system("PAUSE");
  return 0;
}
    }


if (nombre == 24)
    {
Color(6,0);printf("Tu plonges dans l'eau tiede et au travers de milliers de bulles apercois\n");
printf("l'entree d'une grotte sous-marine ! Tu y penetres et debouches a l'air\n");
printf("libre ! Sauve ! Te voici dans une vaste caverne ou repose sur une stele,\n");
printf("un livre orne de pierres precieuses : un \"codex\", recueil de savoir des\n");
printf("grands pretres azteques ! Tu le prends et :\n\n");
printf("- Si tu as deja decouvert le temple du serpent, tu suis le couloir qui\n");
printf("s'ouvre sur ta droite... 27\n");
printf("- Sinon, tu prends celui de gauche et retrouves la jungle etouffante... 18\n\n");
Color(3,0);scanf("%ld", &nombre); printf("\n\n");Color(15,0);
if (nombre != 27) if (nombre != 18)
  {
printf("Game over !\n\n\n");
system("PAUSE");
  return 0;
}
    }


if (nombre == 25)
    {
Color(6,0);printf("Le corridor est soudain barre par une herse infranchissable ! Au meme\n");
printf("instant, derriere toi, s'est ouverte beante une trappe qui te coupe toute\n");
printf("retraite ! Te voila piege ! Tu descends alors dans la fosse en t'accrochant\n");
printf("aux asperites de la roche et rencontres sur la paroi un orifice etroit\n");
printf("et sombre...\n\n");
printf("- Tu t'y engouffres... 12\n");
printf("- Tu poursuis ta descente... 17\n\n");
Color(3,0);scanf("%ld", &nombre); printf("\n\n");Color(15,0);
if (nombre != 12) if (nombre != 17)
  {
printf("Game over !\n\n\n");
system("PAUSE");
  return 0;
}
    }


if (nombre == 27)
    {
Color(6,0);printf("Deux heures de marche penible te menent enfin devant une porte de bois\n");
printf("vermoulu que tu defonces d'une chiquenaude ! Tu penses rever lorsque tu\n");
printf("apercois la salle du templs du serpent ou siege Quetzalcoatl !! Cette\n");
printf("region est un veritable gruyere ! Tu t'approches de la statue et place\n");
printf("le \"codex\" dans la cavite... 21\n\n");
Color(3,0);scanf("%ld", &nombre); printf("\n\n");Color(15,0);
if (nombre != 21)
  {
printf("Game over !\n\n\n");
system("PAUSE");
  return 0;
}
    }


if (nombre == 29)
    {
Color(6,0);printf("Du haut de ce repere, tu apercois au nord une nuee d'oiseaux multicolores\n");
printf("qui s'envolent : serait-ce l'expedition du professeur Alguera qui les\n");
printf("effraient ? A l'est, un petit lac miroite au soleil...\n\n");
printf("- Tu vas vers le nord... 2\n");
printf("- Tu preferes le lac, que tu atteins rapidement, et tu decides de t'y\n");
printf("baigner... 24\n\n");
Color(3,0);scanf("%ld", &nombre); printf("\n\n");Color(15,0);
if (nombre != 2) if (nombre != 24)
  {
printf("Game over !\n\n\n");
system("PAUSE");
  return 0;
}
    }


if (nombre == 30)
    {
Color(6,0);printf("Enfin a l'air libre ! Il ne te reste plus qu'a retrouver le professeur\n");
printf("Alguera !\n\n");
printf("- Tu pars directement a sa recherche... 32\n");
printf("- Tu marques l'entree du temple a l'aide des joyaux que tu disposes en\n");
printf("guirlandes sur les arbustes alentour... 34\n\n");
Color(3,0);scanf("%ld", &nombre); printf("\n\n");Color(15,0);
if (nombre != 32) if (nombre != 34)
  {
printf("Game over !\n\n\n");
system("PAUSE");
  return 0;
}
    }


if (nombre == 31)
    {
Color(6,0);printf("Aussitot, un mecanisme secret se declenche et laisse paraitre une ouverture\n");
printf("beante que tu franchis sans attendre ! Le spectacle qui s'etale devant toi\n");
printf("est saisissant ! Une salle gigantesque tapissee de pierreries et d'or\n");
printf("abrite la statue terrifiante du dieu Quetzacoatl !! Sa main droite semble\n");
printf("indiquer une cavite pratiquee sur son ventre...\n\n");
printf("- Tu te diriges vers le dieu... 7\n");
printf("- Mefiant, tu lances quelques cailloux dans l'allee centrale... 22\n\n");
Color(3,0);scanf("%ld", &nombre); printf("\n\n");Color(15,0);
if (nombre != 7) if (nombre != 22)
  {
printf("Game over !\n\n\n");
system("PAUSE");
  return 0;
}
    }

} while (nombre <= 31); /* Fermeture boucle pour remonter */


if (nombre == 32)
    {
Color(8,0);printf("Le lendemain matin, harasse, tu t'endors pres d'un arbre. A peine as-tu\n");
printf("ferme un oeil qu'une main se pose sur ton epaule : le professeur Alguera !\n");
printf("Fou de joie, tu lui racontes tes aventures, mais malgré vos recherches\n");
printf("acharnees, vous ne retrouvez pas l'entree du temple ! Ce n'est qu'a\n");
printf("l'occasion d'une seconde expedition que vous la decouvrirez !! Que de\n");
printf("temps perdu !\n\n");                                                   /* Fin 1 */
Color(15,0);system("PAUSE");printf("\n\n");
Color(12,0);printf("Trophee obtenu : Si pres...");compteur++;printf("\n\n");Color(4,0);printf("Merci d'avoir joue !");printf("\n\n\n");
printf("Tu viens de decouvrir la fin numero 1\n\n");
Color(15,0);system("PAUSE");printf("\n\n");
}

if (nombre == 33)
    {
Color(8,0);printf("Le chef, suffoque par un tel outrage, leve sa hache et... Surgit alors\n");
printf("l'expedition du professeur Alguera qui met en fuite tes agresseurs ! Ouf !\n");
printf("Apres une telle aventure, ton ami decide de te ramener a Veracruz ou tu\n");
printf("passeras de tres agreables vacances, mais bien loin de tout tresor !\n");
printf("Dommage !\n\n");                                                       /* Fin 2 */
Color(15,0);system("PAUSE");printf("\n\n");
Color(12,0);printf("Trophee obtenu : Sauve par le gong !");compteur++;printf("\n\n");Color(4,0);printf("Merci d'avoir joue !");printf("\n\n\n");
printf("Tu viens de decouvrir la fin numero 2\n\n");
Color(15,0);system("PAUSE");printf("\n\n");
}

if (nombre == 34)
    {
Color(10,0);printf("Au terme de deux jours de recherche, tu perds tout espoir de retrouver\n");
printf("le professeur Alguera, lorsque soudain : \"Docteur Pedro, je presume ?\"\n");
printf("et le facies hilare de ton ami surgit d'un buisson ! Apres un bon repas,\n");
printf("vous partez en quete du temple que vous retrouvez facilement grace aux\n");
printf("reperes que tu as laisses ! Vous etes desormais suffisamment riches pour\n");
printf("organiser une autre expedition et peut-etre decouvrir un nouveau tresor\n\n");
printf("Bonne chance et a bientot !\n\n");                                      /* Fin 3 */
Color(15,0);system("PAUSE");printf("\n\n");
Color(12,0);printf("Trophee obtenu : Hurra !");compteur++;printf("\n\n");Color(14,0);printf("Mot de passe final obtenu : tresor");printf("\n\n\n");
Color(4,0);printf("Tu viens de decouvrir la fin numero 3\n\n");
Color(15,0);system("PAUSE");printf("\n\n");
}

if (nombre == 35)
    {
Color(8,0);printf("Mais l'animal tres vif te pique a la main et tu sombres aussitot dans un\n");
printf("coma mouvemente ! A ton reveil, le professeur Alguera t'explique qu'il\n");
printf("t'a retrouve par hasard et que tu es desormais hors de danger ! Lors de\n");
printf("ta convalescence tu recevras des nouvelles de l'expedition impatiente de\n");
printf("te revoir, mais en attendant : bon retablissement !!\n\n");            /* Fin 4 */
Color(15,0);system("PAUSE");printf("\n\n");
Color(12,0);printf("Trophee obtenu : allite !");compteur++;printf("\n\n");Color(4,0);printf("Merci d'avoir joue !");printf("\n\n\n");
printf("Tu viens de decouvrir la fin numero 4\n\n");
Color(15,0);system("PAUSE");printf("\n\n");
}

if (nombre == 36)
    {
Color(8,0);printf("Le contact glace de l'eau te fait reprendre conscience. Tu plonges alors\n");
printf("vers les objets qui scintillent sur le fond du lac et ramenes a la surface\n");
printf("quelques statuettes d'or ! Soudain, tu entends les cris du professeur\n");
printf("Alguera qui te lance une corde, et apres le recit de tes aventures, vous\n");
printf("repartez vers la civilisation... Tu n'as pas decouvert le tresor de\n");
printf("Moctezuma, mais ces quelques statuettes vous permettront d'organiser une\n");
printf("autre expedition ! Ce n'est que partie remise !!\n\n");                 /* Fin 5 */
Color(15,0);system("PAUSE");printf("\n\n");
Color(12,0);printf("Trophee obtenu : Une autre fois, peut-etre...");compteur++;printf("\n\n");Color(4,0);printf("Merci d'avoir joue !");printf("\n\n\n");
printf("Tu viens de decouvrir la fin numero 5\n\n");
Color(15,0);system("PAUSE");printf("\n\n");
}



/* Modèle pour chacune des 5 fins */

Color(8,0);printf("Une derniere question : Combien y a-t-il de fins alternatives ?\n\n");
Color(3,0);scanf("%ld",&nombre1);printf("\n\n");Color(15,0);
if(nombre1==5)
{
Color(12,0);printf("Trophee obtenu : \"De A a Z !\" II\n\n\n");compteur++;Color(15,0);
}
if(nombre1!=5)
{
Color(8,0);printf("Visiblement tu n'as pas explore toutes les possibilites du jeu,\nje t'invite donc a recommencer !\n\n\n");Color(15,0);
}

printf("\n\n");
Color(15,0);system("PAUSE");printf("\n\n");

Color(5,0);printf("STATISTIQUES\n\n");                                                     /* Stats */
Color(11,0);printf("Tu as obtenu %i trophee\n\n", compteur);
resultat= compteur/0.34;
Color(11,0);printf("Soit %ld",resultat);printf(" pour cent du jeu complete\n\n\n");



Color(8,0);printf("Connais-tu, oui ou non, le mot de passe final ?\n\n");
Color(3,0);scanf("%s", chaine2);printf("\n\n");Color(15,0);

if (strcmp (chaine2, "oui") == 0)
{
Color(8,0);printf("Ecris-le maintenant pour decouvrir l'ultime recompense de ce jeu :\n\n");
Color(3,0);scanf("%s", chaine);printf("\n\n");Color(15,0);
   if (strcmp (chaine, "tresor") == 0)
   {
   Color(8,0);printf("Tu as le droit de choisir une seule recompense parmi toutes celles qui te\nsont presentes :\n\n\n");
   Color(2,0);printf("1- Le meilleur jeu pokemon de tous les temps\n\n");
   Color(3,0);printf("2- Plein de bonbons !\n\n");
   Color(4,0);printf("3- Dragon Ball Multiverse\n\n");
   Color(5,0);printf("4- Ghibli dans tous ses etats\n\n");
   Color(6,0);printf("5- Bienvenue dans la tribu des loups\n\n");
   Color(9,0);printf("6- Matiere a penser...\n\n");
   Color(10,0);printf("7- Le paradis des bulles\n\n");
   Color(11,0);printf("8- Le soleil levant culinaire\n\n");
   Color(12,0);printf("9- On apprend a tout age\n\n");
   Color(13,0);printf("10- Dessins animes\n\n\n");

  Color(8,0);printf("Ton choix ?\n\n");
  Color(3,0);scanf("%ld", &nombre2); printf("\n\n");Color(15,0);

if (nombre2 == 1)
{
           Color(14,0); printf("http://aethnight.fr/gemme/\n\n");Color(15,0);
}

if (nombre2 == 2)
{
           Color(14,0); printf("http://www.candysan.com/\n\n");Color(15,0);
}

if (nombre2 == 3)
{
            Color(14,0);printf("http://www.dragonball-multiverse.com/fr/page-0.html\n\n");Color(15,0);
}

if (nombre2 == 4)
{
            Color(14,0);printf("http://www.buta-connection.net/accueil/\n\n");Color(15,0);
}

if (nombre2 == 5)
{
           Color(14,0); printf("http://www.shinokami.com/index.html\n\n");Color(15,0);
}

if (nombre2 == 6)
{
           Color(14,0); printf("http://ludosophie.canalblog.com/\n\n");Color(15,0);
}

if (nombre2 == 7)
{
           Color(14,0); printf("http://www.webcomics.fr/\n\n");Color(15,0);
}

if (nombre2 == 8)
{
           Color(14,0); printf("http://www.a-vos-baguettes.com/Accueil.html\n\n");Color(15,0);
}

if (nombre2 == 9)
{
           Color(14,0); printf("http://www.crapulescorp.net/japonais/index.php5\n\n");Color(15,0);
}

if (nombre2 == 10)
{
           Color(14,0); printf("http://www.kobuta.fr/animation\n\n");Color(15,0);
}


printf("\n\n");
Color(4,0);printf("Astuce : Tu as desormais debloque le dernier menu, que tu decouvriras\n");
printf("en tapant 5 au menu principal. Enjoy !\n\n");Color(15,0);
   }

else
{
  printf("\n\nCeci n'est pas un mot de passe correct !\n\n");
}
        }
      system("PAUSE");



            } /* Moctézuma fermeture finale */


if ( strcmp (ChoixBonus, "Quetzal") == 1) if (strcmp (ChoixBonus, "Moctezuma") == 1)
{

    printf("\n\nCeci n'est pas un mot de passe correct !\n\n");

}

printf("\n\n");
printf("Veux-tu retourner au menu principal ?\n\n");
Color(3,0);scanf("%s", chaine);printf("\n\n\n\n\n");Color(15,0);

      break;

   case 4 :

   Color(8,0);printf("IDEE ORIGINALE       GAME DESIGN       LEVEL DESIGN       PLATEFORME\n\n");Color(15,0);printf("Paul Compere         Paul Compere      Paul Compere        Windows  \n\n\n");
   Color(8,0);printf("PROGRAMMATION       ENVIRONNEMENT DE DEVELOPPEMENT        SCENARIO\n\n");
   Color(15,0);printf("Langage C           Dev-c++                             Paul Compere\n\n\n");
   Color(6,0);printf("Scenario : La plume d'or du Quetzal           Scenario : Le tresor de Moctezuma\n");
   Color(15,0);printf("Super Picsou Geant N17, avril 1987            Super Picsou Geant N23, avril 1988\n\n");
   Color(4,0);printf("                              COPYRIGHT decembre 2013\n\n\n");
   Color(12,0);printf("Trophee obtenu : Fan !\n\n\n");compteur++;Color(15,0);
   printf("Veux-tu retourner au menu principal ?\n\n");
   Color(3,0);scanf("%s", chaine);printf("\n\n\n\n\n");Color(15,0);

   break;


   case 5 :

        printf("Connais-tu, oui ou non, le mot de passe final ?\n\n");
Color(3,0);scanf("%s", chaine2);printf("\n\n");Color(15,0);

if (strcmp (chaine2, "oui") == 0)
{
printf("Ecris-le maintenant pour decouvrir l'ultime recompense de ce jeu :\n\n");
Color(3,0);scanf("%s", chaine3);printf("\n\n");Color(15,0);
   if (strcmp (chaine3, "tresor") == 0)
   {
   Color(14,0);printf("Trophee platine obtenu : \"ca, c'est fait !\"\n\n");compteur++;Color(15,0);
   printf("Bravo, tu as termine le jeu !\n\n\n");
   system("PAUSE");printf("\n");
   Color(8,0);printf("Tu as le droit de choisir une seule recompense parmi toutes celles qui te\nsont presentes :\n\n");
   Color(2,0);printf("1- Le meilleur jeu pokemon de tous les temps\n\n");
   Color(3,0);printf("2- Plein de bonbons !\n\n");
   Color(4,0);printf("3- Dragon Ball Multiverse\n\n");
   Color(5,0);printf("4- Ghibli dans tous ses etats\n\n");
   Color(6,0);printf("5- Bienvenue dans la tribu des loups\n\n");
   Color(9,0);printf("6- Matiere a penser...\n\n");
   Color(10,0);printf("7- Le paradis des bulles\n\n");
   Color(11,0);printf("8- Le soleil levant culinaire\n\n");
   Color(12,0);printf("9- On apprend a tout age\n\n");
   Color(13,0);printf("10- Dessins animes\n\n\n");

  Color(8,0);printf("Ton choix ?\n\n");
  Color(3,0);scanf("%ld", &nombre2); printf("\n\n");Color(15,0);

if (nombre2 == 1)
{
            Color(14,0);printf("http://aethnight.fr/gemme/\n\n");Color(15,0);
}

if (nombre2 == 2)
{
            Color(14,0);printf("http://www.candysan.com/\n\n");Color(15,0);
}

if (nombre2 == 3)
{
           Color(14,0);printf("http://www.dragonball-multiverse.com/fr/page-0.html\n\n");Color(15,0);
}

if (nombre2 == 4)
{
            Color(14,0);printf("http://www.buta-connection.net/accueil/\n\n");Color(15,0);
}

if (nombre2 == 5)
{
           Color(14,0);printf("http://www.shinokami.com/index.html\n\n");Color(15,0);
}

if (nombre2 == 6)
{
            Color(14,0);printf("http://ludosophie.canalblog.com/\n\n");Color(15,0);
}

if (nombre2 == 7)
{
            Color(14,0);printf("http://www.webcomics.fr/\n\n");Color(15,0);
}

if (nombre2 == 8)
{
            Color(14,0);printf("http://www.a-vos-baguettes.com/Accueil.html\n\n");Color(15,0);
}

if (nombre2 == 9)
{
            Color(14,0);printf("http://www.crapulescorp.net/japonais/index.php5\n\n");Color(15,0);
}

if (nombre2 == 10)
{
            Color(14,0);printf("http://www.kobuta.fr/animation\n\n");Color(15,0);
}
   }

else
{
printf("\n\nCeci n'est pas un mot de passe correct !\n\n");
}
}

   printf("Veux-tu retourner au menu principal ?\n\n");
Color(3,0);scanf("%s", chaine);printf("\n\n\n\n\n");Color(15,0);


   break;

  default:

printf("Tu n'as pas rentre un nombre correct !\n\n");
printf("Veux-tu retourner au menu principal ?\n\n");
Color(3,0);scanf("%s", chaine);printf("\n\n\n\n\n");Color(15,0);
break;

      }  /* Fermeture Switch */

/* Idées à rajouter : un nombre de vie initial, avec compteur, et un game over
qui ferme le programme quand le compteur = 0 / Possibilité de gagner une vie à
chaque fois que l'on arrive au bout d'un des 2 jeux / Rajouter des trophés
dans le second jeu et les relier aux stats finaux / Créer une boucle supplémentaire
pour chacun des jeux, qui laisse le choix de recommencer ou de retourner au menu principal /
Remplacer le langage booleen par "oui" et "non" / Intégrer un système de mot de passe
au menu principal pour remplacer la sauvegarde : chaque nouveau mot de passe s'obtient
à l'issue d'un scénario, et permet de débloquer le scénario suivant, en le rentrant
au menu principal */


} while (strcmp (chaine, "oui") == 0);


system("PAUSE");
  return 0;
}


void Color(int couleurDuTexte,int couleurDeFond) // fonction d'affichage de couleurs
{
        HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(H,couleurDeFond*16+couleurDuTexte);
}

 /* Fermeture finale */
