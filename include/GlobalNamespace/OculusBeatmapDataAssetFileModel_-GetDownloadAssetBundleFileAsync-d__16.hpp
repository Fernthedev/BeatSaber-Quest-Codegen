// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: OculusBeatmapDataAssetFileModel
#include "GlobalNamespace/OculusBeatmapDataAssetFileModel.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.hpp"
// Including type: GetAssetBundleFileResult
#include "GlobalNamespace/GetAssetBundleFileResult.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter`1
#include "System/Runtime/CompilerServices/TaskAwaiter_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: AssetDetails
  class AssetDetails;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: OculusBeatmapDataAssetFileModel/<GetDownloadAssetBundleFileAsync>d__16
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  struct OculusBeatmapDataAssetFileModel::$GetDownloadAssetBundleFileAsync$d__16/*, public System::ValueType, public System::Runtime::CompilerServices::IAsyncStateMachine*/ {
    public:
    // public System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x0
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<GetAssetBundleFileResult> <>t__builder
    // Size: 0xFFFFFFFF
    // Offset: 0x8
    System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GetAssetBundleFileResult> $$t__builder;
    // public OculusBeatmapDataAssetFileModel <>4__this
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::OculusBeatmapDataAssetFileModel* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OculusBeatmapDataAssetFileModel*) == 0x8);
    // public Oculus.Platform.Models.AssetDetails assetDetails
    // Size: 0x8
    // Offset: 0x28
    Oculus::Platform::Models::AssetDetails* assetDetails;
    // Field size check
    static_assert(sizeof(Oculus::Platform::Models::AssetDetails*) == 0x8);
    // public System.String levelId
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppString* levelId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Runtime.CompilerServices.TaskAwaiter`1<GetAssetBundleFileResult> <>u__1
    // Size: 0xFFFFFFFF
    // Offset: 0x38
    System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GetAssetBundleFileResult> $$u__1;
    // Creating value type constructor for type: $GetDownloadAssetBundleFileAsync$d__16
    constexpr $GetDownloadAssetBundleFileAsync$d__16(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GetAssetBundleFileResult> $$t__builder_ = {}, GlobalNamespace::OculusBeatmapDataAssetFileModel* $$4__this_ = {}, Oculus::Platform::Models::AssetDetails* assetDetails_ = {}, ::Il2CppString* levelId_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GetAssetBundleFileResult> $$u__1_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, assetDetails{assetDetails_}, levelId{levelId_}, $$u__1{$$u__1_} {}
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
    // Get instance field reference: public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<GetAssetBundleFileResult> <>t__builder
    System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GetAssetBundleFileResult>& dyn_$$t__builder();
    // Get instance field reference: public OculusBeatmapDataAssetFileModel <>4__this
    GlobalNamespace::OculusBeatmapDataAssetFileModel*& dyn_$$4__this();
    // Get instance field reference: public Oculus.Platform.Models.AssetDetails assetDetails
    Oculus::Platform::Models::AssetDetails*& dyn_assetDetails();
    // Get instance field reference: public System.String levelId
    ::Il2CppString*& dyn_levelId();
    // Get instance field reference: private System.Runtime.CompilerServices.TaskAwaiter`1<GetAssetBundleFileResult> <>u__1
    System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GetAssetBundleFileResult>& dyn_$$u__1();
    // private System.Void MoveNext()
    // Offset: 0x1253CDC
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0x1254380
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // OculusBeatmapDataAssetFileModel/<GetDownloadAssetBundleFileAsync>d__16
  // WARNING Not writing size check since size may be invalid!
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OculusBeatmapDataAssetFileModel::$GetDownloadAssetBundleFileAsync$d__16, "", "OculusBeatmapDataAssetFileModel/<GetDownloadAssetBundleFileAsync>d__16");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OculusBeatmapDataAssetFileModel::$GetDownloadAssetBundleFileAsync$d__16::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OculusBeatmapDataAssetFileModel::$GetDownloadAssetBundleFileAsync$d__16::*)()>(&GlobalNamespace::OculusBeatmapDataAssetFileModel::$GetDownloadAssetBundleFileAsync$d__16::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusBeatmapDataAssetFileModel::$GetDownloadAssetBundleFileAsync$d__16), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusBeatmapDataAssetFileModel::$GetDownloadAssetBundleFileAsync$d__16::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OculusBeatmapDataAssetFileModel::$GetDownloadAssetBundleFileAsync$d__16::*)(System::Runtime::CompilerServices::IAsyncStateMachine*)>(&GlobalNamespace::OculusBeatmapDataAssetFileModel::$GetDownloadAssetBundleFileAsync$d__16::SetStateMachine)> {
  static const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusBeatmapDataAssetFileModel::$GetDownloadAssetBundleFileAsync$d__16), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};
