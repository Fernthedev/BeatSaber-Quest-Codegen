#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crmf/zzzz__PKMacStreamCalculator_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IStreamCalculator_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IMac_def.hpp"
#include "Org/BouncyCastle/Crypto/IO/zzzz__MacSink_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::PKMacStreamCalculator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crmf::PKMacStreamCalculator::*)(::Org::BouncyCastle::Crypto::IMac*)>(&::Org::BouncyCastle::Crmf::PKMacStreamCalculator::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x1211eac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::PKMacStreamCalculator*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IMac*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::PKMacStreamCalculator.get_Stream
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream* (::Org::BouncyCastle::Crmf::PKMacStreamCalculator::*)()>(&::Org::BouncyCastle::Crmf::PKMacStreamCalculator::get_Stream)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1211f28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::PKMacStreamCalculator*>::get(),
                            "get_Stream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::PKMacStreamCalculator.GetResult
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::Org::BouncyCastle::Crmf::PKMacStreamCalculator::*)()>(&::Org::BouncyCastle::Crmf::PKMacStreamCalculator::GetResult)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x1211f30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::PKMacStreamCalculator*>::get(),
                            "GetResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IStreamCalculator"
constexpr  Org::BouncyCastle::Crmf::PKMacStreamCalculator::operator ::Org::BouncyCastle::Crypto::IStreamCalculator*() noexcept {
return static_cast<::Org::BouncyCastle::Crypto::IStreamCalculator*>(static_cast<void*>(this));
}
constexpr void Org::BouncyCastle::Crmf::PKMacStreamCalculator::__set__stream(::Org::BouncyCastle::Crypto::IO::MacSink*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Crypto::IO::MacSink*, 0x10>(this, std::forward<::Org::BouncyCastle::Crypto::IO::MacSink*>(value));
}
constexpr ::Org::BouncyCastle::Crypto::IO::MacSink* Org::BouncyCastle::Crmf::PKMacStreamCalculator::__get__stream()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::IO::MacSink*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IO::MacSink*> Org::BouncyCastle::Crmf::PKMacStreamCalculator::__get__stream() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::IO::MacSink*, 0x10>(this);
}
inline ::Org::BouncyCastle::Crmf::PKMacStreamCalculator* Org::BouncyCastle::Crmf::PKMacStreamCalculator::New_ctor(::Org::BouncyCastle::Crypto::IMac*  mac)  {
return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Crmf::PKMacStreamCalculator*>(mac));
}
inline void Org::BouncyCastle::Crmf::PKMacStreamCalculator::_ctor(::Org::BouncyCastle::Crypto::IMac*  mac)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::PKMacStreamCalculator*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IMac*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, mac);
}
inline ::System::IO::Stream* Org::BouncyCastle::Crmf::PKMacStreamCalculator::get_Stream()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::PKMacStreamCalculator*>::get(),
                            "get_Stream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*, false>(*this, ___internal_method);
}
inline ::System::Object* Org::BouncyCastle::Crmf::PKMacStreamCalculator::GetResult()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::PKMacStreamCalculator*>::get(),
                            "GetResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
