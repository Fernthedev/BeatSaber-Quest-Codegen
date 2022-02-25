// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IReadOnlyList`1<T>
  template<typename T>
  class IReadOnlyList_1;
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: EnvironmentKeywords
  class EnvironmentKeywords;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::EnvironmentKeywords);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::EnvironmentKeywords*, "", "EnvironmentKeywords");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: EnvironmentKeywords
  // [TokenAttribute] Offset: FFFFFFFF
  class EnvironmentKeywords : public ::Il2CppObject {
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
    // private readonly System.Collections.Generic.IReadOnlyList`1<System.String> _environmentKeywords
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Generic::IReadOnlyList_1<::StringW>* environmentKeywords;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::IReadOnlyList_1<::StringW>*) == 0x8);
    // private readonly System.Collections.Generic.HashSet`1<System.String> _environmentKeywordsSet
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Generic::HashSet_1<::StringW>* environmentKeywordsSet;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::HashSet_1<::StringW>*) == 0x8);
    public:
    // Get instance field reference: private readonly System.Collections.Generic.IReadOnlyList`1<System.String> _environmentKeywords
    System::Collections::Generic::IReadOnlyList_1<::StringW>*& dyn__environmentKeywords();
    // Get instance field reference: private readonly System.Collections.Generic.HashSet`1<System.String> _environmentKeywordsSet
    System::Collections::Generic::HashSet_1<::StringW>*& dyn__environmentKeywordsSet();
    // public System.Collections.Generic.IReadOnlyList`1<System.String> get_environmentKeywords()
    // Offset: 0x13FA32C
    System::Collections::Generic::IReadOnlyList_1<::StringW>* get_environmentKeywords();
    // public System.Void .ctor(System.Collections.Generic.IReadOnlyList`1<System.String> environmentKeywords)
    // Offset: 0x13FA334
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EnvironmentKeywords* New_ctor(System::Collections::Generic::IReadOnlyList_1<::StringW>* environmentKeywords) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::EnvironmentKeywords::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EnvironmentKeywords*, creationType>(environmentKeywords)));
    }
    // public System.Boolean HasKeyword(System.String keyword)
    // Offset: 0x13FA410
    bool HasKeyword(::StringW keyword);
  }; // EnvironmentKeywords
  #pragma pack(pop)
  static check_size<sizeof(EnvironmentKeywords), 24 + sizeof(System::Collections::Generic::HashSet_1<::StringW>*)> __GlobalNamespace_EnvironmentKeywordsSizeCheck;
  static_assert(sizeof(EnvironmentKeywords) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::EnvironmentKeywords::get_environmentKeywords
// Il2CppName: get_environmentKeywords
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IReadOnlyList_1<::StringW>* (GlobalNamespace::EnvironmentKeywords::*)()>(&GlobalNamespace::EnvironmentKeywords::get_environmentKeywords)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnvironmentKeywords*), "get_environmentKeywords", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnvironmentKeywords::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::EnvironmentKeywords::HasKeyword
// Il2CppName: HasKeyword
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::EnvironmentKeywords::*)(::StringW)>(&GlobalNamespace::EnvironmentKeywords::HasKeyword)> {
  static const MethodInfo* get() {
    static auto* keyword = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnvironmentKeywords*), "HasKeyword", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{keyword});
  }
};
