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
  // Autogenerated type: System.ComponentModel.DescriptionAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: DA6AFC
  class DescriptionAttribute : public System::Attribute {
    public:
    // private System.String description
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* description;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: DescriptionAttribute
    DescriptionAttribute(::Il2CppString* description_ = {}) noexcept : description{description_} {}
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return description;
    }
    // Get static field: static public readonly System.ComponentModel.DescriptionAttribute Default
    static System::ComponentModel::DescriptionAttribute* _get_Default();
    // Set static field: static public readonly System.ComponentModel.DescriptionAttribute Default
    static void _set_Default(System::ComponentModel::DescriptionAttribute* value);
    // Get instance field reference: private System.String description
    ::Il2CppString*& dyn_description();
    // public System.String get_Description()
    // Offset: 0x18AEBEC
    ::Il2CppString* get_Description();
    // protected System.String get_DescriptionValue()
    // Offset: 0x18AEBF4
    ::Il2CppString* get_DescriptionValue();
    // public System.Void .ctor(System.String description)
    // Offset: 0x18AEBC0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DescriptionAttribute* New_ctor(::Il2CppString* description) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ComponentModel::DescriptionAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DescriptionAttribute*, creationType>(description)));
    }
    // static private System.Void .cctor()
    // Offset: 0x18AED08
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x18AEB5C
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DescriptionAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ComponentModel::DescriptionAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DescriptionAttribute*, creationType>()));
    }
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x18AEBFC
    // Implemented from: System.Attribute
    // Base method: System.Boolean Attribute::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x18AECDC
    // Implemented from: System.Attribute
    // Base method: System.Int32 Attribute::GetHashCode()
    int GetHashCode();
  }; // System.ComponentModel.DescriptionAttribute
  #pragma pack(pop)
  static check_size<sizeof(DescriptionAttribute), 16 + sizeof(::Il2CppString*)> __System_ComponentModel_DescriptionAttributeSizeCheck;
  static_assert(sizeof(DescriptionAttribute) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::DescriptionAttribute*, "System.ComponentModel", "DescriptionAttribute");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ComponentModel::DescriptionAttribute::get_Description
// Il2CppName: get_Description
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::ComponentModel::DescriptionAttribute::*)()>(&System::ComponentModel::DescriptionAttribute::get_Description)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::DescriptionAttribute*), "get_Description", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::DescriptionAttribute::get_DescriptionValue
// Il2CppName: get_DescriptionValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::ComponentModel::DescriptionAttribute::*)()>(&System::ComponentModel::DescriptionAttribute::get_DescriptionValue)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::DescriptionAttribute*), "get_DescriptionValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::DescriptionAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::DescriptionAttribute::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::ComponentModel::DescriptionAttribute::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::DescriptionAttribute*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::DescriptionAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::DescriptionAttribute::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::DescriptionAttribute::*)(::Il2CppObject*)>(&System::ComponentModel::DescriptionAttribute::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::DescriptionAttribute*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::DescriptionAttribute::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::ComponentModel::DescriptionAttribute::*)()>(&System::ComponentModel::DescriptionAttribute::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::DescriptionAttribute*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
