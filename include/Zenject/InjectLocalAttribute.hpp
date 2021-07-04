// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
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
  // Autogenerated type: Zenject.InjectLocalAttribute
  // [AttributeUsageAttribute] Offset: DCA848
  class InjectLocalAttribute : public Zenject::InjectAttributeBase {
    public:
    // Creating value type constructor for type: InjectLocalAttribute
    InjectLocalAttribute() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x23DBA3C
    // Implemented from: Zenject.InjectAttributeBase
    // Base method: System.Void InjectAttributeBase::.ctor()
    // Base method: System.Void PreserveAttribute::.ctor()
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InjectLocalAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::InjectLocalAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InjectLocalAttribute*, creationType>()));
    }
  }; // Zenject.InjectLocalAttribute
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::InjectLocalAttribute*, "Zenject", "InjectLocalAttribute");
// Writing includes for template specializations
// Writing MetadataGetter for method: Zenject::InjectLocalAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
