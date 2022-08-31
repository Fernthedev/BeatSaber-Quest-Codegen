// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: MultiplayerScoreProvider
#include "GlobalNamespace/MultiplayerScoreProvider.hpp"
// Including type: MultiplayerController
#include "GlobalNamespace/MultiplayerController.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerPlayersManager
  class MultiplayerPlayersManager;
  // Forward declaring type: MultiplayerLayoutProvider
  class MultiplayerLayoutProvider;
  // Forward declaring type: MultiplayerConnectedPlayerFacade
  class MultiplayerConnectedPlayerFacade;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerVerticalPlayerMovementManager
  class MultiplayerVerticalPlayerMovementManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MultiplayerVerticalPlayerMovementManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerVerticalPlayerMovementManager*, "", "MultiplayerVerticalPlayerMovementManager");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x64
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerVerticalPlayerMovementManager
  // [TokenAttribute] Offset: FFFFFFFF
  class MultiplayerVerticalPlayerMovementManager : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // [TooltipAttribute] Offset: 0x10EC6D8
    // private System.Single _movementRange
    // Size: 0x4
    // Offset: 0x18
    float movementRange;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _duelMovementRange
    // Size: 0x4
    // Offset: 0x1C
    float duelMovementRange;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _maxMoveSpeedMetersPerSecond
    // Size: 0x4
    // Offset: 0x20
    float maxMoveSpeedMetersPerSecond;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _accelerationMetersPerSecondSquared
    // Size: 0x4
    // Offset: 0x24
    float accelerationMetersPerSecondSquared;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _decelerationMetersPerSecondSquared
    // Size: 0x4
    // Offset: 0x28
    float decelerationMetersPerSecondSquared;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _minScoreDifference
    // Size: 0x4
    // Offset: 0x2C
    float minScoreDifference;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [InjectAttribute] Offset: 0x10EC774
    // private readonly MultiplayerPlayersManager _multiplayerPlayersManager
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::MultiplayerPlayersManager* multiplayerPlayersManager;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MultiplayerPlayersManager*) == 0x8);
    // [InjectAttribute] Offset: 0x10EC784
    // private readonly MultiplayerScoreProvider _scoreProvider
    // Size: 0x8
    // Offset: 0x38
    ::GlobalNamespace::MultiplayerScoreProvider* scoreProvider;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MultiplayerScoreProvider*) == 0x8);
    // [InjectAttribute] Offset: 0x10EC794
    // private readonly MultiplayerLayoutProvider _layoutProvider
    // Size: 0x8
    // Offset: 0x40
    ::GlobalNamespace::MultiplayerLayoutProvider* layoutProvider;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MultiplayerLayoutProvider*) == 0x8);
    // [InjectAttribute] Offset: 0x10EC7A4
    // private readonly MultiplayerController _multiplayerController
    // Size: 0x8
    // Offset: 0x48
    ::GlobalNamespace::MultiplayerController* multiplayerController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MultiplayerController*) == 0x8);
    // private readonly System.Collections.Generic.List`1<MultiplayerScoreProvider/RankedPlayer> _reusablePlayersList
    // Size: 0x8
    // Offset: 0x50
    ::System::Collections::Generic::List_1<::GlobalNamespace::MultiplayerScoreProvider::RankedPlayer*>* reusablePlayersList;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::GlobalNamespace::MultiplayerScoreProvider::RankedPlayer*>*) == 0x8);
    // private readonly System.Collections.Generic.Dictionary`2<MultiplayerConnectedPlayerFacade,System.Single> _currentSpeedsDictionary
    // Size: 0x8
    // Offset: 0x58
    ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::MultiplayerConnectedPlayerFacade*, float>* currentSpeedsDictionary;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::MultiplayerConnectedPlayerFacade*, float>*) == 0x8);
    // private System.Single _lastFrameBaseScore
    // Size: 0x4
    // Offset: 0x60
    float lastFrameBaseScore;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.Single _movementRange
    [[deprecated("Use field access instead!")]] float& dyn__movementRange();
    // Get instance field reference: private System.Single _duelMovementRange
    [[deprecated("Use field access instead!")]] float& dyn__duelMovementRange();
    // Get instance field reference: private System.Single _maxMoveSpeedMetersPerSecond
    [[deprecated("Use field access instead!")]] float& dyn__maxMoveSpeedMetersPerSecond();
    // Get instance field reference: private System.Single _accelerationMetersPerSecondSquared
    [[deprecated("Use field access instead!")]] float& dyn__accelerationMetersPerSecondSquared();
    // Get instance field reference: private System.Single _decelerationMetersPerSecondSquared
    [[deprecated("Use field access instead!")]] float& dyn__decelerationMetersPerSecondSquared();
    // Get instance field reference: private System.Single _minScoreDifference
    [[deprecated("Use field access instead!")]] float& dyn__minScoreDifference();
    // Get instance field reference: private readonly MultiplayerPlayersManager _multiplayerPlayersManager
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MultiplayerPlayersManager*& dyn__multiplayerPlayersManager();
    // Get instance field reference: private readonly MultiplayerScoreProvider _scoreProvider
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MultiplayerScoreProvider*& dyn__scoreProvider();
    // Get instance field reference: private readonly MultiplayerLayoutProvider _layoutProvider
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MultiplayerLayoutProvider*& dyn__layoutProvider();
    // Get instance field reference: private readonly MultiplayerController _multiplayerController
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MultiplayerController*& dyn__multiplayerController();
    // Get instance field reference: private readonly System.Collections.Generic.List`1<MultiplayerScoreProvider/RankedPlayer> _reusablePlayersList
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::GlobalNamespace::MultiplayerScoreProvider::RankedPlayer*>*& dyn__reusablePlayersList();
    // Get instance field reference: private readonly System.Collections.Generic.Dictionary`2<MultiplayerConnectedPlayerFacade,System.Single> _currentSpeedsDictionary
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::MultiplayerConnectedPlayerFacade*, float>*& dyn__currentSpeedsDictionary();
    // Get instance field reference: private System.Single _lastFrameBaseScore
    [[deprecated("Use field access instead!")]] float& dyn__lastFrameBaseScore();
    // public System.Void .ctor()
    // Offset: 0x14E6848
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerVerticalPlayerMovementManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MultiplayerVerticalPlayerMovementManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerVerticalPlayerMovementManager*, creationType>()));
    }
    // protected System.Void Start()
    // Offset: 0x14E5DC4
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x14E5E88
    void OnDestroy();
    // protected System.Void Update()
    // Offset: 0x14E5F64
    void Update();
    // private System.Void HandleStateChanged(MultiplayerController/State state)
    // Offset: 0x14E5E78
    void HandleStateChanged(::GlobalNamespace::MultiplayerController::State state);
  }; // MultiplayerVerticalPlayerMovementManager
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerVerticalPlayerMovementManager), 96 + sizeof(float)> __GlobalNamespace_MultiplayerVerticalPlayerMovementManagerSizeCheck;
  static_assert(sizeof(MultiplayerVerticalPlayerMovementManager) == 0x64);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerVerticalPlayerMovementManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerVerticalPlayerMovementManager::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerVerticalPlayerMovementManager::*)()>(&GlobalNamespace::MultiplayerVerticalPlayerMovementManager::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerVerticalPlayerMovementManager*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerVerticalPlayerMovementManager::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerVerticalPlayerMovementManager::*)()>(&GlobalNamespace::MultiplayerVerticalPlayerMovementManager::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerVerticalPlayerMovementManager*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerVerticalPlayerMovementManager::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerVerticalPlayerMovementManager::*)()>(&GlobalNamespace::MultiplayerVerticalPlayerMovementManager::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerVerticalPlayerMovementManager*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerVerticalPlayerMovementManager::HandleStateChanged
// Il2CppName: HandleStateChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerVerticalPlayerMovementManager::*)(::GlobalNamespace::MultiplayerController::State)>(&GlobalNamespace::MultiplayerVerticalPlayerMovementManager::HandleStateChanged)> {
  static const MethodInfo* get() {
    static auto* state = &::il2cpp_utils::GetClassFromName("", "MultiplayerController/State")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerVerticalPlayerMovementManager*), "HandleStateChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{state});
  }
};
