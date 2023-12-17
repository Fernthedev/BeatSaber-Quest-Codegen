#pragma once
#include "Org/BouncyCastle/Crypto/zzzz__IVerifierFactoryProvider_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IVerifierFactory_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::IVerifierFactoryProvider.CreateVerifierFactory
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::IVerifierFactory* (::Org::BouncyCastle::Crypto::IVerifierFactoryProvider::*)(::System::Object*)>(&::Org::BouncyCastle::Crypto::IVerifierFactoryProvider::CreateVerifierFactory)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::IVerifierFactoryProvider*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::IVerifierFactoryProvider*>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
inline ::Org::BouncyCastle::Crypto::IVerifierFactory* Org::BouncyCastle::Crypto::IVerifierFactoryProvider::CreateVerifierFactory(::System::Object*  algorithmDetails)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::IVerifierFactoryProvider*>::get(),
                            "CreateVerifierFactory",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::IVerifierFactory*, false>(*this, ___internal_method, algorithmDetails);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
