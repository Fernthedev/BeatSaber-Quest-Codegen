#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "System/zzzz__CLSCompliantAttribute_def.hpp"
//  Writing Method size for method: ::System::CLSCompliantAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::CLSCompliantAttribute::*)(bool)>(&::System::CLSCompliantAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2525328;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::CLSCompliantAttribute*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::CLSCompliantAttribute::__set__compliant(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this, std::forward<bool>(value));
}
constexpr bool& System::CLSCompliantAttribute::__get__compliant()  {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr bool const& System::CLSCompliantAttribute::__get__compliant() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
inline ::System::CLSCompliantAttribute* System::CLSCompliantAttribute::New_ctor(bool  isCompliant)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::CLSCompliantAttribute*>(isCompliant));
}
inline void System::CLSCompliantAttribute::_ctor(bool  isCompliant)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::CLSCompliantAttribute*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, isCompliant);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
