#pragma once
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassRenderDataSO_def.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassRenderDataSO_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "GlobalNamespace/zzzz__ToneMapping_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__BloomPrePassRenderDataSO__Data._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BloomPrePassRenderDataSO__Data::*)()>(&::GlobalNamespace::__BloomPrePassRenderDataSO__Data::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x210290c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BloomPrePassRenderDataSO__Data*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__BloomPrePassRenderDataSO__Data::__set_bloomPrePassRenderTexture(::UnityEngine::RenderTexture*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::RenderTexture*, 0x10>(this, std::forward<::UnityEngine::RenderTexture*>(value));
}
constexpr ::UnityEngine::RenderTexture* GlobalNamespace::__BloomPrePassRenderDataSO__Data::__get_bloomPrePassRenderTexture()  {
return ::cordl_internals::getInstanceField<::UnityEngine::RenderTexture*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RenderTexture*> GlobalNamespace::__BloomPrePassRenderDataSO__Data::__get_bloomPrePassRenderTexture() const {
return ::cordl_internals::getInstanceField<::UnityEngine::RenderTexture*, 0x10>(this);
}
constexpr void GlobalNamespace::__BloomPrePassRenderDataSO__Data::__set_textureToScreenRatio(::UnityEngine::Vector2  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector2, 0x18>(this, std::forward<::UnityEngine::Vector2>(value));
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::__BloomPrePassRenderDataSO__Data::__get_textureToScreenRatio()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x18>(this);
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::__BloomPrePassRenderDataSO__Data::__get_textureToScreenRatio() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x18>(this);
}
constexpr void GlobalNamespace::__BloomPrePassRenderDataSO__Data::__set_viewMatrix(::UnityEngine::Matrix4x4  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Matrix4x4, 0x20>(this, std::forward<::UnityEngine::Matrix4x4>(value));
}
constexpr ::UnityEngine::Matrix4x4& GlobalNamespace::__BloomPrePassRenderDataSO__Data::__get_viewMatrix()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Matrix4x4, 0x20>(this);
}
constexpr ::UnityEngine::Matrix4x4 const& GlobalNamespace::__BloomPrePassRenderDataSO__Data::__get_viewMatrix() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Matrix4x4, 0x20>(this);
}
constexpr void GlobalNamespace::__BloomPrePassRenderDataSO__Data::__set_projectionMatrix(::UnityEngine::Matrix4x4  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Matrix4x4, 0x60>(this, std::forward<::UnityEngine::Matrix4x4>(value));
}
constexpr ::UnityEngine::Matrix4x4& GlobalNamespace::__BloomPrePassRenderDataSO__Data::__get_projectionMatrix()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Matrix4x4, 0x60>(this);
}
constexpr ::UnityEngine::Matrix4x4 const& GlobalNamespace::__BloomPrePassRenderDataSO__Data::__get_projectionMatrix() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Matrix4x4, 0x60>(this);
}
constexpr void GlobalNamespace::__BloomPrePassRenderDataSO__Data::__set_stereoCameraEyeOffset(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0xa0>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__BloomPrePassRenderDataSO__Data::__get_stereoCameraEyeOffset()  {
return ::cordl_internals::getInstanceField<float_t, 0xa0>(this);
}
constexpr float_t const& GlobalNamespace::__BloomPrePassRenderDataSO__Data::__get_stereoCameraEyeOffset() const {
return ::cordl_internals::getInstanceField<float_t, 0xa0>(this);
}
constexpr void GlobalNamespace::__BloomPrePassRenderDataSO__Data::__set_toneMapping(::GlobalNamespace::ToneMapping  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::ToneMapping, 0xa4>(this, std::forward<::GlobalNamespace::ToneMapping>(value));
}
constexpr ::GlobalNamespace::ToneMapping& GlobalNamespace::__BloomPrePassRenderDataSO__Data::__get_toneMapping()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ToneMapping, 0xa4>(this);
}
constexpr ::GlobalNamespace::ToneMapping const& GlobalNamespace::__BloomPrePassRenderDataSO__Data::__get_toneMapping() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ToneMapping, 0xa4>(this);
}
inline ::GlobalNamespace::__BloomPrePassRenderDataSO__Data* GlobalNamespace::__BloomPrePassRenderDataSO__Data::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__BloomPrePassRenderDataSO__Data*>());
}
inline void GlobalNamespace::__BloomPrePassRenderDataSO__Data::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BloomPrePassRenderDataSO__Data*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassRenderDataSO._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassRenderDataSO::*)()>(&::GlobalNamespace::BloomPrePassRenderDataSO::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x21072fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRenderDataSO*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::BloomPrePassRenderDataSO::__set_data(::GlobalNamespace::__BloomPrePassRenderDataSO__Data*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__BloomPrePassRenderDataSO__Data*, 0x18>(this, std::forward<::GlobalNamespace::__BloomPrePassRenderDataSO__Data*>(value));
}
constexpr ::GlobalNamespace::__BloomPrePassRenderDataSO__Data* GlobalNamespace::BloomPrePassRenderDataSO::__get_data()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__BloomPrePassRenderDataSO__Data*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__BloomPrePassRenderDataSO__Data*> GlobalNamespace::BloomPrePassRenderDataSO::__get_data() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__BloomPrePassRenderDataSO__Data*, 0x18>(this);
}
inline ::GlobalNamespace::BloomPrePassRenderDataSO* GlobalNamespace::BloomPrePassRenderDataSO::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::BloomPrePassRenderDataSO*>());
}
inline void GlobalNamespace::BloomPrePassRenderDataSO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRenderDataSO*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
