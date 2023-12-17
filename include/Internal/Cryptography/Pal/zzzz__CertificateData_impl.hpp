#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Internal/Cryptography/Pal/zzzz__CertificateData_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X500DistinguishedName_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Security/Cryptography/zzzz__DerSequenceReader_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Internal/Cryptography/Pal/zzzz__CertificateData_def.hpp"
#include "Internal/Cryptography/Pal/zzzz__GeneralNameType_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Extension_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509NameType_def.hpp"
constexpr void Internal::Cryptography::Pal::__CertificateData__AlgorithmIdentifier::__set_AlgorithmId(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::StringW>(value));
}
constexpr ::StringW& Internal::Cryptography::Pal::__CertificateData__AlgorithmIdentifier::__get_AlgorithmId()  {
return ::cordl_internals::getInstanceField<::StringW, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::StringW const& Internal::Cryptography::Pal::__CertificateData__AlgorithmIdentifier::__get_AlgorithmId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void Internal::Cryptography::Pal::__CertificateData__AlgorithmIdentifier::__set_Parameters(::ArrayW<uint8_t,::Array<uint8_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::ArrayW<uint8_t,::Array<uint8_t>*>>(value));
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& Internal::Cryptography::Pal::__CertificateData__AlgorithmIdentifier::__get_Parameters()  {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& Internal::Cryptography::Pal::__CertificateData__AlgorithmIdentifier::__get_Parameters() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "AlgorithmId", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "Parameters", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: Some("csnull") }]
constexpr ::Internal::Cryptography::Pal::__CertificateData__AlgorithmIdentifier::__CertificateData__AlgorithmIdentifier(::StringW  AlgorithmId, ::ArrayW<uint8_t,::Array<uint8_t>*>  Parameters) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->AlgorithmId = AlgorithmId;
this->Parameters = Parameters;
}
//  Writing Method size for method: ::Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21::*)(int32_t)>(&::Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x282a43c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21.System_IDisposable_Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21::*)()>(&::Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x282a470;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21*>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21::*)()>(&::Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21::MoveNext)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x282a474;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21*>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21.System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_System_String_System_String___get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::KeyValuePair_2<::StringW,::StringW> (::Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21::*)()>(&::Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21::System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_System_String_System_String___get_Current)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x282a708;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21*>::get(),
                            "System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<System.String,System.String>>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21.System_Collections_IEnumerator_Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21::*)()>(&::Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x282a714;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21*>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21.System_Collections_IEnumerator_get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21::*)()>(&::Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x282a754;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21*>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21.System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_System_String___GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::StringW>>* (::Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21::*)()>(&::Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21::System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_System_String___GetEnumerator)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x282a7b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21*>::get(),
                            "System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<System.String,System.String>>.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21.System_Collections_IEnumerable_GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21::*)()>(&::Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x282a854;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21*>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::StringW>>"
