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
  // Forward declaring type: GameScenesManager
  class GameScenesManager;
  // Forward declaring type: GameSongController
  class GameSongController;
  // Forward declaring type: MainCamera
  class MainCamera;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: TrailerGameplayManager
  // [TokenAttribute] Offset: FFFFFFFF
  class TrailerGameplayManager : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::TrailerGameplayManager::$Start$d__4
    class $Start$d__4;
    // private System.Boolean _disableMainCamera
    // Size: 0x1
    // Offset: 0x18
    bool disableMainCamera;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: disableMainCamera and: gameScenesManager
    char __padding0[0x7] = {};
    // [InjectAttribute] Offset: 0xE38D74
    // private GameScenesManager _gameScenesManager
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::GameScenesManager* gameScenesManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameScenesManager*) == 0x8);
    // [InjectAttribute] Offset: 0xE38D84
    // private GameSongController _gameSongController
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::GameSongController* gameSongController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameSongController*) == 0x8);
    // [InjectAttribute] Offset: 0xE38D94
    // private MainCamera _mainCamera
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::MainCamera* mainCamera;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MainCamera*) == 0x8);
    // Creating value type constructor for type: TrailerGameplayManager
    TrailerGameplayManager(bool disableMainCamera_ = {}, GlobalNamespace::GameScenesManager* gameScenesManager_ = {}, GlobalNamespace::GameSongController* gameSongController_ = {}, GlobalNamespace::MainCamera* mainCamera_ = {}) noexcept : disableMainCamera{disableMainCamera_}, gameScenesManager{gameScenesManager_}, gameSongController{gameSongController_}, mainCamera{mainCamera_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field: private System.Boolean _disableMainCamera
    bool _get__disableMainCamera();
    // Set instance field: private System.Boolean _disableMainCamera
    void _set__disableMainCamera(bool value);
    // Get instance field: private GameScenesManager _gameScenesManager
    GlobalNamespace::GameScenesManager* _get__gameScenesManager();
    // Set instance field: private GameScenesManager _gameScenesManager
    void _set__gameScenesManager(GlobalNamespace::GameScenesManager* value);
    // Get instance field: private GameSongController _gameSongController
    GlobalNamespace::GameSongController* _get__gameSongController();
    // Set instance field: private GameSongController _gameSongController
    void _set__gameSongController(GlobalNamespace::GameSongController* value);
    // Get instance field: private MainCamera _mainCamera
    GlobalNamespace::MainCamera* _get__mainCamera();
    // Set instance field: private MainCamera _mainCamera
    void _set__mainCamera(GlobalNamespace::MainCamera* value);
    // private System.Collections.IEnumerator Start()
    // Offset: 0x1097868
    System::Collections::IEnumerator* Start();
    // public System.Void .ctor()
    // Offset: 0x1097904
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TrailerGameplayManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::TrailerGameplayManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TrailerGameplayManager*, creationType>()));
    }
  }; // TrailerGameplayManager
  #pragma pack(pop)
  static check_size<sizeof(TrailerGameplayManager), 48 + sizeof(GlobalNamespace::MainCamera*)> __GlobalNamespace_TrailerGameplayManagerSizeCheck;
  static_assert(sizeof(TrailerGameplayManager) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TrailerGameplayManager*, "", "TrailerGameplayManager");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::TrailerGameplayManager::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (GlobalNamespace::TrailerGameplayManager::*)()>(&GlobalNamespace::TrailerGameplayManager::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TrailerGameplayManager*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TrailerGameplayManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
