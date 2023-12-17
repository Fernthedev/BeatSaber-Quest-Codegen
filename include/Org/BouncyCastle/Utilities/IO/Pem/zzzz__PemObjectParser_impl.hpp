#pragma once
#include "Org/BouncyCastle/Utilities/IO/Pem/zzzz__PemObjectParser_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Org/BouncyCastle/Utilities/IO/Pem/zzzz__PemObject_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::IO::Pem::PemObjectParser.ParseObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::Org::BouncyCastle::Utilities::IO::Pem::PemObjectParser::*)(::Org::BouncyCastle::Utilities::IO::Pem::PemObject*)>(&::Org::BouncyCastle::Utilities::IO::Pem::PemObjectParser::ParseObject)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::IO::Pem::PemObjectParser*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::IO::Pem::PemObjectParser*>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
inline ::System::Object* Org::BouncyCastle::Utilities::IO::Pem::PemObjectParser::ParseObject(::Org::BouncyCastle::Utilities::IO::Pem::PemObject*  obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::IO::Pem::PemObjectParser*>::get(),
                            "ParseObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::IO::Pem::PemObject*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method, obj);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
