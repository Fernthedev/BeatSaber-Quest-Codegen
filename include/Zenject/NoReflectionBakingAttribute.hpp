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
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.NoReflectionBakingAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: DF09E0
  class NoReflectionBakingAttribute : public System::Attribute {
    public:
    // Creating value type constructor for type: NoReflectionBakingAttribute
    NoReflectionBakingAttribute() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x2406BC4
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NoReflectionBakingAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::NoReflectionBakingAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NoReflectionBakingAttribute*, creationType>()));
    }
  }; // Zenject.NoReflectionBakingAttribute
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::NoReflectionBakingAttribute*, "Zenject", "NoReflectionBakingAttribute");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::NoReflectionBakingAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
