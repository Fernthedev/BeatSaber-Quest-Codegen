// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: IBeatEffectDidFinishEvent
#include "GlobalNamespace/IBeatEffectDidFinishEvent.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Including type: BeatEffect
#include "GlobalNamespace/BeatEffect.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ColorManager
  class ColorManager;
  // Forward declaring type: BeatmapObjectManager
  class BeatmapObjectManager;
  // Forward declaring type: AudioTimeSyncController
  class AudioTimeSyncController;
  // Forward declaring type: SongController
  class SongController;
  // Forward declaring type: MemoryPoolContainer`1<T>
  template<typename T>
  class MemoryPoolContainer_1;
  // Forward declaring type: NoteController
  class NoteController;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: BeatEffectSpawner
  // [TokenAttribute] Offset: FFFFFFFF
  class BeatEffectSpawner : public UnityEngine::MonoBehaviour/*, public GlobalNamespace::IBeatEffectDidFinishEvent*/ {
    public:
    // Nested type: GlobalNamespace::BeatEffectSpawner::InitData
    class InitData;
    // private System.Single _effectDuration
    // Size: 0x4
    // Offset: 0x18
    float effectDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Color _bombColorEffect
    // Size: 0x10
    // Offset: 0x1C
    UnityEngine::Color bombColorEffect;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // Padding between fields: bombColorEffect and: colorManager
    char __padding1[0x4] = {};
    // [InjectAttribute] Offset: 0xE3CADC
    // private readonly ColorManager _colorManager
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::ColorManager* colorManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorManager*) == 0x8);
    // [InjectAttribute] Offset: 0xE3CAEC
    // private readonly BeatmapObjectManager _beatmapObjectManager
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::BeatmapObjectManager* beatmapObjectManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapObjectManager*) == 0x8);
    // [InjectAttribute] Offset: 0xE3CAFC
    // private readonly AudioTimeSyncController _audioTimeSyncController
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::AudioTimeSyncController* audioTimeSyncController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AudioTimeSyncController*) == 0x8);
    // [InjectAttribute] Offset: 0xE3CB0C
    // private readonly BeatEffectSpawner/InitData _initData
    // Size: 0x8
    // Offset: 0x48
    GlobalNamespace::BeatEffectSpawner::InitData* initData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatEffectSpawner::InitData*) == 0x8);
    // private SongController _songController
    // Size: 0x8
    // Offset: 0x50
    GlobalNamespace::SongController* songController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SongController*) == 0x8);
    // private MemoryPoolContainer`1<BeatEffect> _beatEffectPoolContainer
    // Size: 0x8
    // Offset: 0x58
    GlobalNamespace::MemoryPoolContainer_1<GlobalNamespace::BeatEffect*>* beatEffectPoolContainer;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MemoryPoolContainer_1<GlobalNamespace::BeatEffect*>*) == 0x8);
    // Creating value type constructor for type: BeatEffectSpawner
    BeatEffectSpawner(float effectDuration_ = {}, UnityEngine::Color bombColorEffect_ = {}, GlobalNamespace::ColorManager* colorManager_ = {}, GlobalNamespace::BeatmapObjectManager* beatmapObjectManager_ = {}, GlobalNamespace::AudioTimeSyncController* audioTimeSyncController_ = {}, GlobalNamespace::BeatEffectSpawner::InitData* initData_ = {}, GlobalNamespace::SongController* songController_ = {}, GlobalNamespace::MemoryPoolContainer_1<GlobalNamespace::BeatEffect*>* beatEffectPoolContainer_ = {}) noexcept : effectDuration{effectDuration_}, bombColorEffect{bombColorEffect_}, colorManager{colorManager_}, beatmapObjectManager{beatmapObjectManager_}, audioTimeSyncController{audioTimeSyncController_}, initData{initData_}, songController{songController_}, beatEffectPoolContainer{beatEffectPoolContainer_} {}
    // Creating interface conversion operator: operator GlobalNamespace::IBeatEffectDidFinishEvent
    operator GlobalNamespace::IBeatEffectDidFinishEvent() noexcept {
      return *reinterpret_cast<GlobalNamespace::IBeatEffectDidFinishEvent*>(this);
    }
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.Single _effectDuration
    float& dyn__effectDuration();
    // Get instance field reference: private UnityEngine.Color _bombColorEffect
    UnityEngine::Color& dyn__bombColorEffect();
    // Get instance field reference: private readonly ColorManager _colorManager
    GlobalNamespace::ColorManager*& dyn__colorManager();
    // Get instance field reference: private readonly BeatmapObjectManager _beatmapObjectManager
    GlobalNamespace::BeatmapObjectManager*& dyn__beatmapObjectManager();
    // Get instance field reference: private readonly AudioTimeSyncController _audioTimeSyncController
    GlobalNamespace::AudioTimeSyncController*& dyn__audioTimeSyncController();
    // Get instance field reference: private readonly BeatEffectSpawner/InitData _initData
    GlobalNamespace::BeatEffectSpawner::InitData*& dyn__initData();
    // Get instance field reference: private SongController _songController
    GlobalNamespace::SongController*& dyn__songController();
    // Get instance field reference: private MemoryPoolContainer`1<BeatEffect> _beatEffectPoolContainer
    GlobalNamespace::MemoryPoolContainer_1<GlobalNamespace::BeatEffect*>*& dyn__beatEffectPoolContainer();
    // private System.Void Init(BeatEffect/Pool beatEffectPool)
    // Offset: 0x11DDAB0
    void Init(GlobalNamespace::BeatEffect::Pool* beatEffectPool);
    // protected System.Void Start()
    // Offset: 0x11DDB28
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x11DDBBC
    void OnDestroy();
    // protected System.Void Update()
    // Offset: 0x11DDC5C
    void Update();
    // private System.Void HandleNoteDidStartJump(NoteController noteController)
    // Offset: 0x11DDD7C
    void HandleNoteDidStartJump(GlobalNamespace::NoteController* noteController);
    // public System.Void HandleBeatEffectDidFinish(BeatEffect beatEffect)
    // Offset: 0x11DE0B4
    void HandleBeatEffectDidFinish(GlobalNamespace::BeatEffect* beatEffect);
    // public System.Void .ctor()
    // Offset: 0x11DE198
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatEffectSpawner* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BeatEffectSpawner::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatEffectSpawner*, creationType>()));
    }
  }; // BeatEffectSpawner
  #pragma pack(pop)
  static check_size<sizeof(BeatEffectSpawner), 88 + sizeof(GlobalNamespace::MemoryPoolContainer_1<GlobalNamespace::BeatEffect*>*)> __GlobalNamespace_BeatEffectSpawnerSizeCheck;
  static_assert(sizeof(BeatEffectSpawner) == 0x60);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatEffectSpawner*, "", "BeatEffectSpawner");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatEffectSpawner::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatEffectSpawner::*)(GlobalNamespace::BeatEffect::Pool*)>(&GlobalNamespace::BeatEffectSpawner::Init)> {
  static const MethodInfo* get() {
    static auto* beatEffectPool = &::il2cpp_utils::GetClassFromName("", "BeatEffect/Pool")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatEffectSpawner*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatEffectPool});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatEffectSpawner::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatEffectSpawner::*)()>(&GlobalNamespace::BeatEffectSpawner::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatEffectSpawner*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatEffectSpawner::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatEffectSpawner::*)()>(&GlobalNamespace::BeatEffectSpawner::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatEffectSpawner*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatEffectSpawner::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatEffectSpawner::*)()>(&GlobalNamespace::BeatEffectSpawner::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatEffectSpawner*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatEffectSpawner::HandleNoteDidStartJump
// Il2CppName: HandleNoteDidStartJump
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatEffectSpawner::*)(GlobalNamespace::NoteController*)>(&GlobalNamespace::BeatEffectSpawner::HandleNoteDidStartJump)> {
  static const MethodInfo* get() {
    static auto* noteController = &::il2cpp_utils::GetClassFromName("", "NoteController")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatEffectSpawner*), "HandleNoteDidStartJump", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{noteController});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatEffectSpawner::HandleBeatEffectDidFinish
// Il2CppName: HandleBeatEffectDidFinish
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatEffectSpawner::*)(GlobalNamespace::BeatEffect*)>(&GlobalNamespace::BeatEffectSpawner::HandleBeatEffectDidFinish)> {
  static const MethodInfo* get() {
    static auto* beatEffect = &::il2cpp_utils::GetClassFromName("", "BeatEffect")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatEffectSpawner*), "HandleBeatEffectDidFinish", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatEffect});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatEffectSpawner::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
