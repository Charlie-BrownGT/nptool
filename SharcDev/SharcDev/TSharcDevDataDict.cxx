// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME TSharcDevDataDict
#define R__NO_DEPRECATION

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "ROOT/RConfig.hxx"
#include "TClass.h"
#include "TDictAttributeMap.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"
#include <algorithm>
#include "TCollectionProxyInfo.h"
/*******************************************************************/

#include "TDataMember.h"

// Header files passed as explicit arguments
#include "TSharcDevData.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_TSharcDevData(void *p = nullptr);
   static void *newArray_TSharcDevData(Long_t size, void *p);
   static void delete_TSharcDevData(void *p);
   static void deleteArray_TSharcDevData(void *p);
   static void destruct_TSharcDevData(void *p);
   static void streamer_TSharcDevData(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TSharcDevData*)
   {
      ::TSharcDevData *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TSharcDevData >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TSharcDevData", ::TSharcDevData::Class_Version(), "TSharcDevData.h", 39,
                  typeid(::TSharcDevData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TSharcDevData::Dictionary, isa_proxy, 16,
                  sizeof(::TSharcDevData) );
      instance.SetNew(&new_TSharcDevData);
      instance.SetNewArray(&newArray_TSharcDevData);
      instance.SetDelete(&delete_TSharcDevData);
      instance.SetDeleteArray(&deleteArray_TSharcDevData);
      instance.SetDestructor(&destruct_TSharcDevData);
      instance.SetStreamerFunc(&streamer_TSharcDevData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TSharcDevData*)
   {
      return GenerateInitInstanceLocal(static_cast<::TSharcDevData*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TSharcDevData*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TSharcDevData::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TSharcDevData::Class_Name()
{
   return "TSharcDevData";
}

//______________________________________________________________________________
const char *TSharcDevData::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSharcDevData*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TSharcDevData::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSharcDevData*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TSharcDevData::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSharcDevData*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TSharcDevData::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSharcDevData*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TSharcDevData::Streamer(TBuffer &R__b)
{
   // Stream an object of class TSharcDevData.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TObject::Streamer(R__b);
      {
         vector<UShort_t> &R__stl =  fSharcDev_StripFront_DetectorNbr;
         R__stl.clear();
         int R__i, R__n;
         R__b >> R__n;
         R__stl.reserve(R__n);
         for (R__i = 0; R__i < R__n; R__i++) {
            unsigned short R__t;
            R__b >> R__t;
            R__stl.push_back(R__t);
         }
      }
      {
         vector<UShort_t> &R__stl =  fSharcDev_StripFront_StripNbr;
         R__stl.clear();
         int R__i, R__n;
         R__b >> R__n;
         R__stl.reserve(R__n);
         for (R__i = 0; R__i < R__n; R__i++) {
            unsigned short R__t;
            R__b >> R__t;
            R__stl.push_back(R__t);
         }
      }
      {
         vector<Double_t> &R__stl =  fSharcDev_StripFront_Energy;
         R__stl.clear();
         int R__i, R__n;
         R__b >> R__n;
         R__stl.reserve(R__n);
         for (R__i = 0; R__i < R__n; R__i++) {
            double R__t;
            R__b >> R__t;
            R__stl.push_back(R__t);
         }
      }
      {
         vector<Double_t> &R__stl =  fSharcDev_StripFront_TimeCFD;
         R__stl.clear();
         int R__i, R__n;
         R__b >> R__n;
         R__stl.reserve(R__n);
         for (R__i = 0; R__i < R__n; R__i++) {
            double R__t;
            R__b >> R__t;
            R__stl.push_back(R__t);
         }
      }
      {
         vector<Double_t> &R__stl =  fSharcDev_StripFront_TimeLED;
         R__stl.clear();
         int R__i, R__n;
         R__b >> R__n;
         R__stl.reserve(R__n);
         for (R__i = 0; R__i < R__n; R__i++) {
            double R__t;
            R__b >> R__t;
            R__stl.push_back(R__t);
         }
      }
      {
         vector<Double_t> &R__stl =  fSharcDev_StripFront_Time;
         R__stl.clear();
         int R__i, R__n;
         R__b >> R__n;
         R__stl.reserve(R__n);
         for (R__i = 0; R__i < R__n; R__i++) {
            double R__t;
            R__b >> R__t;
            R__stl.push_back(R__t);
         }
      }
      {
         vector<UShort_t> &R__stl =  fSharcDev_StripBack_DetectorNbr;
         R__stl.clear();
         int R__i, R__n;
         R__b >> R__n;
         R__stl.reserve(R__n);
         for (R__i = 0; R__i < R__n; R__i++) {
            unsigned short R__t;
            R__b >> R__t;
            R__stl.push_back(R__t);
         }
      }
      {
         vector<UShort_t> &R__stl =  fSharcDev_StripBack_StripNbr;
         R__stl.clear();
         int R__i, R__n;
         R__b >> R__n;
         R__stl.reserve(R__n);
         for (R__i = 0; R__i < R__n; R__i++) {
            unsigned short R__t;
            R__b >> R__t;
            R__stl.push_back(R__t);
         }
      }
      {
         vector<Double_t> &R__stl =  fSharcDev_StripBack_Energy;
         R__stl.clear();
         int R__i, R__n;
         R__b >> R__n;
         R__stl.reserve(R__n);
         for (R__i = 0; R__i < R__n; R__i++) {
            double R__t;
            R__b >> R__t;
            R__stl.push_back(R__t);
         }
      }
      {
         vector<Double_t> &R__stl =  fSharcDev_StripBack_TimeCFD;
         R__stl.clear();
         int R__i, R__n;
         R__b >> R__n;
         R__stl.reserve(R__n);
         for (R__i = 0; R__i < R__n; R__i++) {
            double R__t;
            R__b >> R__t;
            R__stl.push_back(R__t);
         }
      }
      {
         vector<Double_t> &R__stl =  fSharcDev_StripBack_TimeLED;
         R__stl.clear();
         int R__i, R__n;
         R__b >> R__n;
         R__stl.reserve(R__n);
         for (R__i = 0; R__i < R__n; R__i++) {
            double R__t;
            R__b >> R__t;
            R__stl.push_back(R__t);
         }
      }
      {
         vector<Double_t> &R__stl =  fSharcDev_StripBack_Time;
         R__stl.clear();
         int R__i, R__n;
         R__b >> R__n;
         R__stl.reserve(R__n);
         for (R__i = 0; R__i < R__n; R__i++) {
            double R__t;
            R__b >> R__t;
            R__stl.push_back(R__t);
         }
      }
      {
         vector<UShort_t> &R__stl =  fSharcDev_PAD_DetectorNbr;
         R__stl.clear();
         int R__i, R__n;
         R__b >> R__n;
         R__stl.reserve(R__n);
         for (R__i = 0; R__i < R__n; R__i++) {
            unsigned short R__t;
            R__b >> R__t;
            R__stl.push_back(R__t);
         }
      }
      {
         vector<Double_t> &R__stl =  fSharcDev_PAD_Energy;
         R__stl.clear();
         int R__i, R__n;
         R__b >> R__n;
         R__stl.reserve(R__n);
         for (R__i = 0; R__i < R__n; R__i++) {
            double R__t;
            R__b >> R__t;
            R__stl.push_back(R__t);
         }
      }
      {
         vector<Double_t> &R__stl =  fSharcDev_PAD_TimeCFD;
         R__stl.clear();
         int R__i, R__n;
         R__b >> R__n;
         R__stl.reserve(R__n);
         for (R__i = 0; R__i < R__n; R__i++) {
            double R__t;
            R__b >> R__t;
            R__stl.push_back(R__t);
         }
      }
      {
         vector<Double_t> &R__stl =  fSharcDev_PAD_TimeLED;
         R__stl.clear();
         int R__i, R__n;
         R__b >> R__n;
         R__stl.reserve(R__n);
         for (R__i = 0; R__i < R__n; R__i++) {
            double R__t;
            R__b >> R__t;
            R__stl.push_back(R__t);
         }
      }
      {
         vector<Double_t> &R__stl =  fSharcDev_PAD_Time;
         R__stl.clear();
         int R__i, R__n;
         R__b >> R__n;
         R__stl.reserve(R__n);
         for (R__i = 0; R__i < R__n; R__i++) {
            double R__t;
            R__b >> R__t;
            R__stl.push_back(R__t);
         }
      }
      R__b.CheckByteCount(R__s, R__c, TSharcDevData::IsA());
   } else {
      R__c = R__b.WriteVersion(TSharcDevData::IsA(), kTRUE);
      TObject::Streamer(R__b);
      {
         vector<UShort_t> &R__stl =  fSharcDev_StripFront_DetectorNbr;
         int R__n=int(R__stl.size());
         R__b << R__n;
         if(R__n) {
            vector<UShort_t>::iterator R__k;
            for (R__k = R__stl.begin(); R__k != R__stl.end(); ++R__k) {
            R__b << (*R__k);
            }
         }
      }
      {
         vector<UShort_t> &R__stl =  fSharcDev_StripFront_StripNbr;
         int R__n=int(R__stl.size());
         R__b << R__n;
         if(R__n) {
            vector<UShort_t>::iterator R__k;
            for (R__k = R__stl.begin(); R__k != R__stl.end(); ++R__k) {
            R__b << (*R__k);
            }
         }
      }
      {
         vector<Double_t> &R__stl =  fSharcDev_StripFront_Energy;
         int R__n=int(R__stl.size());
         R__b << R__n;
         if(R__n) {
            vector<Double_t>::iterator R__k;
            for (R__k = R__stl.begin(); R__k != R__stl.end(); ++R__k) {
            R__b << (*R__k);
            }
         }
      }
      {
         vector<Double_t> &R__stl =  fSharcDev_StripFront_TimeCFD;
         int R__n=int(R__stl.size());
         R__b << R__n;
         if(R__n) {
            vector<Double_t>::iterator R__k;
            for (R__k = R__stl.begin(); R__k != R__stl.end(); ++R__k) {
            R__b << (*R__k);
            }
         }
      }
      {
         vector<Double_t> &R__stl =  fSharcDev_StripFront_TimeLED;
         int R__n=int(R__stl.size());
         R__b << R__n;
         if(R__n) {
            vector<Double_t>::iterator R__k;
            for (R__k = R__stl.begin(); R__k != R__stl.end(); ++R__k) {
            R__b << (*R__k);
            }
         }
      }
      {
         vector<Double_t> &R__stl =  fSharcDev_StripFront_Time;
         int R__n=int(R__stl.size());
         R__b << R__n;
         if(R__n) {
            vector<Double_t>::iterator R__k;
            for (R__k = R__stl.begin(); R__k != R__stl.end(); ++R__k) {
            R__b << (*R__k);
            }
         }
      }
      {
         vector<UShort_t> &R__stl =  fSharcDev_StripBack_DetectorNbr;
         int R__n=int(R__stl.size());
         R__b << R__n;
         if(R__n) {
            vector<UShort_t>::iterator R__k;
            for (R__k = R__stl.begin(); R__k != R__stl.end(); ++R__k) {
            R__b << (*R__k);
            }
         }
      }
      {
         vector<UShort_t> &R__stl =  fSharcDev_StripBack_StripNbr;
         int R__n=int(R__stl.size());
         R__b << R__n;
         if(R__n) {
            vector<UShort_t>::iterator R__k;
            for (R__k = R__stl.begin(); R__k != R__stl.end(); ++R__k) {
            R__b << (*R__k);
            }
         }
      }
      {
         vector<Double_t> &R__stl =  fSharcDev_StripBack_Energy;
         int R__n=int(R__stl.size());
         R__b << R__n;
         if(R__n) {
            vector<Double_t>::iterator R__k;
            for (R__k = R__stl.begin(); R__k != R__stl.end(); ++R__k) {
            R__b << (*R__k);
            }
         }
      }
      {
         vector<Double_t> &R__stl =  fSharcDev_StripBack_TimeCFD;
         int R__n=int(R__stl.size());
         R__b << R__n;
         if(R__n) {
            vector<Double_t>::iterator R__k;
            for (R__k = R__stl.begin(); R__k != R__stl.end(); ++R__k) {
            R__b << (*R__k);
            }
         }
      }
      {
         vector<Double_t> &R__stl =  fSharcDev_StripBack_TimeLED;
         int R__n=int(R__stl.size());
         R__b << R__n;
         if(R__n) {
            vector<Double_t>::iterator R__k;
            for (R__k = R__stl.begin(); R__k != R__stl.end(); ++R__k) {
            R__b << (*R__k);
            }
         }
      }
      {
         vector<Double_t> &R__stl =  fSharcDev_StripBack_Time;
         int R__n=int(R__stl.size());
         R__b << R__n;
         if(R__n) {
            vector<Double_t>::iterator R__k;
            for (R__k = R__stl.begin(); R__k != R__stl.end(); ++R__k) {
            R__b << (*R__k);
            }
         }
      }
      {
         vector<UShort_t> &R__stl =  fSharcDev_PAD_DetectorNbr;
         int R__n=int(R__stl.size());
         R__b << R__n;
         if(R__n) {
            vector<UShort_t>::iterator R__k;
            for (R__k = R__stl.begin(); R__k != R__stl.end(); ++R__k) {
            R__b << (*R__k);
            }
         }
      }
      {
         vector<Double_t> &R__stl =  fSharcDev_PAD_Energy;
         int R__n=int(R__stl.size());
         R__b << R__n;
         if(R__n) {
            vector<Double_t>::iterator R__k;
            for (R__k = R__stl.begin(); R__k != R__stl.end(); ++R__k) {
            R__b << (*R__k);
            }
         }
      }
      {
         vector<Double_t> &R__stl =  fSharcDev_PAD_TimeCFD;
         int R__n=int(R__stl.size());
         R__b << R__n;
         if(R__n) {
            vector<Double_t>::iterator R__k;
            for (R__k = R__stl.begin(); R__k != R__stl.end(); ++R__k) {
            R__b << (*R__k);
            }
         }
      }
      {
         vector<Double_t> &R__stl =  fSharcDev_PAD_TimeLED;
         int R__n=int(R__stl.size());
         R__b << R__n;
         if(R__n) {
            vector<Double_t>::iterator R__k;
            for (R__k = R__stl.begin(); R__k != R__stl.end(); ++R__k) {
            R__b << (*R__k);
            }
         }
      }
      {
         vector<Double_t> &R__stl =  fSharcDev_PAD_Time;
         int R__n=int(R__stl.size());
         R__b << R__n;
         if(R__n) {
            vector<Double_t>::iterator R__k;
            for (R__k = R__stl.begin(); R__k != R__stl.end(); ++R__k) {
            R__b << (*R__k);
            }
         }
      }
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TSharcDevData(void *p) {
      return  p ? new(p) ::TSharcDevData : new ::TSharcDevData;
   }
   static void *newArray_TSharcDevData(Long_t nElements, void *p) {
      return p ? new(p) ::TSharcDevData[nElements] : new ::TSharcDevData[nElements];
   }
   // Wrapper around operator delete
   static void delete_TSharcDevData(void *p) {
      delete (static_cast<::TSharcDevData*>(p));
   }
   static void deleteArray_TSharcDevData(void *p) {
      delete [] (static_cast<::TSharcDevData*>(p));
   }
   static void destruct_TSharcDevData(void *p) {
      typedef ::TSharcDevData current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TSharcDevData(TBuffer &buf, void *obj) {
      ((::TSharcDevData*)obj)->::TSharcDevData::Streamer(buf);
   }
} // end of namespace ROOT for class ::TSharcDevData

namespace ROOT {
   static TClass *vectorlEunsignedsPshortgR_Dictionary();
   static void vectorlEunsignedsPshortgR_TClassManip(TClass*);
   static void *new_vectorlEunsignedsPshortgR(void *p = nullptr);
   static void *newArray_vectorlEunsignedsPshortgR(Long_t size, void *p);
   static void delete_vectorlEunsignedsPshortgR(void *p);
   static void deleteArray_vectorlEunsignedsPshortgR(void *p);
   static void destruct_vectorlEunsignedsPshortgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<unsigned short>*)
   {
      vector<unsigned short> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<unsigned short>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<unsigned short>", -2, "vector", 389,
                  typeid(vector<unsigned short>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEunsignedsPshortgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<unsigned short>) );
      instance.SetNew(&new_vectorlEunsignedsPshortgR);
      instance.SetNewArray(&newArray_vectorlEunsignedsPshortgR);
      instance.SetDelete(&delete_vectorlEunsignedsPshortgR);
      instance.SetDeleteArray(&deleteArray_vectorlEunsignedsPshortgR);
      instance.SetDestructor(&destruct_vectorlEunsignedsPshortgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<unsigned short> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<unsigned short>","std::vector<unsigned short, std::allocator<unsigned short> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<unsigned short>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEunsignedsPshortgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<unsigned short>*>(nullptr))->GetClass();
      vectorlEunsignedsPshortgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEunsignedsPshortgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEunsignedsPshortgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<unsigned short> : new vector<unsigned short>;
   }
   static void *newArray_vectorlEunsignedsPshortgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<unsigned short>[nElements] : new vector<unsigned short>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEunsignedsPshortgR(void *p) {
      delete (static_cast<vector<unsigned short>*>(p));
   }
   static void deleteArray_vectorlEunsignedsPshortgR(void *p) {
      delete [] (static_cast<vector<unsigned short>*>(p));
   }
   static void destruct_vectorlEunsignedsPshortgR(void *p) {
      typedef vector<unsigned short> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<unsigned short>

namespace ROOT {
   static TClass *vectorlEdoublegR_Dictionary();
   static void vectorlEdoublegR_TClassManip(TClass*);
   static void *new_vectorlEdoublegR(void *p = nullptr);
   static void *newArray_vectorlEdoublegR(Long_t size, void *p);
   static void delete_vectorlEdoublegR(void *p);
   static void deleteArray_vectorlEdoublegR(void *p);
   static void destruct_vectorlEdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<double>*)
   {
      vector<double> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<double>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<double>", -2, "vector", 389,
                  typeid(vector<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEdoublegR_Dictionary, isa_proxy, 0,
                  sizeof(vector<double>) );
      instance.SetNew(&new_vectorlEdoublegR);
      instance.SetNewArray(&newArray_vectorlEdoublegR);
      instance.SetDelete(&delete_vectorlEdoublegR);
      instance.SetDeleteArray(&deleteArray_vectorlEdoublegR);
      instance.SetDestructor(&destruct_vectorlEdoublegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<double> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<double>","std::vector<double, std::allocator<double> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<double>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<double>*>(nullptr))->GetClass();
      vectorlEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEdoublegR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<double> : new vector<double>;
   }
   static void *newArray_vectorlEdoublegR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<double>[nElements] : new vector<double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEdoublegR(void *p) {
      delete (static_cast<vector<double>*>(p));
   }
   static void deleteArray_vectorlEdoublegR(void *p) {
      delete [] (static_cast<vector<double>*>(p));
   }
   static void destruct_vectorlEdoublegR(void *p) {
      typedef vector<double> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<double>

namespace {
  void TriggerDictionaryInitialization_TSharcDevDataDict_Impl() {
    static const char* headers[] = {
"TSharcDevData.h",
nullptr
    };
    static const char* includePaths[] = {
"../Core",
"../Physics",
"../../Core",
"../../Physics",
"../TrackReconstruction",
"../../TrackReconstruction",
"/home/guy/software/root/root_install/include/",
"/home/guy/software/nptool/NPLib/Detectors/SharcDev/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "TSharcDevDataDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$TSharcDevData.h")))  TSharcDevData;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "TSharcDevDataDict dictionary payload"

#ifndef NPMULTITHREADING
  #define NPMULTITHREADING 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "TSharcDevData.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"TSharcDevData", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("TSharcDevDataDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_TSharcDevDataDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_TSharcDevDataDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_TSharcDevDataDict() {
  TriggerDictionaryInitialization_TSharcDevDataDict_Impl();
}