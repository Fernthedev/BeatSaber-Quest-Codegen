// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Mono.Unity.UnityTls
#include "Mono/Unity/UnityTls.hpp"
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
// Type namespace: Mono.Unity
namespace Mono::Unity {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Unity.UnityTls/unitytls_tlsctx_trace_callback
  // [UnmanagedFunctionPointerAttribute] Offset: D8717C
  class UnityTls::unitytls_tlsctx_trace_callback : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: unitytls_tlsctx_trace_callback
    unitytls_tlsctx_trace_callback() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x15FC44C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnityTls::unitytls_tlsctx_trace_callback* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Unity::UnityTls::unitytls_tlsctx_trace_callback::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnityTls::unitytls_tlsctx_trace_callback*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.Void* userData, Mono.Unity.UnityTls/unitytls_tlsctx* ctx, System.Byte* traceMessage, System.IntPtr traceMessageLen)
    // Offset: 0x15FC45C
    void Invoke(void* userData, Mono::Unity::UnityTls::unitytls_tlsctx* ctx, uint8_t* traceMessage, System::IntPtr traceMessageLen);
    // public System.IAsyncResult BeginInvoke(System.Void* userData, Mono.Unity.UnityTls/unitytls_tlsctx* ctx, System.Byte* traceMessage, System.IntPtr traceMessageLen, System.AsyncCallback callback, System.Object object)
    // Offset: 0x15FC700
    System::IAsyncResult* BeginInvoke(void* userData, Mono::Unity::UnityTls::unitytls_tlsctx* ctx, uint8_t* traceMessage, System::IntPtr traceMessageLen, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x15FC7AC
    void EndInvoke(System::IAsyncResult* result);
  }; // Mono.Unity.UnityTls/unitytls_tlsctx_trace_callback
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Mono::Unity::UnityTls::unitytls_tlsctx_trace_callback*, "Mono.Unity", "UnityTls/unitytls_tlsctx_trace_callback");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Unity::UnityTls::unitytls_tlsctx_trace_callback::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Unity::UnityTls::unitytls_tlsctx_trace_callback::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Unity::UnityTls::unitytls_tlsctx_trace_callback::*)(void*, Mono::Unity::UnityTls::unitytls_tlsctx*, uint8_t*, System::IntPtr)>(&Mono::Unity::UnityTls::unitytls_tlsctx_trace_callback::Invoke)> {
  const MethodInfo* get() {
    static auto* userData = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Void"))->byval_arg;
    static auto* ctx = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("Mono.Unity", "UnityTls/unitytls_tlsctx"))->byval_arg;
    static auto* traceMessage = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    static auto* traceMessageLen = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Unity::UnityTls::unitytls_tlsctx_trace_callback*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userData, ctx, traceMessage, traceMessageLen});
  }
};
// Writing MetadataGetter for method: Mono::Unity::UnityTls::unitytls_tlsctx_trace_callback::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (Mono::Unity::UnityTls::unitytls_tlsctx_trace_callback::*)(void*, Mono::Unity::UnityTls::unitytls_tlsctx*, uint8_t*, System::IntPtr, System::AsyncCallback*, ::Il2CppObject*)>(&Mono::Unity::UnityTls::unitytls_tlsctx_trace_callback::BeginInvoke)> {
  const MethodInfo* get() {
    static auto* userData = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Void"))->byval_arg;
    static auto* ctx = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("Mono.Unity", "UnityTls/unitytls_tlsctx"))->byval_arg;
    static auto* traceMessage = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    static auto* traceMessageLen = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Unity::UnityTls::unitytls_tlsctx_trace_callback*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userData, ctx, traceMessage, traceMessageLen, callback, object});
  }
};
// Writing MetadataGetter for method: Mono::Unity::UnityTls::unitytls_tlsctx_trace_callback::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Unity::UnityTls::unitytls_tlsctx_trace_callback::*)(System::IAsyncResult*)>(&Mono::Unity::UnityTls::unitytls_tlsctx_trace_callback::EndInvoke)> {
  const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Unity::UnityTls::unitytls_tlsctx_trace_callback*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
