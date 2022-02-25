// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: SparselyPopulatedArrayFragment`1<T>
  template<typename T>
  class SparselyPopulatedArrayFragment_1;
}
// Completed forward declares
// Type namespace: System.Threading
namespace System::Threading {
  // Forward declaring type: SparselyPopulatedArrayAddInfo`1<T>
  template<typename T>
  struct SparselyPopulatedArrayAddInfo_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(System::Threading::SparselyPopulatedArrayAddInfo_1, "System.Threading", "SparselyPopulatedArrayAddInfo`1");
// Type namespace: System.Threading
namespace System::Threading {
  // WARNING Size may be invalid!
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Threading.SparselyPopulatedArrayAddInfo`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  struct SparselyPopulatedArrayAddInfo_1/*, public System::ValueType*/ {
    public:
    public:
    // private System.Threading.SparselyPopulatedArrayFragment`1<T> m_source
    // Size: 0x8
    // Offset: 0x0
    System::Threading::SparselyPopulatedArrayFragment_1<T>* m_source;
    // Field size check
    static_assert(sizeof(System::Threading::SparselyPopulatedArrayFragment_1<T>*) == 0x8);
    // private System.Int32 m_index
    // Size: 0x4
    // Offset: 0x0
    int m_index;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: SparselyPopulatedArrayAddInfo_1
    constexpr SparselyPopulatedArrayAddInfo_1(System::Threading::SparselyPopulatedArrayFragment_1<T>* m_source_ = {}, int m_index_ = {}) noexcept : m_source{m_source_}, m_index{m_index_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Threading.SparselyPopulatedArrayFragment`1<T> m_source
    System::Threading::SparselyPopulatedArrayFragment_1<T>*& dyn_m_source() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::SparselyPopulatedArrayAddInfo_1::dyn_m_source");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "m_source"))->offset;
      return *reinterpret_cast<System::Threading::SparselyPopulatedArrayFragment_1<T>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Int32 m_index
    int& dyn_m_index() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::SparselyPopulatedArrayAddInfo_1::dyn_m_index");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "m_index"))->offset;
      return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // System.Threading.SparselyPopulatedArrayFragment`1<T> get_Source()
    // Offset: 0xFFFFFFFF
    System::Threading::SparselyPopulatedArrayFragment_1<T>* get_Source() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::SparselyPopulatedArrayAddInfo_1::get_Source");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "get_Source", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<System::Threading::SparselyPopulatedArrayFragment_1<T>*, false>(this, ___internal__method);
    }
    // System.Int32 get_Index()
    // Offset: 0xFFFFFFFF
    int get_Index() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::SparselyPopulatedArrayAddInfo_1::get_Index");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "get_Index", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method);
    }
    // System.Void .ctor(System.Threading.SparselyPopulatedArrayFragment`1<T> source, System.Int32 index)
    // Offset: 0xFFFFFFFF
    // ABORTED: conflicts with another method.  SparselyPopulatedArrayAddInfo_1(System::Threading::SparselyPopulatedArrayFragment_1<T>* source, int index)
  }; // System.Threading.SparselyPopulatedArrayAddInfo`1
  // Could not write size check! Type: System.Threading.SparselyPopulatedArrayAddInfo`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
