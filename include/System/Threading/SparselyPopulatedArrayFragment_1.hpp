// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Threading
namespace System::Threading {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Threading.SparselyPopulatedArrayFragment`1
  // [DefaultMemberAttribute] Offset: D7CD48
  template<typename T>
  class SparselyPopulatedArrayFragment_1 : public ::Il2CppObject {
    public:
    // readonly T[] m_elements
    // Size: 0x8
    // Offset: 0x0
    ::Array<T>* m_elements;
    // Field size check
    static_assert(sizeof(::Array<T>*) == 0x8);
    // System.Int32 m_freeCount
    // Size: 0x4
    // Offset: 0x0
    int m_freeCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Threading.SparselyPopulatedArrayFragment`1<T> m_next
    // Size: 0x8
    // Offset: 0x0
    System::Threading::SparselyPopulatedArrayFragment_1<T>* m_next;
    // Field size check
    static_assert(sizeof(System::Threading::SparselyPopulatedArrayFragment_1<T>*) == 0x8);
    // System.Threading.SparselyPopulatedArrayFragment`1<T> m_prev
    // Size: 0x8
    // Offset: 0x0
    System::Threading::SparselyPopulatedArrayFragment_1<T>* m_prev;
    // Field size check
    static_assert(sizeof(System::Threading::SparselyPopulatedArrayFragment_1<T>*) == 0x8);
    // Creating value type constructor for type: SparselyPopulatedArrayFragment_1
    SparselyPopulatedArrayFragment_1(::Array<T>* m_elements_ = {}, int m_freeCount_ = {}, System::Threading::SparselyPopulatedArrayFragment_1<T>* m_next_ = {}, System::Threading::SparselyPopulatedArrayFragment_1<T>* m_prev_ = {}) noexcept : m_elements{m_elements_}, m_freeCount{m_freeCount_}, m_next{m_next_}, m_prev{m_prev_} {}
    // System.Void .ctor(System.Int32 size)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SparselyPopulatedArrayFragment_1<T>* New_ctor(int size) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::SparselyPopulatedArrayFragment_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SparselyPopulatedArrayFragment_1<T>*, creationType>(size)));
    }
    // System.Void .ctor(System.Int32 size, System.Threading.SparselyPopulatedArrayFragment`1<T> prev)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SparselyPopulatedArrayFragment_1<T>* New_ctor(int size, System::Threading::SparselyPopulatedArrayFragment_1<T>* prev) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::SparselyPopulatedArrayFragment_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SparselyPopulatedArrayFragment_1<T>*, creationType>(size, prev)));
    }
    // T get_Item(System.Int32 index)
    // Offset: 0xFFFFFFFF
    T get_Item(int index) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::SparselyPopulatedArrayFragment_1::get_Item");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_Item", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(index)})));
      return ::il2cpp_utils::RunMethodThrow<T, false>(this, ___internal__method, index);
    }
    // System.Int32 get_Length()
    // Offset: 0xFFFFFFFF
    int get_Length() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::SparselyPopulatedArrayFragment_1::get_Length");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_Length", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method);
    }
    // System.Threading.SparselyPopulatedArrayFragment`1<T> get_Prev()
    // Offset: 0xFFFFFFFF
    System::Threading::SparselyPopulatedArrayFragment_1<T>* get_Prev() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::SparselyPopulatedArrayFragment_1::get_Prev");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_Prev", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<System::Threading::SparselyPopulatedArrayFragment_1<T>*, false>(this, ___internal__method);
    }
    // T SafeAtomicRemove(System.Int32 index, T expectedElement)
    // Offset: 0xFFFFFFFF
    T SafeAtomicRemove(int index, T expectedElement) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::SparselyPopulatedArrayFragment_1::SafeAtomicRemove");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "SafeAtomicRemove", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(index), ::il2cpp_utils::ExtractType(expectedElement)})));
      return ::il2cpp_utils::RunMethodThrow<T, false>(this, ___internal__method, index, expectedElement);
    }
  }; // System.Threading.SparselyPopulatedArrayFragment`1
  // Could not write size check! Type: System.Threading.SparselyPopulatedArrayFragment`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Threading::SparselyPopulatedArrayFragment_1, "System.Threading", "SparselyPopulatedArrayFragment`1");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
