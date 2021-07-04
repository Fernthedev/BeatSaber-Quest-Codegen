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
// Type namespace: UnityEngine.Bindings
namespace UnityEngine::Bindings {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Bindings.UnmarshalledAttribute
  // [AttributeUsageAttribute] Offset: D8B974
  // [VisibleToOtherModulesAttribute] Offset: D8B974
  class UnmarshalledAttribute : public System::Attribute {
    public:
    // Creating value type constructor for type: UnmarshalledAttribute
    UnmarshalledAttribute() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x23EC2A8
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnmarshalledAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Bindings::UnmarshalledAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnmarshalledAttribute*, creationType>()));
    }
  }; // UnityEngine.Bindings.UnmarshalledAttribute
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Bindings::UnmarshalledAttribute*, "UnityEngine.Bindings", "UnmarshalledAttribute");
// Writing includes for template specializations
// Writing MetadataGetter for method: UnityEngine::Bindings::UnmarshalledAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
