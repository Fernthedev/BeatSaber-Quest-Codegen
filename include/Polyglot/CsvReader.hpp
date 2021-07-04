// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Polyglot
namespace Polyglot {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: Polyglot
namespace Polyglot {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Polyglot.CsvReader
  class CsvReader : public ::Il2CppObject {
    public:
    // Nested type: Polyglot::CsvReader::ParsingMode
    struct ParsingMode;
    // Creating value type constructor for type: CsvReader
    CsvReader() noexcept {}
    // static public System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>> Parse(System.String src)
    // Offset: 0x234CA38
    static System::Collections::Generic::List_1<System::Collections::Generic::List_1<::Il2CppString*>*>* Parse(::Il2CppString* src);
    // public System.Void .ctor()
    // Offset: 0x234CF74
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CsvReader* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Polyglot::CsvReader::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CsvReader*, creationType>()));
    }
  }; // Polyglot.CsvReader
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Polyglot::CsvReader*, "Polyglot", "CsvReader");
// Writing includes for template specializations
// Writing MetadataGetter for method: Polyglot::CsvReader::Parse
// Il2CppName: Parse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<System::Collections::Generic::List_1<::Il2CppString*>*>* (*)(::Il2CppString*)>(&Polyglot::CsvReader::Parse)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Polyglot::CsvReader*), "Parse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: Polyglot::CsvReader::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
