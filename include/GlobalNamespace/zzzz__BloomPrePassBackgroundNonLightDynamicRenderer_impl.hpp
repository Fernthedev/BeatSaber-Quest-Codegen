#pragma once
#include "GlobalNamespace/zzzz__BloomPrePassBackgroundNonLightRendererCore_impl.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassBackgroundNonLightDynamicRenderer_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassBackgroundNonLightDynamicRenderer.get_renderer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Renderer* (::GlobalNamespace::BloomPrePassBackgroundNonLightDynamicRenderer::*)()>(&::GlobalNamespace::BloomPrePassBackgroundNonLightDynamicRenderer::get_renderer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21049bc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBackgroundNonLightDynamicRenderer*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBackgroundNonLightDynamicRenderer*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassBackgroundNonLightDynamicRenderer.SetRenderer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassBackgroundNonLightDynamicRenderer::*)(::UnityEngine::Renderer*)>(&::GlobalNamespace::BloomPrePassBackgroundNonLightDynamicRenderer::SetRenderer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21049c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBackgroundNonLightDynamicRenderer*>::get(),
                            "SetRenderer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Renderer*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassBackgroundNonLightDynamicRenderer._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassBackgroundNonLightDynamicRenderer::*)()>(&::GlobalNamespace::BloomPrePassBackgroundNonLightDynamicRenderer::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x21049cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBackgroundNonLightDynamicRenderer*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::BloomPrePassBackgroundNonLightDynamicRenderer::__set__renderer(::UnityEngine::Renderer*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Renderer*, 0x48>(this, std::forward<::UnityEngine::Renderer*>(value));
}
constexpr ::UnityEngine::Renderer* GlobalNamespace::BloomPrePassBackgroundNonLightDynamicRenderer::__get__renderer()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Renderer*, 0x48>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Renderer*> GlobalNamespace::BloomPrePassBackgroundNonLightDynamicRenderer::__get__renderer() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Renderer*, 0x48>(this);
}
inline ::UnityEngine::Renderer* GlobalNamespace::BloomPrePassBackgroundNonLightDynamicRenderer::get_renderer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBackgroundNonLightDynamicRenderer*>::get(),
                            "get_renderer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Renderer*, false>(*this, ___internal_method);
}
inline void GlobalNamespace::BloomPrePassBackgroundNonLightDynamicRenderer::SetRenderer(::UnityEngine::Renderer*  renderer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBackgroundNonLightDynamicRenderer*>::get(),
                            "SetRenderer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Renderer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, renderer);
}
inline ::GlobalNamespace::BloomPrePassBackgroundNonLightDynamicRenderer* GlobalNamespace::BloomPrePassBackgroundNonLightDynamicRenderer::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::BloomPrePassBackgroundNonLightDynamicRenderer*>());
}
inline void GlobalNamespace::BloomPrePassBackgroundNonLightDynamicRenderer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBackgroundNonLightDynamicRenderer*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
