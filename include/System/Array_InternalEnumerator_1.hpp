// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Array
#include "System/Array.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System
namespace System {
  // WARNING Size may be invalid!
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Array/System.InternalEnumerator`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  struct Array::InternalEnumerator_1/*, public System::ValueType, public System::Collections::Generic::IEnumerator_1<T>*/ {
    public:
    // private readonly System.Array array
    // Size: 0x8
    // Offset: 0x0
    System::Array* array;
    // Field size check
    static_assert(sizeof(System::Array*) == 0x8);
    // private System.Int32 idx
    // Size: 0x4
    // Offset: 0x0
    int idx;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: InternalEnumerator_1
    constexpr InternalEnumerator_1(System::Array* array_ = {}, int idx_ = {}) noexcept : array{array_}, idx{idx_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<T>
    operator System::Collections::Generic::IEnumerator_1<T>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<T>*>(this);
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly System.Array array
    System::Array*& dyn_array() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Array::InternalEnumerator_1::dyn_array");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "array"))->offset;
      return *reinterpret_cast<System::Array**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Int32 idx
    int& dyn_idx() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Array::InternalEnumerator_1::dyn_idx");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "idx"))->offset;
      return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public T get_Current()
    // Offset: 0xFFFFFFFF
    T get_Current() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Array::InternalEnumerator_1::get_Current");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "get_Current", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<T, false>(*this, ___internal__method);
    }
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0xFFFFFFFF
    ::Il2CppObject* System_Collections_IEnumerator_get_Current() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Array::InternalEnumerator_1::System.Collections.IEnumerator.get_Current");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<::Il2CppObject*, false>(*this, ___internal__method);
    }
    // System.Void .ctor(System.Array array)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    InternalEnumerator_1(System::Array* array) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Array::InternalEnumerator_1::.ctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(array)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, array);
    }
    // public System.Void Dispose()
    // Offset: 0xFFFFFFFF
    void Dispose() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Array::InternalEnumerator_1::Dispose");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "Dispose", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method);
    }
    // public System.Boolean MoveNext()
    // Offset: 0xFFFFFFFF
    bool MoveNext() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Array::InternalEnumerator_1::MoveNext");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(*this, ___internal__method);
    }
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0xFFFFFFFF
    void System_Collections_IEnumerator_Reset() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Array::InternalEnumerator_1::System.Collections.IEnumerator.Reset");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method);
    }
  }; // System.Array/System.InternalEnumerator`1
  // Could not write size check! Type: System.Array/System.InternalEnumerator`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(System::Array::InternalEnumerator_1, "System", "Array/InternalEnumerator`1");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
