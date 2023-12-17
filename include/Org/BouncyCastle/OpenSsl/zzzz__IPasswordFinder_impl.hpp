#pragma once
#include "Org/BouncyCastle/OpenSsl/zzzz__IPasswordFinder_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::OpenSsl::IPasswordFinder.GetPassword
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<char16_t,::Array<char16_t>*> (::Org::BouncyCastle::OpenSsl::IPasswordFinder::*)()>(&::Org::BouncyCastle::OpenSsl::IPasswordFinder::GetPassword)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::OpenSsl::IPasswordFinder*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::OpenSsl::IPasswordFinder*>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
inline ::ArrayW<char16_t,::Array<char16_t>*> Org::BouncyCastle::OpenSsl::IPasswordFinder::GetPassword()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::OpenSsl::IPasswordFinder*>::get(),
                            "GetPassword",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<char16_t,::Array<char16_t>*>, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
