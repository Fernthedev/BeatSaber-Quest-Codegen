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
  // Autogenerated type: UnityEngine.Bindings.NativeAsStructAttribute
  // [VisibleToOtherModulesAttribute] Offset: D8B8C0
  // [AttributeUsageAttribute] Offset: D8B8C0
  class NativeAsStructAttribute : public System::Attribute {
    public:
    // Creating value type constructor for type: NativeAsStructAttribute
    NativeAsStructAttribute() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x23EBC38
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NativeAsStructAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Bindings::NativeAsStructAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NativeAsStructAttribute*, creationType>()));
    }
  }; // UnityEngine.Bindings.NativeAsStructAttribute
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Bindings::NativeAsStructAttribute*, "UnityEngine.Bindings", "NativeAsStructAttribute");
// Writing includes for template specializations
// Writing MetadataGetter for method: UnityEngine::Bindings::NativeAsStructAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
