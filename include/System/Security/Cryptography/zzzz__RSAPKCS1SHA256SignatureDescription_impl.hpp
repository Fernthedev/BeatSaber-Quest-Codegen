#pragma once
#include "System/Security/Cryptography/zzzz__RSAPKCS1SignatureDescription_impl.hpp"
#include "System/Security/Cryptography/zzzz__RSAPKCS1SHA256SignatureDescription_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::RSAPKCS1SHA256SignatureDescription._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::RSAPKCS1SHA256SignatureDescription::*)()>(&::System::Security::Cryptography::RSAPKCS1SHA256SignatureDescription::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x246a16c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSAPKCS1SHA256SignatureDescription*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
inline ::System::Security::Cryptography::RSAPKCS1SHA256SignatureDescription* System::Security::Cryptography::RSAPKCS1SHA256SignatureDescription::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Security::Cryptography::RSAPKCS1SHA256SignatureDescription*>());
}
inline void System::Security::Cryptography::RSAPKCS1SHA256SignatureDescription::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSAPKCS1SHA256SignatureDescription*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
