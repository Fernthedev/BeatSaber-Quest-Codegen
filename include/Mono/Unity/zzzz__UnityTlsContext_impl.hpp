#pragma once
#include "Mono/Net/Security/zzzz__MobileTlsContext_impl.hpp"
#include "Mono/Unity/zzzz__UnityTlsContext_def.hpp"
#include "Mono/Unity/zzzz__UnityTls_def.hpp"
#include "Mono/Net/Security/zzzz__MonoSslAuthenticationOptions_def.hpp"
#include "System/Runtime/InteropServices/zzzz__GCHandle_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate_def.hpp"
#include "Mono/Security/Interface/zzzz__MonoTlsConnectionInfo_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate2_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "Mono/Net/Security/zzzz__MobileAuthenticatedStream_def.hpp"
//  Writing Method size for method: ::Mono::Unity::UnityTlsContext._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Unity::UnityTlsContext::*)(::Mono::Net::Security::MobileAuthenticatedStream*, ::Mono::Net::Security::MonoSslAuthenticationOptions*)>(&::Mono::Unity::UnityTlsContext::_ctor)> {
  constexpr static std::size_t size = 0x708;
  constexpr static std::size_t addrs = 0x281a03c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Net::Security::MobileAuthenticatedStream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Net::Security::MonoSslAuthenticationOptions*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::UnityTlsContext.ExtractNativeKeyAndChainFromManagedCertificate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Security::Cryptography::X509Certificates::X509Certificate*, ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate>, ByRef<::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_x509list>>, ByRef<::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_key>>)>(&::Mono::Unity::UnityTlsContext::ExtractNativeKeyAndChainFromManagedCertificate)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x281a8f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(),
                            "ExtractNativeKeyAndChainFromManagedCertificate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Certificate*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_x509list>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_key>>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::UnityTlsContext.get_IsAuthenticated
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::Unity::UnityTlsContext::*)()>(&::Mono::Unity::UnityTlsContext::get_IsAuthenticated)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x281ac34;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::UnityTlsContext.get_LocalClientCertificate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::X509Certificates::X509Certificate* (::Mono::Unity::UnityTlsContext::*)()>(&::Mono::Unity::UnityTlsContext::get_LocalClientCertificate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x281ac3c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::UnityTlsContext.get_RemoteCertificate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::X509Certificates::X509Certificate2* (::Mono::Unity::UnityTlsContext::*)()>(&::Mono::Unity::UnityTlsContext::get_RemoteCertificate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x281ac44;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::UnityTlsContext.Read
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ValueTuple_2<int32_t,bool> (::Mono::Unity::UnityTlsContext::*)(::ArrayW<uint8_t,::Array<uint8_t>*>, int32_t, int32_t)>(&::Mono::Unity::UnityTlsContext::Read)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x281ac4c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::UnityTlsContext.Write
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ValueTuple_2<int32_t,bool> (::Mono::Unity::UnityTlsContext::*)(::ArrayW<uint8_t,::Array<uint8_t>*>, int32_t, int32_t)>(&::Mono::Unity::UnityTlsContext::Write)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x281adf4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::UnityTlsContext.Renegotiate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Unity::UnityTlsContext::*)()>(&::Mono::Unity::UnityTlsContext::Renegotiate)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x281af94;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::UnityTlsContext.PendingRenegotiation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::Unity::UnityTlsContext::*)()>(&::Mono::Unity::UnityTlsContext::PendingRenegotiation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x281afd4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::UnityTlsContext.Shutdown
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Unity::UnityTlsContext::*)()>(&::Mono::Unity::UnityTlsContext::Shutdown)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x281afdc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::UnityTlsContext.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Unity::UnityTlsContext::*)(bool)>(&::Mono::Unity::UnityTlsContext::Dispose)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x281b0f0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(),
                                  16
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::UnityTlsContext.StartHandshake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Unity::UnityTlsContext::*)()>(&::Mono::Unity::UnityTlsContext::StartHandshake)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x281b168;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::UnityTlsContext.ProcessHandshake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::Unity::UnityTlsContext::*)()>(&::Mono::Unity::UnityTlsContext::ProcessHandshake)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x281b2e8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::UnityTlsContext.FinishHandshake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Unity::UnityTlsContext::*)()>(&::Mono::Unity::UnityTlsContext::FinishHandshake)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x281b4ac;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::UnityTlsContext.WriteCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::intptr_t (*)(::cordl_internals::Ptr<void>, ::cordl_internals::Ptr<uint8_t>, ::cordl_internals::intptr_t, ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate>)>(&::Mono::Unity::UnityTlsContext::WriteCallback)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2819d34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(),
                            "WriteCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::UnityTlsContext.WriteCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::intptr_t (::Mono::Unity::UnityTlsContext::*)(::cordl_internals::Ptr<uint8_t>, ::cordl_internals::intptr_t, ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate>)>(&::Mono::Unity::UnityTlsContext::WriteCallback)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x281b5f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(),
                            "WriteCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::UnityTlsContext.ReadCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::intptr_t (*)(::cordl_internals::Ptr<void>, ::cordl_internals::Ptr<uint8_t>, ::cordl_internals::intptr_t, ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate>)>(&::Mono::Unity::UnityTlsContext::ReadCallback)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2819dfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(),
                            "ReadCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::UnityTlsContext.ReadCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::intptr_t (::Mono::Unity::UnityTlsContext::*)(::cordl_internals::Ptr<uint8_t>, ::cordl_internals::intptr_t, ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate>)>(&::Mono::Unity::UnityTlsContext::ReadCallback)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x281ba44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(),
                            "ReadCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::UnityTlsContext.VerifyCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Unity::__UnityTls__unitytls_x509verify_result (*)(::cordl_internals::Ptr<void>, ::Mono::Unity::__UnityTls__unitytls_x509list_ref, ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate>)>(&::Mono::Unity::UnityTlsContext::VerifyCallback)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2819ec4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(),
                            "VerifyCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Unity::__UnityTls__unitytls_x509list_ref>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::UnityTlsContext.VerifyCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Unity::__UnityTls__unitytls_x509verify_result (::Mono::Unity::UnityTlsContext::*)(::Mono::Unity::__UnityTls__unitytls_x509list_ref, ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate>)>(&::Mono::Unity::UnityTlsContext::VerifyCallback)> {
  constexpr static std::size_t size = 0x408;
  constexpr static std::size_t addrs = 0x281be48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(),
                            "VerifyCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Unity::__UnityTls__unitytls_x509list_ref>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::UnityTlsContext.CertificateCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::cordl_internals::Ptr<void>, ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_tlsctx>, ::cordl_internals::Ptr<uint8_t>, ::cordl_internals::intptr_t, ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_x509name>, ::cordl_internals::intptr_t, ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_x509list_ref>, ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_key_ref>, ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate>)>(&::Mono::Unity::UnityTlsContext::CertificateCallback)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2819f74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(),
                            "CertificateCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_tlsctx>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_x509name>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_x509list_ref>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_key_ref>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::UnityTlsContext.CertificateCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Unity::UnityTlsContext::*)(::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_tlsctx>, ::cordl_internals::Ptr<uint8_t>, ::cordl_internals::intptr_t, ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_x509name>, ::cordl_internals::intptr_t, ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_x509list_ref>, ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_key_ref>, ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate>)>(&::Mono::Unity::UnityTlsContext::CertificateCallback)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x281c2d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(),
                            "CertificateCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_tlsctx>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_x509name>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_x509list_ref>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_key_ref>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Mono::Unity::UnityTlsContext::__set_tlsContext(::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_tlsctx>  value)  {
