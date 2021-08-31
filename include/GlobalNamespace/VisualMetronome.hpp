// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
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
  // Forward declaring type: RectTransform
  class RectTransform;
  // Forward declaring type: Color
  struct Color;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Image
  class Image;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x75
  #pragma pack(push, 1)
  // Autogenerated type: VisualMetronome
  // [TokenAttribute] Offset: FFFFFFFF
  class VisualMetronome : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.AudioSource _audioSource
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::AudioSource* audioSource;
    // Field size check
    static_assert(sizeof(UnityEngine::AudioSource*) == 0x8);
    // private System.Single _leftPadding
    // Size: 0x4
    // Offset: 0x20
    float leftPadding;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _rightPadding
    // Size: 0x4
    // Offset: 0x24
    float rightPadding;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.RectTransform _ticker
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::RectTransform* ticker;
    // Field size check
    static_assert(sizeof(UnityEngine::RectTransform*) == 0x8);
    // private UnityEngine.RectTransform _movingTicker
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::RectTransform* movingTicker;
    // Field size check
    static_assert(sizeof(UnityEngine::RectTransform*) == 0x8);
    // private UnityEngine.UI.Image _tickerImage
    // Size: 0x8
    // Offset: 0x38
    UnityEngine::UI::Image* tickerImage;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Image*) == 0x8);
    // private UnityEngine.UI.Image _movingTickerImage
    // Size: 0x8
    // Offset: 0x40
    UnityEngine::UI::Image* movingTickerImage;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Image*) == 0x8);
    // private System.Single _metronomeInterval
    // Size: 0x4
    // Offset: 0x48
    float metronomeInterval;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Vector2 _normalTickerSize
    // Size: 0x8
    // Offset: 0x4C
    UnityEngine::Vector2 normalTickerSize;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector2) == 0x8);
    // private UnityEngine.Vector2 _tickTickerSize0
    // Size: 0x8
    // Offset: 0x54
    UnityEngine::Vector2 tickTickerSize0;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector2) == 0x8);
    // private UnityEngine.Vector2 _tickTickerSize1
    // Size: 0x8
    // Offset: 0x5C
    UnityEngine::Vector2 tickTickerSize1;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector2) == 0x8);
    // private System.Single _smooth
    // Size: 0x4
    // Offset: 0x64
    float smooth;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _prevAudioTime
    // Size: 0x4
    // Offset: 0x68
    float prevAudioTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _zeroOffset
    // Size: 0x4
    // Offset: 0x6C
    float zeroOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _direction
    // Size: 0x4
    // Offset: 0x70
    float direction;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _dontTickThisFrame
    // Size: 0x1
    // Offset: 0x74
    bool dontTickThisFrame;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: VisualMetronome
    VisualMetronome(UnityEngine::AudioSource* audioSource_ = {}, float leftPadding_ = {}, float rightPadding_ = {}, UnityEngine::RectTransform* ticker_ = {}, UnityEngine::RectTransform* movingTicker_ = {}, UnityEngine::UI::Image* tickerImage_ = {}, UnityEngine::UI::Image* movingTickerImage_ = {}, float metronomeInterval_ = {}, UnityEngine::Vector2 normalTickerSize_ = {}, UnityEngine::Vector2 tickTickerSize0_ = {}, UnityEngine::Vector2 tickTickerSize1_ = {}, float smooth_ = {}, float prevAudioTime_ = {}, float zeroOffset_ = {}, float direction_ = {}, bool dontTickThisFrame_ = {}) noexcept : audioSource{audioSource_}, leftPadding{leftPadding_}, rightPadding{rightPadding_}, ticker{ticker_}, movingTicker{movingTicker_}, tickerImage{tickerImage_}, movingTickerImage{movingTickerImage_}, metronomeInterval{metronomeInterval_}, normalTickerSize{normalTickerSize_}, tickTickerSize0{tickTickerSize0_}, tickTickerSize1{tickTickerSize1_}, smooth{smooth_}, prevAudioTime{prevAudioTime_}, zeroOffset{zeroOffset_}, direction{direction_}, dontTickThisFrame{dontTickThisFrame_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field: private UnityEngine.AudioSource _audioSource
    UnityEngine::AudioSource* _get__audioSource();
    // Set instance field: private UnityEngine.AudioSource _audioSource
    void _set__audioSource(UnityEngine::AudioSource* value);
    // Get instance field: private System.Single _leftPadding
    float _get__leftPadding();
    // Set instance field: private System.Single _leftPadding
    void _set__leftPadding(float value);
    // Get instance field: private System.Single _rightPadding
    float _get__rightPadding();
    // Set instance field: private System.Single _rightPadding
    void _set__rightPadding(float value);
    // Get instance field: private UnityEngine.RectTransform _ticker
    UnityEngine::RectTransform* _get__ticker();
    // Set instance field: private UnityEngine.RectTransform _ticker
    void _set__ticker(UnityEngine::RectTransform* value);
    // Get instance field: private UnityEngine.RectTransform _movingTicker
    UnityEngine::RectTransform* _get__movingTicker();
    // Set instance field: private UnityEngine.RectTransform _movingTicker
    void _set__movingTicker(UnityEngine::RectTransform* value);
    // Get instance field: private UnityEngine.UI.Image _tickerImage
    UnityEngine::UI::Image* _get__tickerImage();
    // Set instance field: private UnityEngine.UI.Image _tickerImage
    void _set__tickerImage(UnityEngine::UI::Image* value);
    // Get instance field: private UnityEngine.UI.Image _movingTickerImage
    UnityEngine::UI::Image* _get__movingTickerImage();
    // Set instance field: private UnityEngine.UI.Image _movingTickerImage
    void _set__movingTickerImage(UnityEngine::UI::Image* value);
    // Get instance field: private System.Single _metronomeInterval
    float _get__metronomeInterval();
    // Set instance field: private System.Single _metronomeInterval
    void _set__metronomeInterval(float value);
    // Get instance field: private UnityEngine.Vector2 _normalTickerSize
    UnityEngine::Vector2 _get__normalTickerSize();
    // Set instance field: private UnityEngine.Vector2 _normalTickerSize
    void _set__normalTickerSize(UnityEngine::Vector2 value);
    // Get instance field: private UnityEngine.Vector2 _tickTickerSize0
    UnityEngine::Vector2 _get__tickTickerSize0();
    // Set instance field: private UnityEngine.Vector2 _tickTickerSize0
    void _set__tickTickerSize0(UnityEngine::Vector2 value);
    // Get instance field: private UnityEngine.Vector2 _tickTickerSize1
    UnityEngine::Vector2 _get__tickTickerSize1();
    // Set instance field: private UnityEngine.Vector2 _tickTickerSize1
    void _set__tickTickerSize1(UnityEngine::Vector2 value);
    // Get instance field: private System.Single _smooth
    float _get__smooth();
    // Set instance field: private System.Single _smooth
    void _set__smooth(float value);
    // Get instance field: private System.Single _prevAudioTime
    float _get__prevAudioTime();
    // Set instance field: private System.Single _prevAudioTime
    void _set__prevAudioTime(float value);
    // Get instance field: private System.Single _zeroOffset
    float _get__zeroOffset();
    // Set instance field: private System.Single _zeroOffset
    void _set__zeroOffset(float value);
    // Get instance field: private System.Single _direction
    float _get__direction();
    // Set instance field: private System.Single _direction
    void _set__direction(float value);
    // Get instance field: private System.Boolean _dontTickThisFrame
    bool _get__dontTickThisFrame();
    // Set instance field: private System.Boolean _dontTickThisFrame
    void _set__dontTickThisFrame(bool value);
    // public System.Void set_tickerColor(UnityEngine.Color value)
    // Offset: 0x135FD28
    void set_tickerColor(UnityEngine::Color value);
    // public System.Void set_movingTickerColor(UnityEngine.Color value)
    // Offset: 0x135FD4C
    void set_movingTickerColor(UnityEngine::Color value);
    // public System.Single get_zeroOffset()
    // Offset: 0x135FD80
    float get_zeroOffset();
    // public System.Void set_zeroOffset(System.Single value)
    // Offset: 0x135FD70
    void set_zeroOffset(float value);
    // protected System.Void Awake()
    // Offset: 0x135FD88
    void Awake();
    // protected System.Void OnEnable()
    // Offset: 0x135FE98
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0x135FEEC
    void OnDisable();
    // protected System.Void Update()
    // Offset: 0x135FF40
    void Update();
    // private System.Void SetMovingTickerNormalizedPosition(System.Single t)
    // Offset: 0x1360104
    void SetMovingTickerNormalizedPosition(float t);
    // public System.Void .ctor()
    // Offset: 0x13601E8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VisualMetronome* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::VisualMetronome::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VisualMetronome*, creationType>()));
    }
  }; // VisualMetronome
  #pragma pack(pop)
  static check_size<sizeof(VisualMetronome), 116 + sizeof(bool)> __GlobalNamespace_VisualMetronomeSizeCheck;
  static_assert(sizeof(VisualMetronome) == 0x75);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::VisualMetronome*, "", "VisualMetronome");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::VisualMetronome::set_tickerColor
