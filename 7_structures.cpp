#include <iostream>
#include <cstring>
 
using namespace std;

struct Books_1 {
   char  title[50];
   char  author[50];
   char  subject[100];
   int   book_id;
};

typedef struct {
   char  title[50];
   char  author[50];
   char  subject[100];
   int   book_id;
} Books_2;
 
void printBook_1( struct Books_1 *book );
void printBook_2( Books_2 book );

int main() {
    struct Books_1 Book1;        // Declare Book1 of type Book
    Books_2 Book2;        // Declare Book2 of type Book
    


    // book 1 specification
    strcpy( Book1.title, "Learn C++ Programming");
    strcpy( Book1.author, "Chand Miyan"); 
    strcpy( Book1.subject, "C++ Programming");
    Book1.book_id = 6495407;

    // Print Book1 info
    printBook_1( &Book1 );

    // Book 2 specification
    strcpy( Book2.title, "Telecom Billing");
    strcpy( Book2.author, "Yakit Singha");
    strcpy( Book2.subject, "Telecom");
    Book2.book_id = 6495700;

    // Print Book1 info, passing address of structure
    printBook_2( Book2 );
    
   return 0;
}
void printBook_1( struct Books_1 *book ) {
   cout << "Book title : " << book->title <<endl;
   cout << "Book author : " << book->author <<endl;
   cout << "Book subject : " << book->subject <<endl;
   cout << "Book id : " << book->book_id <<endl;
}

void printBook_2( Books_2 book ) {
   cout << "Book title : " << book.title <<endl;
   cout << "Book author : " << book.author <<endl;
   cout << "Book subject : " << book.subject <<endl;
   cout << "Book id : " << book.book_id <<endl;
}
// This function accept pointer to structure as parameter.