::cordl_internals::setInstanceField<::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_tlsctx>, 0x58>(this, std::forward<::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_tlsctx>>(value));
}
constexpr ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_tlsctx>& Mono::Unity::UnityTlsContext::__get_tlsContext()  {
return ::cordl_internals::getInstanceField<::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_tlsctx>, 0x58>(this);
}
constexpr ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_tlsctx> const& Mono::Unity::UnityTlsContext::__get_tlsContext() const {
return ::cordl_internals::getInstanceField<::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_tlsctx>, 0x58>(this);
}
constexpr void Mono::Unity::UnityTlsContext::__set_requestedClientCertChain(::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_x509list>  value)  {
::cordl_internals::setInstanceField<::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_x509list>, 0x60>(this, std::forward<::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_x509list>>(value));
}
constexpr ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_x509list>& Mono::Unity::UnityTlsContext::__get_requestedClientCertChain()  {
return ::cordl_internals::getInstanceField<::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_x509list>, 0x60>(this);
}
constexpr ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_x509list> const& Mono::Unity::UnityTlsContext::__get_requestedClientCertChain() const {
return ::cordl_internals::getInstanceField<::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_x509list>, 0x60>(this);
}
constexpr void Mono::Unity::UnityTlsContext::__set_requestedClientKey(::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_key>  value)  {
::cordl_internals::setInstanceField<::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_key>, 0x68>(this, std::forward<::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_key>>(value));
}
constexpr ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_key>& Mono::Unity::UnityTlsContext::__get_requestedClientKey()  {
return ::cordl_internals::getInstanceField<::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_key>, 0x68>(this);
}
constexpr ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_key> const& Mono::Unity::UnityTlsContext::__get_requestedClientKey() const {
return ::cordl_internals::getInstanceField<::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_key>, 0x68>(this);
}
constexpr void Mono::Unity::UnityTlsContext::__set_readCallback(::Mono::Unity::__UnityTls__unitytls_tlsctx_read_callback*  value)  {
::cordl_internals::setInstanceField<::Mono::Unity::__UnityTls__unitytls_tlsctx_read_callback*, 0x70>(this, std::forward<::Mono::Unity::__UnityTls__unitytls_tlsctx_read_callback*>(value));
}
constexpr ::Mono::Unity::__UnityTls__unitytls_tlsctx_read_callback* Mono::Unity::UnityTlsContext::__get_readCallback()  {
return ::cordl_internals::getInstanceField<::Mono::Unity::__UnityTls__unitytls_tlsctx_read_callback*, 0x70>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Mono::Unity::__UnityTls__unitytls_tlsctx_read_callback*> Mono::Unity::UnityTlsContext::__get_readCallback() const {
return ::cordl_internals::getInstanceField<::Mono::Unity::__UnityTls__unitytls_tlsctx_read_callback*, 0x70>(this);
}
constexpr void Mono::Unity::UnityTlsContext::__set_writeCallback(::Mono::Unity::__UnityTls__unitytls_tlsctx_write_callback*  value)  {
::cordl_internals::setInstanceField<::Mono::Unity::__UnityTls__unitytls_tlsctx_write_callback*, 0x78>(this, std::forward<::Mono::Unity::__UnityTls__unitytls_tlsctx_write_callback*>(value));
}
constexpr ::Mono::Unity::__UnityTls__unitytls_tlsctx_write_callback* Mono::Unity::UnityTlsContext::__get_writeCallback()  {
return ::cordl_internals::getInstanceField<::Mono::Unity::__UnityTls__unitytls_tlsctx_write_callback*, 0x78>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Mono::Unity::__UnityTls__unitytls_tlsctx_write_callback*> Mono::Unity::UnityTlsContext::__get_writeCallback() const {
return ::cordl_internals::getInstanceField<::Mono::Unity::__UnityTls__unitytls_tlsctx_write_callback*, 0x78>(this);
}
constexpr void Mono::Unity::UnityTlsContext::__set_certificateCallback(::Mono::Unity::__UnityTls__unitytls_tlsctx_certificate_callback*  value)  {
::cordl_internals::setInstanceField<::Mono::Unity::__UnityTls__unitytls_tlsctx_certificate_callback*, 0x80>(this, std::forward<::Mono::Unity::__UnityTls__unitytls_tlsctx_certificate_callback*>(value));
}
constexpr ::Mono::Unity::__UnityTls__unitytls_tlsctx_certificate_callback* Mono::Unity::UnityTlsContext::__get_certificateCallback()  {
return ::cordl_internals::getInstanceField<::Mono::Unity::__UnityTls__unitytls_tlsctx_certificate_callback*, 0x80>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Mono::Unity::__UnityTls__unitytls_tlsctx_certificate_callback*> Mono::Unity::UnityTlsContext::__get_certificateCallback() const {
return ::cordl_internals::getInstanceField<::Mono::Unity::__UnityTls__unitytls_tlsctx_certificate_callback*, 0x80>(this);
}
constexpr void Mono::Unity::UnityTlsContext::__set_verifyCallback(::Mono::Unity::__UnityTls__unitytls_tlsctx_x509verify_callback*  value)  {
::cordl_internals::setInstanceField<::Mono::Unity::__UnityTls__unitytls_tlsctx_x509verify_callback*, 0x88>(this, std::forward<::Mono::Unity::__UnityTls__unitytls_tlsctx_x509verify_callback*>(value));
}
constexpr ::Mono::Unity::__UnityTls__unitytls_tlsctx_x509verify_callback* Mono::Unity::UnityTlsContext::__get_verifyCallback()  {
return ::cordl_internals::getInstanceField<::Mono::Unity::__UnityTls__unitytls_tlsctx_x509verify_callback*, 0x88>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Mono::Unity::__UnityTls__unitytls_tlsctx_x509verify_callback*> Mono::Unity::UnityTlsContext::__get_verifyCallback() const {
return ::cordl_internals::getInstanceField<::Mono::Unity::__UnityTls__unitytls_tlsctx_x509verify_callback*, 0x88>(this);
}
constexpr void Mono::Unity::UnityTlsContext::__set_localClientCertificate(::System::Security::Cryptography::X509Certificates::X509Certificate*  value)  {
::cordl_internals::setInstanceField<::System::Security::Cryptography::X509Certificates::X509Certificate*, 0x90>(this, std::forward<::System::Security::Cryptography::X509Certificates::X509Certificate*>(value));
}
constexpr ::System::Security::Cryptography::X509Certificates::X509Certificate* Mono::Unity::UnityTlsContext::__get_localClientCertificate()  {
return ::cordl_internals::getInstanceField<::System::Security::Cryptography::X509Certificates::X509Certificate*, 0x90>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::X509Certificates::X509Certificate*> Mono::Unity::UnityTlsContext::__get_localClientCertificate() const {
return ::cordl_internals::getInstanceField<::System::Security::Cryptography::X509Certificates::X509Certificate*, 0x90>(this);
}
constexpr void Mono::Unity::UnityTlsContext::__set_remoteCertificate(::System::Security::Cryptography::X509Certificates::X509Certificate2*  value)  {
::cordl_internals::setInstanceField<::System::Security::Cryptography::X509Certificates::X509Certificate2*, 0x98>(this, std::forward<::System::Security::Cryptography::X509Certificates::X509Certificate2*>(value));
}
constexpr ::System::Security::Cryptography::X509Certificates::X509Certificate2* Mono::Unity::UnityTlsContext::__get_remoteCertificate()  {
return ::cordl_internals::getInstanceField<::System::Security::Cryptography::X509Certificates::X509Certificate2*, 0x98>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::X509Certificates::X509Certificate2*> Mono::Unity::UnityTlsContext::__get_remoteCertificate() const {
return ::cordl_internals::getInstanceField<::System::Security::Cryptography::X509Certificates::X509Certificate2*, 0x98>(this);
}
constexpr void Mono::Unity::UnityTlsContext::__set_connectioninfo(::Mono::Security::Interface::MonoTlsConnectionInfo*  value)  {
::cordl_internals::setInstanceField<::Mono::Security::Interface::MonoTlsConnectionInfo*, 0xa0>(this, std::forward<::Mono::Security::Interface::MonoTlsConnectionInfo*>(value));
}
constexpr ::Mono::Security::Interface::MonoTlsConnectionInfo* Mono::Unity::UnityTlsContext::__get_connectioninfo()  {
return ::cordl_internals::getInstanceField<::Mono::Security::Interface::MonoTlsConnectionInfo*, 0xa0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Mono::Security::Interface::MonoTlsConnectionInfo*> Mono::Unity::UnityTlsContext::__get_connectioninfo() const {
return ::cordl_internals::getInstanceField<::Mono::Security::Interface::MonoTlsConnectionInfo*, 0xa0>(this);
}
constexpr void Mono::Unity::UnityTlsContext::__set_isAuthenticated(bool  value)  {
::cordl_internals::setInstanceField<bool, 0xa8>(this, std::forward<bool>(value));
}
constexpr bool& Mono::Unity::UnityTlsContext::__get_isAuthenticated()  {
return ::cordl_internals::getInstanceField<bool, 0xa8>(this);
}
constexpr bool const& Mono::Unity::UnityTlsContext::__get_isAuthenticated() const {
return ::cordl_internals::getInstanceField<bool, 0xa8>(this);
}
constexpr void Mono::Unity::UnityTlsContext::__set_hasContext(bool  value)  {
::cordl_internals::setInstanceField<bool, 0xa9>(this, std::forward<bool>(value));
}
constexpr bool& Mono::Unity::UnityTlsContext::__get_hasContext()  {
return ::cordl_internals::getInstanceField<bool, 0xa9>(this);
}
constexpr bool const& Mono::Unity::UnityTlsContext::__get_hasContext() const {
return ::cordl_internals::getInstanceField<bool, 0xa9>(this);
}
constexpr void Mono::Unity::UnityTlsContext::__set_closedGraceful(bool  value)  {
::cordl_internals::setInstanceField<bool, 0xaa>(this, std::forward<bool>(value));
}
constexpr bool& Mono::Unity::UnityTlsContext::__get_closedGraceful()  {
return ::cordl_internals::getInstanceField<bool, 0xaa>(this);
}
constexpr bool const& Mono::Unity::UnityTlsContext::__get_closedGraceful() const {
return ::cordl_internals::getInstanceField<bool, 0xaa>(this);
}
constexpr void Mono::Unity::UnityTlsContext::__set_writeBuffer(::ArrayW<uint8_t,::Array<uint8_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0xb0>(this, std::forward<::ArrayW<uint8_t,::Array<uint8_t>*>>(value));
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& Mono::Unity::UnityTlsContext::__get_writeBuffer()  {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0xb0>(this);
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& Mono::Unity::UnityTlsContext::__get_writeBuffer() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0xb0>(this);
}
constexpr void Mono::Unity::UnityTlsContext::__set_readBuffer(::ArrayW<uint8_t,::Array<uint8_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0xb8>(this, std::forward<::ArrayW<uint8_t,::Array<uint8_t>*>>(value));
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& Mono::Unity::UnityTlsContext::__get_readBuffer()  {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0xb8>(this);
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& Mono::Unity::UnityTlsContext::__get_readBuffer() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0xb8>(this);
}
constexpr void Mono::Unity::UnityTlsContext::__set_handle(::System::Runtime::InteropServices::GCHandle  value)  {
::cordl_internals::setInstanceField<::System::Runtime::InteropServices::GCHandle, 0xc0>(this, std::forward<::System::Runtime::InteropServices::GCHandle>(value));
}
constexpr ::System::Runtime::InteropServices::GCHandle& Mono::Unity::UnityTlsContext::__get_handle()  {
return ::cordl_internals::getInstanceField<::System::Runtime::InteropServices::GCHandle, 0xc0>(this);
}
constexpr ::System::Runtime::InteropServices::GCHandle const& Mono::Unity::UnityTlsContext::__get_handle() const {
return ::cordl_internals::getInstanceField<::System::Runtime::InteropServices::GCHandle, 0xc0>(this);
}
constexpr void Mono::Unity::UnityTlsContext::__set_lastException(::System::Exception*  value)  {
::cordl_internals::setInstanceField<::System::Exception*, 0xc8>(this, std::forward<::System::Exception*>(value));
}
constexpr ::System::Exception* Mono::Unity::UnityTlsContext::__get_lastException()  {
return ::cordl_internals::getInstanceField<::System::Exception*, 0xc8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Exception*> Mono::Unity::UnityTlsContext::__get_lastException() const {
return ::cordl_internals::getInstanceField<::System::Exception*, 0xc8>(this);
}
inline ::Mono::Unity::UnityTlsContext* Mono::Unity::UnityTlsContext::New_ctor(::Mono::Net::Security::MobileAuthenticatedStream*  parent, ::Mono::Net::Security::MonoSslAuthenticationOptions*  options)  {
return THROW_UNLESS(::il2cpp_utils::New<::Mono::Unity::UnityTlsContext*>(parent, options));
}
inline void Mono::Unity::UnityTlsContext::_ctor(::Mono::Net::Security::MobileAuthenticatedStream*  parent, ::Mono::Net::Security::MonoSslAuthenticationOptions*  options)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Net::Security::MobileAuthenticatedStream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Net::Security::MonoSslAuthenticationOptions*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, parent, options);
}
inline void Mono::Unity::UnityTlsContext::ExtractNativeKeyAndChainFromManagedCertificate(::System::Security::Cryptography::X509Certificates::X509Certificate*  cert, ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate>  errorState, ByRef<::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_x509list>>  nativeCertChain, ByRef<::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_key>>  nativeKey)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(),
                            "ExtractNativeKeyAndChainFromManagedCertificate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Certificate*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_x509list>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_key>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, cert, errorState, nativeCertChain, nativeKey);
}
inline bool Mono::Unity::UnityTlsContext::get_IsAuthenticated()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(),
                            "get_IsAuthenticated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::System::Security::Cryptography::X509Certificates::X509Certificate* Mono::Unity::UnityTlsContext::get_LocalClientCertificate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(),
                            "get_LocalClientCertificate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509Certificate*, false>(*this, ___internal_method);
}
inline ::System::Security::Cryptography::X509Certificates::X509Certificate2* Mono::Unity::UnityTlsContext::get_RemoteCertificate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(),
                            "get_RemoteCertificate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509Certificate2*, false>(*this, ___internal_method);
}
inline ::System::ValueTuple_2<int32_t,bool> Mono::Unity::UnityTlsContext::Read(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(),
                            "Read",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<int32_t,bool>, false>(*this, ___internal_method, buffer, offset, count);
}
inline ::System::ValueTuple_2<int32_t,bool> Mono::Unity::UnityTlsContext::Write(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(),
                            "Write",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<int32_t,bool>, false>(*this, ___internal_method, buffer, offset, count);
}
inline void Mono::Unity::UnityTlsContext::Renegotiate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(),
                            "Renegotiate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool Mono::Unity::UnityTlsContext::PendingRenegotiation()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(),
                            "PendingRenegotiation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void Mono::Unity::UnityTlsContext::Shutdown()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(),
                            "Shutdown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void Mono::Unity::UnityTlsContext::Dispose(bool  disposing)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, disposing);
}
inline void Mono::Unity::UnityTlsContext::StartHandshake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(),
                            "StartHandshake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool Mono::Unity::UnityTlsContext::ProcessHandshake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(),
                            "ProcessHandshake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void Mono::Unity::UnityTlsContext::FinishHandshake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(),
                            "FinishHandshake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::cordl_internals::intptr_t Mono::Unity::UnityTlsContext::WriteCallback(::cordl_internals::Ptr<void>  userData, ::cordl_internals::Ptr<uint8_t>  data, ::cordl_internals::intptr_t  bufferLen, ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate>  errorState)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(),
                            "WriteCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::cordl_internals::intptr_t, false>(nullptr, ___internal_method, userData, data, bufferLen, errorState);
}
inline ::cordl_internals::intptr_t Mono::Unity::UnityTlsContext::WriteCallback(::cordl_internals::Ptr<uint8_t>  data, ::cordl_internals::intptr_t  bufferLen, ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate>  errorState)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(),
                            "WriteCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::cordl_internals::intptr_t, false>(*this, ___internal_method, data, bufferLen, errorState);
}
inline ::cordl_internals::intptr_t Mono::Unity::UnityTlsContext::ReadCallback(::cordl_internals::Ptr<void>  userData, ::cordl_internals::Ptr<uint8_t>  buffer, ::cordl_internals::intptr_t  bufferLen, ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate>  errorState)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(),
                            "ReadCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::cordl_internals::intptr_t, false>(nullptr, ___internal_method, userData, buffer, bufferLen, errorState);
}
inline ::cordl_internals::intptr_t Mono::Unity::UnityTlsContext::ReadCallback(::cordl_internals::Ptr<uint8_t>  buffer, ::cordl_internals::intptr_t  bufferLen, ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate>  errorState)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(),
                            "ReadCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::cordl_internals::intptr_t, false>(*this, ___internal_method, buffer, bufferLen, errorState);
}
inline ::Mono::Unity::__UnityTls__unitytls_x509verify_result Mono::Unity::UnityTlsContext::VerifyCallback(::cordl_internals::Ptr<void>  userData, ::Mono::Unity::__UnityTls__unitytls_x509list_ref  chain, ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate>  errorState)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(),
                            "VerifyCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Unity::__UnityTls__unitytls_x509list_ref>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Mono::Unity::__UnityTls__unitytls_x509verify_result, false>(nullptr, ___internal_method, userData, chain, errorState);
}
inline ::Mono::Unity::__UnityTls__unitytls_x509verify_result Mono::Unity::UnityTlsContext::VerifyCallback(::Mono::Unity::__UnityTls__unitytls_x509list_ref  chain, ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate>  errorState)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(),
                            "VerifyCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Unity::__UnityTls__unitytls_x509list_ref>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Mono::Unity::__UnityTls__unitytls_x509verify_result, false>(*this, ___internal_method, chain, errorState);
}
inline void Mono::Unity::UnityTlsContext::CertificateCallback(::cordl_internals::Ptr<void>  userData, ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_tlsctx>  ctx, ::cordl_internals::Ptr<uint8_t>  cn, ::cordl_internals::intptr_t  cnLen, ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_x509name>  caList, ::cordl_internals::intptr_t  caListLen, ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_x509list_ref>  chain, ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_key_ref>  key, ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate>  errorState)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(),
                            "CertificateCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_tlsctx>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_x509name>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_x509list_ref>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_key_ref>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, userData, ctx, cn, cnLen, caList, caListLen, chain, key, errorState);
}
inline void Mono::Unity::UnityTlsContext::CertificateCallback(::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_tlsctx>  ctx, ::cordl_internals::Ptr<uint8_t>  cn, ::cordl_internals::intptr_t  cnLen, ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_x509name>  caList, ::cordl_internals::intptr_t  caListLen, ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_x509list_ref>  chain, ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_key_ref>  key, ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate>  errorState)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(),
                            "CertificateCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_tlsctx>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_x509name>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_x509list_ref>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_key_ref>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, ctx, cn, cnLen, caList, caListLen, chain, key, errorState);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
