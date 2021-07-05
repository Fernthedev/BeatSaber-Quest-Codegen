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
  // Autogenerated type: Mono.Unity.UnityTls/unitytls_tlsctx_read_callback
  // [UnmanagedFunctionPointerAttribute] Offset: D87168
  class UnityTls::unitytls_tlsctx_read_callback : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: unitytls_tlsctx_read_callback
    unitytls_tlsctx_read_callback() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x15FC0BC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnityTls::unitytls_tlsctx_read_callback* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Unity::UnityTls::unitytls_tlsctx_read_callback::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnityTls::unitytls_tlsctx_read_callback*, creationType>(object, method)));
    }
    // public System.IntPtr Invoke(System.Void* userData, System.Byte* buffer, System.IntPtr bufferLen, Mono.Unity.UnityTls/unitytls_errorstate* errorState)
    // Offset: 0x15FC0CC
    System::IntPtr Invoke(void* userData, uint8_t* buffer, System::IntPtr bufferLen, Mono::Unity::UnityTls::unitytls_errorstate* errorState);
    // public System.IAsyncResult BeginInvoke(System.Void* userData, System.Byte* buffer, System.IntPtr bufferLen, Mono.Unity.UnityTls/unitytls_errorstate* errorState, System.AsyncCallback callback, System.Object object)
    // Offset: 0x15FC378
    System::IAsyncResult* BeginInvoke(void* userData, uint8_t* buffer, System::IntPtr bufferLen, Mono::Unity::UnityTls::unitytls_errorstate* errorState, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.IntPtr EndInvoke(System.IAsyncResult result)
    // Offset: 0x15FC420
    System::IntPtr EndInvoke(System::IAsyncResult* result);
  }; // Mono.Unity.UnityTls/unitytls_tlsctx_read_callback
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Mono::Unity::UnityTls::unitytls_tlsctx_read_callback*, "Mono.Unity", "UnityTls/unitytls_tlsctx_read_callback");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Unity::UnityTls::unitytls_tlsctx_read_callback::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Unity::UnityTls::unitytls_tlsctx_read_callback::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IntPtr (Mono::Unity::UnityTls::unitytls_tlsctx_read_callback::*)(void*, uint8_t*, System::IntPtr, Mono::Unity::UnityTls::unitytls_errorstate*)>(&Mono::Unity::UnityTls::unitytls_tlsctx_read_callback::Invoke)> {
  const MethodInfo* get() {
    static auto* userData = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Void"))->byval_arg;
    static auto* buffer = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    static auto* bufferLen = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* errorState = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("Mono.Unity", "UnityTls/unitytls_errorstate"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Unity::UnityTls::unitytls_tlsctx_read_callback*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userData, buffer, bufferLen, errorState});
  }
};
// Writing MetadataGetter for method: Mono::Unity::UnityTls::unitytls_tlsctx_read_callback::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (Mono::Unity::UnityTls::unitytls_tlsctx_read_callback::*)(void*, uint8_t*, System::IntPtr, Mono::Unity::UnityTls::unitytls_errorstate*, System::AsyncCallback*, ::Il2CppObject*)>(&Mono::Unity::UnityTls::unitytls_tlsctx_read_callback::BeginInvoke)> {
  const MethodInfo* get() {
    static auto* userData = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Void"))->byval_arg;
    static auto* buffer = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    static auto* bufferLen = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* errorState = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("Mono.Unity", "UnityTls/unitytls_errorstate"))->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Unity::UnityTls::unitytls_tlsctx_read_callback*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userData, buffer, bufferLen, errorState, callback, object});
  }
};
// Writing MetadataGetter for method: Mono::Unity::UnityTls::unitytls_tlsctx_read_callback::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IntPtr (Mono::Unity::UnityTls::unitytls_tlsctx_read_callback::*)(System::IAsyncResult*)>(&Mono::Unity::UnityTls::unitytls_tlsctx_read_callback::EndInvoke)> {
  const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Unity::UnityTls::unitytls_tlsctx_read_callback*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
