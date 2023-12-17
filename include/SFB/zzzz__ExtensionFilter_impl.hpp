#pragma once
#include "SFB/zzzz__ExtensionFilter_def.hpp"
//  Writing Method size for method: ::SFB::ExtensionFilter._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::SFB::ExtensionFilter::*)(::StringW, ::ArrayW<::StringW,::Array<::StringW>*>)>(&::SFB::ExtensionFilter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2321300;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::SFB::ExtensionFilter>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW,::Array<::StringW>*>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void SFB::ExtensionFilter::__set__name(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::StringW>(value));
}
constexpr ::StringW& SFB::ExtensionFilter::__get__name()  {
return ::cordl_internals::getInstanceField<::StringW, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::StringW const& SFB::ExtensionFilter::__get__name() const {
return ::cordl_internals::getInstanceField<::StringW, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void SFB::ExtensionFilter::__set__extensions(::ArrayW<::StringW,::Array<::StringW>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::ArrayW<::StringW,::Array<::StringW>*>>(value));
}
constexpr ::ArrayW<::StringW,::Array<::StringW>*>& SFB::ExtensionFilter::__get__extensions()  {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::ArrayW<::StringW,::Array<::StringW>*> const& SFB::ExtensionFilter::__get__extensions() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void SFB::ExtensionFilter::_ctor(::StringW  filterName, ::ArrayW<::StringW,::Array<::StringW>*>  filterExtensions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::SFB::ExtensionFilter>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW,::Array<::StringW>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, filterName, filterExtensions);
}
// Ctor Parameters [CppParam { name: "_name", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_extensions", ty: "::ArrayW<::StringW,::Array<::StringW>*>", modifiers: "", def_value: Some("csnull") }]
constexpr ::SFB::ExtensionFilter::ExtensionFilter(::StringW  _name, ::ArrayW<::StringW,::Array<::StringW>*>  _extensions) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->_name = _name;
this->_extensions = _extensions;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
