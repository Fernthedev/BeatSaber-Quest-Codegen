#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "ModestTree/Util/zzzz__PreserveAttribute_def.hpp"
//  Writing Method size for method: ::ModestTree::Util::PreserveAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ModestTree::Util::PreserveAttribute::*)()>(&::ModestTree::Util::PreserveAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ebee34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::Util::PreserveAttribute*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
inline ::ModestTree::Util::PreserveAttribute* ModestTree::Util::PreserveAttribute::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::ModestTree::Util::PreserveAttribute*>());
}
inline void ModestTree::Util::PreserveAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::Util::PreserveAttribute*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
