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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BloomFogSO
  class BloomFogSO;
  // Forward declaring type: BloomFogEnvironmentParams
  class BloomFogEnvironmentParams;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: BloomFogEnvironment
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExecuteInEditMode] Offset: FFFFFFFF
  class BloomFogEnvironment : public UnityEngine::MonoBehaviour {
    public:
    // private BloomFogSO _bloomFog
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::BloomFogSO* bloomFog;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BloomFogSO*) == 0x8);
    // [SpaceAttribute] Offset: 0xE13F8C
    // [FormerlySerializedAsAttribute] Offset: 0xE13F8C
    // private BloomFogEnvironmentParams _fogParams
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::BloomFogEnvironmentParams* fogParams;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BloomFogEnvironmentParams*) == 0x8);
    // Creating value type constructor for type: BloomFogEnvironment
    BloomFogEnvironment(GlobalNamespace::BloomFogSO* bloomFog_ = {}, GlobalNamespace::BloomFogEnvironmentParams* fogParams_ = {}) noexcept : bloomFog{bloomFog_}, fogParams{fogParams_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field: private BloomFogSO _bloomFog
    GlobalNamespace::BloomFogSO* _get__bloomFog();
    // Set instance field: private BloomFogSO _bloomFog
    void _set__bloomFog(GlobalNamespace::BloomFogSO* value);
    // Get instance field: private BloomFogEnvironmentParams _fogParams
    GlobalNamespace::BloomFogEnvironmentParams* _get__fogParams();
    // Set instance field: private BloomFogEnvironmentParams _fogParams
    void _set__fogParams(GlobalNamespace::BloomFogEnvironmentParams* value);
    // protected System.Void OnEnable()
    // Offset: 0x1E10D5C
    void OnEnable();
    // protected System.Void OnValidate()
    // Offset: 0x1E10DC8
    void OnValidate();
    // public System.Void .ctor()
    // Offset: 0x1E11110
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BloomFogEnvironment* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BloomFogEnvironment::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BloomFogEnvironment*, creationType>()));
    }
  }; // BloomFogEnvironment
  #pragma pack(pop)
  static check_size<sizeof(BloomFogEnvironment), 32 + sizeof(GlobalNamespace::BloomFogEnvironmentParams*)> __GlobalNamespace_BloomFogEnvironmentSizeCheck;
  static_assert(sizeof(BloomFogEnvironment) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BloomFogEnvironment*, "", "BloomFogEnvironment");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BloomFogEnvironment::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomFogEnvironment::*)()>(&GlobalNamespace::BloomFogEnvironment::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomFogEnvironment*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BloomFogEnvironment::OnValidate
// Il2CppName: OnValidate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomFogEnvironment::*)()>(&GlobalNamespace::BloomFogEnvironment::OnValidate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomFogEnvironment*), "OnValidate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BloomFogEnvironment::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
