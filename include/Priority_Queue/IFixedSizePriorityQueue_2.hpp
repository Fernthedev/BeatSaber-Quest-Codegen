// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Priority_Queue.IPriorityQueue`2
#include "Priority_Queue/IPriorityQueue_2.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IComparable`1<T>
  template<typename T>
  class IComparable_1;
}
// Completed forward declares
// Type namespace: Priority_Queue
namespace Priority_Queue {
  // WARNING Size may be invalid!
  // Autogenerated type: Priority_Queue.IFixedSizePriorityQueue`2
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename TItem, typename TPriority>
  class IFixedSizePriorityQueue_2/*, public Priority_Queue::IPriorityQueue_2<TItem, TPriority>*/ {
    public:
    // Creating value type constructor for type: IFixedSizePriorityQueue_2
    IFixedSizePriorityQueue_2() noexcept {}
    // Creating interface conversion operator: operator Priority_Queue::IPriorityQueue_2<TItem, TPriority>
    operator Priority_Queue::IPriorityQueue_2<TItem, TPriority>() noexcept {
      return *reinterpret_cast<Priority_Queue::IPriorityQueue_2<TItem, TPriority>*>(this);
    }
    // public System.Int32 get_MaxSize()
    // Offset: 0xFFFFFFFF
    int get_MaxSize() {
      static auto ___internal__logger = ::Logger::get().WithContext("Priority_Queue::IFixedSizePriorityQueue_2::get_MaxSize");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_MaxSize", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<int, false>(___instance_arg, ___internal__method);
    }
    // public System.Void Resize(System.Int32 maxNodes)
    // Offset: 0xFFFFFFFF
    void Resize(int maxNodes) {
      static auto ___internal__logger = ::Logger::get().WithContext("Priority_Queue::IFixedSizePriorityQueue_2::Resize");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Resize", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(maxNodes)})));
      auto ___instance_arg = this;
      ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method, maxNodes);
    }
    // public System.Void ResetNode(TItem node)
    // Offset: 0xFFFFFFFF
    void ResetNode(TItem node) {
      static auto ___internal__logger = ::Logger::get().WithContext("Priority_Queue::IFixedSizePriorityQueue_2::ResetNode");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "ResetNode", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(node)})));
      auto ___instance_arg = this;
      ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method, node);
    }
  }; // Priority_Queue.IFixedSizePriorityQueue`2
  // Could not write size check! Type: Priority_Queue.IFixedSizePriorityQueue`2 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Priority_Queue::IFixedSizePriorityQueue_2, "Priority_Queue", "IFixedSizePriorityQueue`2");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
