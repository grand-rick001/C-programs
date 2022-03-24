//Program to encrypt and decode data
//encrypting.c

int encryption (int x);
int decryption (int y);
int convert (int z);

int digit;

int main () {
    //Limit is 9 numbers
    long long int encrypt, decrypt;
    char ans;

    printf("Would you like to encrypt data? ");
    scanf("%c", &ans);

    switch (ans) {
    case '1':
        printf("Let's encrypt\n");
        printf("Enter the number you want to encrypt: ");
        scanf("%d", &encrypt);
        encryption(encrypt);
        break;
    case '0':
        printf("Great! so you want to decrypt!!\n");
        printf("Enter the number you want to decrypt: ");
        scanf("%d", &decrypt);
        decryption(decrypt);
        break;
    default:
        printf("Please limit your input to 1 for yes and 0 for no.");
        break;
    }
    return 0;
}

int encryption (int x) {
    long long int num1, num2, rev1, rev2;
    rev1 = 0;
    rev2 = 0;
    printf("Your number to encrypt is %d", x);

    while (x>0) {
        num1 = x;
        digit = x % 10;
        convert(digit);
        rev1 = (rev1 * 10) + digit;
        x /= 10;
    }
    //Second reversal
    num2 = rev1;
    while (num2>0) {
        digit = num2 % 10;
        rev2 = (rev2*10) + digit;
        num2/=10;
    }

    printf("\nYour encrypted data is %d", rev2);
    return  0;
}

int decryption (int y) {
    printf("Your number to decrypt is %d", y);

    return 0;
}


int convert (int z) {
    int conv;

    conv = z;
    switch (conv) {
    case 0:
        conv = 3;
        break;
    case 1:
        conv = 4;
        break;
    case 2:
        conv = 5;
        break;
    case 3:
        conv = 6;
        break;
    case 4:
        conv = 7;
        break;
    case 5:
        conv = 8;
        break;
    case 6:
        conv = 9;
        break;
    case 7:
        conv = 0;
        break;
    case 8:
        conv = 1;
        break;
    case 9:
        conv = 2;
        break;
    }
    digit = conv;
    return digit;
}


















