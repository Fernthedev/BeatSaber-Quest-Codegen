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
  // Autogenerated type: IPAPluginsDirDeleter
  // [TokenAttribute] Offset: FFFFFFFF
  class IPAPluginsDirDeleter : public UnityEngine::MonoBehaviour {
    public:
    // Creating value type constructor for type: IPAPluginsDirDeleter
    IPAPluginsDirDeleter() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x1145224
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IPAPluginsDirDeleter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::IPAPluginsDirDeleter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IPAPluginsDirDeleter*, creationType>()));
    }
  }; // IPAPluginsDirDeleter
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IPAPluginsDirDeleter*, "", "IPAPluginsDirDeleter");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::IPAPluginsDirDeleter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
