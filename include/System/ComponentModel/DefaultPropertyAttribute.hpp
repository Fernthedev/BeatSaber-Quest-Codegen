// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.DefaultPropertyAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: DA6AD4
  class DefaultPropertyAttribute : public System::Attribute {
    public:
    // private readonly System.String name
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* name;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: DefaultPropertyAttribute
    DefaultPropertyAttribute(::Il2CppString* name_ = {}) noexcept : name{name_} {}
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return name;
    }
    // Get static field: static public readonly System.ComponentModel.DefaultPropertyAttribute Default
    static System::ComponentModel::DefaultPropertyAttribute* _get_Default();
    // Set static field: static public readonly System.ComponentModel.DefaultPropertyAttribute Default
    static void _set_Default(System::ComponentModel::DefaultPropertyAttribute* value);
    // Get instance field reference: private readonly System.String name
    ::Il2CppString*& dyn_name();
    // public System.String get_Name()
    // Offset: 0x18AE854
    ::Il2CppString* get_Name();
    // public System.Void .ctor(System.String name)
    // Offset: 0x18AE828
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DefaultPropertyAttribute* New_ctor(::Il2CppString* name) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ComponentModel::DefaultPropertyAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DefaultPropertyAttribute*, creationType>(name)));
    }
    // static private System.Void .cctor()
    // Offset: 0x18AE8F8
    static void _cctor();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x18AE85C
    // Implemented from: System.Attribute
    // Base method: System.Boolean Attribute::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x18AE8F0
    // Implemented from: System.Attribute
    // Base method: System.Int32 Attribute::GetHashCode()
    int GetHashCode();
  }; // System.ComponentModel.DefaultPropertyAttribute
  #pragma pack(pop)
  static check_size<sizeof(DefaultPropertyAttribute), 16 + sizeof(::Il2CppString*)> __System_ComponentModel_DefaultPropertyAttributeSizeCheck;
  static_assert(sizeof(DefaultPropertyAttribute) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::DefaultPropertyAttribute*, "System.ComponentModel", "DefaultPropertyAttribute");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ComponentModel::DefaultPropertyAttribute::get_Name
// Il2CppName: get_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::ComponentModel::DefaultPropertyAttribute::*)()>(&System::ComponentModel::DefaultPropertyAttribute::get_Name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::DefaultPropertyAttribute*), "get_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::DefaultPropertyAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::DefaultPropertyAttribute::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::ComponentModel::DefaultPropertyAttribute::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::DefaultPropertyAttribute*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::DefaultPropertyAttribute::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::DefaultPropertyAttribute::*)(::Il2CppObject*)>(&System::ComponentModel::DefaultPropertyAttribute::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::DefaultPropertyAttribute*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::DefaultPropertyAttribute::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::ComponentModel::DefaultPropertyAttribute::*)()>(&System::ComponentModel::DefaultPropertyAttribute::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::DefaultPropertyAttribute*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
