// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: TubeBloomPrePassLight
  class TubeBloomPrePassLight;
  // Forward declaring type: RandomObjectPicker`1<T>
  template<typename T>
  class RandomObjectPicker_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: SpriteRenderer
  class SpriteRenderer;
  // Forward declaring type: ParticleSystem
  class ParticleSystem;
  // Forward declaring type: Material
  class Material;
  // Forward declaring type: AudioClip
  class AudioClip;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: FlickeringNeonSign
  class FlickeringNeonSign;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::FlickeringNeonSign);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FlickeringNeonSign*, "", "FlickeringNeonSign");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: FlickeringNeonSign
  // [TokenAttribute] Offset: FFFFFFFF
  class FlickeringNeonSign : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::FlickeringNeonSign::$FlickeringCoroutine$d__16
    class $FlickeringCoroutine$d__16;
    public:
    // private UnityEngine.SpriteRenderer _flickeringSprite
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::SpriteRenderer* flickeringSprite;
    // Field size check
    static_assert(sizeof(::UnityEngine::SpriteRenderer*) == 0x8);
    // private TubeBloomPrePassLight _light
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::TubeBloomPrePassLight* light;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::TubeBloomPrePassLight*) == 0x8);
    // private UnityEngine.ParticleSystem[] _particleSystems
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<::UnityEngine::ParticleSystem*> particleSystems;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::ParticleSystem*>) == 0x8);
    // private System.Single _minOnDelay
    // Size: 0x4
    // Offset: 0x30
    float minOnDelay;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _maxOnDelay
    // Size: 0x4
    // Offset: 0x34
    float maxOnDelay;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _minOffDelay
    // Size: 0x4
    // Offset: 0x38
    float minOffDelay;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _maxOffDelay
    // Size: 0x4
    // Offset: 0x3C
    float maxOffDelay;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Color _spriteOnColor
    // Size: 0x10
    // Offset: 0x40
    ::UnityEngine::Color spriteOnColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private UnityEngine.Color _lightOnColor
    // Size: 0x10
    // Offset: 0x50
    ::UnityEngine::Color lightOnColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private UnityEngine.Material _onMaterial
    // Size: 0x8
    // Offset: 0x60
    ::UnityEngine::Material* onMaterial;
    // Field size check
    static_assert(sizeof(::UnityEngine::Material*) == 0x8);
    // private UnityEngine.Material _offMaterial
    // Size: 0x8
    // Offset: 0x68
    ::UnityEngine::Material* offMaterial;
    // Field size check
    static_assert(sizeof(::UnityEngine::Material*) == 0x8);
    // private UnityEngine.AudioClip[] _sparksAudioClips
    // Size: 0x8
    // Offset: 0x70
    ::ArrayW<::UnityEngine::AudioClip*> sparksAudioClips;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::AudioClip*>) == 0x8);
    // private RandomObjectPicker`1<UnityEngine.AudioClip> _sparksAudioClipPicker
    // Size: 0x8
    // Offset: 0x78
    ::GlobalNamespace::RandomObjectPicker_1<::UnityEngine::AudioClip*>* sparksAudioClipPicker;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::RandomObjectPicker_1<::UnityEngine::AudioClip*>*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.SpriteRenderer _flickeringSprite
    [[deprecated("Use field access instead!")]] ::UnityEngine::SpriteRenderer*& dyn__flickeringSprite();
    // Get instance field reference: private TubeBloomPrePassLight _light
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::TubeBloomPrePassLight*& dyn__light();
    // Get instance field reference: private UnityEngine.ParticleSystem[] _particleSystems
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::ParticleSystem*>& dyn__particleSystems();
    // Get instance field reference: private System.Single _minOnDelay
    [[deprecated("Use field access instead!")]] float& dyn__minOnDelay();
    // Get instance field reference: private System.Single _maxOnDelay
    [[deprecated("Use field access instead!")]] float& dyn__maxOnDelay();
    // Get instance field reference: private System.Single _minOffDelay
    [[deprecated("Use field access instead!")]] float& dyn__minOffDelay();
    // Get instance field reference: private System.Single _maxOffDelay
    [[deprecated("Use field access instead!")]] float& dyn__maxOffDelay();
    // Get instance field reference: private UnityEngine.Color _spriteOnColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn__spriteOnColor();
    // Get instance field reference: private UnityEngine.Color _lightOnColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn__lightOnColor();
    // Get instance field reference: private UnityEngine.Material _onMaterial
    [[deprecated("Use field access instead!")]] ::UnityEngine::Material*& dyn__onMaterial();
    // Get instance field reference: private UnityEngine.Material _offMaterial
    [[deprecated("Use field access instead!")]] ::UnityEngine::Material*& dyn__offMaterial();
    // Get instance field reference: private UnityEngine.AudioClip[] _sparksAudioClips
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::AudioClip*>& dyn__sparksAudioClips();
    // Get instance field reference: private RandomObjectPicker`1<UnityEngine.AudioClip> _sparksAudioClipPicker
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::RandomObjectPicker_1<::UnityEngine::AudioClip*>*& dyn__sparksAudioClipPicker();
    // public System.Void .ctor()
    // Offset: 0x137405C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FlickeringNeonSign* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::FlickeringNeonSign::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FlickeringNeonSign*, creationType>()));
    }
    // protected System.Void Awake()
    // Offset: 0x1373DB0
    void Awake();
    // protected System.Void Start()
    // Offset: 0x1373E30
    void Start();
    // protected System.Void OnEnable()
    // Offset: 0x1373E78
    void OnEnable();
    // private System.Collections.IEnumerator FlickeringCoroutine()
    // Offset: 0x1373EA4
    ::System::Collections::IEnumerator* FlickeringCoroutine();
    // private System.Void SetOn(System.Boolean on)
    // Offset: 0x1373F40
    void SetOn(bool on);
  }; // FlickeringNeonSign
  #pragma pack(pop)
  static check_size<sizeof(FlickeringNeonSign), 120 + sizeof(::GlobalNamespace::RandomObjectPicker_1<::UnityEngine::AudioClip*>*)> __GlobalNamespace_FlickeringNeonSignSizeCheck;
  static_assert(sizeof(FlickeringNeonSign) == 0x80);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::FlickeringNeonSign::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::FlickeringNeonSign::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FlickeringNeonSign::*)()>(&GlobalNamespace::FlickeringNeonSign::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FlickeringNeonSign*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FlickeringNeonSign::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FlickeringNeonSign::*)()>(&GlobalNamespace::FlickeringNeonSign::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FlickeringNeonSign*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FlickeringNeonSign::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FlickeringNeonSign::*)()>(&GlobalNamespace::FlickeringNeonSign::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FlickeringNeonSign*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FlickeringNeonSign::FlickeringCoroutine
// Il2CppName: FlickeringCoroutine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (GlobalNamespace::FlickeringNeonSign::*)()>(&GlobalNamespace::FlickeringNeonSign::FlickeringCoroutine)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FlickeringNeonSign*), "FlickeringCoroutine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FlickeringNeonSign::SetOn
// Il2CppName: SetOn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FlickeringNeonSign::*)(bool)>(&GlobalNamespace::FlickeringNeonSign::SetOn)> {
  static const MethodInfo* get() {
    static auto* on = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FlickeringNeonSign*), "SetOn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{on});
  }
};
