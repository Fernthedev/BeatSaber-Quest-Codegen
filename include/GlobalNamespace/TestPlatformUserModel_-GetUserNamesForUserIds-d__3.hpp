// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: TestPlatformUserModel
#include "GlobalNamespace/TestPlatformUserModel.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter`1
#include "System/Runtime/CompilerServices/TaskAwaiter_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IReadOnlyList`1<T>
  template<typename T>
  class IReadOnlyList_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: TestPlatformUserModel/<GetUserNamesForUserIds>d__3
  // [CompilerGeneratedAttribute] Offset: E11F68
  struct TestPlatformUserModel::$GetUserNamesForUserIds$d__3/*, public System::ValueType, public System::Runtime::CompilerServices::IAsyncStateMachine*/ {
    public:
    // public System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x0
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Collections.Generic.IReadOnlyList`1<System.String>> <>t__builder
    // Size: 0xFFFFFFFF
    // Offset: 0x8
    System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<System::Collections::Generic::IReadOnlyList_1<::Il2CppString*>*> $$t__builder;
    // public System.Collections.Generic.IReadOnlyList`1<System.String> userIds
    // Size: 0x8
    // Offset: 0x20
    System::Collections::Generic::IReadOnlyList_1<::Il2CppString*>* userIds;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::IReadOnlyList_1<::Il2CppString*>*) == 0x8);
    // private System.Runtime.CompilerServices.TaskAwaiter`1<System.Collections.Generic.IReadOnlyList`1<System.String>> <>u__1
    // Size: 0xFFFFFFFF
    // Offset: 0x28
    System::Runtime::CompilerServices::TaskAwaiter_1<System::Collections::Generic::IReadOnlyList_1<::Il2CppString*>*> $$u__1;
    // Creating value type constructor for type: $GetUserNamesForUserIds$d__3
    constexpr $GetUserNamesForUserIds$d__3(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<System::Collections::Generic::IReadOnlyList_1<::Il2CppString*>*> $$t__builder_ = {}, System::Collections::Generic::IReadOnlyList_1<::Il2CppString*>* userIds_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<System::Collections::Generic::IReadOnlyList_1<::Il2CppString*>*> $$u__1_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, userIds{userIds_}, $$u__1{$$u__1_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::Runtime::CompilerServices::IAsyncStateMachine
    operator System::Runtime::CompilerServices::IAsyncStateMachine() noexcept {
      return *reinterpret_cast<System::Runtime::CompilerServices::IAsyncStateMachine*>(this);
    }
    // private System.Void MoveNext()
    // Offset: 0xEE58C4
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0xEE58CC
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // TestPlatformUserModel/<GetUserNamesForUserIds>d__3
  // WARNING Not writing size check since size may be invalid!
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TestPlatformUserModel::$GetUserNamesForUserIds$d__3, "", "TestPlatformUserModel/<GetUserNamesForUserIds>d__3");
// Writing includes for template specializations
// Writing MetadataGetter for method: GlobalNamespace::TestPlatformUserModel::$GetUserNamesForUserIds$d__3::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TestPlatformUserModel::$GetUserNamesForUserIds$d__3::*)()>(&GlobalNamespace::TestPlatformUserModel::$GetUserNamesForUserIds$d__3::MoveNext)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TestPlatformUserModel::$GetUserNamesForUserIds$d__3), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TestPlatformUserModel::$GetUserNamesForUserIds$d__3::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TestPlatformUserModel::$GetUserNamesForUserIds$d__3::*)(System::Runtime::CompilerServices::IAsyncStateMachine*)>(&GlobalNamespace::TestPlatformUserModel::$GetUserNamesForUserIds$d__3::SetStateMachine)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TestPlatformUserModel::$GetUserNamesForUserIds$d__3), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Runtime::CompilerServices::IAsyncStateMachine*>()});
  }
};
