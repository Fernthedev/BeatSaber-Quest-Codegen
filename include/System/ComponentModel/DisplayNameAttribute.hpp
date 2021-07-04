// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
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
  // Autogenerated type: System.ComponentModel.DisplayNameAttribute
  // [AttributeUsageAttribute] Offset: D87938
  class DisplayNameAttribute : public System::Attribute {
    public:
    // private System.String _displayName
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* displayName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: DisplayNameAttribute
    DisplayNameAttribute(::Il2CppString* displayName_ = {}) noexcept : displayName{displayName_} {}
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return displayName;
    }
    // Get static field: static public readonly System.ComponentModel.DisplayNameAttribute Default
    static System::ComponentModel::DisplayNameAttribute* _get_Default();
    // Set static field: static public readonly System.ComponentModel.DisplayNameAttribute Default
    static void _set_Default(System::ComponentModel::DisplayNameAttribute* value);
    // public System.Void .ctor(System.String displayName)
    // Offset: 0x1867BDC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DisplayNameAttribute* New_ctor(::Il2CppString* displayName) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ComponentModel::DisplayNameAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DisplayNameAttribute*, creationType>(displayName)));
    }
    // public System.String get_DisplayName()
    // Offset: 0x1867C08
    ::Il2CppString* get_DisplayName();
    // protected System.String get_DisplayNameValue()
    // Offset: 0x1867C10
    ::Il2CppString* get_DisplayNameValue();
    // static private System.Void .cctor()
    // Offset: 0x1867D24
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x1867B78
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DisplayNameAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ComponentModel::DisplayNameAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DisplayNameAttribute*, creationType>()));
    }
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x1867C18
    // Implemented from: System.Attribute
    // Base method: System.Boolean Attribute::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1867CF8
    // Implemented from: System.Attribute
    // Base method: System.Int32 Attribute::GetHashCode()
    int GetHashCode();
  }; // System.ComponentModel.DisplayNameAttribute
  #pragma pack(pop)
  static check_size<sizeof(DisplayNameAttribute), 16 + sizeof(::Il2CppString*)> __System_ComponentModel_DisplayNameAttributeSizeCheck;
  static_assert(sizeof(DisplayNameAttribute) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::DisplayNameAttribute*, "System.ComponentModel", "DisplayNameAttribute");
// Writing includes for template specializations
// Writing MetadataGetter for method: System::ComponentModel::DisplayNameAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::DisplayNameAttribute::get_DisplayName
// Il2CppName: get_DisplayName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::ComponentModel::DisplayNameAttribute::*)()>(&System::ComponentModel::DisplayNameAttribute::get_DisplayName)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::DisplayNameAttribute*), "get_DisplayName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::DisplayNameAttribute::get_DisplayNameValue
// Il2CppName: get_DisplayNameValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::ComponentModel::DisplayNameAttribute::*)()>(&System::ComponentModel::DisplayNameAttribute::get_DisplayNameValue)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::DisplayNameAttribute*), "get_DisplayNameValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::DisplayNameAttribute::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::ComponentModel::DisplayNameAttribute::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::DisplayNameAttribute*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::DisplayNameAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::DisplayNameAttribute::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::DisplayNameAttribute::*)(::Il2CppObject*)>(&System::ComponentModel::DisplayNameAttribute::Equals)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::DisplayNameAttribute*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::DisplayNameAttribute::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::ComponentModel::DisplayNameAttribute::*)()>(&System::ComponentModel::DisplayNameAttribute::GetHashCode)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::DisplayNameAttribute*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
