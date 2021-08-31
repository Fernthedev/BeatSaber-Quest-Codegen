// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Linq
namespace System::Linq {
  // Forward declaring type: IGrouping`2<TKey, TElement>
  template<typename TKey, typename TElement>
  class IGrouping_2;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEqualityComparer`1<T>
  template<typename T>
  class IEqualityComparer_1;
  // Forward declaring type: IEnumerator`1<T>
  template<typename T>
  class IEnumerator_1;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: System.Linq
namespace System::Linq {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Linq.GroupedEnumerable`3
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename TSource, typename TKey, typename TElement>
  class GroupedEnumerable_3 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerable_1<System::Linq::IGrouping_2<TKey, TElement>*>*/ {
    public:
    // private System.Collections.Generic.IEnumerable`1<TSource> source
    // Size: 0x8
    // Offset: 0x0
    System::Collections::Generic::IEnumerable_1<TSource>* source;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::IEnumerable_1<TSource>*) == 0x8);
    // private System.Func`2<TSource,TKey> keySelector
    // Size: 0x8
    // Offset: 0x0
    System::Func_2<TSource, TKey>* keySelector;
    // Field size check
    static_assert(sizeof(System::Func_2<TSource, TKey>*) == 0x8);
    // private System.Func`2<TSource,TElement> elementSelector
    // Size: 0x8
    // Offset: 0x0
    System::Func_2<TSource, TElement>* elementSelector;
    // Field size check
    static_assert(sizeof(System::Func_2<TSource, TElement>*) == 0x8);
    // private System.Collections.Generic.IEqualityComparer`1<TKey> comparer
    // Size: 0x8
    // Offset: 0x0
    System::Collections::Generic::IEqualityComparer_1<TKey>* comparer;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::IEqualityComparer_1<TKey>*) == 0x8);
    // Creating value type constructor for type: GroupedEnumerable_3
    GroupedEnumerable_3(System::Collections::Generic::IEnumerable_1<TSource>* source_ = {}, System::Func_2<TSource, TKey>* keySelector_ = {}, System::Func_2<TSource, TElement>* elementSelector_ = {}, System::Collections::Generic::IEqualityComparer_1<TKey>* comparer_ = {}) noexcept : source{source_}, keySelector{keySelector_}, elementSelector{elementSelector_}, comparer{comparer_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerable_1<System::Linq::IGrouping_2<TKey, TElement>*>
    operator System::Collections::Generic::IEnumerable_1<System::Linq::IGrouping_2<TKey, TElement>*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerable_1<System::Linq::IGrouping_2<TKey, TElement>*>*>(this);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Collections.Generic.IEnumerable`1<TSource> source
    System::Collections::Generic::IEnumerable_1<TSource>*& dyn_source() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::GroupedEnumerable_3::dyn_source");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "source"))->offset;
      return *reinterpret_cast<System::Collections::Generic::IEnumerable_1<TSource>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Func`2<TSource,TKey> keySelector
    System::Func_2<TSource, TKey>*& dyn_keySelector() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::GroupedEnumerable_3::dyn_keySelector");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "keySelector"))->offset;
      return *reinterpret_cast<System::Func_2<TSource, TKey>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Func`2<TSource,TElement> elementSelector
    System::Func_2<TSource, TElement>*& dyn_elementSelector() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::GroupedEnumerable_3::dyn_elementSelector");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "elementSelector"))->offset;
      return *reinterpret_cast<System::Func_2<TSource, TElement>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Collections.Generic.IEqualityComparer`1<TKey> comparer
    System::Collections::Generic::IEqualityComparer_1<TKey>*& dyn_comparer() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::GroupedEnumerable_3::dyn_comparer");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "comparer"))->offset;
      return *reinterpret_cast<System::Collections::Generic::IEqualityComparer_1<TKey>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Void .ctor(System.Collections.Generic.IEnumerable`1<TSource> source, System.Func`2<TSource,TKey> keySelector, System.Func`2<TSource,TElement> elementSelector, System.Collections.Generic.IEqualityComparer`1<TKey> comparer)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GroupedEnumerable_3<TSource, TKey, TElement>* New_ctor(System::Collections::Generic::IEnumerable_1<TSource>* source, System::Func_2<TSource, TKey>* keySelector, System::Func_2<TSource, TElement>* elementSelector, System::Collections::Generic::IEqualityComparer_1<TKey>* comparer) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::GroupedEnumerable_3::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GroupedEnumerable_3<TSource, TKey, TElement>*, creationType>(source, keySelector, elementSelector, comparer)));
    }
    // public System.Collections.Generic.IEnumerator`1<System.Linq.IGrouping`2<TKey,TElement>> GetEnumerator()
    // Offset: 0xFFFFFFFF
    System::Collections::Generic::IEnumerator_1<System::Linq::IGrouping_2<TKey, TElement>*>* GetEnumerator() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::GroupedEnumerable_3::GetEnumerator");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<System::Collections::Generic::IEnumerator_1<System::Linq::IGrouping_2<TKey, TElement>*>*, false>(___instance_arg, ___internal__method);
    }
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0xFFFFFFFF
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::GroupedEnumerable_3::System.Collections.IEnumerable.GetEnumerator");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<System::Collections::IEnumerator*, false>(___instance_arg, ___internal__method);
    }
  }; // System.Linq.GroupedEnumerable`3
  // Could not write size check! Type: System.Linq.GroupedEnumerable`3 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Linq::GroupedEnumerable_3, "System.Linq", "GroupedEnumerable`3");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
