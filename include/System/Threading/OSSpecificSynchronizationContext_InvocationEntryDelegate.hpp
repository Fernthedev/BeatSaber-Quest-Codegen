// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Threading.OSSpecificSynchronizationContext
#include "System/Threading/OSSpecificSynchronizationContext.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: System.Threading
namespace System::Threading {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: System.Threading.OSSpecificSynchronizationContext/System.Threading.InvocationEntryDelegate
  // [TokenAttribute] Offset: FFFFFFFF
  class OSSpecificSynchronizationContext::InvocationEntryDelegate : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: InvocationEntryDelegate
    InvocationEntryDelegate() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x18F78F8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OSSpecificSynchronizationContext::InvocationEntryDelegate* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::OSSpecificSynchronizationContext::InvocationEntryDelegate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OSSpecificSynchronizationContext::InvocationEntryDelegate*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.IntPtr arg)
    // Offset: 0x18F7E3C
    void Invoke(System::IntPtr arg);
    // public System.IAsyncResult BeginInvoke(System.IntPtr arg, System.AsyncCallback callback, System.Object object)
    // Offset: 0x18F8098
    System::IAsyncResult* BeginInvoke(System::IntPtr arg, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x18F8124
    void EndInvoke(System::IAsyncResult* result);
  }; // System.Threading.OSSpecificSynchronizationContext/System.Threading.InvocationEntryDelegate
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Threading::OSSpecificSynchronizationContext::InvocationEntryDelegate*, "System.Threading", "OSSpecificSynchronizationContext/InvocationEntryDelegate");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Threading::OSSpecificSynchronizationContext::InvocationEntryDelegate::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Threading::OSSpecificSynchronizationContext::InvocationEntryDelegate::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::OSSpecificSynchronizationContext::InvocationEntryDelegate::*)(System::IntPtr)>(&System::Threading::OSSpecificSynchronizationContext::InvocationEntryDelegate::Invoke)> {
  static const MethodInfo* get() {
    static auto* arg = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::OSSpecificSynchronizationContext::InvocationEntryDelegate*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{arg});
  }
};
// Writing MetadataGetter for method: System::Threading::OSSpecificSynchronizationContext::InvocationEntryDelegate::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (System::Threading::OSSpecificSynchronizationContext::InvocationEntryDelegate::*)(System::IntPtr, System::AsyncCallback*, ::Il2CppObject*)>(&System::Threading::OSSpecificSynchronizationContext::InvocationEntryDelegate::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* arg = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::OSSpecificSynchronizationContext::InvocationEntryDelegate*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{arg, callback, object});
  }
};
// Writing MetadataGetter for method: System::Threading::OSSpecificSynchronizationContext::InvocationEntryDelegate::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::OSSpecificSynchronizationContext::InvocationEntryDelegate::*)(System::IAsyncResult*)>(&System::Threading::OSSpecificSynchronizationContext::InvocationEntryDelegate::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::OSSpecificSynchronizationContext::InvocationEntryDelegate*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
