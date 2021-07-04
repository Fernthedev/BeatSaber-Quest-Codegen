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
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.ProGridsConditionalSnapAttribute
  // [AttributeUsageAttribute] Offset: E3A0F0
  class ProGridsConditionalSnapAttribute : public System::Attribute {
    public:
    // Creating value type constructor for type: ProGridsConditionalSnapAttribute
    ProGridsConditionalSnapAttribute() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x14E31D4
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ProGridsConditionalSnapAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::ProGridsConditionalSnapAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ProGridsConditionalSnapAttribute*, creationType>()));
    }
  }; // UnityEngine.ProBuilder.ProGridsConditionalSnapAttribute
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::ProGridsConditionalSnapAttribute*, "UnityEngine.ProBuilder", "ProGridsConditionalSnapAttribute");
// Writing includes for template specializations
// Writing MetadataGetter for method: UnityEngine::ProBuilder::ProGridsConditionalSnapAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
