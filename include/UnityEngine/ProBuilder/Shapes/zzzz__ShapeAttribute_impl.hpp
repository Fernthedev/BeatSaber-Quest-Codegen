#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/ProBuilder/Shapes/zzzz__ShapeAttribute_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::Shapes::ShapeAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::Shapes::ShapeAttribute::*)(::StringW)>(&::UnityEngine::ProBuilder::Shapes::ShapeAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2b8dc40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Shapes::ShapeAttribute*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::ProBuilder::Shapes::ShapeAttribute::__set_name(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& UnityEngine::ProBuilder::Shapes::ShapeAttribute::__get_name()  {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr ::StringW const& UnityEngine::ProBuilder::Shapes::ShapeAttribute::__get_name() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
inline ::UnityEngine::ProBuilder::Shapes::ShapeAttribute* UnityEngine::ProBuilder::Shapes::ShapeAttribute::New_ctor(::StringW  n)  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::ProBuilder::Shapes::ShapeAttribute*>(n));
}
inline void UnityEngine::ProBuilder::Shapes::ShapeAttribute::_ctor(::StringW  n)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Shapes::ShapeAttribute*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, n);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
