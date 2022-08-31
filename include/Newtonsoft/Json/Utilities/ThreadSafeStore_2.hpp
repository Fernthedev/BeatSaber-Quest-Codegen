// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Completed forward declares
// Type namespace: Newtonsoft.Json.Utilities
namespace Newtonsoft::Json::Utilities {
  // Forward declaring type: ThreadSafeStore`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class ThreadSafeStore_2;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Newtonsoft::Json::Utilities::ThreadSafeStore_2, "Newtonsoft.Json.Utilities", "ThreadSafeStore`2");
// Type namespace: Newtonsoft.Json.Utilities
namespace Newtonsoft::Json::Utilities {
  // WARNING Size may be invalid!
  // Autogenerated type: Newtonsoft.Json.Utilities.ThreadSafeStore`2
  // [TokenAttribute] Offset: FFFFFFFF
  // [PreserveAttribute] Offset: 10C1118
  template<typename TKey, typename TValue>
  class ThreadSafeStore_2 : public ::Il2CppObject {
    public:
    public:
    // private readonly System.Object _lock
    // Size: 0x8
    // Offset: 0x0
    ::Il2CppObject* lock;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<TKey,TValue> _store
    // Size: 0x8
    // Offset: 0x0
    ::System::Collections::Generic::Dictionary_2<TKey, TValue>* store;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<TKey, TValue>*) == 0x8);
    // private readonly System.Func`2<TKey,TValue> _creator
    // Size: 0x8
    // Offset: 0x0
    ::System::Func_2<TKey, TValue>* creator;
    // Field size check
    static_assert(sizeof(::System::Func_2<TKey, TValue>*) == 0x8);
    public:
    // Autogenerated instance field getter
    // Get instance field: private readonly System.Object _lock
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn__lock() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Utilities::ThreadSafeStore_2::dyn__lock");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_lock"))->offset;
      return *reinterpret_cast<::Il2CppObject**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Collections.Generic.Dictionary`2<TKey,TValue> _store
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<TKey, TValue>*& dyn__store() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Utilities::ThreadSafeStore_2::dyn__store");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_store"))->offset;
      return *reinterpret_cast<::System::Collections::Generic::Dictionary_2<TKey, TValue>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly System.Func`2<TKey,TValue> _creator
    [[deprecated("Use field access instead!")]] ::System::Func_2<TKey, TValue>*& dyn__creator() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Utilities::ThreadSafeStore_2::dyn__creator");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_creator"))->offset;
      return *reinterpret_cast<::System::Func_2<TKey, TValue>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Void .ctor(System.Func`2<TKey,TValue> creator)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ThreadSafeStore_2<TKey, TValue>* New_ctor(::System::Func_2<TKey, TValue>* creator) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Utilities::ThreadSafeStore_2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ThreadSafeStore_2<TKey, TValue>*, creationType>(creator)));
    }
    // public TValue Get(TKey key)
    // Offset: 0xFFFFFFFFFFFFFFFF
    TValue Get(TKey key) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Utilities::ThreadSafeStore_2::Get");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Get", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(key)})));
      return ::il2cpp_utils::RunMethodRethrow<TValue, false>(this, ___internal__method, key);
    }
    // private TValue AddValue(TKey key)
    // Offset: 0xFFFFFFFFFFFFFFFF
    TValue AddValue(TKey key) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Utilities::ThreadSafeStore_2::AddValue");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "AddValue", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(key)})));
      return ::il2cpp_utils::RunMethodRethrow<TValue, false>(this, ___internal__method, key);
    }
  }; // Newtonsoft.Json.Utilities.ThreadSafeStore`2
  // Could not write size check! Type: Newtonsoft.Json.Utilities.ThreadSafeStore`2 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
