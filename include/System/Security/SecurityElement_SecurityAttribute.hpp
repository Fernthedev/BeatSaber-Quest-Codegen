// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Security.SecurityElement
#include "System/Security/SecurityElement.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Security::SecurityElement::SecurityAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::SecurityElement::SecurityAttribute*, "System.Security", "SecurityElement/SecurityAttribute");
// Type namespace: System.Security
namespace System::Security {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.SecurityElement/System.Security.SecurityAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  class SecurityElement::SecurityAttribute : public ::Il2CppObject {
    public:
    public:
    // private System.String _name
    // Size: 0x8
    // Offset: 0x10
    ::StringW name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String _value
    // Size: 0x8
    // Offset: 0x18
    ::StringW value;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: private System.String _name
    [[deprecated("Use field access instead!")]] ::StringW& dyn__name();
    // Get instance field reference: private System.String _value
    [[deprecated("Use field access instead!")]] ::StringW& dyn__value();
    // public System.String get_Name()
    // Offset: 0x214D50C
    ::StringW get_Name();
    // public System.String get_Value()
    // Offset: 0x214D514
    ::StringW get_Value();
    // public System.Void .ctor(System.String name, System.String value)
    // Offset: 0x214D294
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SecurityElement::SecurityAttribute* New_ctor(::StringW name, ::StringW value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::SecurityElement::SecurityAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SecurityElement::SecurityAttribute*, creationType>(name, value)));
    }
  }; // System.Security.SecurityElement/System.Security.SecurityAttribute
  #pragma pack(pop)
  static check_size<sizeof(SecurityElement::SecurityAttribute), 24 + sizeof(::StringW)> __System_Security_SecurityElement_SecurityAttributeSizeCheck;
  static_assert(sizeof(SecurityElement::SecurityAttribute) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::SecurityElement::SecurityAttribute::get_Name
// Il2CppName: get_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Security::SecurityElement::SecurityAttribute::*)()>(&System::Security::SecurityElement::SecurityAttribute::get_Name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::SecurityElement::SecurityAttribute*), "get_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::SecurityElement::SecurityAttribute::get_Value
// Il2CppName: get_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Security::SecurityElement::SecurityAttribute::*)()>(&System::Security::SecurityElement::SecurityAttribute::get_Value)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::SecurityElement::SecurityAttribute*), "get_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::SecurityElement::SecurityAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