// Il2CppName: set_tickerColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VisualMetronome::*)(UnityEngine::Color)>(&GlobalNamespace::VisualMetronome::set_tickerColor)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VisualMetronome*), "set_tickerColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VisualMetronome::set_movingTickerColor
// Il2CppName: set_movingTickerColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VisualMetronome::*)(UnityEngine::Color)>(&GlobalNamespace::VisualMetronome::set_movingTickerColor)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VisualMetronome*), "set_movingTickerColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VisualMetronome::get_zeroOffset
// Il2CppName: get_zeroOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::VisualMetronome::*)()>(&GlobalNamespace::VisualMetronome::get_zeroOffset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VisualMetronome*), "get_zeroOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VisualMetronome::set_zeroOffset
// Il2CppName: set_zeroOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VisualMetronome::*)(float)>(&GlobalNamespace::VisualMetronome::set_zeroOffset)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VisualMetronome*), "set_zeroOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VisualMetronome::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VisualMetronome::*)()>(&GlobalNamespace::VisualMetronome::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VisualMetronome*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VisualMetronome::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VisualMetronome::*)()>(&GlobalNamespace::VisualMetronome::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VisualMetronome*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VisualMetronome::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VisualMetronome::*)()>(&GlobalNamespace::VisualMetronome::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VisualMetronome*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VisualMetronome::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VisualMetronome::*)()>(&GlobalNamespace::VisualMetronome::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VisualMetronome*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VisualMetronome::SetMovingTickerNormalizedPosition
// Il2CppName: SetMovingTickerNormalizedPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VisualMetronome::*)(float)>(&GlobalNamespace::VisualMetronome::SetMovingTickerNormalizedPosition)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VisualMetronome*), "SetMovingTickerNormalizedPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VisualMetronome::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
