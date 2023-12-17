#pragma once
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsSrpIdentityManager_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsSrpLoginParameters_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsSrpIdentityManager.GetLoginParameters
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters* (::Org::BouncyCastle::Crypto::Tls::TlsSrpIdentityManager::*)(::ArrayW<uint8_t,::Array<uint8_t>*>)>(&::Org::BouncyCastle::Crypto::Tls::TlsSrpIdentityManager::GetLoginParameters)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsSrpIdentityManager*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsSrpIdentityManager*>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
inline ::Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters* Org::BouncyCastle::Crypto::Tls::TlsSrpIdentityManager::GetLoginParameters(::ArrayW<uint8_t,::Array<uint8_t>*>  identity)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsSrpIdentityManager*>::get(),
                            "GetLoginParameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters*, false>(*this, ___internal_method, identity);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
