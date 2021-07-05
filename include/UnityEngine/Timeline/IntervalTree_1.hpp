// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Timeline.IntervalTreeNode
#include "UnityEngine/Timeline/IntervalTreeNode.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
// Including type: System.Int64
#include "System/Int64.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Timeline
namespace UnityEngine::Timeline {
  // Skipping declaration: Entry because it is already included!
  // Forward declaring type: IInterval
  class IInterval;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.Timeline.IntervalTree`1
  template<typename T>
  class IntervalTree_1 : public ::Il2CppObject {
    public:
    // Nested type: UnityEngine::Timeline::IntervalTree_1::Entry<T>
    struct Entry;
    // WARNING Size may be invalid!
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: UnityEngine.Timeline.IntervalTree`1/Entry
    struct Entry : public ::il2cpp_utils::il2cpp_type_check::NestedType/*, public System::ValueType*/ {
      public:
      using declaring_type = IntervalTree_1<T>*;
      static constexpr std::string_view NESTED_NAME = "Entry";
      // public System.Int64 intervalStart
      // Size: 0x8
      // Offset: 0x0
      int64_t intervalStart;
      // Field size check
      static_assert(sizeof(int64_t) == 0x8);
      // public System.Int64 intervalEnd
      // Size: 0x8
      // Offset: 0x0
      int64_t intervalEnd;
      // Field size check
      static_assert(sizeof(int64_t) == 0x8);
      // public T item
      // Size: 0xFFFFFFFF
      // Offset: 0x0
      T item;
      // Creating value type constructor for type: Entry
      constexpr Entry(int64_t intervalStart_ = {}, int64_t intervalEnd_ = {}, T item_ = {}) noexcept : intervalStart{intervalStart_}, intervalEnd{intervalEnd_}, item{item_} {}
      // Creating interface conversion operator: operator System::ValueType
      operator System::ValueType() noexcept {
        return *reinterpret_cast<System::ValueType*>(this);
      }
    }; // UnityEngine.Timeline.IntervalTree`1/Entry
    // Could not write size check! Type: UnityEngine.Timeline.IntervalTree`1/Entry is generic, or has no fields that are valid for size checks!
    // private readonly System.Collections.Generic.List`1<UnityEngine.Timeline.IntervalTree`1/Entry<T>> m_Entries
    // Size: 0x8
    // Offset: 0x0
    System::Collections::Generic::List_1<typename UnityEngine::Timeline::IntervalTree_1<T>::Entry>* m_Entries;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<typename UnityEngine::Timeline::IntervalTree_1<T>::Entry>*) == 0x8);
    // private readonly System.Collections.Generic.List`1<UnityEngine.Timeline.IntervalTreeNode> m_Nodes
    // Size: 0x8
    // Offset: 0x0
    System::Collections::Generic::List_1<UnityEngine::Timeline::IntervalTreeNode>* m_Nodes;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<UnityEngine::Timeline::IntervalTreeNode>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDD8644
    // private System.Boolean <dirty>k__BackingField
    // Size: 0x1
    // Offset: 0x0
    bool dirty;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: IntervalTree_1
    IntervalTree_1(System::Collections::Generic::List_1<typename UnityEngine::Timeline::IntervalTree_1<T>::Entry>* m_Entries_ = {}, System::Collections::Generic::List_1<UnityEngine::Timeline::IntervalTreeNode>* m_Nodes_ = {}, bool dirty_ = {}) noexcept : m_Entries{m_Entries_}, m_Nodes{m_Nodes_}, dirty{dirty_} {}
    // Autogenerated static field getter
    // Get static field: static private System.Int32 kMinNodeSize
    static int _get_kMinNodeSize() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Timeline::IntervalTree_1::_get_kMinNodeSize");
      return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<IntervalTree_1<T>*>::get(), "kMinNodeSize"));
    }
    // Autogenerated static field setter
    // Set static field: static private System.Int32 kMinNodeSize
    static void _set_kMinNodeSize(int value) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Timeline::IntervalTree_1::_set_kMinNodeSize");
      THROW_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<IntervalTree_1<T>*>::get(), "kMinNodeSize", value));
    }
    // Autogenerated static field getter
    // Get static field: static private System.Int32 kInvalidNode
    static int _get_kInvalidNode() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Timeline::IntervalTree_1::_get_kInvalidNode");
      return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<IntervalTree_1<T>*>::get(), "kInvalidNode"));
    }
    // Autogenerated static field setter
    // Set static field: static private System.Int32 kInvalidNode
    static void _set_kInvalidNode(int value) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Timeline::IntervalTree_1::_set_kInvalidNode");
      THROW_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<IntervalTree_1<T>*>::get(), "kInvalidNode", value));
    }
    // Autogenerated static field getter
    // Get static field: static private System.Int64 kCenterUnknown
    static int64_t _get_kCenterUnknown() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Timeline::IntervalTree_1::_get_kCenterUnknown");
      return THROW_UNLESS(il2cpp_utils::GetFieldValue<int64_t>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<IntervalTree_1<T>*>::get(), "kCenterUnknown"));
    }
    // Autogenerated static field setter
    // Set static field: static private System.Int64 kCenterUnknown
    static void _set_kCenterUnknown(int64_t value) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Timeline::IntervalTree_1::_set_kCenterUnknown");
      THROW_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<IntervalTree_1<T>*>::get(), "kCenterUnknown", value));
    }
    // public System.Boolean get_dirty()
    // Offset: 0xFFFFFFFF
    bool get_dirty() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Timeline::IntervalTree_1::get_dirty");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_dirty", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
    }
    // System.Void set_dirty(System.Boolean value)
    // Offset: 0xFFFFFFFF
    void set_dirty(bool value) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Timeline::IntervalTree_1::set_dirty");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "set_dirty", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
    }
    // public System.Void Add(T item)
    // Offset: 0xFFFFFFFF
    void Add(T item) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Timeline::IntervalTree_1::Add");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Add", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(item)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, item);
    }
    // public System.Void IntersectsWith(System.Int64 value, System.Collections.Generic.List`1<T> results)
    // Offset: 0xFFFFFFFF
    void IntersectsWith(int64_t value, System::Collections::Generic::List_1<T>* results) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Timeline::IntervalTree_1::IntersectsWith");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "IntersectsWith", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value), ::il2cpp_utils::ExtractType(results)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value, results);
    }
    // public System.Void IntersectsWithRange(System.Int64 start, System.Int64 end, System.Collections.Generic.List`1<T> results)
    // Offset: 0xFFFFFFFF
    void IntersectsWithRange(int64_t start, int64_t end, System::Collections::Generic::List_1<T>* results) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Timeline::IntervalTree_1::IntersectsWithRange");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "IntersectsWithRange", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(start), ::il2cpp_utils::ExtractType(end), ::il2cpp_utils::ExtractType(results)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, start, end, results);
    }
    // public System.Void UpdateIntervals()
    // Offset: 0xFFFFFFFF
    void UpdateIntervals() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Timeline::IntervalTree_1::UpdateIntervals");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "UpdateIntervals", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
    }
    // private System.Void Query(UnityEngine.Timeline.IntervalTreeNode intervalTreeNode, System.Int64 value, System.Collections.Generic.List`1<T> results)
    // Offset: 0xFFFFFFFF
    void Query(UnityEngine::Timeline::IntervalTreeNode intervalTreeNode, int64_t value, System::Collections::Generic::List_1<T>* results) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Timeline::IntervalTree_1::Query");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Query", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(intervalTreeNode), ::il2cpp_utils::ExtractType(value), ::il2cpp_utils::ExtractType(results)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, intervalTreeNode, value, results);
    }
    // private System.Void QueryRange(UnityEngine.Timeline.IntervalTreeNode intervalTreeNode, System.Int64 start, System.Int64 end, System.Collections.Generic.List`1<T> results)
    // Offset: 0xFFFFFFFF
    void QueryRange(UnityEngine::Timeline::IntervalTreeNode intervalTreeNode, int64_t start, int64_t end, System::Collections::Generic::List_1<T>* results) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Timeline::IntervalTree_1::QueryRange");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "QueryRange", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(intervalTreeNode), ::il2cpp_utils::ExtractType(start), ::il2cpp_utils::ExtractType(end), ::il2cpp_utils::ExtractType(results)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, intervalTreeNode, start, end, results);
    }
    // private System.Void Rebuild()
    // Offset: 0xFFFFFFFF
    void Rebuild() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Timeline::IntervalTree_1::Rebuild");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Rebuild", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
    }
    // private System.Int32 Rebuild(System.Int32 start, System.Int32 end)
    // Offset: 0xFFFFFFFF
    int Rebuild(int start, int end) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Timeline::IntervalTree_1::Rebuild");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Rebuild", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(start), ::il2cpp_utils::ExtractType(end)})));
      return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method, start, end);
    }
    // public System.Void Clear()
    // Offset: 0xFFFFFFFF
    void Clear() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Timeline::IntervalTree_1::Clear");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Clear", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IntervalTree_1<T>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Timeline::IntervalTree_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IntervalTree_1<T>*, creationType>()));
    }
  }; // UnityEngine.Timeline.IntervalTree`1
  // Could not write size check! Type: UnityEngine.Timeline.IntervalTree`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(UnityEngine::Timeline::IntervalTree_1, "UnityEngine.Timeline", "IntervalTree`1");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
