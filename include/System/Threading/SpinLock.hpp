// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading
namespace System::Threading {
}
// Completed forward declares
// Type namespace: System.Threading
namespace System::Threading {
  // Size: 0x4
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Threading.SpinLock
  // [TokenAttribute] Offset: FFFFFFFF
  // [DebuggerDisplayAttribute] Offset: DA2020
  // [ComVisibleAttribute] Offset: DA2020
  // [DebuggerTypeProxyAttribute] Offset: DA2020
  struct SpinLock/*, public System::ValueType*/ {
    public:
    // Nested type: System::Threading::SpinLock::SystemThreading_SpinLockDebugView
    class SystemThreading_SpinLockDebugView;
    // private System.Int32 m_owner
    // Size: 0x4
    // Offset: 0x0
    int m_owner;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: SpinLock
    constexpr SpinLock(int m_owner_ = {}) noexcept : m_owner{m_owner_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return m_owner;
    }
    // Get static field: static private System.Int32 MAXIMUM_WAITERS
    static int _get_MAXIMUM_WAITERS();
    // Set static field: static private System.Int32 MAXIMUM_WAITERS
    static void _set_MAXIMUM_WAITERS(int value);
    // Get instance field reference: private System.Int32 m_owner
    int& dyn_m_owner();
    // public System.Boolean get_IsHeldByCurrentThread()
    // Offset: 0x1904068
    bool get_IsHeldByCurrentThread();
    // public System.Boolean get_IsThreadOwnerTrackingEnabled()
    // Offset: 0x1903D14
    bool get_IsThreadOwnerTrackingEnabled();
    // public System.Void .ctor(System.Boolean enableThreadOwnerTracking)
    // Offset: 0x190376C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    SpinLock(bool enableThreadOwnerTracking) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::SpinLock::.ctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(enableThreadOwnerTracking)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, enableThreadOwnerTracking);
    }
    // static private System.Void .cctor()
    // Offset: 0x1904130
    static void _cctor();
    // public System.Void Enter(ref System.Boolean lockTaken)
    // Offset: 0x19037A8
    void Enter(ByRef<bool> lockTaken);
    // public System.Void TryEnter(System.Int32 millisecondsTimeout, ref System.Boolean lockTaken)
    // Offset: 0x1903C78
    void TryEnter(int millisecondsTimeout, ByRef<bool> lockTaken);
    // private System.Void ContinueTryEnter(System.Int32 millisecondsTimeout, ref System.Boolean lockTaken)
    // Offset: 0x1903834
    void ContinueTryEnter(int millisecondsTimeout, ByRef<bool> lockTaken);
    // private System.Void DecrementWaiters()
    // Offset: 0x1903E9C
    void DecrementWaiters();
    // private System.Void ContinueTryEnterWithThreadTracking(System.Int32 millisecondsTimeout, System.UInt32 startTime, ref System.Boolean lockTaken)
    // Offset: 0x1903D3C
    void ContinueTryEnterWithThreadTracking(int millisecondsTimeout, uint startTime, ByRef<bool> lockTaken);
    // public System.Void Exit(System.Boolean useMemoryBarrier)
    // Offset: 0x1903F00
    void Exit(bool useMemoryBarrier);
    // private System.Void ExitSlowPath(System.Boolean useMemoryBarrier)
    // Offset: 0x1903F60
    void ExitSlowPath(bool useMemoryBarrier);
  }; // System.Threading.SpinLock
  #pragma pack(pop)
  static check_size<sizeof(SpinLock), 0 + sizeof(int)> __System_Threading_SpinLockSizeCheck;
  static_assert(sizeof(SpinLock) == 0x4);
}
DEFINE_IL2CPP_ARG_TYPE(System::Threading::SpinLock, "System.Threading", "SpinLock");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Threading::SpinLock::get_IsHeldByCurrentThread
// Il2CppName: get_IsHeldByCurrentThread
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::SpinLock::*)()>(&System::Threading::SpinLock::get_IsHeldByCurrentThread)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::SpinLock), "get_IsHeldByCurrentThread", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::SpinLock::get_IsThreadOwnerTrackingEnabled
// Il2CppName: get_IsThreadOwnerTrackingEnabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::SpinLock::*)()>(&System::Threading::SpinLock::get_IsThreadOwnerTrackingEnabled)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::SpinLock), "get_IsThreadOwnerTrackingEnabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::SpinLock::SpinLock
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Threading::SpinLock::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Threading::SpinLock::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::SpinLock), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::SpinLock::Enter
// Il2CppName: Enter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::SpinLock::*)(ByRef<bool>)>(&System::Threading::SpinLock::Enter)> {
  static const MethodInfo* get() {
    static auto* lockTaken = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::SpinLock), "Enter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lockTaken});
  }
};
// Writing MetadataGetter for method: System::Threading::SpinLock::TryEnter
// Il2CppName: TryEnter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::SpinLock::*)(int, ByRef<bool>)>(&System::Threading::SpinLock::TryEnter)> {
  static const MethodInfo* get() {
    static auto* millisecondsTimeout = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* lockTaken = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::SpinLock), "TryEnter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{millisecondsTimeout, lockTaken});
  }
};
// Writing MetadataGetter for method: System::Threading::SpinLock::ContinueTryEnter
// Il2CppName: ContinueTryEnter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::SpinLock::*)(int, ByRef<bool>)>(&System::Threading::SpinLock::ContinueTryEnter)> {
  static const MethodInfo* get() {
    static auto* millisecondsTimeout = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* lockTaken = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::SpinLock), "ContinueTryEnter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{millisecondsTimeout, lockTaken});
  }
};
// Writing MetadataGetter for method: System::Threading::SpinLock::DecrementWaiters
// Il2CppName: DecrementWaiters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::SpinLock::*)()>(&System::Threading::SpinLock::DecrementWaiters)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::SpinLock), "DecrementWaiters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::SpinLock::ContinueTryEnterWithThreadTracking
// Il2CppName: ContinueTryEnterWithThreadTracking
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::SpinLock::*)(int, uint, ByRef<bool>)>(&System::Threading::SpinLock::ContinueTryEnterWithThreadTracking)> {
  static const MethodInfo* get() {
    static auto* millisecondsTimeout = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* startTime = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* lockTaken = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::SpinLock), "ContinueTryEnterWithThreadTracking", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{millisecondsTimeout, startTime, lockTaken});
  }
};
// Writing MetadataGetter for method: System::Threading::SpinLock::Exit
// Il2CppName: Exit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::SpinLock::*)(bool)>(&System::Threading::SpinLock::Exit)> {
  static const MethodInfo* get() {
    static auto* useMemoryBarrier = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::SpinLock), "Exit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{useMemoryBarrier});
  }
};
// Writing MetadataGetter for method: System::Threading::SpinLock::ExitSlowPath
// Il2CppName: ExitSlowPath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::SpinLock::*)(bool)>(&System::Threading::SpinLock::ExitSlowPath)> {
  static const MethodInfo* get() {
    static auto* useMemoryBarrier = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::SpinLock), "ExitSlowPath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{useMemoryBarrier});
  }
};
