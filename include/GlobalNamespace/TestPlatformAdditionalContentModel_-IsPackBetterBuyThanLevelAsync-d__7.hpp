// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: TestPlatformAdditionalContentModel
#include "GlobalNamespace/TestPlatformAdditionalContentModel.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.hpp"
// Including type: AdditionalContentModel/IsPackBetterBuyThanLevelResult
#include "GlobalNamespace/AdditionalContentModel.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
// Including type: System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter
#include "System/Runtime/CompilerServices/YieldAwaitable_YieldAwaiter.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: TestPlatformAdditionalContentModel/<IsPackBetterBuyThanLevelAsync>d__7
  // [CompilerGeneratedAttribute] Offset: E11948
  struct TestPlatformAdditionalContentModel::$IsPackBetterBuyThanLevelAsync$d__7/*, public System::ValueType, public System::Runtime::CompilerServices::IAsyncStateMachine*/ {
    public:
    // public System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x0
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<AdditionalContentModel/IsPackBetterBuyThanLevelResult> <>t__builder
    // Size: 0xFFFFFFFF
    // Offset: 0x8
    System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::AdditionalContentModel::IsPackBetterBuyThanLevelResult> $$t__builder;
    // public System.Threading.CancellationToken token
    // Size: 0x8
    // Offset: 0x20
    System::Threading::CancellationToken token;
    // Field size check
    static_assert(sizeof(System::Threading::CancellationToken) == 0x8);
    // public TestPlatformAdditionalContentModel <>4__this
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::TestPlatformAdditionalContentModel* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::TestPlatformAdditionalContentModel*) == 0x8);
    // private System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter <>u__1
    // Size: 0x1
    // Offset: 0x30
    System::Runtime::CompilerServices::YieldAwaitable::YieldAwaiter $$u__1;
    // Field size check
    static_assert(sizeof(System::Runtime::CompilerServices::YieldAwaitable::YieldAwaiter) == 0x1);
    // Creating value type constructor for type: $IsPackBetterBuyThanLevelAsync$d__7
    constexpr $IsPackBetterBuyThanLevelAsync$d__7(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::AdditionalContentModel::IsPackBetterBuyThanLevelResult> $$t__builder_ = {}, System::Threading::CancellationToken token_ = {}, GlobalNamespace::TestPlatformAdditionalContentModel* $$4__this_ = {}, System::Runtime::CompilerServices::YieldAwaitable::YieldAwaiter $$u__1_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, token{token_}, $$4__this{$$4__this_}, $$u__1{$$u__1_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::Runtime::CompilerServices::IAsyncStateMachine
    operator System::Runtime::CompilerServices::IAsyncStateMachine() noexcept {
      return *reinterpret_cast<System::Runtime::CompilerServices::IAsyncStateMachine*>(this);
    }
    // private System.Void MoveNext()
    // Offset: 0xEE5864
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0xEE586C
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // TestPlatformAdditionalContentModel/<IsPackBetterBuyThanLevelAsync>d__7
  // WARNING Not writing size check since size may be invalid!
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TestPlatformAdditionalContentModel::$IsPackBetterBuyThanLevelAsync$d__7, "", "TestPlatformAdditionalContentModel/<IsPackBetterBuyThanLevelAsync>d__7");
// Writing includes for template specializations
// Writing MetadataGetter for method: GlobalNamespace::TestPlatformAdditionalContentModel::$IsPackBetterBuyThanLevelAsync$d__7::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TestPlatformAdditionalContentModel::$IsPackBetterBuyThanLevelAsync$d__7::*)()>(&GlobalNamespace::TestPlatformAdditionalContentModel::$IsPackBetterBuyThanLevelAsync$d__7::MoveNext)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TestPlatformAdditionalContentModel::$IsPackBetterBuyThanLevelAsync$d__7), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TestPlatformAdditionalContentModel::$IsPackBetterBuyThanLevelAsync$d__7::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TestPlatformAdditionalContentModel::$IsPackBetterBuyThanLevelAsync$d__7::*)(System::Runtime::CompilerServices::IAsyncStateMachine*)>(&GlobalNamespace::TestPlatformAdditionalContentModel::$IsPackBetterBuyThanLevelAsync$d__7::SetStateMachine)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TestPlatformAdditionalContentModel::$IsPackBetterBuyThanLevelAsync$d__7), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Runtime::CompilerServices::IAsyncStateMachine*>()});
  }
};
