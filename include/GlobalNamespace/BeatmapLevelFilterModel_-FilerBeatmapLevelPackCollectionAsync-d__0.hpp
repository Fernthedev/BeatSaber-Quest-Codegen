// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: BeatmapLevelFilterModel
#include "GlobalNamespace/BeatmapLevelFilterModel.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter`1
#include "System/Runtime/CompilerServices/TaskAwaiter_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IBeatmapLevelCollection
  class IBeatmapLevelCollection;
  // Forward declaring type: LevelFilterParams
  class LevelFilterParams;
  // Forward declaring type: PlayerDataModel
  class PlayerDataModel;
  // Forward declaring type: IBeatmapLevelPack
  class IBeatmapLevelPack;
  // Forward declaring type: AdditionalContentModel
  class AdditionalContentModel;
  // Forward declaring type: IPreviewBeatmapLevel
  class IPreviewBeatmapLevel;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: BeatmapLevelFilterModel/<FilerBeatmapLevelPackCollectionAsync>d__0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  struct BeatmapLevelFilterModel::$FilerBeatmapLevelPackCollectionAsync$d__0/*, public System::ValueType, public System::Runtime::CompilerServices::IAsyncStateMachine*/ {
    public:
    // public System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x0
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<IBeatmapLevelCollection> <>t__builder
    // Size: 0xFFFFFFFF
    // Offset: 0x8
    System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::IBeatmapLevelCollection*> $$t__builder;
    // public LevelFilterParams levelFilterParams
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::LevelFilterParams* levelFilterParams;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LevelFilterParams*) == 0x8);
    // public PlayerDataModel playerDataModel
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::PlayerDataModel* playerDataModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayerDataModel*) == 0x8);
    // public IBeatmapLevelPack[] beatmapLevelPacks
    // Size: 0x8
    // Offset: 0x30
    ::Array<GlobalNamespace::IBeatmapLevelPack*>* beatmapLevelPacks;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::IBeatmapLevelPack*>*) == 0x8);
    // public AdditionalContentModel additionalContentModel
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::AdditionalContentModel* additionalContentModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AdditionalContentModel*) == 0x8);
    // public System.Threading.CancellationToken cancellationToken
    // Size: 0x8
    // Offset: 0x40
    System::Threading::CancellationToken cancellationToken;
    // Field size check
    static_assert(sizeof(System::Threading::CancellationToken) == 0x8);
    // private BeatmapLevelFilterModel/<>c__DisplayClass0_0 <>8__1
    // Size: 0x8
    // Offset: 0x48
    GlobalNamespace::BeatmapLevelFilterModel::$$c__DisplayClass0_0* $$8__1;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapLevelFilterModel::$$c__DisplayClass0_0*) == 0x8);
    // private System.Runtime.CompilerServices.TaskAwaiter`1<System.Collections.Generic.List`1<IPreviewBeatmapLevel>> <>u__1
    // Size: 0xFFFFFFFF
    // Offset: 0x50
    System::Runtime::CompilerServices::TaskAwaiter_1<System::Collections::Generic::List_1<GlobalNamespace::IPreviewBeatmapLevel*>*> $$u__1;
    // Creating value type constructor for type: $FilerBeatmapLevelPackCollectionAsync$d__0
    constexpr $FilerBeatmapLevelPackCollectionAsync$d__0(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::IBeatmapLevelCollection*> $$t__builder_ = {}, GlobalNamespace::LevelFilterParams* levelFilterParams_ = {}, GlobalNamespace::PlayerDataModel* playerDataModel_ = {}, ::Array<GlobalNamespace::IBeatmapLevelPack*>* beatmapLevelPacks_ = {}, GlobalNamespace::AdditionalContentModel* additionalContentModel_ = {}, System::Threading::CancellationToken cancellationToken_ = {}, GlobalNamespace::BeatmapLevelFilterModel::$$c__DisplayClass0_0* $$8__1_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<System::Collections::Generic::List_1<GlobalNamespace::IPreviewBeatmapLevel*>*> $$u__1_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, levelFilterParams{levelFilterParams_}, playerDataModel{playerDataModel_}, beatmapLevelPacks{beatmapLevelPacks_}, additionalContentModel{additionalContentModel_}, cancellationToken{cancellationToken_}, $$8__1{$$8__1_}, $$u__1{$$u__1_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::Runtime::CompilerServices::IAsyncStateMachine
    operator System::Runtime::CompilerServices::IAsyncStateMachine() noexcept {
      return *reinterpret_cast<System::Runtime::CompilerServices::IAsyncStateMachine*>(this);
    }
    // Get instance field reference: public System.Int32 <>1__state
    int& dyn_$$1__state();
    // Get instance field reference: public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<IBeatmapLevelCollection> <>t__builder
    System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::IBeatmapLevelCollection*>& dyn_$$t__builder();
    // Get instance field reference: public LevelFilterParams levelFilterParams
    GlobalNamespace::LevelFilterParams*& dyn_levelFilterParams();
    // Get instance field reference: public PlayerDataModel playerDataModel
    GlobalNamespace::PlayerDataModel*& dyn_playerDataModel();
    // Get instance field reference: public IBeatmapLevelPack[] beatmapLevelPacks
    ::Array<GlobalNamespace::IBeatmapLevelPack*>*& dyn_beatmapLevelPacks();
    // Get instance field reference: public AdditionalContentModel additionalContentModel
    GlobalNamespace::AdditionalContentModel*& dyn_additionalContentModel();
    // Get instance field reference: public System.Threading.CancellationToken cancellationToken
    System::Threading::CancellationToken& dyn_cancellationToken();
    // Get instance field reference: private BeatmapLevelFilterModel/<>c__DisplayClass0_0 <>8__1
    GlobalNamespace::BeatmapLevelFilterModel::$$c__DisplayClass0_0*& dyn_$$8__1();
    // Get instance field reference: private System.Runtime.CompilerServices.TaskAwaiter`1<System.Collections.Generic.List`1<IPreviewBeatmapLevel>> <>u__1
    System::Runtime::CompilerServices::TaskAwaiter_1<System::Collections::Generic::List_1<GlobalNamespace::IPreviewBeatmapLevel*>*>& dyn_$$u__1();
    // private System.Void MoveNext()
    // Offset: 0x10C80CC
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0x10C84A4
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // BeatmapLevelFilterModel/<FilerBeatmapLevelPackCollectionAsync>d__0
  // WARNING Not writing size check since size may be invalid!
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapLevelFilterModel::$FilerBeatmapLevelPackCollectionAsync$d__0, "", "BeatmapLevelFilterModel/<FilerBeatmapLevelPackCollectionAsync>d__0");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelFilterModel::$FilerBeatmapLevelPackCollectionAsync$d__0::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapLevelFilterModel::$FilerBeatmapLevelPackCollectionAsync$d__0::*)()>(&GlobalNamespace::BeatmapLevelFilterModel::$FilerBeatmapLevelPackCollectionAsync$d__0::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapLevelFilterModel::$FilerBeatmapLevelPackCollectionAsync$d__0), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelFilterModel::$FilerBeatmapLevelPackCollectionAsync$d__0::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapLevelFilterModel::$FilerBeatmapLevelPackCollectionAsync$d__0::*)(System::Runtime::CompilerServices::IAsyncStateMachine*)>(&GlobalNamespace::BeatmapLevelFilterModel::$FilerBeatmapLevelPackCollectionAsync$d__0::SetStateMachine)> {
  static const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapLevelFilterModel::$FilerBeatmapLevelPackCollectionAsync$d__0), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};
