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
  // Autogenerated type: UnityEngine.Bindings.NotNullAttribute
  // [VisibleToOtherModulesAttribute] Offset: D8B938
  // [AttributeUsageAttribute] Offset: D8B938
  class NotNullAttribute : public System::Attribute {
    public:
    // Creating value type constructor for type: NotNullAttribute
    NotNullAttribute() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x23EC1FC
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NotNullAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Bindings::NotNullAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NotNullAttribute*, creationType>()));
    }
  }; // UnityEngine.Bindings.NotNullAttribute
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Bindings::NotNullAttribute*, "UnityEngine.Bindings", "NotNullAttribute");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Bindings::NotNullAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
