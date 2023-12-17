#pragma once
#include "HoudiniEngineUnity/zzzz__HAPI_BoxInfo_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::HAPI_BoxInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HAPI_BoxInfo::*)(bool)>(&::HoudiniEngineUnity::HAPI_BoxInfo::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2191eb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HAPI_BoxInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void HoudiniEngineUnity::HAPI_BoxInfo::__set_center(::ArrayW<float_t,::Array<float_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<float_t,::Array<float_t>*>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::ArrayW<float_t,::Array<float_t>*>>(value));
}
constexpr ::ArrayW<float_t,::Array<float_t>*>& HoudiniEngineUnity::HAPI_BoxInfo::__get_center()  {
return ::cordl_internals::getInstanceField<::ArrayW<float_t,::Array<float_t>*>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::ArrayW<float_t,::Array<float_t>*> const& HoudiniEngineUnity::HAPI_BoxInfo::__get_center() const {
return ::cordl_internals::getInstanceField<::ArrayW<float_t,::Array<float_t>*>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void HoudiniEngineUnity::HAPI_BoxInfo::__set_size(::ArrayW<float_t,::Array<float_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<float_t,::Array<float_t>*>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::ArrayW<float_t,::Array<float_t>*>>(value));
}
constexpr ::ArrayW<float_t,::Array<float_t>*>& HoudiniEngineUnity::HAPI_BoxInfo::__get_size()  {
return ::cordl_internals::getInstanceField<::ArrayW<float_t,::Array<float_t>*>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::ArrayW<float_t,::Array<float_t>*> const& HoudiniEngineUnity::HAPI_BoxInfo::__get_size() const {
return ::cordl_internals::getInstanceField<::ArrayW<float_t,::Array<float_t>*>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void HoudiniEngineUnity::HAPI_BoxInfo::__set_rotation(::ArrayW<float_t,::Array<float_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<float_t,::Array<float_t>*>, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::ArrayW<float_t,::Array<float_t>*>>(value));
}
constexpr ::ArrayW<float_t,::Array<float_t>*>& HoudiniEngineUnity::HAPI_BoxInfo::__get_rotation()  {
return ::cordl_internals::getInstanceField<::ArrayW<float_t,::Array<float_t>*>, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::ArrayW<float_t,::Array<float_t>*> const& HoudiniEngineUnity::HAPI_BoxInfo::__get_rotation() const {
return ::cordl_internals::getInstanceField<::ArrayW<float_t,::Array<float_t>*>, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void HoudiniEngineUnity::HAPI_BoxInfo::_ctor(bool  initialize_fields)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HAPI_BoxInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, initialize_fields);
}
// Ctor Parameters [CppParam { name: "center", ty: "::ArrayW<float_t,::Array<float_t>*>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "size", ty: "::ArrayW<float_t,::Array<float_t>*>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "rotation", ty: "::ArrayW<float_t,::Array<float_t>*>", modifiers: "", def_value: Some("csnull") }]
constexpr ::HoudiniEngineUnity::HAPI_BoxInfo::HAPI_BoxInfo(::ArrayW<float_t,::Array<float_t>*>  center, ::ArrayW<float_t,::Array<float_t>*>  size, ::ArrayW<float_t,::Array<float_t>*>  rotation) noexcept : ::bs_hook::ValueTypeWrapper<0x18>() {this->center = center;
this->size = size;
this->rotation = rotation;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
