// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Type
#include "System/Type.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Reflection
namespace System::Reflection {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Reflection.TypeInfo
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: D9B314
  class TypeInfo : public System::Type {
    public:
    // Creating value type constructor for type: TypeInfo
    TypeInfo() noexcept {}
    // System.Void .ctor()
    // Offset: 0x147E450
    // Implemented from: System.Type
    // Base method: System.Void Type::.ctor()
    // Base method: System.Void MemberInfo::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TypeInfo* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Reflection::TypeInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TypeInfo*, creationType>()));
    }
  }; // System.Reflection.TypeInfo
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::TypeInfo*, "System.Reflection", "TypeInfo");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Reflection::TypeInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
