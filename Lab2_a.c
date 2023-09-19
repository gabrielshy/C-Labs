    #include <stdio.h>

    int main()
    {
        char menuoption, combooption;
        float hamburger = 6.99, pizza = 3.99, chickstrip = 5.99, sum, tax;
        int quantity;
        printf("Select a menu item. \nA. Hamburger\nB. Pizza\nC. Chicken Strips\n");
        scanf(" %c", &menuoption);
        if (menuoption == 'A'){
            sum = hamburger;    
        } else if (menuoption == 'B') {
            sum = pizza;
        } else if (menuoption == 'C') {
            sum = chickstrip;
        }
        printf("Make it a combo? Y for yes or N for No\n");
        scanf(" %c", &combooption);
        if (combooption = "Y"){
            sum += 2.00;
        }
        printf("Quantity: ");
        scanf(" %d", &quantity);
        sum *= quantity;
        tax = sum * 0.0825;
        sum += tax;
        printf("The total price is $%.2f", sum);
    }