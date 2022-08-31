// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Mono.Unity.UnityTls
#include "Mono/Unity/UnityTls.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
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
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Mono::Unity::UnityTls::unitytls_x509verify_callback);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Unity::UnityTls::unitytls_x509verify_callback*, "Mono.Unity", "UnityTls/unitytls_x509verify_callback");
// Type namespace: Mono.Unity
namespace Mono::Unity {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Unity.UnityTls/Mono.Unity.unitytls_x509verify_callback
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: 104E2FC
  class UnityTls::unitytls_x509verify_callback : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1AEF2EC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnityTls::unitytls_x509verify_callback* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Mono::Unity::UnityTls::unitytls_x509verify_callback::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnityTls::unitytls_x509verify_callback*, creationType>(object, method)));
    }
    // public Mono.Unity.UnityTls/Mono.Unity.unitytls_x509verify_result Invoke(System.Void* userData, Mono.Unity.UnityTls/Mono.Unity.unitytls_x509_ref cert, Mono.Unity.UnityTls/Mono.Unity.unitytls_x509verify_result result, Mono.Unity.UnityTls/Mono.Unity.unitytls_errorstate* errorState)
    // Offset: 0x1AEF2FC
    ::Mono::Unity::UnityTls::unitytls_x509verify_result Invoke(void* userData, ::Mono::Unity::UnityTls::unitytls_x509_ref cert, ::Mono::Unity::UnityTls::unitytls_x509verify_result result, ::Mono::Unity::UnityTls::unitytls_errorstate* errorState);
    // public System.IAsyncResult BeginInvoke(System.Void* userData, Mono.Unity.UnityTls/Mono.Unity.unitytls_x509_ref cert, Mono.Unity.UnityTls/Mono.Unity.unitytls_x509verify_result result, Mono.Unity.UnityTls/Mono.Unity.unitytls_errorstate* errorState, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1AEF5A8
    ::System::IAsyncResult* BeginInvoke(void* userData, ::Mono::Unity::UnityTls::unitytls_x509_ref cert, ::Mono::Unity::UnityTls::unitytls_x509verify_result result, ::Mono::Unity::UnityTls::unitytls_errorstate* errorState, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Mono.Unity.UnityTls/Mono.Unity.unitytls_x509verify_result EndInvoke(System.IAsyncResult result)
    // Offset: 0x1AEF668
    ::Mono::Unity::UnityTls::unitytls_x509verify_result EndInvoke(::System::IAsyncResult* result);
  }; // Mono.Unity.UnityTls/Mono.Unity.unitytls_x509verify_callback
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Unity::UnityTls::unitytls_x509verify_callback::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Unity::UnityTls::unitytls_x509verify_callback::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Unity::UnityTls::unitytls_x509verify_result (Mono::Unity::UnityTls::unitytls_x509verify_callback::*)(void*, ::Mono::Unity::UnityTls::unitytls_x509_ref, ::Mono::Unity::UnityTls::unitytls_x509verify_result, ::Mono::Unity::UnityTls::unitytls_errorstate*)>(&Mono::Unity::UnityTls::unitytls_x509verify_callback::Invoke)> {
  static const MethodInfo* get() {
    static auto* userData = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Void"))->byval_arg;
    static auto* cert = &::il2cpp_utils::GetClassFromName("Mono.Unity", "UnityTls/unitytls_x509_ref")->byval_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("Mono.Unity", "UnityTls/unitytls_x509verify_result")->byval_arg;
    static auto* errorState = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("Mono.Unity", "UnityTls/unitytls_errorstate"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Unity::UnityTls::unitytls_x509verify_callback*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userData, cert, result, errorState});
  }
};
// Writing MetadataGetter for method: Mono::Unity::UnityTls::unitytls_x509verify_callback::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (Mono::Unity::UnityTls::unitytls_x509verify_callback::*)(void*, ::Mono::Unity::UnityTls::unitytls_x509_ref, ::Mono::Unity::UnityTls::unitytls_x509verify_result, ::Mono::Unity::UnityTls::unitytls_errorstate*, ::System::AsyncCallback*, ::Il2CppObject*)>(&Mono::Unity::UnityTls::unitytls_x509verify_callback::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* userData = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Void"))->byval_arg;
    static auto* cert = &::il2cpp_utils::GetClassFromName("Mono.Unity", "UnityTls/unitytls_x509_ref")->byval_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("Mono.Unity", "UnityTls/unitytls_x509verify_result")->byval_arg;
    static auto* errorState = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("Mono.Unity", "UnityTls/unitytls_errorstate"))->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Unity::UnityTls::unitytls_x509verify_callback*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userData, cert, result, errorState, callback, object});
  }
};
// Writing MetadataGetter for method: Mono::Unity::UnityTls::unitytls_x509verify_callback::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Unity::UnityTls::unitytls_x509verify_result (Mono::Unity::UnityTls::unitytls_x509verify_callback::*)(::System::IAsyncResult*)>(&Mono::Unity::UnityTls::unitytls_x509verify_callback::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Unity::UnityTls::unitytls_x509verify_callback*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
