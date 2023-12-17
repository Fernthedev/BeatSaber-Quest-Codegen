#pragma once
#include "UnityEngine/UIElements/StyleSheets/zzzz__ScalableImage_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::ScalableImage.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::UIElements::StyleSheets::ScalableImage::*)()>(&::UnityEngine::UIElements::StyleSheets::ScalableImage::ToString)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x2de5e24;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::ScalableImage>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::ScalableImage>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
constexpr void UnityEngine::UIElements::StyleSheets::ScalableImage::__set_normalImage(::UnityEngine::Texture2D*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Texture2D*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::Texture2D*>(value));
}
constexpr ::UnityEngine::Texture2D* UnityEngine::UIElements::StyleSheets::ScalableImage::__get_normalImage()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Texture2D*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Texture2D*> UnityEngine::UIElements::StyleSheets::ScalableImage::__get_normalImage() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Texture2D*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::UIElements::StyleSheets::ScalableImage::__set_highResolutionImage(::UnityEngine::Texture2D*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Texture2D*, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::Texture2D*>(value));
}
constexpr ::UnityEngine::Texture2D* UnityEngine::UIElements::StyleSheets::ScalableImage::__get_highResolutionImage()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Texture2D*, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Texture2D*> UnityEngine::UIElements::StyleSheets::ScalableImage::__get_highResolutionImage() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Texture2D*, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline ::StringW UnityEngine::UIElements::StyleSheets::ScalableImage::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::ScalableImage>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "normalImage", ty: "::UnityEngine::Texture2D*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "highResolutionImage", ty: "::UnityEngine::Texture2D*", modifiers: "", def_value: Some("csnull") }]
constexpr ::UnityEngine::UIElements::StyleSheets::ScalableImage::ScalableImage(::UnityEngine::Texture2D*  normalImage, ::UnityEngine::Texture2D*  highResolutionImage) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->normalImage = normalImage;
this->highResolutionImage = highResolutionImage;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
