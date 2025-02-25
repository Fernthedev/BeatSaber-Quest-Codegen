// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: IEquatableByReference`1
#include "GlobalNamespace/IEquatableByReference_1.hpp"
// Including type: SyncStateId
#include "GlobalNamespace/SyncStateId.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Skipping declaration: TimestampedStateTable because it is already included!
  // Skipping declaration: InterpolationDelegate because it is already included!
  // Skipping declaration: SmoothingDelegate because it is already included!
  // Forward declaring type: IStateTable`3<TStateTable, TType, TState>
  template<typename TStateTable, typename TType, typename TState>
  class IStateTable_3;
}
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: INetSerializable
  class INetSerializable;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
  // Skipping declaration: IConvertible because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: StateBuffer`3
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename TStateTable, typename TType, typename TState>
  class StateBuffer_3 : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::StateBuffer_3::TimestampedStateTable<TStateTable, TType, TState>
    struct TimestampedStateTable;
    // Nested type: GlobalNamespace::StateBuffer_3::InterpolationDelegate<TStateTable, TType, TState>
    class InterpolationDelegate;
    // Nested type: GlobalNamespace::StateBuffer_3::SmoothingDelegate<TStateTable, TType, TState>
    class SmoothingDelegate;
    // WARNING Size may be invalid!
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: StateBuffer`3/TimestampedStateTable
    // [TokenAttribute] Offset: FFFFFFFF
    struct TimestampedStateTable : public ::il2cpp_utils::il2cpp_type_check::NestedType/*, public System::ValueType, public GlobalNamespace::IEquatableByReference_1<typename GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>::TimestampedStateTable>*/ {
      public:
      using declaring_type = StateBuffer_3<TStateTable, TType, TState>*;
      static constexpr std::string_view NESTED_NAME = "TimestampedStateTable";
      static constexpr bool IS_VALUE_TYPE = true;
      // public System.Boolean isValid
      // Size: 0x1
      // Offset: 0x0
      bool isValid;
      // Field size check
      static_assert(sizeof(bool) == 0x1);
      // public SyncStateId id
      // Size: 0x1
      // Offset: 0x0
      GlobalNamespace::SyncStateId id;
      // Field size check
      static_assert(sizeof(GlobalNamespace::SyncStateId) == 0x1);
      // public System.Single time
      // Size: 0x4
      // Offset: 0x0
      float time;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      // public TStateTable state
      // Size: 0xFFFFFFFF
      // Offset: 0x0
      TStateTable state;
      // Creating value type constructor for type: TimestampedStateTable
      constexpr TimestampedStateTable(bool isValid_ = {}, GlobalNamespace::SyncStateId id_ = {}, float time_ = {}, TStateTable state_ = {}) noexcept : isValid{isValid_}, id{id_}, time{time_}, state{state_} {}
      // Creating interface conversion operator: operator System::ValueType
      operator System::ValueType() noexcept {
        return *reinterpret_cast<System::ValueType*>(this);
      }
      // Creating interface conversion operator: operator GlobalNamespace::IEquatableByReference_1<typename GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>::TimestampedStateTable>
      operator GlobalNamespace::IEquatableByReference_1<typename GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>::TimestampedStateTable>() noexcept {
        return *reinterpret_cast<GlobalNamespace::IEquatableByReference_1<typename GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>::TimestampedStateTable>*>(this);
      }
      // Autogenerated instance field getter
      // Get instance field: public System.Boolean isValid
      bool& dyn_isValid() {
        static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::StateBuffer_3::TimestampedStateTable::dyn_isValid");
        auto ___internal__instance = *this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "isValid"))->offset;
        return *reinterpret_cast<bool*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: public SyncStateId id
      GlobalNamespace::SyncStateId& dyn_id() {
        static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::StateBuffer_3::TimestampedStateTable::dyn_id");
        auto ___internal__instance = *this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "id"))->offset;
        return *reinterpret_cast<GlobalNamespace::SyncStateId*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: public System.Single time
      float& dyn_time() {
        static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::StateBuffer_3::TimestampedStateTable::dyn_time");
        auto ___internal__instance = *this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "time"))->offset;
        return *reinterpret_cast<float*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: public TStateTable state
      TStateTable& dyn_state() {
        static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::StateBuffer_3::TimestampedStateTable::dyn_state");
        auto ___internal__instance = *this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "state"))->offset;
        return *reinterpret_cast<TStateTable*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // public System.Void .ctor(SyncStateId id, System.Single time, TStateTable state)
      // Offset: 0xFFFFFFFF
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      TimestampedStateTable(GlobalNamespace::SyncStateId id, float time, TStateTable state) {
        static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::StateBuffer_3::TimestampedStateTable::.ctor");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(id), ::il2cpp_utils::ExtractType(time), ::il2cpp_utils::ExtractType(state)})));
        ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, id, time, state);
      }
      // public System.Void .ctor(System.Single time, TStateTable state)
      // Offset: 0xFFFFFFFF
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      TimestampedStateTable(float time, TStateTable state) {
        static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::StateBuffer_3::TimestampedStateTable::.ctor");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(time), ::il2cpp_utils::ExtractType(state)})));
        ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, time, state);
      }
      // public System.Boolean Equals(in StateBuffer`3/TimestampedStateTable<TStateTable,TType,TState> other)
      // Offset: 0xFFFFFFFF
      bool Equals(ByRef<typename GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>::TimestampedStateTable> other) {
        static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::StateBuffer_3::TimestampedStateTable::Equals");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "Equals", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(other)})));
        return ::il2cpp_utils::RunMethodThrow<bool, false>(*this, ___internal__method, byref(other));
      }
      // private System.Boolean IEquatableByReference<StateBuffer<TStateTable,TType,TState>.TimestampedStateTable>.Equals(in StateBuffer`3/TimestampedStateTable<TStateTable,TType,TState> other)
      // Offset: 0xFFFFFFFF
      bool IEquatableByReference$StateBuffer$TStateTable_TType_TState$_TimestampedStateTable$_Equals(ByRef<typename GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>::TimestampedStateTable> other) {
        static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::StateBuffer_3::TimestampedStateTable::IEquatableByReference<StateBuffer<TStateTable,TType,TState>.TimestampedStateTable>.Equals");
        auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "IEquatableByReference<StateBuffer<TStateTable,TType,TState>.TimestampedStateTable>.Equals", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(other)})));
        return ::il2cpp_utils::RunMethodThrow<bool, false>(*this, ___internal__method, byref(other));
      }
    }; // StateBuffer`3/TimestampedStateTable
    // Could not write size check! Type: StateBuffer`3/TimestampedStateTable is generic, or has no fields that are valid for size checks!
    // WARNING Size may be invalid!
    // Autogenerated type: StateBuffer`3/InterpolationDelegate
    // [TokenAttribute] Offset: FFFFFFFF
    class InterpolationDelegate : public ::il2cpp_utils::il2cpp_type_check::NestedType, public System::MulticastDelegate {
      public:
      using declaring_type = StateBuffer_3<TStateTable, TType, TState>*;
      static constexpr std::string_view NESTED_NAME = "InterpolationDelegate";
      static constexpr bool IS_VALUE_TYPE = false;
      // Creating value type constructor for type: InterpolationDelegate
      InterpolationDelegate() noexcept {}
      // public System.Void .ctor(System.Object object, System.IntPtr method)
      // Offset: 0xFFFFFFFF
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      static typename StateBuffer_3<TStateTable, TType, TState>::InterpolationDelegate* New_ctor(::Il2CppObject* object, System::IntPtr method) {
        static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::StateBuffer_3::InterpolationDelegate::.ctor");
        return THROW_UNLESS((::il2cpp_utils::New<typename StateBuffer_3<TStateTable, TType, TState>::InterpolationDelegate*, creationType>(object, method)));
      }
      // public TState Invoke(TState a, System.Single timeA, TState b, System.Single timeB, System.Single time)
      // Offset: 0xFFFFFFFF
      TState Invoke(TState a, float timeA, TState b, float timeB, float time) {
        static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::StateBuffer_3::InterpolationDelegate::Invoke");
        auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Invoke", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(a), ::il2cpp_utils::ExtractType(timeA), ::il2cpp_utils::ExtractType(b), ::il2cpp_utils::ExtractType(timeB), ::il2cpp_utils::ExtractType(time)})));
        auto ___instance_arg = this;
        return ::il2cpp_utils::RunMethodThrow<TState, false>(___instance_arg, ___internal__method, a, timeA, b, timeB, time);
      }
      // public System.IAsyncResult BeginInvoke(TState a, System.Single timeA, TState b, System.Single timeB, System.Single time, System.AsyncCallback callback, System.Object object)
      // Offset: 0xFFFFFFFF
      System::IAsyncResult* BeginInvoke(TState a, float timeA, TState b, float timeB, float time, System::AsyncCallback* callback, ::Il2CppObject* object) {
        static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::StateBuffer_3::InterpolationDelegate::BeginInvoke");
        auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "BeginInvoke", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(a), ::il2cpp_utils::ExtractType(timeA), ::il2cpp_utils::ExtractType(b), ::il2cpp_utils::ExtractType(timeB), ::il2cpp_utils::ExtractType(time), ::il2cpp_utils::ExtractType(callback), ::il2cpp_utils::ExtractType(object)})));
        auto ___instance_arg = this;
        return ::il2cpp_utils::RunMethodThrow<System::IAsyncResult*, false>(___instance_arg, ___internal__method, a, timeA, b, timeB, time, callback, object);
      }
      // public TState EndInvoke(System.IAsyncResult result)
      // Offset: 0xFFFFFFFF
      TState EndInvoke(System::IAsyncResult* result) {
        static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::StateBuffer_3::InterpolationDelegate::EndInvoke");
        auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "EndInvoke", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(result)})));
        auto ___instance_arg = this;
        return ::il2cpp_utils::RunMethodThrow<TState, false>(___instance_arg, ___internal__method, result);
      }
    }; // StateBuffer`3/InterpolationDelegate
    // Could not write size check! Type: StateBuffer`3/InterpolationDelegate is generic, or has no fields that are valid for size checks!
    // WARNING Size may be invalid!
    // Autogenerated type: StateBuffer`3/SmoothingDelegate
    // [TokenAttribute] Offset: FFFFFFFF
    class SmoothingDelegate : public ::il2cpp_utils::il2cpp_type_check::NestedType, public System::MulticastDelegate {
      public:
      using declaring_type = StateBuffer_3<TStateTable, TType, TState>*;
      static constexpr std::string_view NESTED_NAME = "SmoothingDelegate";
      static constexpr bool IS_VALUE_TYPE = false;
      // Creating value type constructor for type: SmoothingDelegate
      SmoothingDelegate() noexcept {}
      // public System.Void .ctor(System.Object object, System.IntPtr method)
      // Offset: 0xFFFFFFFF
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      static typename StateBuffer_3<TStateTable, TType, TState>::SmoothingDelegate* New_ctor(::Il2CppObject* object, System::IntPtr method) {
        static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::StateBuffer_3::SmoothingDelegate::.ctor");
        return THROW_UNLESS((::il2cpp_utils::New<typename StateBuffer_3<TStateTable, TType, TState>::SmoothingDelegate*, creationType>(object, method)));
      }
      // public TState Invoke(TState a, TState b, System.Single smooth)
      // Offset: 0xFFFFFFFF
      TState Invoke(TState a, TState b, float smooth) {
        static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::StateBuffer_3::SmoothingDelegate::Invoke");
        auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Invoke", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(a), ::il2cpp_utils::ExtractType(b), ::il2cpp_utils::ExtractType(smooth)})));
        auto ___instance_arg = this;
        return ::il2cpp_utils::RunMethodThrow<TState, false>(___instance_arg, ___internal__method, a, b, smooth);
      }
      // public System.IAsyncResult BeginInvoke(TState a, TState b, System.Single smooth, System.AsyncCallback callback, System.Object object)
      // Offset: 0xFFFFFFFF
      System::IAsyncResult* BeginInvoke(TState a, TState b, float smooth, System::AsyncCallback* callback, ::Il2CppObject* object) {
        static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::StateBuffer_3::SmoothingDelegate::BeginInvoke");
        auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "BeginInvoke", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(a), ::il2cpp_utils::ExtractType(b), ::il2cpp_utils::ExtractType(smooth), ::il2cpp_utils::ExtractType(callback), ::il2cpp_utils::ExtractType(object)})));
        auto ___instance_arg = this;
        return ::il2cpp_utils::RunMethodThrow<System::IAsyncResult*, false>(___instance_arg, ___internal__method, a, b, smooth, callback, object);
      }
      // public TState EndInvoke(System.IAsyncResult result)
      // Offset: 0xFFFFFFFF
      TState EndInvoke(System::IAsyncResult* result) {
        static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::StateBuffer_3::SmoothingDelegate::EndInvoke");
        auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "EndInvoke", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(result)})));
        auto ___instance_arg = this;
        return ::il2cpp_utils::RunMethodThrow<TState, false>(___instance_arg, ___internal__method, result);
      }
    }; // StateBuffer`3/SmoothingDelegate
    // Could not write size check! Type: StateBuffer`3/SmoothingDelegate is generic, or has no fields that are valid for size checks!
    // private System.Int32 _currentIndex
    // Size: 0x4
    // Offset: 0x0
    int currentIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private readonly StateBuffer`3/TimestampedStateTable<TStateTable,TType,TState>[] _buffer
    // Size: 0x8
    // Offset: 0x0
    ::Array<typename GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>::TimestampedStateTable>* buffer;
    // Field size check
    static_assert(sizeof(::Array<typename GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>::TimestampedStateTable>*) == 0x8);
    // private readonly StateBuffer`3/InterpolationDelegate<TStateTable,TType,TState> _interpolator
    // Size: 0x8
    // Offset: 0x0
    typename GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>::InterpolationDelegate* interpolator;
    // Field size check
    static_assert(sizeof(typename GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>::InterpolationDelegate*) == 0x8);
    // private readonly StateBuffer`3/SmoothingDelegate<TStateTable,TType,TState> _smoother
    // Size: 0x8
    // Offset: 0x0
    typename GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>::SmoothingDelegate* smoother;
    // Field size check
    static_assert(sizeof(typename GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>::SmoothingDelegate*) == 0x8);
    // Creating value type constructor for type: StateBuffer_3
    StateBuffer_3(int currentIndex_ = {}, ::Array<typename GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>::TimestampedStateTable>* buffer_ = {}, typename GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>::InterpolationDelegate* interpolator_ = {}, typename GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>::SmoothingDelegate* smoother_ = {}) noexcept : currentIndex{currentIndex_}, buffer{buffer_}, interpolator{interpolator_}, smoother{smoother_} {}
    // Autogenerated instance field getter
    // Get instance field: private System.Int32 _currentIndex
    int& dyn__currentIndex() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::StateBuffer_3::dyn__currentIndex");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_currentIndex"))->offset;
      return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly StateBuffer`3/TimestampedStateTable<TStateTable,TType,TState>[] _buffer
    ::Array<typename GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>::TimestampedStateTable>*& dyn__buffer() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::StateBuffer_3::dyn__buffer");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_buffer"))->offset;
      return *reinterpret_cast<::Array<typename GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>::TimestampedStateTable>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly StateBuffer`3/InterpolationDelegate<TStateTable,TType,TState> _interpolator
    typename GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>::InterpolationDelegate*& dyn__interpolator() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::StateBuffer_3::dyn__interpolator");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_interpolator"))->offset;
      return *reinterpret_cast<typename GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>::InterpolationDelegate**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly StateBuffer`3/SmoothingDelegate<TStateTable,TType,TState> _smoother
    typename GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>::SmoothingDelegate*& dyn__smoother() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::StateBuffer_3::dyn__smoother");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_smoother"))->offset;
      return *reinterpret_cast<typename GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>::SmoothingDelegate**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Void .ctor(System.Int32 size, StateBuffer`3/InterpolationDelegate<TStateTable,TType,TState> interpolator, StateBuffer`3/SmoothingDelegate<TStateTable,TType,TState> smoother)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StateBuffer_3<TStateTable, TType, TState>* New_ctor(int size, typename GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>::InterpolationDelegate* interpolator, typename GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>::SmoothingDelegate* smoother) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::StateBuffer_3::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StateBuffer_3<TStateTable, TType, TState>*, creationType>(size, interpolator, smoother)));
    }
    // private System.Int32 GetPreviousIndex(System.Int32 offset)
    // Offset: 0xFFFFFFFF
    int GetPreviousIndex(int offset) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::StateBuffer_3::GetPreviousIndex");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetPreviousIndex", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(offset)})));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<int, false>(___instance_arg, ___internal__method, offset);
    }
    // protected System.Void InsertState(in TStateTable state, System.Single time)
    // Offset: 0xFFFFFFFF
    void InsertState(ByRef<TStateTable> state, float time) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::StateBuffer_3::InsertState");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "InsertState", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(state), ::il2cpp_utils::ExtractType(time)})));
      auto ___instance_arg = this;
      ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method, byref(state), time);
    }
    // public TState GetState(TType type, System.Single time)
    // Offset: 0xFFFFFFFF
    TState GetState(TType type, float time) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::StateBuffer_3::GetState");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetState", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(type), ::il2cpp_utils::ExtractType(time)})));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<TState, false>(___instance_arg, ___internal__method, type, time);
    }
    // public TState GetLatestState(TType type)
    // Offset: 0xFFFFFFFF
    TState GetLatestState(TType type) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::StateBuffer_3::GetLatestState");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetLatestState", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(type)})));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<TState, false>(___instance_arg, ___internal__method, type);
    }
    // public System.Single GetLatestTime()
    // Offset: 0xFFFFFFFF
    float GetLatestTime() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::StateBuffer_3::GetLatestTime");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetLatestTime", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<float, false>(___instance_arg, ___internal__method);
    }
    // public System.Void Clear()
    // Offset: 0xFFFFFFFF
    void Clear() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::StateBuffer_3::Clear");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Clear", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      auto ___instance_arg = this;
      ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method);
    }
  }; // StateBuffer`3
  // Could not write size check! Type: StateBuffer`3 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::StateBuffer_3, "", "StateBuffer`3");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