constexpr  Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21::operator ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::StringW>>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::StringW>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::StringW>>"
constexpr  Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21::operator ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::StringW>>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::StringW>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
constexpr void Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this, std::forward<int32_t>(value));
}
constexpr int32_t& Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr int32_t const& Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr void Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21::__set___2__current(::System::Collections::Generic::KeyValuePair_2<::StringW,::StringW>  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::KeyValuePair_2<::StringW,::StringW>, 0x18>(this, std::forward<::System::Collections::Generic::KeyValuePair_2<::StringW,::StringW>>(value));
}
constexpr ::System::Collections::Generic::KeyValuePair_2<::StringW,::StringW>& Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21::__get___2__current()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::KeyValuePair_2<::StringW,::StringW>, 0x18>(this);
}
constexpr ::System::Collections::Generic::KeyValuePair_2<::StringW,::StringW> const& Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21::__get___2__current() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::KeyValuePair_2<::StringW,::StringW>, 0x18>(this);
}
constexpr void Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21::__set___l__initialThreadId(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this, std::forward<int32_t>(value));
}
constexpr int32_t& Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21::__get___l__initialThreadId()  {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this);
}
constexpr int32_t const& Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21::__get___l__initialThreadId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this);
}
constexpr void Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21::__set_name(::System::Security::Cryptography::X509Certificates::X500DistinguishedName*  value)  {
::cordl_internals::setInstanceField<::System::Security::Cryptography::X509Certificates::X500DistinguishedName*, 0x30>(this, std::forward<::System::Security::Cryptography::X509Certificates::X500DistinguishedName*>(value));
}
constexpr ::System::Security::Cryptography::X509Certificates::X500DistinguishedName* Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21::__get_name()  {
return ::cordl_internals::getInstanceField<::System::Security::Cryptography::X509Certificates::X500DistinguishedName*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::X509Certificates::X500DistinguishedName*> Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21::__get_name() const {
return ::cordl_internals::getInstanceField<::System::Security::Cryptography::X509Certificates::X500DistinguishedName*, 0x30>(this);
}
constexpr void Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21::__set___3__name(::System::Security::Cryptography::X509Certificates::X500DistinguishedName*  value)  {
::cordl_internals::setInstanceField<::System::Security::Cryptography::X509Certificates::X500DistinguishedName*, 0x38>(this, std::forward<::System::Security::Cryptography::X509Certificates::X500DistinguishedName*>(value));
}
constexpr ::System::Security::Cryptography::X509Certificates::X500DistinguishedName* Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21::__get___3__name()  {
return ::cordl_internals::getInstanceField<::System::Security::Cryptography::X509Certificates::X500DistinguishedName*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::X509Certificates::X500DistinguishedName*> Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21::__get___3__name() const {
return ::cordl_internals::getInstanceField<::System::Security::Cryptography::X509Certificates::X500DistinguishedName*, 0x38>(this);
}
constexpr void Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21::__set__rdnReaders_5__2(::System::Collections::Generic::Stack_1<::System::Security::Cryptography::DerSequenceReader*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Stack_1<::System::Security::Cryptography::DerSequenceReader*>*, 0x40>(this, std::forward<::System::Collections::Generic::Stack_1<::System::Security::Cryptography::DerSequenceReader*>*>(value));
}
constexpr ::System::Collections::Generic::Stack_1<::System::Security::Cryptography::DerSequenceReader*>* Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21::__get__rdnReaders_5__2()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Stack_1<::System::Security::Cryptography::DerSequenceReader*>*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Stack_1<::System::Security::Cryptography::DerSequenceReader*>*> Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21::__get__rdnReaders_5__2() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Stack_1<::System::Security::Cryptography::DerSequenceReader*>*, 0x40>(this);
}
constexpr void Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21::__set__rdnReader_5__3(::System::Security::Cryptography::DerSequenceReader*  value)  {
::cordl_internals::setInstanceField<::System::Security::Cryptography::DerSequenceReader*, 0x48>(this, std::forward<::System::Security::Cryptography::DerSequenceReader*>(value));
}
constexpr ::System::Security::Cryptography::DerSequenceReader* Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21::__get__rdnReader_5__3()  {
return ::cordl_internals::getInstanceField<::System::Security::Cryptography::DerSequenceReader*, 0x48>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::DerSequenceReader*> Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21::__get__rdnReader_5__3() const {
return ::cordl_internals::getInstanceField<::System::Security::Cryptography::DerSequenceReader*, 0x48>(this);
}
inline ::Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21* Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::il2cpp_utils::New<::Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21*>(__1__state));
}
inline void Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, __1__state);
}
inline void Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21*>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21*>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::System::Collections::Generic::KeyValuePair_2<::StringW,::StringW> Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21::System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_System_String_System_String___get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21*>::get(),
                            "System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<System.String,System.String>>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::KeyValuePair_2<::StringW,::StringW>, false>(*this, ___internal_method);
}
inline void Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21*>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::Object* Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21*>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::StringW>>* Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21::System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_System_String___GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21*>::get(),
                            "System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<System.String,System.String>>.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::StringW>>*, false>(*this, ___internal_method);
}
inline ::System::Collections::IEnumerator* Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21*>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::Internal::Cryptography::Pal::CertificateData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Internal::Cryptography::Pal::CertificateData::*)(::ArrayW<uint8_t,::Array<uint8_t>*>)>(&::Internal::Cryptography::Pal::CertificateData::_ctor)> {
  constexpr static std::size_t size = 0x718;
  constexpr static std::size_t addrs = 0x282904c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Internal::Cryptography::Pal::CertificateData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Internal::Cryptography::Pal::CertificateData.GetNameInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Internal::Cryptography::Pal::CertificateData::*)(::System::Security::Cryptography::X509Certificates::X509NameType, bool)>(&::Internal::Cryptography::Pal::CertificateData::GetNameInfo)> {
  constexpr static std::size_t size = 0x640;
  constexpr static std::size_t addrs = 0x2829764;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Internal::Cryptography::Pal::CertificateData>::get(),
                            "GetNameInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509NameType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Internal::Cryptography::Pal::CertificateData.GetSimpleNameInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Security::Cryptography::X509Certificates::X500DistinguishedName*)>(&::Internal::Cryptography::Pal::CertificateData::GetSimpleNameInfo)> {
  constexpr static std::size_t size = 0x45c;
  constexpr static std::size_t addrs = 0x2829da4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Internal::Cryptography::Pal::CertificateData>::get(),
                            "GetSimpleNameInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X500DistinguishedName*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Internal::Cryptography::Pal::CertificateData.FindAltNameMatch
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::ArrayW<uint8_t,::Array<uint8_t>*>, ::Internal::Cryptography::Pal::GeneralNameType, ::StringW)>(&::Internal::Cryptography::Pal::CertificateData::FindAltNameMatch)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x282a200;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Internal::Cryptography::Pal::CertificateData>::get(),
                            "FindAltNameMatch",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Internal::Cryptography::Pal::GeneralNameType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Internal::Cryptography::Pal::CertificateData.ReadReverseRdns
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::StringW>>* (*)(::System::Security::Cryptography::X509Certificates::X500DistinguishedName*)>(&::Internal::Cryptography::Pal::CertificateData::ReadReverseRdns)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x282a3c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Internal::Cryptography::Pal::CertificateData>::get(),
                            "ReadReverseRdns",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X500DistinguishedName*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Internal::Cryptography::Pal::CertificateData::__set_RawData(::ArrayW<uint8_t,::Array<uint8_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::ArrayW<uint8_t,::Array<uint8_t>*>>(value));
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& Internal::Cryptography::Pal::CertificateData::__get_RawData()  {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& Internal::Cryptography::Pal::CertificateData::__get_RawData() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void Internal::Cryptography::Pal::CertificateData::__set_SubjectPublicKeyInfo(::ArrayW<uint8_t,::Array<uint8_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::ArrayW<uint8_t,::Array<uint8_t>*>>(value));
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& Internal::Cryptography::Pal::CertificateData::__get_SubjectPublicKeyInfo()  {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& Internal::Cryptography::Pal::CertificateData::__get_SubjectPublicKeyInfo() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void Internal::Cryptography::Pal::CertificateData::__set_Version(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& Internal::Cryptography::Pal::CertificateData::__get_Version()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& Internal::Cryptography::Pal::CertificateData::__get_Version() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void Internal::Cryptography::Pal::CertificateData::__set_SerialNumber(::ArrayW<uint8_t,::Array<uint8_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::ArrayW<uint8_t,::Array<uint8_t>*>>(value));
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& Internal::Cryptography::Pal::CertificateData::__get_SerialNumber()  {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& Internal::Cryptography::Pal::CertificateData::__get_SerialNumber() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void Internal::Cryptography::Pal::CertificateData::__set_TbsSignature(::Internal::Cryptography::Pal::__CertificateData__AlgorithmIdentifier  value)  {
::cordl_internals::setInstanceField<::Internal::Cryptography::Pal::__CertificateData__AlgorithmIdentifier, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::Internal::Cryptography::Pal::__CertificateData__AlgorithmIdentifier>(value));
}
constexpr ::Internal::Cryptography::Pal::__CertificateData__AlgorithmIdentifier& Internal::Cryptography::Pal::CertificateData::__get_TbsSignature()  {
return ::cordl_internals::getInstanceField<::Internal::Cryptography::Pal::__CertificateData__AlgorithmIdentifier, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::Internal::Cryptography::Pal::__CertificateData__AlgorithmIdentifier const& Internal::Cryptography::Pal::CertificateData::__get_TbsSignature() const {
return ::cordl_internals::getInstanceField<::Internal::Cryptography::Pal::__CertificateData__AlgorithmIdentifier, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void Internal::Cryptography::Pal::CertificateData::__set_Issuer(::System::Security::Cryptography::X509Certificates::X500DistinguishedName*  value)  {
::cordl_internals::setInstanceField<::System::Security::Cryptography::X509Certificates::X500DistinguishedName*, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Security::Cryptography::X509Certificates::X500DistinguishedName*>(value));
}
constexpr ::System::Security::Cryptography::X509Certificates::X500DistinguishedName* Internal::Cryptography::Pal::CertificateData::__get_Issuer()  {
return ::cordl_internals::getInstanceField<::System::Security::Cryptography::X509Certificates::X500DistinguishedName*, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::X509Certificates::X500DistinguishedName*> Internal::Cryptography::Pal::CertificateData::__get_Issuer() const {
return ::cordl_internals::getInstanceField<::System::Security::Cryptography::X509Certificates::X500DistinguishedName*, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void Internal::Cryptography::Pal::CertificateData::__set_NotBefore(::System::DateTime  value)  {
::cordl_internals::setInstanceField<::System::DateTime, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::DateTime>(value));
}
constexpr ::System::DateTime& Internal::Cryptography::Pal::CertificateData::__get_NotBefore()  {
return ::cordl_internals::getInstanceField<::System::DateTime, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::DateTime const& Internal::Cryptography::Pal::CertificateData::__get_NotBefore() const {
return ::cordl_internals::getInstanceField<::System::DateTime, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void Internal::Cryptography::Pal::CertificateData::__set_NotAfter(::System::DateTime  value)  {
::cordl_internals::setInstanceField<::System::DateTime, 0x40>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::DateTime>(value));
}
constexpr ::System::DateTime& Internal::Cryptography::Pal::CertificateData::__get_NotAfter()  {
return ::cordl_internals::getInstanceField<::System::DateTime, 0x40>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::DateTime const& Internal::Cryptography::Pal::CertificateData::__get_NotAfter() const {
return ::cordl_internals::getInstanceField<::System::DateTime, 0x40>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void Internal::Cryptography::Pal::CertificateData::__set_Subject(::System::Security::Cryptography::X509Certificates::X500DistinguishedName*  value)  {
::cordl_internals::setInstanceField<::System::Security::Cryptography::X509Certificates::X500DistinguishedName*, 0x48>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Security::Cryptography::X509Certificates::X500DistinguishedName*>(value));
}
constexpr ::System::Security::Cryptography::X509Certificates::X500DistinguishedName* Internal::Cryptography::Pal::CertificateData::__get_Subject()  {
return ::cordl_internals::getInstanceField<::System::Security::Cryptography::X509Certificates::X500DistinguishedName*, 0x48>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::X509Certificates::X500DistinguishedName*> Internal::Cryptography::Pal::CertificateData::__get_Subject() const {
return ::cordl_internals::getInstanceField<::System::Security::Cryptography::X509Certificates::X500DistinguishedName*, 0x48>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void Internal::Cryptography::Pal::CertificateData::__set_PublicKeyAlgorithm(::Internal::Cryptography::Pal::__CertificateData__AlgorithmIdentifier  value)  {
::cordl_internals::setInstanceField<::Internal::Cryptography::Pal::__CertificateData__AlgorithmIdentifier, 0x50>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::Internal::Cryptography::Pal::__CertificateData__AlgorithmIdentifier>(value));
}
constexpr ::Internal::Cryptography::Pal::__CertificateData__AlgorithmIdentifier& Internal::Cryptography::Pal::CertificateData::__get_PublicKeyAlgorithm()  {
return ::cordl_internals::getInstanceField<::Internal::Cryptography::Pal::__CertificateData__AlgorithmIdentifier, 0x50>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::Internal::Cryptography::Pal::__CertificateData__AlgorithmIdentifier const& Internal::Cryptography::Pal::CertificateData::__get_PublicKeyAlgorithm() const {
return ::cordl_internals::getInstanceField<::Internal::Cryptography::Pal::__CertificateData__AlgorithmIdentifier, 0x50>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void Internal::Cryptography::Pal::CertificateData::__set_PublicKey(::ArrayW<uint8_t,::Array<uint8_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x60>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::ArrayW<uint8_t,::Array<uint8_t>*>>(value));
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& Internal::Cryptography::Pal::CertificateData::__get_PublicKey()  {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x60>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& Internal::Cryptography::Pal::CertificateData::__get_PublicKey() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x60>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void Internal::Cryptography::Pal::CertificateData::__set_IssuerUniqueId(::ArrayW<uint8_t,::Array<uint8_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x68>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::ArrayW<uint8_t,::Array<uint8_t>*>>(value));
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& Internal::Cryptography::Pal::CertificateData::__get_IssuerUniqueId()  {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x68>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& Internal::Cryptography::Pal::CertificateData::__get_IssuerUniqueId() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x68>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void Internal::Cryptography::Pal::CertificateData::__set_SubjectUniqueId(::ArrayW<uint8_t,::Array<uint8_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x70>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::ArrayW<uint8_t,::Array<uint8_t>*>>(value));
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& Internal::Cryptography::Pal::CertificateData::__get_SubjectUniqueId()  {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x70>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& Internal::Cryptography::Pal::CertificateData::__get_SubjectUniqueId() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x70>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void Internal::Cryptography::Pal::CertificateData::__set_Extensions(::System::Collections::Generic::List_1<::System::Security::Cryptography::X509Certificates::X509Extension*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::System::Security::Cryptography::X509Certificates::X509Extension*>*, 0x78>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Collections::Generic::List_1<::System::Security::Cryptography::X509Certificates::X509Extension*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::System::Security::Cryptography::X509Certificates::X509Extension*>* Internal::Cryptography::Pal::CertificateData::__get_Extensions()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::System::Security::Cryptography::X509Certificates::X509Extension*>*, 0x78>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Security::Cryptography::X509Certificates::X509Extension*>*> Internal::Cryptography::Pal::CertificateData::__get_Extensions() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::System::Security::Cryptography::X509Certificates::X509Extension*>*, 0x78>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void Internal::Cryptography::Pal::CertificateData::__set_SignatureAlgorithm(::Internal::Cryptography::Pal::__CertificateData__AlgorithmIdentifier  value)  {
::cordl_internals::setInstanceField<::Internal::Cryptography::Pal::__CertificateData__AlgorithmIdentifier, 0x80>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::Internal::Cryptography::Pal::__CertificateData__AlgorithmIdentifier>(value));
}
constexpr ::Internal::Cryptography::Pal::__CertificateData__AlgorithmIdentifier& Internal::Cryptography::Pal::CertificateData::__get_SignatureAlgorithm()  {
return ::cordl_internals::getInstanceField<::Internal::Cryptography::Pal::__CertificateData__AlgorithmIdentifier, 0x80>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::Internal::Cryptography::Pal::__CertificateData__AlgorithmIdentifier const& Internal::Cryptography::Pal::CertificateData::__get_SignatureAlgorithm() const {
return ::cordl_internals::getInstanceField<::Internal::Cryptography::Pal::__CertificateData__AlgorithmIdentifier, 0x80>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void Internal::Cryptography::Pal::CertificateData::__set_SignatureValue(::ArrayW<uint8_t,::Array<uint8_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x90>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::ArrayW<uint8_t,::Array<uint8_t>*>>(value));
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& Internal::Cryptography::Pal::CertificateData::__get_SignatureValue()  {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x90>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& Internal::Cryptography::Pal::CertificateData::__get_SignatureValue() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x90>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void Internal::Cryptography::Pal::CertificateData::_ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  rawData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Internal::Cryptography::Pal::CertificateData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, rawData);
}
inline ::StringW Internal::Cryptography::Pal::CertificateData::GetNameInfo(::System::Security::Cryptography::X509Certificates::X509NameType  nameType, bool  forIssuer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Internal::Cryptography::Pal::CertificateData>::get(),
                            "GetNameInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509NameType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method, nameType, forIssuer);
}
inline ::StringW Internal::Cryptography::Pal::CertificateData::GetSimpleNameInfo(::System::Security::Cryptography::X509Certificates::X500DistinguishedName*  name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Internal::Cryptography::Pal::CertificateData>::get(),
                            "GetSimpleNameInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X500DistinguishedName*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, name);
}
inline ::StringW Internal::Cryptography::Pal::CertificateData::FindAltNameMatch(::ArrayW<uint8_t,::Array<uint8_t>*>  extensionBytes, ::Internal::Cryptography::Pal::GeneralNameType  matchType, ::StringW  otherOid)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Internal::Cryptography::Pal::CertificateData>::get(),
                            "FindAltNameMatch",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Internal::Cryptography::Pal::GeneralNameType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, extensionBytes, matchType, otherOid);
}
inline ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::StringW>>* Internal::Cryptography::Pal::CertificateData::ReadReverseRdns(::System::Security::Cryptography::X509Certificates::X500DistinguishedName*  name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Internal::Cryptography::Pal::CertificateData>::get(),
                            "ReadReverseRdns",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X500DistinguishedName*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::StringW>>*, false>(nullptr, ___internal_method, name);
}
// Ctor Parameters [CppParam { name: "RawData", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "SubjectPublicKeyInfo", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "Version", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "SerialNumber", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "TbsSignature", ty: "::Internal::Cryptography::Pal::__CertificateData__AlgorithmIdentifier", modifiers: "", def_value: Some("{}") }, CppParam { name: "Issuer", ty: "::System::Security::Cryptography::X509Certificates::X500DistinguishedName*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "NotBefore", ty: "::System::DateTime", modifiers: "", def_value: Some("{}") }, CppParam { name: "NotAfter", ty: "::System::DateTime", modifiers: "", def_value: Some("{}") }, CppParam { name: "Subject", ty: "::System::Security::Cryptography::X509Certificates::X500DistinguishedName*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "PublicKeyAlgorithm", ty: "::Internal::Cryptography::Pal::__CertificateData__AlgorithmIdentifier", modifiers: "", def_value: Some("{}") }, CppParam { name: "PublicKey", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "IssuerUniqueId", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "SubjectUniqueId", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "Extensions", ty: "::System::Collections::Generic::List_1<::System::Security::Cryptography::X509Certificates::X509Extension*>*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "SignatureAlgorithm", ty: "::Internal::Cryptography::Pal::__CertificateData__AlgorithmIdentifier", modifiers: "", def_value: Some("{}") }, CppParam { name: "SignatureValue", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: Some("csnull") }]
constexpr ::Internal::Cryptography::Pal::CertificateData::CertificateData(::ArrayW<uint8_t,::Array<uint8_t>*>  RawData, ::ArrayW<uint8_t,::Array<uint8_t>*>  SubjectPublicKeyInfo, int32_t  Version, ::ArrayW<uint8_t,::Array<uint8_t>*>  SerialNumber, ::Internal::Cryptography::Pal::__CertificateData__AlgorithmIdentifier  TbsSignature, ::System::Security::Cryptography::X509Certificates::X500DistinguishedName*  Issuer, ::System::DateTime  NotBefore, ::System::DateTime  NotAfter, ::System::Security::Cryptography::X509Certificates::X500DistinguishedName*  Subject, ::Internal::Cryptography::Pal::__CertificateData__AlgorithmIdentifier  PublicKeyAlgorithm, ::ArrayW<uint8_t,::Array<uint8_t>*>  PublicKey, ::ArrayW<uint8_t,::Array<uint8_t>*>  IssuerUniqueId, ::ArrayW<uint8_t,::Array<uint8_t>*>  SubjectUniqueId, ::System::Collections::Generic::List_1<::System::Security::Cryptography::X509Certificates::X509Extension*>*  Extensions, ::Internal::Cryptography::Pal::__CertificateData__AlgorithmIdentifier  SignatureAlgorithm, ::ArrayW<uint8_t,::Array<uint8_t>*>  SignatureValue) noexcept : ::bs_hook::ValueTypeWrapper<0x98>() {this->RawData = RawData;
this->SubjectPublicKeyInfo = SubjectPublicKeyInfo;
this->Version = Version;
this->SerialNumber = SerialNumber;
this->TbsSignature = TbsSignature;
this->Issuer = Issuer;
this->NotBefore = NotBefore;
this->NotAfter = NotAfter;
this->Subject = Subject;
this->PublicKeyAlgorithm = PublicKeyAlgorithm;
this->PublicKey = PublicKey;
this->IssuerUniqueId = IssuerUniqueId;
this->SubjectUniqueId = SubjectUniqueId;
this->Extensions = Extensions;
this->SignatureAlgorithm = SignatureAlgorithm;
this->SignatureValue = SignatureValue;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
