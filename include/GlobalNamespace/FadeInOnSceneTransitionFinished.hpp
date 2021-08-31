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
  // Forward declaring type: FadeInOutController
  class FadeInOutController;
  // Forward declaring type: GameScenesManager
  class GameScenesManager;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: FadeInOnSceneTransitionFinished
  // [TokenAttribute] Offset: FFFFFFFF
  class FadeInOnSceneTransitionFinished : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::FadeInOnSceneTransitionFinished::$FadeInAfterSceneTransitionCoroutine$d__3
    class $FadeInAfterSceneTransitionCoroutine$d__3;
    // [InjectAttribute] Offset: 0xE1EED0
    // private FadeInOutController _fadeInOut
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::FadeInOutController* fadeInOut;
    // Field size check
    static_assert(sizeof(GlobalNamespace::FadeInOutController*) == 0x8);
    // [InjectAttribute] Offset: 0xE1EEE0
    // private GameScenesManager _gameScenesManager
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::GameScenesManager* gameScenesManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameScenesManager*) == 0x8);
    // Creating value type constructor for type: FadeInOnSceneTransitionFinished
    FadeInOnSceneTransitionFinished(GlobalNamespace::FadeInOutController* fadeInOut_ = {}, GlobalNamespace::GameScenesManager* gameScenesManager_ = {}) noexcept : fadeInOut{fadeInOut_}, gameScenesManager{gameScenesManager_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field: private FadeInOutController _fadeInOut
    GlobalNamespace::FadeInOutController* _get__fadeInOut();
    // Set instance field: private FadeInOutController _fadeInOut
    void _set__fadeInOut(GlobalNamespace::FadeInOutController* value);
    // Get instance field: private GameScenesManager _gameScenesManager
    GlobalNamespace::GameScenesManager* _get__gameScenesManager();
    // Set instance field: private GameScenesManager _gameScenesManager
    void _set__gameScenesManager(GlobalNamespace::GameScenesManager* value);
    // protected System.Void OnEnable()
    // Offset: 0x2390514
    void OnEnable();
    // private System.Collections.IEnumerator FadeInAfterSceneTransitionCoroutine()
    // Offset: 0x2390568
    System::Collections::IEnumerator* FadeInAfterSceneTransitionCoroutine();
    // public System.Void .ctor()
    // Offset: 0x2390604
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FadeInOnSceneTransitionFinished* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::FadeInOnSceneTransitionFinished::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FadeInOnSceneTransitionFinished*, creationType>()));
    }
  }; // FadeInOnSceneTransitionFinished
  #pragma pack(pop)
  static check_size<sizeof(FadeInOnSceneTransitionFinished), 32 + sizeof(GlobalNamespace::GameScenesManager*)> __GlobalNamespace_FadeInOnSceneTransitionFinishedSizeCheck;
  static_assert(sizeof(FadeInOnSceneTransitionFinished) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FadeInOnSceneTransitionFinished*, "", "FadeInOnSceneTransitionFinished");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::FadeInOnSceneTransitionFinished::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FadeInOnSceneTransitionFinished::*)()>(&GlobalNamespace::FadeInOnSceneTransitionFinished::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FadeInOnSceneTransitionFinished*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FadeInOnSceneTransitionFinished::FadeInAfterSceneTransitionCoroutine
// Il2CppName: FadeInAfterSceneTransitionCoroutine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (GlobalNamespace::FadeInOnSceneTransitionFinished::*)()>(&GlobalNamespace::FadeInOnSceneTransitionFinished::FadeInAfterSceneTransitionCoroutine)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FadeInOnSceneTransitionFinished*), "FadeInAfterSceneTransitionCoroutine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FadeInOnSceneTransitionFinished::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
