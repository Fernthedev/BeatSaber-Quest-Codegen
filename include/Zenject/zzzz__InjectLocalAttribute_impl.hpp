#pragma once
#include "Zenject/zzzz__InjectAttributeBase_impl.hpp"
#include "Zenject/zzzz__InjectLocalAttribute_def.hpp"
//  Writing Method size for method: ::Zenject::InjectLocalAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::InjectLocalAttribute::*)()>(&::Zenject::InjectLocalAttribute::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2eb97f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::InjectLocalAttribute*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
inline ::Zenject::InjectLocalAttribute* Zenject::InjectLocalAttribute::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::Zenject::InjectLocalAttribute*>());
}
inline void Zenject::InjectLocalAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::InjectLocalAttribute*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
