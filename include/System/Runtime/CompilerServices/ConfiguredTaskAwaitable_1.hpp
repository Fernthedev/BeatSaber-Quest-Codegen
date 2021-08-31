// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.ICriticalNotifyCompletion
#include "System/Runtime/CompilerServices/ICriticalNotifyCompletion.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::CompilerServices
namespace System::Runtime::CompilerServices {
  // Skipping declaration: ConfiguredTaskAwaiter because it is already included!
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: System.Runtime.CompilerServices
namespace System::Runtime::CompilerServices {
  // WARNING Size may be invalid!
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename TResult>
  struct ConfiguredTaskAwaitable_1/*, public System::ValueType*/ {
    public:
    // Nested type: System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1::ConfiguredTaskAwaiter<TResult>
    struct ConfiguredTaskAwaiter;
    // WARNING Size may be invalid!
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/System.Runtime.CompilerServices.ConfiguredTaskAwaiter
    // [TokenAttribute] Offset: FFFFFFFF
    struct ConfiguredTaskAwaiter : public ::il2cpp_utils::il2cpp_type_check::NestedType/*, public System::ValueType, public System::Runtime::CompilerServices::ICriticalNotifyCompletion*/ {
      public:
      using declaring_type = ConfiguredTaskAwaitable_1<TResult>;
      static constexpr std::string_view NESTED_NAME = "ConfiguredTaskAwaiter";
      static constexpr bool IS_VALUE_TYPE = true;
      // private readonly System.Threading.Tasks.Task`1<TResult> m_task
      // Size: 0x8
      // Offset: 0x0
      System::Threading::Tasks::Task_1<TResult>* m_task;
      // Field size check
      static_assert(sizeof(System::Threading::Tasks::Task_1<TResult>*) == 0x8);
      // private readonly System.Boolean m_continueOnCapturedContext
      // Size: 0x1
      // Offset: 0x0
      bool m_continueOnCapturedContext;
      // Field size check
      static_assert(sizeof(bool) == 0x1);
      // Creating value type constructor for type: ConfiguredTaskAwaiter
      constexpr ConfiguredTaskAwaiter(System::Threading::Tasks::Task_1<TResult>* m_task_ = {}, bool m_continueOnCapturedContext_ = {}) noexcept : m_task{m_task_}, m_continueOnCapturedContext{m_continueOnCapturedContext_} {}
      // Creating interface conversion operator: operator System::ValueType
      operator System::ValueType() noexcept {
        return *reinterpret_cast<System::ValueType*>(this);
      }
      // Creating interface conversion operator: operator System::Runtime::CompilerServices::ICriticalNotifyCompletion
      operator System::Runtime::CompilerServices::ICriticalNotifyCompletion() noexcept {
        return *reinterpret_cast<System::Runtime::CompilerServices::ICriticalNotifyCompletion*>(this);
      }
      // Autogenerated instance field getter
      // Get instance field: private readonly System.Threading.Tasks.Task`1<TResult> m_task
      System::Threading::Tasks::Task_1<TResult>*& dyn_m_task() {
        static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1::ConfiguredTaskAwaiter::dyn_m_task");
        auto ___internal__instance = *this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "m_task"))->offset;
        return *reinterpret_cast<System::Threading::Tasks::Task_1<TResult>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: private readonly System.Boolean m_continueOnCapturedContext
      bool& dyn_m_continueOnCapturedContext() {
        static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1::ConfiguredTaskAwaiter::dyn_m_continueOnCapturedContext");
        auto ___internal__instance = *this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "m_continueOnCapturedContext"))->offset;
        return *reinterpret_cast<bool*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // public System.Boolean get_IsCompleted()
      // Offset: 0xFFFFFFFF
      bool get_IsCompleted() {
        static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1::ConfiguredTaskAwaiter::get_IsCompleted");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "get_IsCompleted", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
        return ::il2cpp_utils::RunMethodThrow<bool, false>(*this, ___internal__method);
      }
      // System.Void .ctor(System.Threading.Tasks.Task`1<TResult> task, System.Boolean continueOnCapturedContext)
      // Offset: 0xFFFFFFFF
      // template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      // ABORTED: conflicts with another method.  ConfiguredTaskAwaiter(System::Threading::Tasks::Task_1<TResult>* task, bool continueOnCapturedContext)
      // public System.Void OnCompleted(System.Action continuation)
      // Offset: 0xFFFFFFFF
      void OnCompleted(System::Action* continuation) {
        static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1::ConfiguredTaskAwaiter::OnCompleted");
        auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "OnCompleted", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(continuation)})));
        ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, continuation);
      }
      // public System.Void UnsafeOnCompleted(System.Action continuation)
      // Offset: 0xFFFFFFFF
      void UnsafeOnCompleted(System::Action* continuation) {
        static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1::ConfiguredTaskAwaiter::UnsafeOnCompleted");
        auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "UnsafeOnCompleted", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(continuation)})));
        ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, continuation);
      }
      // public TResult GetResult()
      // Offset: 0xFFFFFFFF
      TResult GetResult() {
        static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1::ConfiguredTaskAwaiter::GetResult");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "GetResult", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
        return ::il2cpp_utils::RunMethodThrow<TResult, false>(*this, ___internal__method);
      }
    }; // System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/System.Runtime.CompilerServices.ConfiguredTaskAwaiter
    // Could not write size check! Type: System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/System.Runtime.CompilerServices.ConfiguredTaskAwaiter is generic, or has no fields that are valid for size checks!
    // private readonly System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/System.Runtime.CompilerServices.ConfiguredTaskAwaiter<TResult> m_configuredTaskAwaiter
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    typename System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<TResult>::ConfiguredTaskAwaiter m_configuredTaskAwaiter;
    // Creating value type constructor for type: ConfiguredTaskAwaitable_1
    constexpr ConfiguredTaskAwaitable_1(typename System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<TResult>::ConfiguredTaskAwaiter m_configuredTaskAwaiter_ = {}) noexcept : m_configuredTaskAwaiter{m_configuredTaskAwaiter_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating conversion operator: operator typename System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<TResult>::ConfiguredTaskAwaiter
    constexpr operator typename System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<TResult>::ConfiguredTaskAwaiter() const noexcept {
      return m_configuredTaskAwaiter;
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/System.Runtime.CompilerServices.ConfiguredTaskAwaiter<TResult> m_configuredTaskAwaiter
    typename System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<TResult>::ConfiguredTaskAwaiter& dyn_m_configuredTaskAwaiter() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1::dyn_m_configuredTaskAwaiter");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "m_configuredTaskAwaiter"))->offset;
      return *reinterpret_cast<typename System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<TResult>::ConfiguredTaskAwaiter*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // System.Void .ctor(System.Threading.Tasks.Task`1<TResult> task, System.Boolean continueOnCapturedContext)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    ConfiguredTaskAwaitable_1(System::Threading::Tasks::Task_1<TResult>* task, bool continueOnCapturedContext) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1::.ctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(task), ::il2cpp_utils::ExtractType(continueOnCapturedContext)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, task, continueOnCapturedContext);
    }
    // public System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/System.Runtime.CompilerServices.ConfiguredTaskAwaiter<TResult> GetAwaiter()
    // Offset: 0xFFFFFFFF
    typename System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<TResult>::ConfiguredTaskAwaiter GetAwaiter() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1::GetAwaiter");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "GetAwaiter", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<typename System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<TResult>::ConfiguredTaskAwaiter, false>(*this, ___internal__method);
    }
  }; // System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1
  // Could not write size check! Type: System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1, "System.Runtime.CompilerServices", "ConfiguredTaskAwaitable`1");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
