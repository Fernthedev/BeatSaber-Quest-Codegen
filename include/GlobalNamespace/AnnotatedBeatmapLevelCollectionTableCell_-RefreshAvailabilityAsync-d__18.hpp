// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: AnnotatedBeatmapLevelCollectionTableCell
#include "GlobalNamespace/AnnotatedBeatmapLevelCollectionTableCell.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncVoidMethodBuilder
#include "System/Runtime/CompilerServices/AsyncVoidMethodBuilder.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter`1
#include "System/Runtime/CompilerServices/TaskAwaiter_1.hpp"
// Including type: AdditionalContentModel/EntitlementStatus
#include "GlobalNamespace/AdditionalContentModel.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Skipping declaration: AdditionalContentModel because it is already included!
  // Forward declaring type: IPreviewBeatmapLevel
  class IPreviewBeatmapLevel;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: AnnotatedBeatmapLevelCollectionTableCell/<RefreshAvailabilityAsync>d__18
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  struct AnnotatedBeatmapLevelCollectionTableCell::$RefreshAvailabilityAsync$d__18/*, public System::ValueType, public System::Runtime::CompilerServices::IAsyncStateMachine*/ {
    public:
    // public System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x0
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Runtime.CompilerServices.AsyncVoidMethodBuilder <>t__builder
    // Size: 0x20
    // Offset: 0x8
    System::Runtime::CompilerServices::AsyncVoidMethodBuilder $$t__builder;
    // Field size check
    static_assert(sizeof(System::Runtime::CompilerServices::AsyncVoidMethodBuilder) == 0x20);
    // public AnnotatedBeatmapLevelCollectionTableCell <>4__this
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::AnnotatedBeatmapLevelCollectionTableCell* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AnnotatedBeatmapLevelCollectionTableCell*) == 0x8);
    // public AdditionalContentModel contentModel
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::AdditionalContentModel* contentModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AdditionalContentModel*) == 0x8);
    // private System.Threading.CancellationToken <cancellationToken>5__2
    // Size: 0x8
    // Offset: 0x38
    System::Threading::CancellationToken $cancellationToken$5__2;
    // Field size check
    static_assert(sizeof(System::Threading::CancellationToken) == 0x8);
    // private System.Int32 <numberOfOwnedLevels>5__3
    // Size: 0x4
    // Offset: 0x40
    int $numberOfOwnedLevels$5__3;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean <error>5__4
    // Size: 0x1
    // Offset: 0x44
    bool $error$5__4;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private IPreviewBeatmapLevel[] <>7__wrap4
    // Size: 0x8
    // Offset: 0x48
    ::Array<GlobalNamespace::IPreviewBeatmapLevel*>* $$7__wrap4;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::IPreviewBeatmapLevel*>*) == 0x8);
    // private System.Int32 <>7__wrap5
    // Size: 0x4
    // Offset: 0x50
    int $$7__wrap5;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Runtime.CompilerServices.TaskAwaiter`1<AdditionalContentModel/EntitlementStatus> <>u__1
    // Size: 0xFFFFFFFF
    // Offset: 0x58
    System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::AdditionalContentModel::EntitlementStatus> $$u__1;
    // Creating value type constructor for type: $RefreshAvailabilityAsync$d__18
    constexpr $RefreshAvailabilityAsync$d__18(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncVoidMethodBuilder $$t__builder_ = {}, GlobalNamespace::AnnotatedBeatmapLevelCollectionTableCell* $$4__this_ = {}, GlobalNamespace::AdditionalContentModel* contentModel_ = {}, System::Threading::CancellationToken $cancellationToken$5__2_ = {}, int $numberOfOwnedLevels$5__3_ = {}, bool $error$5__4_ = {}, ::Array<GlobalNamespace::IPreviewBeatmapLevel*>* $$7__wrap4_ = {}, int $$7__wrap5_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::AdditionalContentModel::EntitlementStatus> $$u__1_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, contentModel{contentModel_}, $cancellationToken$5__2{$cancellationToken$5__2_}, $numberOfOwnedLevels$5__3{$numberOfOwnedLevels$5__3_}, $error$5__4{$error$5__4_}, $$7__wrap4{$$7__wrap4_}, $$7__wrap5{$$7__wrap5_}, $$u__1{$$u__1_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::Runtime::CompilerServices::IAsyncStateMachine
    operator System::Runtime::CompilerServices::IAsyncStateMachine() noexcept {
      return *reinterpret_cast<System::Runtime::CompilerServices::IAsyncStateMachine*>(this);
    }
    // Get instance field: public System.Int32 <>1__state
    int _get_$$1__state();
    // Set instance field: public System.Int32 <>1__state
    void _set_$$1__state(int value);
    // Get instance field: public System.Runtime.CompilerServices.AsyncVoidMethodBuilder <>t__builder
    System::Runtime::CompilerServices::AsyncVoidMethodBuilder _get_$$t__builder();
    // Set instance field: public System.Runtime.CompilerServices.AsyncVoidMethodBuilder <>t__builder
    void _set_$$t__builder(System::Runtime::CompilerServices::AsyncVoidMethodBuilder value);
    // Get instance field: public AnnotatedBeatmapLevelCollectionTableCell <>4__this
    GlobalNamespace::AnnotatedBeatmapLevelCollectionTableCell* _get_$$4__this();
    // Set instance field: public AnnotatedBeatmapLevelCollectionTableCell <>4__this
    void _set_$$4__this(GlobalNamespace::AnnotatedBeatmapLevelCollectionTableCell* value);
    // Get instance field: public AdditionalContentModel contentModel
    GlobalNamespace::AdditionalContentModel* _get_contentModel();
    // Set instance field: public AdditionalContentModel contentModel
    void _set_contentModel(GlobalNamespace::AdditionalContentModel* value);
    // Get instance field: private System.Threading.CancellationToken <cancellationToken>5__2
    System::Threading::CancellationToken _get_$cancellationToken$5__2();
    // Set instance field: private System.Threading.CancellationToken <cancellationToken>5__2
    void _set_$cancellationToken$5__2(System::Threading::CancellationToken value);
    // Get instance field: private System.Int32 <numberOfOwnedLevels>5__3
    int _get_$numberOfOwnedLevels$5__3();
    // Set instance field: private System.Int32 <numberOfOwnedLevels>5__3
    void _set_$numberOfOwnedLevels$5__3(int value);
    // Get instance field: private System.Boolean <error>5__4
    bool _get_$error$5__4();
    // Set instance field: private System.Boolean <error>5__4
    void _set_$error$5__4(bool value);
    // Get instance field: private IPreviewBeatmapLevel[] <>7__wrap4
    ::Array<GlobalNamespace::IPreviewBeatmapLevel*>* _get_$$7__wrap4();
    // Set instance field: private IPreviewBeatmapLevel[] <>7__wrap4
    void _set_$$7__wrap4(::Array<GlobalNamespace::IPreviewBeatmapLevel*>* value);
    // Get instance field: private System.Int32 <>7__wrap5
    int _get_$$7__wrap5();
    // Set instance field: private System.Int32 <>7__wrap5
    void _set_$$7__wrap5(int value);
    // Get instance field: private System.Runtime.CompilerServices.TaskAwaiter`1<AdditionalContentModel/EntitlementStatus> <>u__1
    System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::AdditionalContentModel::EntitlementStatus> _get_$$u__1();
    // Set instance field: private System.Runtime.CompilerServices.TaskAwaiter`1<AdditionalContentModel/EntitlementStatus> <>u__1
    void _set_$$u__1(System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::AdditionalContentModel::EntitlementStatus> value);
    // private System.Void MoveNext()
    // Offset: 0x117987C
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0x117A18C
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // AnnotatedBeatmapLevelCollectionTableCell/<RefreshAvailabilityAsync>d__18
  // WARNING Not writing size check since size may be invalid!
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AnnotatedBeatmapLevelCollectionTableCell::$RefreshAvailabilityAsync$d__18, "", "AnnotatedBeatmapLevelCollectionTableCell/<RefreshAvailabilityAsync>d__18");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::AnnotatedBeatmapLevelCollectionTableCell::$RefreshAvailabilityAsync$d__18::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AnnotatedBeatmapLevelCollectionTableCell::$RefreshAvailabilityAsync$d__18::*)()>(&GlobalNamespace::AnnotatedBeatmapLevelCollectionTableCell::$RefreshAvailabilityAsync$d__18::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AnnotatedBeatmapLevelCollectionTableCell::$RefreshAvailabilityAsync$d__18), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AnnotatedBeatmapLevelCollectionTableCell::$RefreshAvailabilityAsync$d__18::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AnnotatedBeatmapLevelCollectionTableCell::$RefreshAvailabilityAsync$d__18::*)(System::Runtime::CompilerServices::IAsyncStateMachine*)>(&GlobalNamespace::AnnotatedBeatmapLevelCollectionTableCell::$RefreshAvailabilityAsync$d__18::SetStateMachine)> {
  static const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AnnotatedBeatmapLevelCollectionTableCell::$RefreshAvailabilityAsync$d__18), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};
