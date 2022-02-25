// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Newtonsoft.Json.Converters.DiscriminatedUnionConverter
#include "Newtonsoft/Json/Converters/DiscriminatedUnionConverter.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Newtonsoft::Json::Utilities
namespace Newtonsoft::Json::Utilities {
  // Forward declaring type: FSharpFunction
  class FSharpFunction;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(Newtonsoft::Json::Converters::DiscriminatedUnionConverter::Union);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Converters::DiscriminatedUnionConverter::Union*, "Newtonsoft.Json.Converters", "DiscriminatedUnionConverter/Union");
// Type namespace: Newtonsoft.Json.Converters
namespace Newtonsoft::Json::Converters {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.Converters.DiscriminatedUnionConverter/Newtonsoft.Json.Converters.Union
  // [TokenAttribute] Offset: FFFFFFFF
  // [NullableAttribute] Offset: 12035D8
  class DiscriminatedUnionConverter::Union : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // public readonly Newtonsoft.Json.Utilities.FSharpFunction TagReader
    // Size: 0x8
    // Offset: 0x10
    Newtonsoft::Json::Utilities::FSharpFunction* TagReader;
    // Field size check
    static_assert(sizeof(Newtonsoft::Json::Utilities::FSharpFunction*) == 0x8);
    // public readonly System.Collections.Generic.List`1<Newtonsoft.Json.Converters.DiscriminatedUnionConverter/Newtonsoft.Json.Converters.UnionCase> Cases
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Generic::List_1<Newtonsoft::Json::Converters::DiscriminatedUnionConverter::UnionCase*>* Cases;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<Newtonsoft::Json::Converters::DiscriminatedUnionConverter::UnionCase*>*) == 0x8);
    public:
    // Get instance field reference: public readonly Newtonsoft.Json.Utilities.FSharpFunction TagReader
    Newtonsoft::Json::Utilities::FSharpFunction*& dyn_TagReader();
    // Get instance field reference: public readonly System.Collections.Generic.List`1<Newtonsoft.Json.Converters.DiscriminatedUnionConverter/Newtonsoft.Json.Converters.UnionCase> Cases
    System::Collections::Generic::List_1<Newtonsoft::Json::Converters::DiscriminatedUnionConverter::UnionCase*>*& dyn_Cases();
    // public System.Void .ctor(Newtonsoft.Json.Utilities.FSharpFunction tagReader, System.Collections.Generic.List`1<Newtonsoft.Json.Converters.DiscriminatedUnionConverter/Newtonsoft.Json.Converters.UnionCase> cases)
    // Offset: 0x181F03C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DiscriminatedUnionConverter::Union* New_ctor(Newtonsoft::Json::Utilities::FSharpFunction* tagReader, System::Collections::Generic::List_1<Newtonsoft::Json::Converters::DiscriminatedUnionConverter::UnionCase*>* cases) {
      static auto ___internal__logger = ::Logger::get().WithContext("Newtonsoft::Json::Converters::DiscriminatedUnionConverter::Union::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DiscriminatedUnionConverter::Union*, creationType>(tagReader, cases)));
    }
  }; // Newtonsoft.Json.Converters.DiscriminatedUnionConverter/Newtonsoft.Json.Converters.Union
  #pragma pack(pop)
  static check_size<sizeof(DiscriminatedUnionConverter::Union), 24 + sizeof(System::Collections::Generic::List_1<Newtonsoft::Json::Converters::DiscriminatedUnionConverter::UnionCase*>*)> __Newtonsoft_Json_Converters_DiscriminatedUnionConverter_UnionSizeCheck;
  static_assert(sizeof(DiscriminatedUnionConverter::Union) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::Converters::DiscriminatedUnionConverter::Union::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
