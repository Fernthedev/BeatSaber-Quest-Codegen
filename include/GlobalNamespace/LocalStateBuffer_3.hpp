// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: StateBuffer`3
#include "GlobalNamespace/StateBuffer_3.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
  // Forward declaring type: LocalStateBuffer`3<TStateTable, TType, TState>
  template<typename TStateTable, typename TType, typename TState>
  class LocalStateBuffer_3;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::LocalStateBuffer_3, "", "LocalStateBuffer`3");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: LocalStateBuffer`3
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename TStateTable, typename TType, typename TState>
  class LocalStateBuffer_3 : public GlobalNamespace::StateBuffer_3<TStateTable, TType, TState> {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private StateBuffer`3/TimestampedStateTable<TStateTable,TType,TState> _current
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    typename GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>::TimestampedStateTable current;
    // private readonly System.Single _fullStateUpdateFrequency
    // Size: 0x4
    // Offset: 0x0
    float fullStateUpdateFrequency;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private readonly System.Single _deltaUpdateFrequency
    // Size: 0x4
    // Offset: 0x0
    float deltaUpdateFrequency;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Int32 _sentStateIndex
    // Size: 0x4
    // Offset: 0x0
    int sentStateIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _sentDeltaIndex
    // Size: 0x4
    // Offset: 0x0
    int sentDeltaIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private readonly StateBuffer`3/TimestampedStateTable<TStateTable,TType,TState>[] _sentStates
    // Size: 0x8
    // Offset: 0x0
    ::ArrayW<typename GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>::TimestampedStateTable> sentStates;
    // Field size check
    static_assert(sizeof(::ArrayW<typename GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>::TimestampedStateTable>) == 0x8);
    // private readonly StateBuffer`3/TimestampedStateTable<TStateTable,TType,TState>[] _sentDeltas
    // Size: 0x8
    // Offset: 0x0
    ::ArrayW<typename GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>::TimestampedStateTable> sentDeltas;
    // Field size check
    static_assert(sizeof(::ArrayW<typename GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>::TimestampedStateTable>) == 0x8);
    // private SyncStateId _lastSentSyncStateId
    // Size: 0x1
    // Offset: 0x0
    GlobalNamespace::SyncStateId lastSentSyncStateId;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SyncStateId) == 0x1);
    public:
    // Autogenerated static field getter
    // Get static field: static private System.Int32 kMaxSentStates
    static int _get_kMaxSentStates() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LocalStateBuffer_3::_get_kMaxSentStates");
      return THROW_UNLESS((il2cpp_utils::GetFieldValue<int>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LocalStateBuffer_3<TStateTable, TType, TState>*>::get(), "kMaxSentStates")));
    }
    // Autogenerated static field setter
    // Set static field: static private System.Int32 kMaxSentStates
    static void _set_kMaxSentStates(int value) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LocalStateBuffer_3::_set_kMaxSentStates");
      THROW_UNLESS((il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LocalStateBuffer_3<TStateTable, TType, TState>*>::get(), "kMaxSentStates", value)));
    }
    // Autogenerated static field getter
    // Get static field: static private System.Int32 kMaxSentDeltas
    static int _get_kMaxSentDeltas() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LocalStateBuffer_3::_get_kMaxSentDeltas");
      return THROW_UNLESS((il2cpp_utils::GetFieldValue<int>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LocalStateBuffer_3<TStateTable, TType, TState>*>::get(), "kMaxSentDeltas")));
    }
    // Autogenerated static field setter
    // Set static field: static private System.Int32 kMaxSentDeltas
    static void _set_kMaxSentDeltas(int value) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LocalStateBuffer_3::_set_kMaxSentDeltas");
      THROW_UNLESS((il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LocalStateBuffer_3<TStateTable, TType, TState>*>::get(), "kMaxSentDeltas", value)));
    }
    // Autogenerated instance field getter
    // Get instance field: private StateBuffer`3/TimestampedStateTable<TStateTable,TType,TState> _current
    typename GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>::TimestampedStateTable& dyn__current() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LocalStateBuffer_3::dyn__current");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_current"))->offset;
      return *reinterpret_cast<typename GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>::TimestampedStateTable*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly System.Single _fullStateUpdateFrequency
    float& dyn__fullStateUpdateFrequency() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LocalStateBuffer_3::dyn__fullStateUpdateFrequency");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_fullStateUpdateFrequency"))->offset;
      return *reinterpret_cast<float*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly System.Single _deltaUpdateFrequency
    float& dyn__deltaUpdateFrequency() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LocalStateBuffer_3::dyn__deltaUpdateFrequency");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_deltaUpdateFrequency"))->offset;
      return *reinterpret_cast<float*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Int32 _sentStateIndex
    int& dyn__sentStateIndex() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LocalStateBuffer_3::dyn__sentStateIndex");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_sentStateIndex"))->offset;
      return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Int32 _sentDeltaIndex
    int& dyn__sentDeltaIndex() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LocalStateBuffer_3::dyn__sentDeltaIndex");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_sentDeltaIndex"))->offset;
      return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly StateBuffer`3/TimestampedStateTable<TStateTable,TType,TState>[] _sentStates
    ::ArrayW<typename GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>::TimestampedStateTable>& dyn__sentStates() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LocalStateBuffer_3::dyn__sentStates");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_sentStates"))->offset;
      return *reinterpret_cast<::ArrayW<typename GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>::TimestampedStateTable>*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly StateBuffer`3/TimestampedStateTable<TStateTable,TType,TState>[] _sentDeltas
    ::ArrayW<typename GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>::TimestampedStateTable>& dyn__sentDeltas() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LocalStateBuffer_3::dyn__sentDeltas");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_sentDeltas"))->offset;
      return *reinterpret_cast<::ArrayW<typename GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>::TimestampedStateTable>*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private SyncStateId _lastSentSyncStateId
    GlobalNamespace::SyncStateId& dyn__lastSentSyncStateId() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LocalStateBuffer_3::dyn__lastSentSyncStateId");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_lastSentSyncStateId"))->offset;
      return *reinterpret_cast<GlobalNamespace::SyncStateId*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Void .ctor(System.Single fullStateUpdateFrequency, System.Single deltaUpdateFrequency, System.Int32 size, StateBuffer`3/InterpolationDelegate<TStateTable,TType,TState> interpolator, StateBuffer`3/SmoothingDelegate<TStateTable,TType,TState> smoother)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LocalStateBuffer_3<TStateTable, TType, TState>* New_ctor(float fullStateUpdateFrequency, float deltaUpdateFrequency, int size, typename GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>::InterpolationDelegate* interpolator, typename GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>::SmoothingDelegate* smoother) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LocalStateBuffer_3::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LocalStateBuffer_3<TStateTable, TType, TState>*, creationType>(fullStateUpdateFrequency, deltaUpdateFrequency, size, interpolator, smoother)));
    }
    // public System.Void MarkDirty()
    // Offset: 0xFFFFFFFF
    void MarkDirty() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LocalStateBuffer_3::MarkDirty");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "MarkDirty", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // public System.Boolean TryGetSerializedState(out TStateTable state, out System.Single time, out SyncStateId id)
    // Offset: 0xFFFFFFFF
    bool TryGetSerializedState(ByRef<TStateTable> state, ByRef<float> time, ByRef<GlobalNamespace::SyncStateId> id) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LocalStateBuffer_3::TryGetSerializedState");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "TryGetSerializedState", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<TStateTable&>(), ::il2cpp_utils::ExtractIndependentType<float&>(), ::il2cpp_utils::ExtractIndependentType<GlobalNamespace::SyncStateId&>()})));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, byref(state), byref(time), byref(id));
    }
    // public System.Boolean TryGetSerializedStateDelta(out TStateTable delta, out System.Single timeOffset, out SyncStateId baseId)
    // Offset: 0xFFFFFFFF
    bool TryGetSerializedStateDelta(ByRef<TStateTable> delta, ByRef<float> timeOffset, ByRef<GlobalNamespace::SyncStateId> baseId) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LocalStateBuffer_3::TryGetSerializedStateDelta");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "TryGetSerializedStateDelta", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<TStateTable&>(), ::il2cpp_utils::ExtractIndependentType<float&>(), ::il2cpp_utils::ExtractIndependentType<GlobalNamespace::SyncStateId&>()})));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, byref(delta), byref(timeOffset), byref(baseId));
    }
    // public System.Void SetTime(System.Single time)
    // Offset: 0xFFFFFFFF
    void SetTime(float time) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LocalStateBuffer_3::SetTime");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "SetTime", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(time)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, time);
    }
    // public System.Void SetState(TType type, TState state)
    // Offset: 0xFFFFFFFF
    void SetState(TType type, TState state) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LocalStateBuffer_3::SetState");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "SetState", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(type), ::il2cpp_utils::ExtractType(state)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, type, state);
    }
    // public TState GetState(TType type)
    // Offset: 0xFFFFFFFF
    TState GetState(TType type) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LocalStateBuffer_3::GetState");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetState", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(type)})));
      return ::il2cpp_utils::RunMethodRethrow<TState, false>(this, ___internal__method, type);
    }
    // public override System.Void Clear()
    // Offset: 0xFFFFFFFF
    // Implemented from: StateBuffer`3
    // Base method: System.Void StateBuffer_3::Clear()
    void Clear() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LocalStateBuffer_3::Clear");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Clear", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
  }; // LocalStateBuffer`3
  // Could not write size check! Type: LocalStateBuffer`3 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
