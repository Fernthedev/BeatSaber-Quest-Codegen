#pragma once
#include "LIV/SDK/Unity/zzzz__SDKTransform_def.hpp"
#include "LIV/SDK/Unity/zzzz__SDKQuaternion_def.hpp"
#include "LIV/SDK/Unity/zzzz__SDKVector3_def.hpp"
//  Writing Method size for method: ::LIV::SDK::Unity::SDKTransform.get_empty
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::LIV::SDK::Unity::SDKTransform (*)()>(&::LIV::SDK::Unity::SDKTransform::get_empty)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2215268;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKTransform>::get(),
                            "get_empty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKTransform.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::LIV::SDK::Unity::SDKTransform::*)()>(&::LIV::SDK::Unity::SDKTransform::ToString)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2215cc0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKTransform>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKTransform>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
constexpr void LIV::SDK::Unity::SDKTransform::__set_localPosition(::LIV::SDK::Unity::SDKVector3  value)  {
::cordl_internals::setInstanceField<::LIV::SDK::Unity::SDKVector3, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::LIV::SDK::Unity::SDKVector3>(value));
}
constexpr ::LIV::SDK::Unity::SDKVector3& LIV::SDK::Unity::SDKTransform::__get_localPosition()  {
return ::cordl_internals::getInstanceField<::LIV::SDK::Unity::SDKVector3, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::LIV::SDK::Unity::SDKVector3 const& LIV::SDK::Unity::SDKTransform::__get_localPosition() const {
return ::cordl_internals::getInstanceField<::LIV::SDK::Unity::SDKVector3, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void LIV::SDK::Unity::SDKTransform::__set_localRotation(::LIV::SDK::Unity::SDKQuaternion  value)  {
::cordl_internals::setInstanceField<::LIV::SDK::Unity::SDKQuaternion, 0xc>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::LIV::SDK::Unity::SDKQuaternion>(value));
}
constexpr ::LIV::SDK::Unity::SDKQuaternion& LIV::SDK::Unity::SDKTransform::__get_localRotation()  {
return ::cordl_internals::getInstanceField<::LIV::SDK::Unity::SDKQuaternion, 0xc>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::LIV::SDK::Unity::SDKQuaternion const& LIV::SDK::Unity::SDKTransform::__get_localRotation() const {
return ::cordl_internals::getInstanceField<::LIV::SDK::Unity::SDKQuaternion, 0xc>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void LIV::SDK::Unity::SDKTransform::__set_localScale(::LIV::SDK::Unity::SDKVector3  value)  {
::cordl_internals::setInstanceField<::LIV::SDK::Unity::SDKVector3, 0x1c>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::LIV::SDK::Unity::SDKVector3>(value));
}
constexpr ::LIV::SDK::Unity::SDKVector3& LIV::SDK::Unity::SDKTransform::__get_localScale()  {
return ::cordl_internals::getInstanceField<::LIV::SDK::Unity::SDKVector3, 0x1c>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::LIV::SDK::Unity::SDKVector3 const& LIV::SDK::Unity::SDKTransform::__get_localScale() const {
return ::cordl_internals::getInstanceField<::LIV::SDK::Unity::SDKVector3, 0x1c>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline ::LIV::SDK::Unity::SDKTransform LIV::SDK::Unity::SDKTransform::get_empty()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKTransform>::get(),
                            "get_empty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::LIV::SDK::Unity::SDKTransform, false>(nullptr, ___internal_method);
}
inline ::StringW LIV::SDK::Unity::SDKTransform::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKTransform>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "localPosition", ty: "::LIV::SDK::Unity::SDKVector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "localRotation", ty: "::LIV::SDK::Unity::SDKQuaternion", modifiers: "", def_value: Some("{}") }, CppParam { name: "localScale", ty: "::LIV::SDK::Unity::SDKVector3", modifiers: "", def_value: Some("{}") }]
constexpr ::LIV::SDK::Unity::SDKTransform::SDKTransform(::LIV::SDK::Unity::SDKVector3  localPosition, ::LIV::SDK::Unity::SDKQuaternion  localRotation, ::LIV::SDK::Unity::SDKVector3  localScale) noexcept : ::bs_hook::ValueTypeWrapper<0x28>() {this->localPosition = localPosition;
this->localRotation = localRotation;
this->localScale = localScale;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
