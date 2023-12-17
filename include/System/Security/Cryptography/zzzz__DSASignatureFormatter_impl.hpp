#pragma once
#include "System/Security/Cryptography/zzzz__AsymmetricSignatureFormatter_impl.hpp"
#include "System/Security/Cryptography/zzzz__DSASignatureFormatter_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::DSASignatureFormatter._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::DSASignatureFormatter::*)()>(&::System::Security::Cryptography::DSASignatureFormatter::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x245e188;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DSASignatureFormatter*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Security::Cryptography::DSASignatureFormatter::__set__oid(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& System::Security::Cryptography::DSASignatureFormatter::__get__oid()  {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr ::StringW const& System::Security::Cryptography::DSASignatureFormatter::__get__oid() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
inline ::System::Security::Cryptography::DSASignatureFormatter* System::Security::Cryptography::DSASignatureFormatter::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Security::Cryptography::DSASignatureFormatter*>());
}
inline void System::Security::Cryptography::DSASignatureFormatter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DSASignatureFormatter*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
