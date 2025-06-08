#include <stdio.h>
#include <string.h>

#define MAX_ITEMS 100

struct jewellery {
    int price;
    float gst;
    char name[50];
    char item;
    char pym[10];
};

int main() {
    struct jewellery jwl[MAX_ITEMS];
    int ch[MAX_ITEMS], num[MAX_ITEMS], grams[MAX_ITEMS];
    float cost[MAX_ITEMS], tpri[MAX_ITEMS];
    char type[MAX_ITEMS];
    float silver_rate, gold_rate, platinum_rate, diamond_rate;
    float bill = 0;
    int i, j, l = 0;

    printf("\t\t\t***************************PSP_JEWELLERS**************************\n");
    printf("\n\t\t============Money doesn't come easily for everyone===========\n");

    printf("\nEnter Customer Name: ");
    scanf("%s", jwl[l].name);

    printf("***********************************************\n");
    printf("\tWelcome Mr/Mrs %s\n\n", jwl[l].name);

    do {
        printf("What Type of Jewellery You Are Looking For:\n");
        printf("\tSilver:S\n\tGold:G\n\tPlatinum:P\n\tDiamond:D\n");
        printf("Select Your Choice: ");
        scanf(" %c", &jwl[l].item);  // Note the space before %c

        // Silver
        if (jwl[l].item == 'S' || jwl[l].item == 's') {
            printf("\nYou Selected Silver\n");
            printf("Enter today's silver rate: ");
            scanf("%f", &silver_rate);
            jwl[l].price = silver_rate;
        }
        // Gold
        else if (jwl[l].item == 'G' || jwl[l].item == 'g') {
            printf("\nYou Selected Gold\n");
            printf("Enter today's gold rate: ");
            scanf("%f", &gold_rate);
            jwl[l].price = gold_rate;
        }
        // Platinum
        else if (jwl[l].item == 'P' || jwl[l].item == 'p') {
            printf("\nYou Selected Platinum\n");
            printf("Enter today's platinum rate: ");
            scanf("%f", &platinum_rate);
            jwl[l].price = platinum_rate;
        }
        // Diamond
        else if (jwl[l].item == 'D' || jwl[l].item == 'd') {
            printf("\nYou Selected Diamond\n");
            printf("Enter today's diamond rate: ");
            scanf("%f", &diamond_rate);
            jwl[l].price = diamond_rate;
        } else {
            printf("Invalid item type selected.\n");
            continue;
        }

        printf("\n\t1.Chain\n\t2.Ring\n\t3.Bracelet");
        printf("\nSelect Your Model: ");
        scanf("%d", &ch[l]);

        printf("Enter the weight (grams): ");
        scanf("%d", &grams[l]);
        printf("Enter number of items: ");
        scanf("%d", &num[l]);

        cost[l] = grams[l] * num[l] * jwl[l].price;
        jwl[l].gst = cost[l] * 0.18;
        tpri[l] = cost[l] + jwl[l].gst;

        printf("\nTotal Cost (without GST): %.2f", cost[l]);
        printf("\nGST (18%%): %.2f", jwl[l].gst);
        printf("\nTotal Cost (with GST): %.2f\n", tpri[l]);

        printf("\nEnter 1 to continue shopping, 0 to finish: ");
        scanf("%d", &j);
        l++;

    } while (j == 1);

    // Final Billing
    printf("\n*****************************************\n");
    printf("\n\tSI.NO\tITEM\t\tPRICE\n");

    for (i = 0; i < l; i++) {
        char *itemName;
        switch (ch[i]) {
            case 1: itemName = "Chain"; break;
            case 2: itemName = "Ring"; break;
            case 3: itemName = "Bracelet"; break;
            default: itemName = "Unknown"; break;
        }

        printf("\t%d\t%s\t\t%.2f (GST: %.2f)\n", i + 1, itemName, cost[i], jwl[i].gst);
        bill += tpri[i];
    }

    printf("\nTOTAL BILL INCLUDING GST: %.2f", bill);
    printf("\n\nPayment Method (Cash/Card): ");
    scanf("%s", jwl[0].pym);

    printf("*************************************************");
    printf("\n\n\t_____________THANK_YOU________________");
    printf("\n\t************VISIT_AGAIN*************\n");

    return 0;
}

