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
  // Autogenerated type: Polyglot.TsvReader
  class TsvReader : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: TsvReader
    TsvReader() noexcept {}
    // static public System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>> Parse(System.String src)
    // Offset: 0x234FF30
    static System::Collections::Generic::List_1<System::Collections::Generic::List_1<::Il2CppString*>*>* Parse(::Il2CppString* src);
    // public System.Void .ctor()
    // Offset: 0x235110C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TsvReader* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Polyglot::TsvReader::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TsvReader*, creationType>()));
    }
  }; // Polyglot.TsvReader
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Polyglot::TsvReader*, "Polyglot", "TsvReader");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Polyglot::TsvReader::Parse
// Il2CppName: Parse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<System::Collections::Generic::List_1<::Il2CppString*>*>* (*)(::Il2CppString*)>(&Polyglot::TsvReader::Parse)> {
  const MethodInfo* get() {
    static auto* src = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Polyglot::TsvReader*), "Parse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{src});
  }
};
// Writing MetadataGetter for method: Polyglot::TsvReader::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
