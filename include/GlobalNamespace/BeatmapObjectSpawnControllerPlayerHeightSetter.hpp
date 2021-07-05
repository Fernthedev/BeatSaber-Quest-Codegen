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
  // Forward declaring type: BeatmapObjectSpawnController
  class BeatmapObjectSpawnController;
  // Forward declaring type: PlayerHeightDetector
  class PlayerHeightDetector;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapObjectSpawnControllerPlayerHeightSetter
  class BeatmapObjectSpawnControllerPlayerHeightSetter : public UnityEngine::MonoBehaviour {
    public:
    // [InjectAttribute] Offset: 0xE1F2C8
    // private readonly BeatmapObjectSpawnController _beatmapObjectSpawnController
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::BeatmapObjectSpawnController* beatmapObjectSpawnController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapObjectSpawnController*) == 0x8);
    // [InjectAttribute] Offset: 0xE1F2D8
    // private readonly PlayerHeightDetector _playerHeightDetector
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::PlayerHeightDetector* playerHeightDetector;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayerHeightDetector*) == 0x8);
    // Creating value type constructor for type: BeatmapObjectSpawnControllerPlayerHeightSetter
    BeatmapObjectSpawnControllerPlayerHeightSetter(GlobalNamespace::BeatmapObjectSpawnController* beatmapObjectSpawnController_ = {}, GlobalNamespace::PlayerHeightDetector* playerHeightDetector_ = {}) noexcept : beatmapObjectSpawnController{beatmapObjectSpawnController_}, playerHeightDetector{playerHeightDetector_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Start()
    // Offset: 0x110B8B0
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x110B990
    void OnDestroy();
    // private System.Void HandlePlayerHeightDidChange(System.Single playerHeight)
    // Offset: 0x110B964
    void HandlePlayerHeightDidChange(float playerHeight);
    // static public System.Single JumpOffsetYForPlayerHeight(System.Single playerHeight)
    // Offset: 0x110BA6C
    static float JumpOffsetYForPlayerHeight(float playerHeight);
    // public System.Void .ctor()
    // Offset: 0x110BAFC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapObjectSpawnControllerPlayerHeightSetter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BeatmapObjectSpawnControllerPlayerHeightSetter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapObjectSpawnControllerPlayerHeightSetter*, creationType>()));
    }
  }; // BeatmapObjectSpawnControllerPlayerHeightSetter
  #pragma pack(pop)
  static check_size<sizeof(BeatmapObjectSpawnControllerPlayerHeightSetter), 32 + sizeof(GlobalNamespace::PlayerHeightDetector*)> __GlobalNamespace_BeatmapObjectSpawnControllerPlayerHeightSetterSizeCheck;
  static_assert(sizeof(BeatmapObjectSpawnControllerPlayerHeightSetter) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapObjectSpawnControllerPlayerHeightSetter*, "", "BeatmapObjectSpawnControllerPlayerHeightSetter");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapObjectSpawnControllerPlayerHeightSetter::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapObjectSpawnControllerPlayerHeightSetter::*)()>(&GlobalNamespace::BeatmapObjectSpawnControllerPlayerHeightSetter::Start)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapObjectSpawnControllerPlayerHeightSetter*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapObjectSpawnControllerPlayerHeightSetter::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapObjectSpawnControllerPlayerHeightSetter::*)()>(&GlobalNamespace::BeatmapObjectSpawnControllerPlayerHeightSetter::OnDestroy)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapObjectSpawnControllerPlayerHeightSetter*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapObjectSpawnControllerPlayerHeightSetter::HandlePlayerHeightDidChange
// Il2CppName: HandlePlayerHeightDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapObjectSpawnControllerPlayerHeightSetter::*)(float)>(&GlobalNamespace::BeatmapObjectSpawnControllerPlayerHeightSetter::HandlePlayerHeightDidChange)> {
  const MethodInfo* get() {
    static auto* playerHeight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapObjectSpawnControllerPlayerHeightSetter*), "HandlePlayerHeightDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playerHeight});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapObjectSpawnControllerPlayerHeightSetter::JumpOffsetYForPlayerHeight
// Il2CppName: JumpOffsetYForPlayerHeight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float)>(&GlobalNamespace::BeatmapObjectSpawnControllerPlayerHeightSetter::JumpOffsetYForPlayerHeight)> {
  const MethodInfo* get() {
    static auto* playerHeight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapObjectSpawnControllerPlayerHeightSetter*), "JumpOffsetYForPlayerHeight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playerHeight});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapObjectSpawnControllerPlayerHeightSetter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
