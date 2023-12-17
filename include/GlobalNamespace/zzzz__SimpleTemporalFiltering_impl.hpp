#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__SimpleTemporalFiltering_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SimpleTemporalFiltering._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SimpleTemporalFiltering::*)()>(&::GlobalNamespace::SimpleTemporalFiltering::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x280bd34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SimpleTemporalFiltering*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SimpleTemporalFiltering.FilterTexture
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RenderTexture* (::GlobalNamespace::SimpleTemporalFiltering::*)(::UnityEngine::RenderTexture*)>(&::GlobalNamespace::SimpleTemporalFiltering::FilterTexture)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x280be00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SimpleTemporalFiltering*>::get(),
                            "FilterTexture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SimpleTemporalFiltering.CreateRenderTexturesIfNeeded
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SimpleTemporalFiltering::*)(int32_t, int32_t)>(&::GlobalNamespace::SimpleTemporalFiltering::CreateRenderTexturesIfNeeded)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x280bf80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SimpleTemporalFiltering*>::get(),
                            "CreateRenderTexturesIfNeeded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::SimpleTemporalFiltering::__set__temporalFilteringTextures(::ArrayW<::UnityEngine::RenderTexture*,::Array<::UnityEngine::RenderTexture*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::RenderTexture*,::Array<::UnityEngine::RenderTexture*>*>, 0x10>(this, std::forward<::ArrayW<::UnityEngine::RenderTexture*,::Array<::UnityEngine::RenderTexture*>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::RenderTexture*,::Array<::UnityEngine::RenderTexture*>*>& GlobalNamespace::SimpleTemporalFiltering::__get__temporalFilteringTextures()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::RenderTexture*,::Array<::UnityEngine::RenderTexture*>*>, 0x10>(this);
}
constexpr ::ArrayW<::UnityEngine::RenderTexture*,::Array<::UnityEngine::RenderTexture*>*> const& GlobalNamespace::SimpleTemporalFiltering::__get__temporalFilteringTextures() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::RenderTexture*,::Array<::UnityEngine::RenderTexture*>*>, 0x10>(this);
}
constexpr void GlobalNamespace::SimpleTemporalFiltering::__set__prevTemporalFilteringTextureIdx(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::SimpleTemporalFiltering::__get__prevTemporalFilteringTextureIdx()  {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr int32_t const& GlobalNamespace::SimpleTemporalFiltering::__get__prevTemporalFilteringTextureIdx() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr void GlobalNamespace::SimpleTemporalFiltering::__set__temporalFilteringMaterial(::UnityEngine::Material*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Material*, 0x20>(this, std::forward<::UnityEngine::Material*>(value));
}
constexpr ::UnityEngine::Material* GlobalNamespace::SimpleTemporalFiltering::__get__temporalFilteringMaterial()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Material*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> GlobalNamespace::SimpleTemporalFiltering::__get__temporalFilteringMaterial() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Material*, 0x20>(this);
}
constexpr void GlobalNamespace::SimpleTemporalFiltering::__set__bufferTexID(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::SimpleTemporalFiltering::__get__bufferTexID()  {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this);
}
constexpr int32_t const& GlobalNamespace::SimpleTemporalFiltering::__get__bufferTexID() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this);
}
inline ::GlobalNamespace::SimpleTemporalFiltering* GlobalNamespace::SimpleTemporalFiltering::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::SimpleTemporalFiltering*>());
}
inline void GlobalNamespace::SimpleTemporalFiltering::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SimpleTemporalFiltering*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::UnityEngine::RenderTexture* GlobalNamespace::SimpleTemporalFiltering::FilterTexture(::UnityEngine::RenderTexture*  src)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SimpleTemporalFiltering*>::get(),
                            "FilterTexture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::RenderTexture*, false>(*this, ___internal_method, src);
}
inline void GlobalNamespace::SimpleTemporalFiltering::CreateRenderTexturesIfNeeded(int32_t  width, int32_t  height)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SimpleTemporalFiltering*>::get(),
                            "CreateRenderTexturesIfNeeded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, width, height);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
