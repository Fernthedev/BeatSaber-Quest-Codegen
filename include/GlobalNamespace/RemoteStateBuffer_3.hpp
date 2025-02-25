// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: StateBuffer`3
#include "GlobalNamespace/StateBuffer_3.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IStateTable`3<TStateTable, TType, TState>
  template<typename TStateTable, typename TType, typename TState>
  class IStateTable_3;
  // Skipping declaration: IEquatableByReference`1 because it is already included!
}
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: INetSerializable
  class INetSerializable;
}
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: ValueType because it is already included!
  // Skipping declaration: IConvertible because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: RemoteStateBuffer`3
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename TStateTable, typename TType, typename TState>
  class RemoteStateBuffer_3 : public GlobalNamespace::StateBuffer_3<TStateTable, TType, TState> {
    public:
    // private StateBuffer`3/TimestampedStateTable<TStateTable,TType,TState>[] _receivedStates
    // Size: 0x8
    // Offset: 0x0
    ::Array<typename GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>::TimestampedStateTable>* receivedStates;
    // Field size check
    static_assert(sizeof(::Array<typename GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>::TimestampedStateTable>*) == 0x8);
    // private StateBuffer`3/TimestampedStateTable<TStateTable,TType,TState>[] _receivedDeltas
    // Size: 0x8
    // Offset: 0x0
    ::Array<typename GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>::TimestampedStateTable>* receivedDeltas;
    // Field size check
    static_assert(sizeof(::Array<typename GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>::TimestampedStateTable>*) == 0x8);
    // private System.Int32 _receivedStateIndex
    // Size: 0x4
    // Offset: 0x0
    int receivedStateIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _receivedDeltaIndex
    // Size: 0x4
    // Offset: 0x0
    int receivedDeltaIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: RemoteStateBuffer_3
    RemoteStateBuffer_3(::Array<typename GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>::TimestampedStateTable>* receivedStates_ = {}, ::Array<typename GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>::TimestampedStateTable>* receivedDeltas_ = {}, int receivedStateIndex_ = {}, int receivedDeltaIndex_ = {}) noexcept : receivedStates{receivedStates_}, receivedDeltas{receivedDeltas_}, receivedStateIndex{receivedStateIndex_}, receivedDeltaIndex{receivedDeltaIndex_} {}
    // Autogenerated static field getter
    // Get static field: static private System.Int32 kMaxStateQueueSize
    static int _get_kMaxStateQueueSize() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::RemoteStateBuffer_3::_get_kMaxStateQueueSize");
      return THROW_UNLESS((il2cpp_utils::GetFieldValue<int>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RemoteStateBuffer_3<TStateTable, TType, TState>*>::get(), "kMaxStateQueueSize")));
    }
    // Autogenerated static field setter
    // Set static field: static private System.Int32 kMaxStateQueueSize
    static void _set_kMaxStateQueueSize(int value) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::RemoteStateBuffer_3::_set_kMaxStateQueueSize");
      THROW_UNLESS((il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RemoteStateBuffer_3<TStateTable, TType, TState>*>::get(), "kMaxStateQueueSize", value)));
    }
    // Autogenerated static field getter
    // Get static field: static private System.Int32 kMaxDeltaQueueSize
    static int _get_kMaxDeltaQueueSize() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::RemoteStateBuffer_3::_get_kMaxDeltaQueueSize");
      return THROW_UNLESS((il2cpp_utils::GetFieldValue<int>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RemoteStateBuffer_3<TStateTable, TType, TState>*>::get(), "kMaxDeltaQueueSize")));
    }
    // Autogenerated static field setter
    // Set static field: static private System.Int32 kMaxDeltaQueueSize
    static void _set_kMaxDeltaQueueSize(int value) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::RemoteStateBuffer_3::_set_kMaxDeltaQueueSize");
      THROW_UNLESS((il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RemoteStateBuffer_3<TStateTable, TType, TState>*>::get(), "kMaxDeltaQueueSize", value)));
    }
    // Autogenerated instance field getter
    // Get instance field: private StateBuffer`3/TimestampedStateTable<TStateTable,TType,TState>[] _receivedStates
    ::Array<typename GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>::TimestampedStateTable>*& dyn__receivedStates() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::RemoteStateBuffer_3::dyn__receivedStates");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_receivedStates"))->offset;
      return *reinterpret_cast<::Array<typename GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>::TimestampedStateTable>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private StateBuffer`3/TimestampedStateTable<TStateTable,TType,TState>[] _receivedDeltas
    ::Array<typename GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>::TimestampedStateTable>*& dyn__receivedDeltas() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::RemoteStateBuffer_3::dyn__receivedDeltas");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_receivedDeltas"))->offset;
      return *reinterpret_cast<::Array<typename GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>::TimestampedStateTable>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Int32 _receivedStateIndex
    int& dyn__receivedStateIndex() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::RemoteStateBuffer_3::dyn__receivedStateIndex");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_receivedStateIndex"))->offset;
      return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Int32 _receivedDeltaIndex
    int& dyn__receivedDeltaIndex() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::RemoteStateBuffer_3::dyn__receivedDeltaIndex");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_receivedDeltaIndex"))->offset;
      return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Void PushState(SyncStateId id, TStateTable state, System.Single time)
    // Offset: 0xFFFFFFFF
    void PushState(GlobalNamespace::SyncStateId id, TStateTable state, float time) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::RemoteStateBuffer_3::PushState");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "PushState", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(id), ::il2cpp_utils::ExtractType(state), ::il2cpp_utils::ExtractType(time)})));
      auto ___instance_arg = this;
      ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method, id, state, time);
    }
    // public System.Void PushDelta(SyncStateId baseId, TStateTable delta, System.Single timeOffset)
    // Offset: 0xFFFFFFFF
    void PushDelta(GlobalNamespace::SyncStateId baseId, TStateTable delta, float timeOffset) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::RemoteStateBuffer_3::PushDelta");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "PushDelta", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(baseId), ::il2cpp_utils::ExtractType(delta), ::il2cpp_utils::ExtractType(timeOffset)})));
      auto ___instance_arg = this;
      ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method, baseId, delta, timeOffset);
    }
    // private System.Void ProcessQueue()
    // Offset: 0xFFFFFFFF
    void ProcessQueue() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::RemoteStateBuffer_3::ProcessQueue");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "ProcessQueue", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      auto ___instance_arg = this;
      ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method);
    }
    // public System.Void .ctor(System.Int32 size, StateBuffer`3/InterpolationDelegate<TStateTable,TType,TState> interpolator, StateBuffer`3/SmoothingDelegate<TStateTable,TType,TState> smoother)
    // Offset: 0xFFFFFFFF
    // Implemented from: StateBuffer`3
    // Base method: System.Void StateBuffer_3::.ctor(System.Int32 size, StateBuffer`3/InterpolationDelegate<TStateTable,TType,TState> interpolator, StateBuffer`3/SmoothingDelegate<TStateTable,TType,TState> smoother)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RemoteStateBuffer_3<TStateTable, TType, TState>* New_ctor(int size, typename GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>::InterpolationDelegate* interpolator, typename GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>::SmoothingDelegate* smoother) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::RemoteStateBuffer_3::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RemoteStateBuffer_3<TStateTable, TType, TState>*, creationType>(size, interpolator, smoother)));
    }
  }; // RemoteStateBuffer`3
  // Could not write size check! Type: RemoteStateBuffer`3 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::RemoteStateBuffer_3, "", "RemoteStateBuffer`3");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
