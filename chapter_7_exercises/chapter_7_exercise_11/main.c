#include <stdio.h>
#define PRICE1 1.25
#define PRICE2 0.65
#define PRICE3 0.89
#define DISCOUNT1 0.05
#define SHIPPING1 3.50
#define SHIPPING2 10.00
#define SHIPPING3 8.00

int main()
{
    float artichokes, beets, carrots, price, shipping, discount, order, pounds;
    char ch;


    artichokes = beets = carrots = discount = 0.00;




        printf("Please select a corresponding letter to choose which product you'd like to order\n");
        printf("Enter number of pounds.\n");
        printf("q to quit.\n");
        printf("**************************************************************\n");
        printf("a.) Artichokes\nb.) Beets\nc.) Carrots\nq.) quit.\n");
        printf("**************************************************************\n");

    while((ch = getchar()) != 'q')
            {
            switch (ch)
                {   case 'a' : printf("Enter lbs of Artichokes desired:\n");
                                scanf("%f", &order);
                                artichokes += order;
                                printf("Please enter the letter of the next produce item.\n");
                                break;
                    case 'b' : printf("Enter lbs of Beets desired:\n");
                                scanf("%f", &order);
                                beets += order;
                                printf("Please enter the letter of the next produce item.\n");
                                break;
                    case 'c' : printf("Enter lbs of Carrots desired:\n");
                                scanf("%f", &order);
                                carrots += order;
                                printf("Please enter the letter of the next produce item.\n");
                                break;
                    case 'q' :  break;
                }
            }

            price = (artichokes * PRICE1) + (beets * PRICE2) + (carrots * PRICE3);
                if(price >= 100.00)
                {
                    discount = price * 0.05;
                    price = price - (discount);
                }
            pounds = artichokes + beets + carrots;
                if(pounds <= 5)
                    shipping = SHIPPING1;
                else if(pounds < 20)
                    shipping = SHIPPING2;
                else if(pounds >= 20)
                    shipping = SHIPPING3 + (0.10 * pounds);

        printf("The cost per pound of produce is...\n Artichokes: $%0.2f per lb\n Beets: $%0.2f per lb\n Carrots: $%0.2f per lb\n\n", PRICE1, PRICE2, PRICE3);
        printf("You ordered %0.0f lbs of Artichokes, %0.0f lbs of Beets and %0.0f lbs of Carrots\n\n", artichokes, beets, carrots);
        printf("Your totals are..\n Artichokes: $%0.2f\n Beets: $%0.2f \n Carrots: $%0.2f\n\n", PRICE1 * artichokes, PRICE2 * beets, PRICE3 * carrots);
        printf("Your total is $%0.2f with a $%0.2f dollar discount.\n", price, discount);
        printf("Your shipping charge is $%0.2f for a grand total of %0.2f.\n", shipping, shipping + price);




printf("Goodbye.\n");
    return 0;
}
