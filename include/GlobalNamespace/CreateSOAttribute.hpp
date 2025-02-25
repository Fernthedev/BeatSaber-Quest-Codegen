// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.PropertyAttribute
#include "UnityEngine/PropertyAttribute.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: CreateSOAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  class CreateSOAttribute : public UnityEngine::PropertyAttribute {
    public:
    // Creating value type constructor for type: CreateSOAttribute
    CreateSOAttribute() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x125DFC0
    // Implemented from: UnityEngine.PropertyAttribute
    // Base method: System.Void PropertyAttribute::.ctor()
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CreateSOAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::CreateSOAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CreateSOAttribute*, creationType>()));
    }
  }; // CreateSOAttribute
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CreateSOAttribute*, "", "CreateSOAttribute");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::CreateSOAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
