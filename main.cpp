#include "GradeBook.cpp"
#include "GradeBook.h"

#include <vector>
using std::vector;

//This is where the execution of program begins
int main()
{
    
   //Apenas 4 turmas podem ser criadas
   //GradeBook.cpp: const int GradeBook::NUMTURMAS = 4;
   GradeBook gradebook1( "Math", 3 );
   GradeBook *gradebookPtr;
   int novosAlunos = 5;   
   
   gradebookPtr = new GradeBook( "Geografia", 3 );

   gradebookPtr->displayMessage( );

   gradebookPtr->setNumAlunos( novosAlunos );

   gradebookPtr->displayMessage( );   

   gradebookPtr->setNumAlunos( ++novosAlunos );

   gradebookPtr->displayMessage( );   

   GradeBook *gradebookPtr_extra = new GradeBook( *gradebookPtr );
   cout << "\n\nImprimindo informacoes de gradebookPtr_extra.\n";
   gradebookPtr_extra->displayMessage( );

   delete gradebookPtr;
   delete gradebookPtr_extra;

   return 0;
}