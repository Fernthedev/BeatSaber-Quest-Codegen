// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: SaberTrailRenderer
  class SaberTrailRenderer;
  // Forward declaring type: IBladeMovementData
  class IBladeMovementData;
  // Forward declaring type: TrailElementCollection
  class TrailElementCollection;
  // Forward declaring type: BladeMovementDataElement
  struct BladeMovementDataElement;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x89
  #pragma pack(push, 1)
  // Autogenerated type: SaberTrail
  // [TokenAttribute] Offset: FFFFFFFF
  class SaberTrail : public UnityEngine::MonoBehaviour {
    public:
    // private SaberTrailRenderer _trailRendererPrefab
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::SaberTrailRenderer* trailRendererPrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SaberTrailRenderer*) == 0x8);
    // [HeaderAttribute] Offset: 0xE37840
    // [TooltipAttribute] Offset: 0xE37840
    // private System.Single _trailDuration
    // Size: 0x4
    // Offset: 0x20
    float trailDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xE378B0
    // private System.Int32 _samplingFrequency
    // Size: 0x4
    // Offset: 0x24
    int samplingFrequency;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [TooltipAttribute] Offset: 0xE378FC
    // private System.Int32 _granularity
    // Size: 0x4
    // Offset: 0x28
    int granularity;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [RangeAttribute] Offset: 0xE37948
    // [TooltipAttribute] Offset: 0xE37948
    // private System.Single _whiteSectionMaxDuration
    // Size: 0x4
    // Offset: 0x2C
    float whiteSectionMaxDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _colorOverwrite
    // Size: 0x1
    // Offset: 0x30
    bool colorOverwrite;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: colorOverwrite and: forcedColor
    char __padding5[0x3] = {};
    // [DrawIfAttribute] Offset: 0xE379BC
    // private UnityEngine.Color _forcedColor
    // Size: 0x10
    // Offset: 0x34
    UnityEngine::Color forcedColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // private UnityEngine.Color _color
    // Size: 0x10
    // Offset: 0x44
    UnityEngine::Color color;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // Padding between fields: color and: movementData
    char __padding7[0x4] = {};
    // private IBladeMovementData _movementData
    // Size: 0x8
    // Offset: 0x58
    GlobalNamespace::IBladeMovementData* movementData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IBladeMovementData*) == 0x8);
    // private System.Single _lastTrailElementTime
    // Size: 0x4
    // Offset: 0x60
    float lastTrailElementTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: lastTrailElementTime and: trailRenderer
    char __padding9[0x4] = {};
    // private SaberTrailRenderer _trailRenderer
    // Size: 0x8
    // Offset: 0x68
    GlobalNamespace::SaberTrailRenderer* trailRenderer;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SaberTrailRenderer*) == 0x8);
    // private TrailElementCollection _trailElementCollection
    // Size: 0x8
    // Offset: 0x70
    GlobalNamespace::TrailElementCollection* trailElementCollection;
    // Field size check
    static_assert(sizeof(GlobalNamespace::TrailElementCollection*) == 0x8);
    // private System.Single _sampleStep
    // Size: 0x4
    // Offset: 0x78
    float sampleStep;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Int32 _framesPassed
    // Size: 0x4
    // Offset: 0x7C
    int framesPassed;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Single _lastZScale
    // Size: 0x4
    // Offset: 0x80
    float lastZScale;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Int32 _framesToScaleCheck
    // Size: 0x4
    // Offset: 0x84
    int framesToScaleCheck;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean _inited
    // Size: 0x1
    // Offset: 0x88
    bool inited;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: SaberTrail
    SaberTrail(GlobalNamespace::SaberTrailRenderer* trailRendererPrefab_ = {}, float trailDuration_ = {}, int samplingFrequency_ = {}, int granularity_ = {}, float whiteSectionMaxDuration_ = {}, bool colorOverwrite_ = {}, UnityEngine::Color forcedColor_ = {}, UnityEngine::Color color_ = {}, GlobalNamespace::IBladeMovementData* movementData_ = {}, float lastTrailElementTime_ = {}, GlobalNamespace::SaberTrailRenderer* trailRenderer_ = {}, GlobalNamespace::TrailElementCollection* trailElementCollection_ = {}, float sampleStep_ = {}, int framesPassed_ = {}, float lastZScale_ = {}, int framesToScaleCheck_ = {}, bool inited_ = {}) noexcept : trailRendererPrefab{trailRendererPrefab_}, trailDuration{trailDuration_}, samplingFrequency{samplingFrequency_}, granularity{granularity_}, whiteSectionMaxDuration{whiteSectionMaxDuration_}, colorOverwrite{colorOverwrite_}, forcedColor{forcedColor_}, color{color_}, movementData{movementData_}, lastTrailElementTime{lastTrailElementTime_}, trailRenderer{trailRenderer_}, trailElementCollection{trailElementCollection_}, sampleStep{sampleStep_}, framesPassed{framesPassed_}, lastZScale{lastZScale_}, framesToScaleCheck{framesToScaleCheck_}, inited{inited_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // static field const value: static private System.Int32 kIgnoredFramesCount
    static constexpr const int kIgnoredFramesCount = 4;
    // Get static field: static private System.Int32 kIgnoredFramesCount
    static int _get_kIgnoredFramesCount();
    // Set static field: static private System.Int32 kIgnoredFramesCount
    static void _set_kIgnoredFramesCount(int value);
    // static field const value: static private System.Int32 kSnapshotCapacityMargin
    static constexpr const int kSnapshotCapacityMargin = 3;
    // Get static field: static private System.Int32 kSnapshotCapacityMargin
    static int _get_kSnapshotCapacityMargin();
    // Set static field: static private System.Int32 kSnapshotCapacityMargin
    static void _set_kSnapshotCapacityMargin(int value);
    // static field const value: static private System.Int32 kScaleCheckFramesInterval
    static constexpr const int kScaleCheckFramesInterval = 10;
    // Get static field: static private System.Int32 kScaleCheckFramesInterval
    static int _get_kScaleCheckFramesInterval();
    // Set static field: static private System.Int32 kScaleCheckFramesInterval
    static void _set_kScaleCheckFramesInterval(int value);
    // Get instance field: private SaberTrailRenderer _trailRendererPrefab
    GlobalNamespace::SaberTrailRenderer* _get__trailRendererPrefab();
    // Set instance field: private SaberTrailRenderer _trailRendererPrefab
    void _set__trailRendererPrefab(GlobalNamespace::SaberTrailRenderer* value);
    // Get instance field: private System.Single _trailDuration
    float _get__trailDuration();
    // Set instance field: private System.Single _trailDuration
    void _set__trailDuration(float value);
    // Get instance field: private System.Int32 _samplingFrequency
    int _get__samplingFrequency();
    // Set instance field: private System.Int32 _samplingFrequency
    void _set__samplingFrequency(int value);
    // Get instance field: private System.Int32 _granularity
    int _get__granularity();
    // Set instance field: private System.Int32 _granularity
    void _set__granularity(int value);
    // Get instance field: private System.Single _whiteSectionMaxDuration
    float _get__whiteSectionMaxDuration();
    // Set instance field: private System.Single _whiteSectionMaxDuration
    void _set__whiteSectionMaxDuration(float value);
    // Get instance field: private System.Boolean _colorOverwrite
    bool _get__colorOverwrite();
    // Set instance field: private System.Boolean _colorOverwrite
    void _set__colorOverwrite(bool value);
    // Get instance field: private UnityEngine.Color _forcedColor
    UnityEngine::Color _get__forcedColor();
    // Set instance field: private UnityEngine.Color _forcedColor
    void _set__forcedColor(UnityEngine::Color value);
    // Get instance field: private UnityEngine.Color _color
    UnityEngine::Color _get__color();
    // Set instance field: private UnityEngine.Color _color
    void _set__color(UnityEngine::Color value);
    // Get instance field: private IBladeMovementData _movementData
    GlobalNamespace::IBladeMovementData* _get__movementData();
    // Set instance field: private IBladeMovementData _movementData
    void _set__movementData(GlobalNamespace::IBladeMovementData* value);
    // Get instance field: private System.Single _lastTrailElementTime
    float _get__lastTrailElementTime();
    // Set instance field: private System.Single _lastTrailElementTime
    void _set__lastTrailElementTime(float value);
    // Get instance field: private SaberTrailRenderer _trailRenderer
    GlobalNamespace::SaberTrailRenderer* _get__trailRenderer();
    // Set instance field: private SaberTrailRenderer _trailRenderer
    void _set__trailRenderer(GlobalNamespace::SaberTrailRenderer* value);
    // Get instance field: private TrailElementCollection _trailElementCollection
    GlobalNamespace::TrailElementCollection* _get__trailElementCollection();
    // Set instance field: private TrailElementCollection _trailElementCollection
    void _set__trailElementCollection(GlobalNamespace::TrailElementCollection* value);
    // Get instance field: private System.Single _sampleStep
    float _get__sampleStep();
    // Set instance field: private System.Single _sampleStep
    void _set__sampleStep(float value);
    // Get instance field: private System.Int32 _framesPassed
    int _get__framesPassed();
    // Set instance field: private System.Int32 _framesPassed
    void _set__framesPassed(int value);
    // Get instance field: private System.Single _lastZScale
    float _get__lastZScale();
    // Set instance field: private System.Single _lastZScale
    void _set__lastZScale(float value);
    // Get instance field: private System.Int32 _framesToScaleCheck
    int _get__framesToScaleCheck();
    // Set instance field: private System.Int32 _framesToScaleCheck
    void _set__framesToScaleCheck(int value);
    // Get instance field: private System.Boolean _inited
    bool _get__inited();
    // Set instance field: private System.Boolean _inited
    void _set__inited(bool value);
    // private System.Void Awake()
    // Offset: 0x1195C88
    void Awake();
    // public System.Void Setup(UnityEngine.Color color, IBladeMovementData movementData)
    // Offset: 0x119426C
    void Setup(UnityEngine::Color color, GlobalNamespace::IBladeMovementData* movementData);
    // private System.Void Init()
    // Offset: 0x1195DAC
    void Init();
    // private System.Void ResetTrailData()
    // Offset: 0x11960DC
    void ResetTrailData();
    // protected System.Void LateUpdate()
    // Offset: 0x11961C4
    void LateUpdate();
    // protected System.Void OnEnable()
    // Offset: 0x11967B0
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0x1196878
    void OnDisable();
    // protected System.Void OnDestroy()
    // Offset: 0x119690C
    void OnDestroy();
    // private System.Single GetTrailWidth(BladeMovementDataElement lastAddedData)
    // Offset: 0x1196014
    float GetTrailWidth(GlobalNamespace::BladeMovementDataElement lastAddedData);
    // private System.Void OnDrawGizmosSelected()
    // Offset: 0x11969D8
    void OnDrawGizmosSelected();
    // public System.Void .ctor()
    // Offset: 0x1196BB4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SaberTrail* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SaberTrail::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SaberTrail*, creationType>()));
    }
  }; // SaberTrail
  #pragma pack(pop)
  static check_size<sizeof(SaberTrail), 136 + sizeof(bool)> __GlobalNamespace_SaberTrailSizeCheck;
  static_assert(sizeof(SaberTrail) == 0x89);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SaberTrail*, "", "SaberTrail");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SaberTrail::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SaberTrail::*)()>(&GlobalNamespace::SaberTrail::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SaberTrail*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SaberTrail::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SaberTrail::*)(UnityEngine::Color, GlobalNamespace::IBladeMovementData*)>(&GlobalNamespace::SaberTrail::Setup)> {
  static const MethodInfo* get() {
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    static auto* movementData = &::il2cpp_utils::GetClassFromName("", "IBladeMovementData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SaberTrail*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{color, movementData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SaberTrail::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SaberTrail::*)()>(&GlobalNamespace::SaberTrail::Init)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SaberTrail*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SaberTrail::ResetTrailData
// Il2CppName: ResetTrailData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SaberTrail::*)()>(&GlobalNamespace::SaberTrail::ResetTrailData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SaberTrail*), "ResetTrailData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SaberTrail::LateUpdate
// Il2CppName: LateUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SaberTrail::*)()>(&GlobalNamespace::SaberTrail::LateUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SaberTrail*), "LateUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SaberTrail::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SaberTrail::*)()>(&GlobalNamespace::SaberTrail::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SaberTrail*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SaberTrail::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SaberTrail::*)()>(&GlobalNamespace::SaberTrail::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SaberTrail*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SaberTrail::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SaberTrail::*)()>(&GlobalNamespace::SaberTrail::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SaberTrail*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SaberTrail::GetTrailWidth
// Il2CppName: GetTrailWidth
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::SaberTrail::*)(GlobalNamespace::BladeMovementDataElement)>(&GlobalNamespace::SaberTrail::GetTrailWidth)> {
  static const MethodInfo* get() {
    static auto* lastAddedData = &::il2cpp_utils::GetClassFromName("", "BladeMovementDataElement")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SaberTrail*), "GetTrailWidth", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lastAddedData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SaberTrail::OnDrawGizmosSelected
// Il2CppName: OnDrawGizmosSelected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SaberTrail::*)()>(&GlobalNamespace::SaberTrail::OnDrawGizmosSelected)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SaberTrail*), "OnDrawGizmosSelected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SaberTrail::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
