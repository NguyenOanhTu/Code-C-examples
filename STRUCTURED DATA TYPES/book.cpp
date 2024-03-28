#include <stdio.h>
struct BOOK{
    char title[10];
    float price;
    int pages;
};

void inputBOOK(struct BOOK &book){
	printf("Input book title: ");
	fflush(stdin);
	gets(book.title);
	fflush(stdin);
	printf("Input book price: ");
	scanf("%f", &book.price);
	printf("Input number of pages: ");
	scanf("%d", &book.pages);
}

void outputBOOK(struct BOOK book){
	printf("\n%s: %d, $%f", book.title, book.pages, book.price);
}

int main(){
	struct BOOK b[10];
	int i, N;
	printf("Input number of books: ");
	scanf("%d", &N);
	for(i = 0; i < N; i++)
		inputBOOK(b[i]);
	for(i = 0; i < N; i++)
		outputBOOK(b[i]);
		
	printf("\nThe price of the first book is %f.", b[0].price);
	// Find a book whose pages is greater than 50
	for(i = 0; i < N; i++){
		if(b[i].pages > 50)
			puts(b[i].title);
	}
	return 0;
}
