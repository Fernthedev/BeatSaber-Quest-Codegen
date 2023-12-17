#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__Product_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::Product._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::Product::*)(::cordl_internals::intptr_t)>(&::Oculus::Platform::Models::Product::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x27084a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::Product*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Oculus::Platform::Models::Product::__set_Description(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& Oculus::Platform::Models::Product::__get_Description()  {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr ::StringW const& Oculus::Platform::Models::Product::__get_Description() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr void Oculus::Platform::Models::Product::__set_FormattedPrice(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& Oculus::Platform::Models::Product::__get_FormattedPrice()  {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr ::StringW const& Oculus::Platform::Models::Product::__get_FormattedPrice() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr void Oculus::Platform::Models::Product::__set_Name(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& Oculus::Platform::Models::Product::__get_Name()  {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this);
}
constexpr ::StringW const& Oculus::Platform::Models::Product::__get_Name() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this);
}
constexpr void Oculus::Platform::Models::Product::__set_Sku(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x28>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& Oculus::Platform::Models::Product::__get_Sku()  {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this);
}
constexpr ::StringW const& Oculus::Platform::Models::Product::__get_Sku() const {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this);
}
inline ::Oculus::Platform::Models::Product* Oculus::Platform::Models::Product::New_ctor(::cordl_internals::intptr_t  o)  {
return THROW_UNLESS(::il2cpp_utils::New<::Oculus::Platform::Models::Product*>(o));
}
inline void Oculus::Platform::Models::Product::_ctor(::cordl_internals::intptr_t  o)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::Product*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, o);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
