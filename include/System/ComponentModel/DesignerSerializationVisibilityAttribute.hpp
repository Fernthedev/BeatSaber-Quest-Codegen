// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
// Including type: System.ComponentModel.DesignerSerializationVisibility
#include "System/ComponentModel/DesignerSerializationVisibility.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.DesignerSerializationVisibilityAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: DA6B94
  class DesignerSerializationVisibilityAttribute : public System::Attribute {
    public:
    // private System.ComponentModel.DesignerSerializationVisibility visibility
    // Size: 0x4
    // Offset: 0x10
    System::ComponentModel::DesignerSerializationVisibility visibility;
    // Field size check
    static_assert(sizeof(System::ComponentModel::DesignerSerializationVisibility) == 0x4);
    // Creating value type constructor for type: DesignerSerializationVisibilityAttribute
    DesignerSerializationVisibilityAttribute(System::ComponentModel::DesignerSerializationVisibility visibility_ = {}) noexcept : visibility{visibility_} {}
    // Creating conversion operator: operator System::ComponentModel::DesignerSerializationVisibility
    constexpr operator System::ComponentModel::DesignerSerializationVisibility() const noexcept {
      return visibility;
    }
    // Get static field: static public readonly System.ComponentModel.DesignerSerializationVisibilityAttribute Content
    static System::ComponentModel::DesignerSerializationVisibilityAttribute* _get_Content();
    // Set static field: static public readonly System.ComponentModel.DesignerSerializationVisibilityAttribute Content
    static void _set_Content(System::ComponentModel::DesignerSerializationVisibilityAttribute* value);
    // Get static field: static public readonly System.ComponentModel.DesignerSerializationVisibilityAttribute Hidden
    static System::ComponentModel::DesignerSerializationVisibilityAttribute* _get_Hidden();
    // Set static field: static public readonly System.ComponentModel.DesignerSerializationVisibilityAttribute Hidden
    static void _set_Hidden(System::ComponentModel::DesignerSerializationVisibilityAttribute* value);
    // Get static field: static public readonly System.ComponentModel.DesignerSerializationVisibilityAttribute Visible
    static System::ComponentModel::DesignerSerializationVisibilityAttribute* _get_Visible();
    // Set static field: static public readonly System.ComponentModel.DesignerSerializationVisibilityAttribute Visible
    static void _set_Visible(System::ComponentModel::DesignerSerializationVisibilityAttribute* value);
    // Get static field: static public readonly System.ComponentModel.DesignerSerializationVisibilityAttribute Default
    static System::ComponentModel::DesignerSerializationVisibilityAttribute* _get_Default();
    // Set static field: static public readonly System.ComponentModel.DesignerSerializationVisibilityAttribute Default
    static void _set_Default(System::ComponentModel::DesignerSerializationVisibilityAttribute* value);
    // Get instance field reference: private System.ComponentModel.DesignerSerializationVisibility visibility
    System::ComponentModel::DesignerSerializationVisibility& dyn_visibility();
    // public System.ComponentModel.DesignerSerializationVisibility get_Visibility()
    // Offset: 0x18AF2D0
    System::ComponentModel::DesignerSerializationVisibility get_Visibility();
    // public System.Void .ctor(System.ComponentModel.DesignerSerializationVisibility visibility)
    // Offset: 0x18AF2A4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DesignerSerializationVisibilityAttribute* New_ctor(System::ComponentModel::DesignerSerializationVisibility visibility) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ComponentModel::DesignerSerializationVisibilityAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DesignerSerializationVisibilityAttribute*, creationType>(visibility)));
    }
    // static private System.Void .cctor()
    // Offset: 0x18AF37C
    static void _cctor();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x18AF2D8
    // Implemented from: System.Attribute
    // Base method: System.Boolean Attribute::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x18AF374
    // Implemented from: System.Attribute
    // Base method: System.Int32 Attribute::GetHashCode()
    int GetHashCode();
  }; // System.ComponentModel.DesignerSerializationVisibilityAttribute
  #pragma pack(pop)
  static check_size<sizeof(DesignerSerializationVisibilityAttribute), 16 + sizeof(System::ComponentModel::DesignerSerializationVisibility)> __System_ComponentModel_DesignerSerializationVisibilityAttributeSizeCheck;
  static_assert(sizeof(DesignerSerializationVisibilityAttribute) == 0x14);
}
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::DesignerSerializationVisibilityAttribute*, "System.ComponentModel", "DesignerSerializationVisibilityAttribute");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ComponentModel::DesignerSerializationVisibilityAttribute::get_Visibility
// Il2CppName: get_Visibility
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::ComponentModel::DesignerSerializationVisibility (System::ComponentModel::DesignerSerializationVisibilityAttribute::*)()>(&System::ComponentModel::DesignerSerializationVisibilityAttribute::get_Visibility)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::DesignerSerializationVisibilityAttribute*), "get_Visibility", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::DesignerSerializationVisibilityAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::DesignerSerializationVisibilityAttribute::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::ComponentModel::DesignerSerializationVisibilityAttribute::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::DesignerSerializationVisibilityAttribute*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::DesignerSerializationVisibilityAttribute::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::DesignerSerializationVisibilityAttribute::*)(::Il2CppObject*)>(&System::ComponentModel::DesignerSerializationVisibilityAttribute::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::DesignerSerializationVisibilityAttribute*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::DesignerSerializationVisibilityAttribute::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::ComponentModel::DesignerSerializationVisibilityAttribute::*)()>(&System::ComponentModel::DesignerSerializationVisibilityAttribute::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::DesignerSerializationVisibilityAttribute*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
