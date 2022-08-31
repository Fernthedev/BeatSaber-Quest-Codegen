// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: EditorAttribute
  class EditorAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::ComponentModel::EditorAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::EditorAttribute*, "System.ComponentModel", "EditorAttribute");
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.EditorAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: 104EC7C
  class EditorAttribute : public ::System::Attribute {
    public:
    public:
    // private System.String baseTypeName
    // Size: 0x8
    // Offset: 0x10
    ::StringW baseTypeName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String typeName
    // Size: 0x8
    // Offset: 0x18
    ::StringW typeName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String typeId
    // Size: 0x8
    // Offset: 0x20
    ::StringW typeId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: private System.String baseTypeName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_baseTypeName();
    // Get instance field reference: private System.String typeName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_typeName();
    // Get instance field reference: private System.String typeId
    [[deprecated("Use field access instead!")]] ::StringW& dyn_typeId();
    // public System.Void .ctor(System.String typeName, System.String baseTypeName)
    // Offset: 0x1D8EA84
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EditorAttribute* New_ctor(::StringW typeName, ::StringW baseTypeName) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::EditorAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EditorAttribute*, creationType>(typeName, baseTypeName)));
    }
    // public override System.Object get_TypeId()
    // Offset: 0x1D8EAD0
    // Implemented from: System.Attribute
    // Base method: System.Object Attribute::get_TypeId()
    ::Il2CppObject* get_TypeId();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x1D8EB60
    // Implemented from: System.Attribute
    // Base method: System.Boolean Attribute::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1D8EC18
    // Implemented from: System.Attribute
    // Base method: System.Int32 Attribute::GetHashCode()
    int GetHashCode();
  }; // System.ComponentModel.EditorAttribute
  #pragma pack(pop)
  static check_size<sizeof(EditorAttribute), 32 + sizeof(::StringW)> __System_ComponentModel_EditorAttributeSizeCheck;
  static_assert(sizeof(EditorAttribute) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ComponentModel::EditorAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::EditorAttribute::get_TypeId
// Il2CppName: get_TypeId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::ComponentModel::EditorAttribute::*)()>(&System::ComponentModel::EditorAttribute::get_TypeId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::EditorAttribute*), "get_TypeId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::EditorAttribute::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::EditorAttribute::*)(::Il2CppObject*)>(&System::ComponentModel::EditorAttribute::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::EditorAttribute*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::EditorAttribute::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::ComponentModel::EditorAttribute::*)()>(&System::ComponentModel::EditorAttribute::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::EditorAttribute*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
