/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquince <jquince@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 14:19:26 by jquince           #+#    #+#             */
/*   Updated: 2019/12/07 16:06:38 by jquince          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <stdbool.h>

bool continuerPartie(char x)
{
    bool try = false;
    if (x == 'Y' || x == 'y')
        try = true;
    else if (x == 'N' || x == 'n')
        try = false;

    return try;
}


void menuLevel()
{
    printf("--------------------------------------------------------\n");
    printf("Choisissez votre niveau\n");
    printf("Pressez: 1 = entre 1 et 100\n");
    printf("Pressez: 2 = entre 1 et 1000\n");
    printf("Pressez: 3 = entre 1 et 10000\n");
    printf("--------------------------------------------------------\n");
}



int main(int argc, char **argv)
{

    int choix;
    int nombreMystere = 0, nombreChoisie = 0, compteur;
    int MAX = 100, MIN = 1; 
    char x;
    menuLevel();

    printf("Choisisser votre niveau svp: ");
    scanf("%d", &choix);

    switch (choix)
    {
    case 1:
       MAX = MAX * 10;

       printf("--------Vous avez 20 points de vie--------\n\n");
       
       do
       {
            srand(time(NULL));
            nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;
        
            compteur = 0;
       
            do
            {
                printf("Choissez votre nombre: ");
                scanf("%d", &nombreChoisie);

                if (nombreMystere > nombreChoisie)
                    printf("C'est plus grand que le votre\n\n");
                else if (nombreMystere < nombreChoisie)
                    printf("C'est plus petit que le votre\n\n");
                else
                    printf("HELL YAAAH, You got it\n\n");
                    
                compteur++;
                if (compteur == 20)
                {
                    printf("Game Over");
                    exit(0);
                }
            } while (nombreMystere != nombreChoisie);
       
            printf("Do you want to try again:(Y/N) \n\n");
            scanf("%s", &x);

        } while (continuerPartie(x) == true);
        
        
        
        break;
    case 2:
         MAX = MAX * 10;

         printf("--------Vous avez 40 points de vie--------\n\n");

        do
        {
                srand(time(NULL));
                nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;
            
                compteur = 0;
        
                do
                {
                    printf("Choissez votre nombre: ");
                    scanf("%d", &nombreChoisie);

                    if (nombreMystere > nombreChoisie)
                        printf("C'est plus grand que le votre\n\n");
                    else if (nombreMystere < nombreChoisie)
                        printf("C'est plus petit que le votre\n\n");
                    else
                        printf("HELL YAAAH, You got it\n\n");
                        
                    compteur++;
                    if (compteur == 40)
                    {
                        printf("Game Over");
                        exit(0);
                    }
                } while (nombreMystere != nombreChoisie);
        
                printf("Do you want to try again:(Y/N) \n\n");
                scanf("%s", &x);

            } while (continuerPartie(x) == true);
        
        break;
    case 3:
        MAX = MAX * 1000;

        printf("--------Vous avez 80 points de vie--------\n\n");

        do
        {
                srand(time(NULL));
                nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;
            
                compteur = 0;
        
                do
                {
                    printf("Choissez votre nombre: ");
                    scanf("%d", &nombreChoisie);

                    if (nombreMystere > nombreChoisie)
                        printf("C'est plus grand que le votre\n\n");
                    else if (nombreMystere < nombreChoisie)
                        printf("C'est plus petit que le votre\n\n");
                    else
                        printf("HELL YAAAH, You got it\n\n");
                        
                    compteur++;
                    if (compteur == 80)
                    {
                        printf("Game Over");
                        exit(0);
                    }
                } while (nombreMystere != nombreChoisie);
        
                printf("Do you want to try again:(Y/N) \n\n");
                scanf("%s", &x);

            } while (continuerPartie(x) == true);
        
     
        break;
    
    default:
        break;
    }

    return (0);
}
