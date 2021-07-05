// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Forward declaring namespace: Microsoft::Win32::SafeHandles
namespace Microsoft::Win32::SafeHandles {
  // Forward declaring type: SafeWaitHandle
  class SafeWaitHandle;
}
// Completed forward declares
// Type namespace: System.Threading
namespace System::Threading {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Threading.NativeEventCalls
  class NativeEventCalls : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: NativeEventCalls
    NativeEventCalls() noexcept {}
    // static public System.IntPtr CreateEvent_internal(System.Boolean manual, System.Boolean initial, System.String name, out System.Int32 errorCode)
    // Offset: 0x18AB0DC
    static System::IntPtr CreateEvent_internal(bool manual, bool initial, ::Il2CppString* name, int& errorCode);
    // static public System.Boolean SetEvent(Microsoft.Win32.SafeHandles.SafeWaitHandle handle)
    // Offset: 0x18AB214
    static bool SetEvent(Microsoft::Win32::SafeHandles::SafeWaitHandle* handle);
    // static private System.Boolean SetEvent_internal(System.IntPtr handle)
    // Offset: 0x18ADF00
    static bool SetEvent_internal(System::IntPtr handle);
    // static public System.Boolean ResetEvent(Microsoft.Win32.SafeHandles.SafeWaitHandle handle)
    // Offset: 0x18AB170
    static bool ResetEvent(Microsoft::Win32::SafeHandles::SafeWaitHandle* handle);
    // static private System.Boolean ResetEvent_internal(System.IntPtr handle)
    // Offset: 0x18ADF04
    static bool ResetEvent_internal(System::IntPtr handle);
    // static public System.Void CloseEvent_internal(System.IntPtr handle)
    // Offset: 0x18ADF08
    static void CloseEvent_internal(System::IntPtr handle);
  }; // System.Threading.NativeEventCalls
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Threading::NativeEventCalls*, "System.Threading", "NativeEventCalls");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Threading::NativeEventCalls::CreateEvent_internal
// Il2CppName: CreateEvent_internal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IntPtr (*)(bool, bool, ::Il2CppString*, int&)>(&System::Threading::NativeEventCalls::CreateEvent_internal)> {
  const MethodInfo* get() {
    static auto* manual = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* initial = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* errorCode = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::NativeEventCalls*), "CreateEvent_internal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{manual, initial, name, errorCode});
  }
};
// Writing MetadataGetter for method: System::Threading::NativeEventCalls::SetEvent
// Il2CppName: SetEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(Microsoft::Win32::SafeHandles::SafeWaitHandle*)>(&System::Threading::NativeEventCalls::SetEvent)> {
  const MethodInfo* get() {
    static auto* handle = &::il2cpp_utils::GetClassFromName("Microsoft.Win32.SafeHandles", "SafeWaitHandle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::NativeEventCalls*), "SetEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handle});
  }
};
// Writing MetadataGetter for method: System::Threading::NativeEventCalls::SetEvent_internal
// Il2CppName: SetEvent_internal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::IntPtr)>(&System::Threading::NativeEventCalls::SetEvent_internal)> {
  const MethodInfo* get() {
    static auto* handle = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::NativeEventCalls*), "SetEvent_internal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handle});
  }
};
// Writing MetadataGetter for method: System::Threading::NativeEventCalls::ResetEvent
// Il2CppName: ResetEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(Microsoft::Win32::SafeHandles::SafeWaitHandle*)>(&System::Threading::NativeEventCalls::ResetEvent)> {
  const MethodInfo* get() {
    static auto* handle = &::il2cpp_utils::GetClassFromName("Microsoft.Win32.SafeHandles", "SafeWaitHandle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::NativeEventCalls*), "ResetEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handle});
  }
};
// Writing MetadataGetter for method: System::Threading::NativeEventCalls::ResetEvent_internal
// Il2CppName: ResetEvent_internal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::IntPtr)>(&System::Threading::NativeEventCalls::ResetEvent_internal)> {
  const MethodInfo* get() {
    static auto* handle = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::NativeEventCalls*), "ResetEvent_internal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handle});
  }
};
// Writing MetadataGetter for method: System::Threading::NativeEventCalls::CloseEvent_internal
// Il2CppName: CloseEvent_internal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::IntPtr)>(&System::Threading::NativeEventCalls::CloseEvent_internal)> {
  const MethodInfo* get() {
    static auto* handle = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::NativeEventCalls*), "CloseEvent_internal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handle});
  }
};
