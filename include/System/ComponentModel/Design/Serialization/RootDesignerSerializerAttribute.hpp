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
// Type namespace: System.ComponentModel.Design.Serialization
namespace System::ComponentModel::Design::Serialization {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.Design.Serialization.RootDesignerSerializerAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: DACD78
  // [ObsoleteAttribute] Offset: DACD78
  class RootDesignerSerializerAttribute : public System::Attribute {
    public:
    // private System.Boolean reloadable
    // Size: 0x1
    // Offset: 0x10
    bool reloadable;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: reloadable and: serializerTypeName
    char __padding0[0x7] = {};
    // private System.String serializerTypeName
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* serializerTypeName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String serializerBaseTypeName
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* serializerBaseTypeName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: RootDesignerSerializerAttribute
    RootDesignerSerializerAttribute(bool reloadable_ = {}, ::Il2CppString* serializerTypeName_ = {}, ::Il2CppString* serializerBaseTypeName_ = {}) noexcept : reloadable{reloadable_}, serializerTypeName{serializerTypeName_}, serializerBaseTypeName{serializerBaseTypeName_} {}
    // Get instance field reference: private System.Boolean reloadable
    bool& dyn_reloadable();
    // Get instance field reference: private System.String serializerTypeName
    ::Il2CppString*& dyn_serializerTypeName();
    // Get instance field reference: private System.String serializerBaseTypeName
    ::Il2CppString*& dyn_serializerBaseTypeName();
    // public System.Void .ctor(System.String serializerTypeName, System.String baseSerializerTypeName, System.Boolean reloadable)
    // Offset: 0x18B659C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RootDesignerSerializerAttribute* New_ctor(::Il2CppString* serializerTypeName, ::Il2CppString* baseSerializerTypeName, bool reloadable) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RootDesignerSerializerAttribute*, creationType>(serializerTypeName, baseSerializerTypeName, reloadable)));
    }
  }; // System.ComponentModel.Design.Serialization.RootDesignerSerializerAttribute
  #pragma pack(pop)
  static check_size<sizeof(RootDesignerSerializerAttribute), 32 + sizeof(::Il2CppString*)> __System_ComponentModel_Design_Serialization_RootDesignerSerializerAttributeSizeCheck;
  static_assert(sizeof(RootDesignerSerializerAttribute) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute*, "System.ComponentModel.Design.Serialization", "RootDesignerSerializerAttribute");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
