#pragma once
#include "GlobalNamespace/zzzz__BloomPrePassEffectSO_impl.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassBloomTextureEffectSO_def.hpp"
#include "GlobalNamespace/zzzz__PyramidBloomRendererSO_def.hpp"
#include "GlobalNamespace/zzzz__ToneMapping_def.hpp"
#include "GlobalNamespace/zzzz__BloomFogSO_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassBloomTextureEffectSO.get_toneMapping
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ToneMapping (::GlobalNamespace::BloomPrePassBloomTextureEffectSO::*)()>(&::GlobalNamespace::BloomPrePassBloomTextureEffectSO::get_toneMapping)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x280c20c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBloomTextureEffectSO*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBloomTextureEffectSO*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassBloomTextureEffectSO.Render
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassBloomTextureEffectSO::*)(::UnityEngine::RenderTexture*, ::UnityEngine::RenderTexture*)>(&::GlobalNamespace::BloomPrePassBloomTextureEffectSO::Render)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x280c22c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBloomTextureEffectSO*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBloomTextureEffectSO*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassBloomTextureEffectSO._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassBloomTextureEffectSO::*)()>(&::GlobalNamespace::BloomPrePassBloomTextureEffectSO::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x280c298;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBloomTextureEffectSO*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::BloomPrePassBloomTextureEffectSO::__set__radius(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x2c>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::BloomPrePassBloomTextureEffectSO::__get__radius()  {
return ::cordl_internals::getInstanceField<float_t, 0x2c>(this);
}
constexpr float_t const& GlobalNamespace::BloomPrePassBloomTextureEffectSO::__get__radius() const {
return ::cordl_internals::getInstanceField<float_t, 0x2c>(this);
}
constexpr void GlobalNamespace::BloomPrePassBloomTextureEffectSO::__set__intensity(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x30>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::BloomPrePassBloomTextureEffectSO::__get__intensity()  {
return ::cordl_internals::getInstanceField<float_t, 0x30>(this);
}
constexpr float_t const& GlobalNamespace::BloomPrePassBloomTextureEffectSO::__get__intensity() const {
return ::cordl_internals::getInstanceField<float_t, 0x30>(this);
}
constexpr void GlobalNamespace::BloomPrePassBloomTextureEffectSO::__set__downBloomIntensityOffset(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x34>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::BloomPrePassBloomTextureEffectSO::__get__downBloomIntensityOffset()  {
return ::cordl_internals::getInstanceField<float_t, 0x34>(this);
}
constexpr float_t const& GlobalNamespace::BloomPrePassBloomTextureEffectSO::__get__downBloomIntensityOffset() const {
return ::cordl_internals::getInstanceField<float_t, 0x34>(this);
}
constexpr void GlobalNamespace::BloomPrePassBloomTextureEffectSO::__set__uniformPyramidWeights(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x38>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::BloomPrePassBloomTextureEffectSO::__get__uniformPyramidWeights()  {
return ::cordl_internals::getInstanceField<bool, 0x38>(this);
}
constexpr bool const& GlobalNamespace::BloomPrePassBloomTextureEffectSO::__get__uniformPyramidWeights() const {
return ::cordl_internals::getInstanceField<bool, 0x38>(this);
}
constexpr void GlobalNamespace::BloomPrePassBloomTextureEffectSO::__set__pyramidWeightsParam(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x3c>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::BloomPrePassBloomTextureEffectSO::__get__pyramidWeightsParam()  {
return ::cordl_internals::getInstanceField<float_t, 0x3c>(this);
}
constexpr float_t const& GlobalNamespace::BloomPrePassBloomTextureEffectSO::__get__pyramidWeightsParam() const {
return ::cordl_internals::getInstanceField<float_t, 0x3c>(this);
}
constexpr void GlobalNamespace::BloomPrePassBloomTextureEffectSO::__set__firstUpsampleBrightness(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x40>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::BloomPrePassBloomTextureEffectSO::__get__firstUpsampleBrightness()  {
return ::cordl_internals::getInstanceField<float_t, 0x40>(this);
}
constexpr float_t const& GlobalNamespace::BloomPrePassBloomTextureEffectSO::__get__firstUpsampleBrightness() const {
return ::cordl_internals::getInstanceField<float_t, 0x40>(this);
}
constexpr void GlobalNamespace::BloomPrePassBloomTextureEffectSO::__set__finalUpsampleBrightness(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x44>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::BloomPrePassBloomTextureEffectSO::__get__finalUpsampleBrightness()  {
return ::cordl_internals::getInstanceField<float_t, 0x44>(this);
}
constexpr float_t const& GlobalNamespace::BloomPrePassBloomTextureEffectSO::__get__finalUpsampleBrightness() const {
return ::cordl_internals::getInstanceField<float_t, 0x44>(this);
}
constexpr void GlobalNamespace::BloomPrePassBloomTextureEffectSO::__set__prefilterPass(::GlobalNamespace::__PyramidBloomRendererSO__Pass  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__PyramidBloomRendererSO__Pass, 0x48>(this, std::forward<::GlobalNamespace::__PyramidBloomRendererSO__Pass>(value));
}
constexpr ::GlobalNamespace::__PyramidBloomRendererSO__Pass& GlobalNamespace::BloomPrePassBloomTextureEffectSO::__get__prefilterPass()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__PyramidBloomRendererSO__Pass, 0x48>(this);
}
constexpr ::GlobalNamespace::__PyramidBloomRendererSO__Pass const& GlobalNamespace::BloomPrePassBloomTextureEffectSO::__get__prefilterPass() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__PyramidBloomRendererSO__Pass, 0x48>(this);
}
constexpr void GlobalNamespace::BloomPrePassBloomTextureEffectSO::__set__downsamplePass(::GlobalNamespace::__PyramidBloomRendererSO__Pass  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__PyramidBloomRendererSO__Pass, 0x4c>(this, std::forward<::GlobalNamespace::__PyramidBloomRendererSO__Pass>(value));
}
constexpr ::GlobalNamespace::__PyramidBloomRendererSO__Pass& GlobalNamespace::BloomPrePassBloomTextureEffectSO::__get__downsamplePass()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__PyramidBloomRendererSO__Pass, 0x4c>(this);
}
constexpr ::GlobalNamespace::__PyramidBloomRendererSO__Pass const& GlobalNamespace::BloomPrePassBloomTextureEffectSO::__get__downsamplePass() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__PyramidBloomRendererSO__Pass, 0x4c>(this);
}
constexpr void GlobalNamespace::BloomPrePassBloomTextureEffectSO::__set__upsamplePass(::GlobalNamespace::__PyramidBloomRendererSO__Pass  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__PyramidBloomRendererSO__Pass, 0x50>(this, std::forward<::GlobalNamespace::__PyramidBloomRendererSO__Pass>(value));
}
constexpr ::GlobalNamespace::__PyramidBloomRendererSO__Pass& GlobalNamespace::BloomPrePassBloomTextureEffectSO::__get__upsamplePass()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__PyramidBloomRendererSO__Pass, 0x50>(this);
}
constexpr ::GlobalNamespace::__PyramidBloomRendererSO__Pass const& GlobalNamespace::BloomPrePassBloomTextureEffectSO::__get__upsamplePass() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__PyramidBloomRendererSO__Pass, 0x50>(this);
}
constexpr void GlobalNamespace::BloomPrePassBloomTextureEffectSO::__set__finalUpsamplePass(::GlobalNamespace::__PyramidBloomRendererSO__Pass  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__PyramidBloomRendererSO__Pass, 0x54>(this, std::forward<::GlobalNamespace::__PyramidBloomRendererSO__Pass>(value));
}
constexpr ::GlobalNamespace::__PyramidBloomRendererSO__Pass& GlobalNamespace::BloomPrePassBloomTextureEffectSO::__get__finalUpsamplePass()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__PyramidBloomRendererSO__Pass, 0x54>(this);
}
constexpr ::GlobalNamespace::__PyramidBloomRendererSO__Pass const& GlobalNamespace::BloomPrePassBloomTextureEffectSO::__get__finalUpsamplePass() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__PyramidBloomRendererSO__Pass, 0x54>(this);
}
constexpr void GlobalNamespace::BloomPrePassBloomTextureEffectSO::__set__bloomRenderer(::GlobalNamespace::PyramidBloomRendererSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::PyramidBloomRendererSO*, 0x58>(this, std::forward<::GlobalNamespace::PyramidBloomRendererSO*>(value));
}
constexpr ::GlobalNamespace::PyramidBloomRendererSO* GlobalNamespace::BloomPrePassBloomTextureEffectSO::__get__bloomRenderer()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PyramidBloomRendererSO*, 0x58>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PyramidBloomRendererSO*> GlobalNamespace::BloomPrePassBloomTextureEffectSO::__get__bloomRenderer() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PyramidBloomRendererSO*, 0x58>(this);
}
constexpr void GlobalNamespace::BloomPrePassBloomTextureEffectSO::__set__bloomFog(::GlobalNamespace::BloomFogSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BloomFogSO*, 0x60>(this, std::forward<::GlobalNamespace::BloomFogSO*>(value));
}
constexpr ::GlobalNamespace::BloomFogSO* GlobalNamespace::BloomPrePassBloomTextureEffectSO::__get__bloomFog()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BloomFogSO*, 0x60>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BloomFogSO*> GlobalNamespace::BloomPrePassBloomTextureEffectSO::__get__bloomFog() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BloomFogSO*, 0x60>(this);
}
inline ::GlobalNamespace::ToneMapping GlobalNamespace::BloomPrePassBloomTextureEffectSO::get_toneMapping()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBloomTextureEffectSO*>::get(),
                            "get_toneMapping",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ToneMapping, false>(*this, ___internal_method);
}
inline void GlobalNamespace::BloomPrePassBloomTextureEffectSO::Render(::UnityEngine::RenderTexture*  src, ::UnityEngine::RenderTexture*  dest)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBloomTextureEffectSO*>::get(),
                            "Render",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, src, dest);
}
inline ::GlobalNamespace::BloomPrePassBloomTextureEffectSO* GlobalNamespace::BloomPrePassBloomTextureEffectSO::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::BloomPrePassBloomTextureEffectSO*>());
}
inline void GlobalNamespace::BloomPrePassBloomTextureEffectSO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBloomTextureEffectSO*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
