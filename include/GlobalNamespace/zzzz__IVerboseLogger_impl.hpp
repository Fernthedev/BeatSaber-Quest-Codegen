#pragma once
#include "GlobalNamespace/zzzz__IVerboseLogger_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IVerboseLogger.get_loggerPrefix
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::IVerboseLogger::*)()>(&::GlobalNamespace::IVerboseLogger::get_loggerPrefix)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IVerboseLogger*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IVerboseLogger*>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
inline ::StringW GlobalNamespace::IVerboseLogger::get_loggerPrefix()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IVerboseLogger*>::get(),
                            "get_loggerPrefix",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
