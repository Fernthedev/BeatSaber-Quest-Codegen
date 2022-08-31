// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: TMPro
namespace TMPro {
  // Forward declaring type: TMP_InputValidator
  class TMP_InputValidator;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::TMPro::TMP_InputValidator);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_InputValidator*, "TMPro", "TMP_InputValidator");
// Type namespace: TMPro
namespace TMPro {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: TMPro.TMP_InputValidator
  // [TokenAttribute] Offset: FFFFFFFF
  class TMP_InputValidator : public ::UnityEngine::ScriptableObject {
    public:
    // protected System.Void .ctor()
    // Offset: 0x146CC58
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TMP_InputValidator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::TMPro::TMP_InputValidator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TMP_InputValidator*, creationType>()));
    }
    // public System.Char Validate(ref System.String text, ref System.Int32 pos, System.Char ch)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Il2CppChar Validate(ByRef<::StringW> text, ByRef<int> pos, ::Il2CppChar ch);
  }; // TMPro.TMP_InputValidator
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: TMPro::TMP_InputValidator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: TMPro::TMP_InputValidator::Validate
// Il2CppName: Validate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppChar (TMPro::TMP_InputValidator::*)(ByRef<::StringW>, ByRef<int>, ::Il2CppChar)>(&TMPro::TMP_InputValidator::Validate)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    static auto* pos = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* ch = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_InputValidator*), "Validate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text, pos, ch});
  }
};
