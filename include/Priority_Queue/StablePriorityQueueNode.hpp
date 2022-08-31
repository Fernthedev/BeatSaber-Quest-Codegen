// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Priority_Queue.FastPriorityQueueNode
#include "Priority_Queue/FastPriorityQueueNode.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Priority_Queue
namespace Priority_Queue {
  // Forward declaring type: StablePriorityQueueNode
  class StablePriorityQueueNode;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Priority_Queue::StablePriorityQueueNode);
DEFINE_IL2CPP_ARG_TYPE(::Priority_Queue::StablePriorityQueueNode*, "Priority_Queue", "StablePriorityQueueNode");
// Type namespace: Priority_Queue
namespace Priority_Queue {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Priority_Queue.StablePriorityQueueNode
  // [TokenAttribute] Offset: FFFFFFFF
  class StablePriorityQueueNode : public ::Priority_Queue::FastPriorityQueueNode {
    public:
    public:
    // private System.Int64 <InsertionIndex>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    int64_t InsertionIndex;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    public:
    // Creating conversion operator: operator int64_t
    constexpr operator int64_t() const noexcept {
      return InsertionIndex;
    }
    // Get instance field reference: private System.Int64 <InsertionIndex>k__BackingField
    [[deprecated("Use field access instead!")]] int64_t& dyn_$InsertionIndex$k__BackingField();
    // public System.Int64 get_InsertionIndex()
    // Offset: 0x1408A64
    int64_t get_InsertionIndex();
    // System.Void set_InsertionIndex(System.Int64 value)
    // Offset: 0x1408A6C
    void set_InsertionIndex(int64_t value);
    // public System.Void .ctor()
    // Offset: 0x1408A74
    // Implemented from: Priority_Queue.FastPriorityQueueNode
    // Base method: System.Void FastPriorityQueueNode::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StablePriorityQueueNode* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Priority_Queue::StablePriorityQueueNode::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StablePriorityQueueNode*, creationType>()));
    }
  }; // Priority_Queue.StablePriorityQueueNode
  #pragma pack(pop)
  static check_size<sizeof(StablePriorityQueueNode), 24 + sizeof(int64_t)> __Priority_Queue_StablePriorityQueueNodeSizeCheck;
  static_assert(sizeof(StablePriorityQueueNode) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Priority_Queue::StablePriorityQueueNode::get_InsertionIndex
// Il2CppName: get_InsertionIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (Priority_Queue::StablePriorityQueueNode::*)()>(&Priority_Queue::StablePriorityQueueNode::get_InsertionIndex)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Priority_Queue::StablePriorityQueueNode*), "get_InsertionIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Priority_Queue::StablePriorityQueueNode::set_InsertionIndex
// Il2CppName: set_InsertionIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Priority_Queue::StablePriorityQueueNode::*)(int64_t)>(&Priority_Queue::StablePriorityQueueNode::set_InsertionIndex)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Priority_Queue::StablePriorityQueueNode*), "set_InsertionIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Priority_Queue::StablePriorityQueueNode::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
