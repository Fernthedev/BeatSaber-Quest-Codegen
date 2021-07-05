// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.CompilerServices.AsyncMethodBuilderCore
#include "System/Runtime/CompilerServices/AsyncMethodBuilderCore.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task
  class Task;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: System.Runtime.CompilerServices
namespace System::Runtime::CompilerServices {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.CompilerServices.AsyncMethodBuilderCore/<>c__DisplayClass4_0
  // [CompilerGeneratedAttribute] Offset: D7E90C
  class AsyncMethodBuilderCore::$$c__DisplayClass4_0 : public ::Il2CppObject {
    public:
    // public System.Threading.Tasks.Task innerTask
    // Size: 0x8
    // Offset: 0x10
    System::Threading::Tasks::Task* innerTask;
    // Field size check
    static_assert(sizeof(System::Threading::Tasks::Task*) == 0x8);
    // public System.Action continuation
    // Size: 0x8
    // Offset: 0x18
    System::Action* continuation;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass4_0
    $$c__DisplayClass4_0(System::Threading::Tasks::Task* innerTask_ = {}, System::Action* continuation_ = {}) noexcept : innerTask{innerTask_}, continuation{continuation_} {}
    // System.Void <OutputAsyncCausalityEvents>b__0()
    // Offset: 0x141BBEC
    void $OutputAsyncCausalityEvents$b__0();
    // public System.Void .ctor()
    // Offset: 0x141B390
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AsyncMethodBuilderCore::$$c__DisplayClass4_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::CompilerServices::AsyncMethodBuilderCore::$$c__DisplayClass4_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AsyncMethodBuilderCore::$$c__DisplayClass4_0*, creationType>()));
    }
  }; // System.Runtime.CompilerServices.AsyncMethodBuilderCore/<>c__DisplayClass4_0
  #pragma pack(pop)
  static check_size<sizeof(AsyncMethodBuilderCore::$$c__DisplayClass4_0), 24 + sizeof(System::Action*)> __System_Runtime_CompilerServices_AsyncMethodBuilderCore_$$c__DisplayClass4_0SizeCheck;
  static_assert(sizeof(AsyncMethodBuilderCore::$$c__DisplayClass4_0) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::CompilerServices::AsyncMethodBuilderCore::$$c__DisplayClass4_0*, "System.Runtime.CompilerServices", "AsyncMethodBuilderCore/<>c__DisplayClass4_0");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::CompilerServices::AsyncMethodBuilderCore::$$c__DisplayClass4_0::$OutputAsyncCausalityEvents$b__0
// Il2CppName: <OutputAsyncCausalityEvents>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::CompilerServices::AsyncMethodBuilderCore::$$c__DisplayClass4_0::*)()>(&System::Runtime::CompilerServices::AsyncMethodBuilderCore::$$c__DisplayClass4_0::$OutputAsyncCausalityEvents$b__0)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::CompilerServices::AsyncMethodBuilderCore::$$c__DisplayClass4_0*), "<OutputAsyncCausalityEvents>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::CompilerServices::AsyncMethodBuilderCore::$$c__DisplayClass4_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
