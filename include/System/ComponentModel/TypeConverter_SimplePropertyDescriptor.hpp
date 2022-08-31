// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ComponentModel.PropertyDescriptor
#include "System/ComponentModel/PropertyDescriptor.hpp"
// Including type: System.ComponentModel.TypeConverter
#include "System/ComponentModel/TypeConverter.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Attribute
  class Attribute;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::ComponentModel::TypeConverter::SimplePropertyDescriptor);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::TypeConverter::SimplePropertyDescriptor*, "System.ComponentModel", "TypeConverter/SimplePropertyDescriptor");
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x90
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.TypeConverter/System.ComponentModel.SimplePropertyDescriptor
  // [TokenAttribute] Offset: FFFFFFFF
  class TypeConverter::SimplePropertyDescriptor : public ::System::ComponentModel::PropertyDescriptor {
    public:
    // Writing base type padding for base size: 0x7C to desired offset: 0x80
    char ___base_padding[0x4] = {};
    public:
    // private System.Type componentType
    // Size: 0x8
    // Offset: 0x80
    ::System::Type* componentType;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    // private System.Type propertyType
    // Size: 0x8
    // Offset: 0x88
    ::System::Type* propertyType;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    public:
    // Get instance field reference: private System.Type componentType
    [[deprecated("Use field access instead!")]] ::System::Type*& dyn_componentType();
    // Get instance field reference: private System.Type propertyType
    [[deprecated("Use field access instead!")]] ::System::Type*& dyn_propertyType();
    // protected System.Void .ctor(System.Type componentType, System.String name, System.Type propertyType, System.Attribute[] attributes)
    // Offset: 0x1D8972C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TypeConverter::SimplePropertyDescriptor* New_ctor(::System::Type* componentType, ::StringW name, ::System::Type* propertyType, ::ArrayW<::System::Attribute*> attributes) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::TypeConverter::SimplePropertyDescriptor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TypeConverter::SimplePropertyDescriptor*, creationType>(componentType, name, propertyType, attributes)));
    }
    // public override System.Type get_PropertyType()
    // Offset: 0x1D9ABF4
    // Implemented from: System.ComponentModel.PropertyDescriptor
    // Base method: System.Type PropertyDescriptor::get_PropertyType()
    ::System::Type* get_PropertyType();
  }; // System.ComponentModel.TypeConverter/System.ComponentModel.SimplePropertyDescriptor
  #pragma pack(pop)
  static check_size<sizeof(TypeConverter::SimplePropertyDescriptor), 136 + sizeof(::System::Type*)> __System_ComponentModel_TypeConverter_SimplePropertyDescriptorSizeCheck;
  static_assert(sizeof(TypeConverter::SimplePropertyDescriptor) == 0x90);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ComponentModel::TypeConverter::SimplePropertyDescriptor::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::TypeConverter::SimplePropertyDescriptor::get_PropertyType
// Il2CppName: get_PropertyType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (System::ComponentModel::TypeConverter::SimplePropertyDescriptor::*)()>(&System::ComponentModel::TypeConverter::SimplePropertyDescriptor::get_PropertyType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::TypeConverter::SimplePropertyDescriptor*), "get_PropertyType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
