// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.TypeIdentifiers
#include "System/TypeIdentifiers.hpp"
// Including type: System.TypeNames/ATypeName
#include "System/TypeNames_ATypeName.hpp"
// Including type: System.TypeIdentifier
#include "System/TypeIdentifier.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System
namespace System {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.TypeIdentifiers/Display
  class TypeIdentifiers::Display : public System::TypeNames::ATypeName/*, public System::TypeIdentifier*/ {
    public:
    // private System.String displayName
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* displayName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String internal_name
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* internal_name;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: Display
    Display(::Il2CppString* displayName_ = {}, ::Il2CppString* internal_name_ = {}) noexcept : displayName{displayName_}, internal_name{internal_name_} {}
    // Creating interface conversion operator: operator System::TypeIdentifier
    operator System::TypeIdentifier() noexcept {
      return *reinterpret_cast<System::TypeIdentifier*>(this);
    }
    // System.Void .ctor(System.String displayName)
    // Offset: 0x232B0DC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TypeIdentifiers::Display* New_ctor(::Il2CppString* displayName) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::TypeIdentifiers::Display::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TypeIdentifiers::Display*, creationType>(displayName)));
    }
    // public System.String get_InternalName()
    // Offset: 0x232B118
    ::Il2CppString* get_InternalName();
    // private System.String GetInternalName()
    // Offset: 0x232B148
    ::Il2CppString* GetInternalName();
    // public override System.String get_DisplayName()
    // Offset: 0x232B110
    // Implemented from: System.TypeNames/ATypeName
    // Base method: System.String ATypeName::get_DisplayName()
    ::Il2CppString* get_DisplayName();
  }; // System.TypeIdentifiers/Display
  #pragma pack(pop)
  static check_size<sizeof(TypeIdentifiers::Display), 24 + sizeof(::Il2CppString*)> __System_TypeIdentifiers_DisplaySizeCheck;
  static_assert(sizeof(TypeIdentifiers::Display) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(System::TypeIdentifiers::Display*, "System", "TypeIdentifiers/Display");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::TypeIdentifiers::Display::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::TypeIdentifiers::Display::get_InternalName
// Il2CppName: get_InternalName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::TypeIdentifiers::Display::*)()>(&System::TypeIdentifiers::Display::get_InternalName)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::TypeIdentifiers::Display*), "get_InternalName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::TypeIdentifiers::Display::GetInternalName
// Il2CppName: GetInternalName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::TypeIdentifiers::Display::*)()>(&System::TypeIdentifiers::Display::GetInternalName)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::TypeIdentifiers::Display*), "GetInternalName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::TypeIdentifiers::Display::get_DisplayName
// Il2CppName: get_DisplayName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::TypeIdentifiers::Display::*)()>(&System::TypeIdentifiers::Display::get_DisplayName)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::TypeIdentifiers::Display*), "get_DisplayName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
