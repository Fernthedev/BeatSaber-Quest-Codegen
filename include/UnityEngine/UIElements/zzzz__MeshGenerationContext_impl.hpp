#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__MeshGenerationContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__MeshGenerationContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__IStylePainter_def.hpp"
constexpr void UnityEngine::UIElements::__MeshGenerationContext__MeshFlags::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::UIElements::__MeshGenerationContext__MeshFlags::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::UIElements::__MeshGenerationContext__MeshFlags::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::__MeshGenerationContext__MeshFlags::__MeshGenerationContext__MeshFlags(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::UIElements::__MeshGenerationContext__MeshFlags  UnityEngine::UIElements::__MeshGenerationContext__MeshFlags::None{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::UIElements::__MeshGenerationContext__MeshFlags  UnityEngine::UIElements::__MeshGenerationContext__MeshFlags::UVisDisplacement{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::UIElements::__MeshGenerationContext__MeshFlags  UnityEngine::UIElements::__MeshGenerationContext__MeshFlags::SkipDynamicAtlas{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::UnityEngine::UIElements::MeshGenerationContext._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::MeshGenerationContext::*)(::UnityEngine::UIElements::IStylePainter*)>(&::UnityEngine::UIElements::MeshGenerationContext::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2e7c390;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MeshGenerationContext*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IStylePainter*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::UIElements::MeshGenerationContext::__set_painter(::UnityEngine::UIElements::IStylePainter*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::IStylePainter*, 0x10>(this, std::forward<::UnityEngine::UIElements::IStylePainter*>(value));
}
constexpr ::UnityEngine::UIElements::IStylePainter* UnityEngine::UIElements::MeshGenerationContext::__get_painter()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::IStylePainter*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::IStylePainter*> UnityEngine::UIElements::MeshGenerationContext::__get_painter() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::IStylePainter*, 0x10>(this);
}
inline ::UnityEngine::UIElements::MeshGenerationContext* UnityEngine::UIElements::MeshGenerationContext::New_ctor(::UnityEngine::UIElements::IStylePainter*  painter)  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::MeshGenerationContext*>(painter));
}
inline void UnityEngine::UIElements::MeshGenerationContext::_ctor(::UnityEngine::UIElements::IStylePainter*  painter)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MeshGenerationContext*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IStylePainter*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, painter);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
