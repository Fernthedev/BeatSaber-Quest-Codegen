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
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioSource
  class AudioSource;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: DisableSpatializerOnOldWindows
  // [TokenAttribute] Offset: FFFFFFFF
  class DisableSpatializerOnOldWindows : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.AudioSource _audioSource
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::AudioSource* audioSource;
    // Field size check
    static_assert(sizeof(UnityEngine::AudioSource*) == 0x8);
    // Creating value type constructor for type: DisableSpatializerOnOldWindows
    DisableSpatializerOnOldWindows(UnityEngine::AudioSource* audioSource_ = {}) noexcept : audioSource{audioSource_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.AudioSource _audioSource
    UnityEngine::AudioSource*& dyn__audioSource();
    // public System.Void .ctor()
    // Offset: 0x10FBD60
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DisableSpatializerOnOldWindows* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::DisableSpatializerOnOldWindows::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DisableSpatializerOnOldWindows*, creationType>()));
    }
  }; // DisableSpatializerOnOldWindows
  #pragma pack(pop)
  static check_size<sizeof(DisableSpatializerOnOldWindows), 24 + sizeof(UnityEngine::AudioSource*)> __GlobalNamespace_DisableSpatializerOnOldWindowsSizeCheck;
  static_assert(sizeof(DisableSpatializerOnOldWindows) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::DisableSpatializerOnOldWindows*, "", "DisableSpatializerOnOldWindows");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::DisableSpatializerOnOldWindows::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
