// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.InjectAttributeBase
#include "Zenject/InjectAttributeBase.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.InjectOptionalAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: DEB18C
  class InjectOptionalAttribute : public Zenject::InjectAttributeBase {
    public:
    // Creating value type constructor for type: InjectOptionalAttribute
    InjectOptionalAttribute() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x2408B28
    // Implemented from: Zenject.InjectAttributeBase
    // Base method: System.Void InjectAttributeBase::.ctor()
    // Base method: System.Void PreserveAttribute::.ctor()
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InjectOptionalAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::InjectOptionalAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InjectOptionalAttribute*, creationType>()));
    }
  }; // Zenject.InjectOptionalAttribute
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::InjectOptionalAttribute*, "Zenject", "InjectOptionalAttribute");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::InjectOptionalAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
