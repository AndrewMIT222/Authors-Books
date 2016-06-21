 %module example
 %include <stl.i>
 %{
 /* Includes the header in the wrapper code */
 #define SWIG_FILE_WITH_INIT
 #include "authors_books.h"
 %}

 /* Parse the header file to generate wrappers */
 %include "authors_books.h"