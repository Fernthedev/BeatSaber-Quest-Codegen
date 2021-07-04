// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
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
  // Forward declaring type: AutomaticSFXVolumeParamsSO
  class AutomaticSFXVolumeParamsSO;
  // Forward declaring type: AudioManagerSO
  class AudioManagerSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: AutomaticSFXVolume
  // [RequireComponent] Offset: E10C9C
  class AutomaticSFXVolume : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::AutomaticSFXVolume::InitData
    class InitData;
    // private AutomaticSFXVolumeParamsSO _params
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::AutomaticSFXVolumeParamsSO* params;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AutomaticSFXVolumeParamsSO*) == 0x8);
    // [SpaceAttribute] Offset: 0xE14D50
    // private AudioManagerSO _audioManager
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::AudioManagerSO* audioManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AudioManagerSO*) == 0x8);
    // [InjectAttribute] Offset: 0xE14D88
    // private AutomaticSFXVolume/InitData _initData
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::AutomaticSFXVolume::InitData* initData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AutomaticSFXVolume::InitData*) == 0x8);
    // private System.Single _sampleRate
    // Size: 0x4
    // Offset: 0x30
    float sampleRate;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _volume
    // Size: 0x4
    // Offset: 0x34
    float volume;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _envelope
    // Size: 0x4
    // Offset: 0x38
    float envelope;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _attackSamples
    // Size: 0x4
    // Offset: 0x3C
    float attackSamples;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _releaseSamples
    // Size: 0x4
    // Offset: 0x40
    float releaseSamples;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _attackCoef
    // Size: 0x4
    // Offset: 0x44
    float attackCoef;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _releaseCoef
    // Size: 0x4
    // Offset: 0x48
    float releaseCoef;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _maxVolume
    // Size: 0x4
    // Offset: 0x4C
    float maxVolume;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: AutomaticSFXVolume
    AutomaticSFXVolume(GlobalNamespace::AutomaticSFXVolumeParamsSO* params_ = {}, GlobalNamespace::AudioManagerSO* audioManager_ = {}, GlobalNamespace::AutomaticSFXVolume::InitData* initData_ = {}, float sampleRate_ = {}, float volume_ = {}, float envelope_ = {}, float attackSamples_ = {}, float releaseSamples_ = {}, float attackCoef_ = {}, float releaseCoef_ = {}, float maxVolume_ = {}) noexcept : params{params_}, audioManager{audioManager_}, initData{initData_}, sampleRate{sampleRate_}, volume{volume_}, envelope{envelope_}, attackSamples{attackSamples_}, releaseSamples{releaseSamples_}, attackCoef{attackCoef_}, releaseCoef{releaseCoef_}, maxVolume{maxVolume_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // static field const value: static private System.Single kBaseVolume
    static constexpr const float kBaseVolume = 0.4;
    // Get static field: static private System.Single kBaseVolume
    static float _get_kBaseVolume();
    // Set static field: static private System.Single kBaseVolume
    static void _set_kBaseVolume(float value);
    // protected System.Void Start()
    // Offset: 0x1133424
    void Start();
    // protected System.Void OnDisable()
    // Offset: 0x113354C
    void OnDisable();
    // protected System.Void OnValidate()
    // Offset: 0x11335E0
    void OnValidate();
    // private System.Void RecalculateParams()
    // Offset: 0x1133428
    void RecalculateParams();
    // protected System.Void OnAudioFilterRead(System.Single[] data, System.Int32 channels)
    // Offset: 0x11335E4
    void OnAudioFilterRead(::Array<float>* data, int channels);
    // protected System.Void Update()
    // Offset: 0x11337E8
    void Update();
    // public System.Void .ctor()
    // Offset: 0x1133838
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AutomaticSFXVolume* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::AutomaticSFXVolume::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AutomaticSFXVolume*, creationType>()));
    }
  }; // AutomaticSFXVolume
  #pragma pack(pop)
  static check_size<sizeof(AutomaticSFXVolume), 76 + sizeof(float)> __GlobalNamespace_AutomaticSFXVolumeSizeCheck;
  static_assert(sizeof(AutomaticSFXVolume) == 0x50);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AutomaticSFXVolume*, "", "AutomaticSFXVolume");
// Writing includes for template specializations
// Writing MetadataGetter for method: GlobalNamespace::AutomaticSFXVolume::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AutomaticSFXVolume::*)()>(&GlobalNamespace::AutomaticSFXVolume::Start)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AutomaticSFXVolume*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AutomaticSFXVolume::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AutomaticSFXVolume::*)()>(&GlobalNamespace::AutomaticSFXVolume::OnDisable)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AutomaticSFXVolume*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AutomaticSFXVolume::OnValidate
// Il2CppName: OnValidate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AutomaticSFXVolume::*)()>(&GlobalNamespace::AutomaticSFXVolume::OnValidate)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AutomaticSFXVolume*), "OnValidate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AutomaticSFXVolume::RecalculateParams
// Il2CppName: RecalculateParams
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AutomaticSFXVolume::*)()>(&GlobalNamespace::AutomaticSFXVolume::RecalculateParams)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AutomaticSFXVolume*), "RecalculateParams", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AutomaticSFXVolume::OnAudioFilterRead
// Il2CppName: OnAudioFilterRead
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AutomaticSFXVolume::*)(::Array<float>*, int)>(&GlobalNamespace::AutomaticSFXVolume::OnAudioFilterRead)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AutomaticSFXVolume*), "OnAudioFilterRead", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<float>*>(), ::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AutomaticSFXVolume::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AutomaticSFXVolume::*)()>(&GlobalNamespace::AutomaticSFXVolume::Update)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AutomaticSFXVolume*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AutomaticSFXVolume::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
