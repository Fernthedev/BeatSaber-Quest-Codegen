// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: DisableOnNonOculus
  // [TokenAttribute] Offset: FFFFFFFF
  class DisableOnNonOculus : public UnityEngine::MonoBehaviour {
    public:
    // Creating value type constructor for type: DisableOnNonOculus
    DisableOnNonOculus() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x10EF798
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DisableOnNonOculus* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::DisableOnNonOculus::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DisableOnNonOculus*, creationType>()));
    }
  }; // DisableOnNonOculus
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::DisableOnNonOculus*, "", "DisableOnNonOculus");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::DisableOnNonOculus::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
