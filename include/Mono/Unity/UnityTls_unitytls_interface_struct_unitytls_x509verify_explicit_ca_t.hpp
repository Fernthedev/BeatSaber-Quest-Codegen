// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Mono.Unity.UnityTls/unitytls_interface_struct
#include "Mono/Unity/UnityTls_unitytls_interface_struct.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: Mono.Unity.UnityTls
#include "Mono/Unity/UnityTls.hpp"
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
  // Autogenerated type: Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509verify_explicit_ca_t
  // [UnmanagedFunctionPointerAttribute] Offset: D872D0
  class UnityTls::unitytls_interface_struct::unitytls_x509verify_explicit_ca_t : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: unitytls_x509verify_explicit_ca_t
    unitytls_x509verify_explicit_ca_t() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x15FB86C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnityTls::unitytls_interface_struct::unitytls_x509verify_explicit_ca_t* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_x509verify_explicit_ca_t::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnityTls::unitytls_interface_struct::unitytls_x509verify_explicit_ca_t*, creationType>(object, method)));
    }
    // public Mono.Unity.UnityTls/unitytls_x509verify_result Invoke(Mono.Unity.UnityTls/unitytls_x509list_ref chain, Mono.Unity.UnityTls/unitytls_x509list_ref trustCA, System.Byte* cn, System.IntPtr cnLen, Mono.Unity.UnityTls/unitytls_x509verify_callback cb, System.Void* userData, Mono.Unity.UnityTls/unitytls_errorstate* errorState)
    // Offset: 0x15FB87C
    Mono::Unity::UnityTls::unitytls_x509verify_result Invoke(Mono::Unity::UnityTls::unitytls_x509list_ref chain, Mono::Unity::UnityTls::unitytls_x509list_ref trustCA, uint8_t* cn, System::IntPtr cnLen, Mono::Unity::UnityTls::unitytls_x509verify_callback* cb, void* userData, Mono::Unity::UnityTls::unitytls_errorstate* errorState);
    // public System.IAsyncResult BeginInvoke(Mono.Unity.UnityTls/unitytls_x509list_ref chain, Mono.Unity.UnityTls/unitytls_x509list_ref trustCA, System.Byte* cn, System.IntPtr cnLen, Mono.Unity.UnityTls/unitytls_x509verify_callback cb, System.Void* userData, Mono.Unity.UnityTls/unitytls_errorstate* errorState, System.AsyncCallback callback, System.Object object)
    // Offset: 0x15FBBA4
    System::IAsyncResult* BeginInvoke(Mono::Unity::UnityTls::unitytls_x509list_ref chain, Mono::Unity::UnityTls::unitytls_x509list_ref trustCA, uint8_t* cn, System::IntPtr cnLen, Mono::Unity::UnityTls::unitytls_x509verify_callback* cb, void* userData, Mono::Unity::UnityTls::unitytls_errorstate* errorState, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Mono.Unity.UnityTls/unitytls_x509verify_result EndInvoke(System.IAsyncResult result)
    // Offset: 0x15FBC84
    Mono::Unity::UnityTls::unitytls_x509verify_result EndInvoke(System::IAsyncResult* result);
  }; // Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509verify_explicit_ca_t
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_x509verify_explicit_ca_t*, "Mono.Unity", "UnityTls/unitytls_interface_struct/unitytls_x509verify_explicit_ca_t");
// Writing includes for template specializations
#include "Mono/Unity/UnityTls_unitytls_x509list_ref.hpp"
#include "Mono/Unity/UnityTls_unitytls_x509verify_callback.hpp"
#include "Mono/Unity/UnityTls_unitytls_errorstate.hpp"
#include "System/AsyncCallback.hpp"
#include "System/IAsyncResult.hpp"
// Writing MetadataGetter for method: Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_x509verify_explicit_ca_t::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_x509verify_explicit_ca_t::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Unity::UnityTls::unitytls_x509verify_result (Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_x509verify_explicit_ca_t::*)(Mono::Unity::UnityTls::unitytls_x509list_ref, Mono::Unity::UnityTls::unitytls_x509list_ref, uint8_t*, System::IntPtr, Mono::Unity::UnityTls::unitytls_x509verify_callback*, void*, Mono::Unity::UnityTls::unitytls_errorstate*)>(&Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_x509verify_explicit_ca_t::Invoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_x509verify_explicit_ca_t*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Mono::Unity::UnityTls::unitytls_x509list_ref>(), ::il2cpp_utils::ExtractIndependentType<Mono::Unity::UnityTls::unitytls_x509list_ref>(), ::il2cpp_utils::ExtractIndependentType<uint8_t*>(), ::il2cpp_utils::ExtractIndependentType<System::IntPtr>(), ::il2cpp_utils::ExtractIndependentType<Mono::Unity::UnityTls::unitytls_x509verify_callback*>(), ::il2cpp_utils::ExtractIndependentType<void*>(), ::il2cpp_utils::ExtractIndependentType<Mono::Unity::UnityTls::unitytls_errorstate*>()});
  }
};
// Writing MetadataGetter for method: Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_x509verify_explicit_ca_t::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_x509verify_explicit_ca_t::*)(Mono::Unity::UnityTls::unitytls_x509list_ref, Mono::Unity::UnityTls::unitytls_x509list_ref, uint8_t*, System::IntPtr, Mono::Unity::UnityTls::unitytls_x509verify_callback*, void*, Mono::Unity::UnityTls::unitytls_errorstate*, System::AsyncCallback*, ::Il2CppObject*)>(&Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_x509verify_explicit_ca_t::BeginInvoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_x509verify_explicit_ca_t*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Mono::Unity::UnityTls::unitytls_x509list_ref>(), ::il2cpp_utils::ExtractIndependentType<Mono::Unity::UnityTls::unitytls_x509list_ref>(), ::il2cpp_utils::ExtractIndependentType<uint8_t*>(), ::il2cpp_utils::ExtractIndependentType<System::IntPtr>(), ::il2cpp_utils::ExtractIndependentType<Mono::Unity::UnityTls::unitytls_x509verify_callback*>(), ::il2cpp_utils::ExtractIndependentType<void*>(), ::il2cpp_utils::ExtractIndependentType<Mono::Unity::UnityTls::unitytls_errorstate*>(), ::il2cpp_utils::ExtractIndependentType<System::AsyncCallback*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
// Writing MetadataGetter for method: Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_x509verify_explicit_ca_t::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Unity::UnityTls::unitytls_x509verify_result (Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_x509verify_explicit_ca_t::*)(System::IAsyncResult*)>(&Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_x509verify_explicit_ca_t::EndInvoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_x509verify_explicit_ca_t*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IAsyncResult*>()});
  }
};
