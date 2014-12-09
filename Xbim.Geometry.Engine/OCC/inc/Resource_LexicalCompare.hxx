// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Resource_LexicalCompare_HeaderFile
#define _Resource_LexicalCompare_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class TCollection_AsciiString;



class Resource_LexicalCompare  {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   Resource_LexicalCompare();
  //! Returns True if <Left> is lower than <Right>. <br>
  Standard_EXPORT     Standard_Boolean IsLower(const TCollection_AsciiString& Left,const TCollection_AsciiString& Right) const;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif