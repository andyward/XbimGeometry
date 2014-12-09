// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _CSLib_NormalStatus_HeaderFile
#define _CSLib_NormalStatus_HeaderFile


//! <br>
//!  if N is the normal <br>
//! <br>
//!  InfinityOfSolutions : ||DN/du||>Resolution, ||DN/dv||>Resolution <br>
//! <br>
//!  D1NuIsNull          : ||DN/du|| <= Resolution <br>
//! <br>
//!  D1NvIsNull          : ||DN/dv|| <= Resolution <br>
//! <br>
//!  D1NIsNull           : ||DN/du||<=Resolution, ||DN/dv||<=Resolution <br>
//! <br>
//!  D1NuNvRatioIsNull   : ||D1Nu|| / ||D1Nv|| <= RealEpsilon <br>
//! <br>
//!  D1NvNuRatioIsNull   : ||D1Nu|| / ||D1Nv|| <= RealEpsilon <br>
//! <br>
//!  D1NuIsParallelD1Nv  : The angle between D1Nu and D1Nv is Null. <br>
enum CSLib_NormalStatus {
CSLib_Singular,
CSLib_Defined,
CSLib_InfinityOfSolutions,
CSLib_D1NuIsNull,
CSLib_D1NvIsNull,
CSLib_D1NIsNull,
CSLib_D1NuNvRatioIsNull,
CSLib_D1NvNuRatioIsNull,
CSLib_D1NuIsParallelD1Nv
};

#ifndef _Standard_PrimitiveTypes_HeaderFile
#include <Standard_PrimitiveTypes.hxx>
#endif

#endif