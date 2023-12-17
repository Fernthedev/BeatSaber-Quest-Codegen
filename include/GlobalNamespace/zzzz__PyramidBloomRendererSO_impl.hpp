#pragma once
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__PyramidBloomRendererSO_def.hpp"
#include "GlobalNamespace/zzzz__PyramidBloomRendererSO_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
constexpr void GlobalNamespace::__PyramidBloomRendererSO__Pass::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__PyramidBloomRendererSO__Pass::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__PyramidBloomRendererSO__Pass::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__PyramidBloomRendererSO__Pass::__PyramidBloomRendererSO__Pass(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__PyramidBloomRendererSO__Pass  GlobalNamespace::__PyramidBloomRendererSO__Pass::Prefilter13{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__PyramidBloomRendererSO__Pass  GlobalNamespace::__PyramidBloomRendererSO__Pass::Prefilter4{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::__PyramidBloomRendererSO__Pass  GlobalNamespace::__PyramidBloomRendererSO__Pass::Downsample13{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::__PyramidBloomRendererSO__Pass  GlobalNamespace::__PyramidBloomRendererSO__Pass::Downsample4{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::__PyramidBloomRendererSO__Pass  GlobalNamespace::__PyramidBloomRendererSO__Pass::DownsampleBilinearGamma{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::__PyramidBloomRendererSO__Pass  GlobalNamespace::__PyramidBloomRendererSO__Pass::UpsampleTent{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::__PyramidBloomRendererSO__Pass  GlobalNamespace::__PyramidBloomRendererSO__Pass::UpsampleBox{static_cast<int32_t>(0x6)};
constexpr ::GlobalNamespace::__PyramidBloomRendererSO__Pass  GlobalNamespace::__PyramidBloomRendererSO__Pass::UpsampleTentGamma{static_cast<int32_t>(0x7)};
constexpr ::GlobalNamespace::__PyramidBloomRendererSO__Pass  GlobalNamespace::__PyramidBloomRendererSO__Pass::UpsampleBoxGamma{static_cast<int32_t>(0x8)};
constexpr ::GlobalNamespace::__PyramidBloomRendererSO__Pass  GlobalNamespace::__PyramidBloomRendererSO__Pass::Bilinear{static_cast<int32_t>(0x9)};
constexpr ::GlobalNamespace::__PyramidBloomRendererSO__Pass  GlobalNamespace::__PyramidBloomRendererSO__Pass::BilinearGamma{static_cast<int32_t>(0xa)};
constexpr ::GlobalNamespace::__PyramidBloomRendererSO__Pass  GlobalNamespace::__PyramidBloomRendererSO__Pass::UpsampleTentAndReinhardToneMapping{static_cast<int32_t>(0xb)};
constexpr ::GlobalNamespace::__PyramidBloomRendererSO__Pass  GlobalNamespace::__PyramidBloomRendererSO__Pass::UpsampleTentAndACESToneMapping{static_cast<int32_t>(0xc)};
constexpr ::GlobalNamespace::__PyramidBloomRendererSO__Pass  GlobalNamespace::__PyramidBloomRendererSO__Pass::UpsampleTentAndACESToneMappingGlobalIntensity{static_cast<int32_t>(0xd)};
constexpr void GlobalNamespace::__PyramidBloomRendererSO__Level::__set_down(::UnityEngine::RenderTexture*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::RenderTexture*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::RenderTexture*>(value));
}
constexpr ::UnityEngine::RenderTexture* GlobalNamespace::__PyramidBloomRendererSO__Level::__get_down()  {
return ::cordl_internals::getInstanceField<::UnityEngine::RenderTexture*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RenderTexture*> GlobalNamespace::__PyramidBloomRendererSO__Level::__get_down() const {
return ::cordl_internals::getInstanceField<::UnityEngine::RenderTexture*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__PyramidBloomRendererSO__Level::__set_up(::UnityEngine::RenderTexture*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::RenderTexture*, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::RenderTexture*>(value));
}
constexpr ::UnityEngine::RenderTexture* GlobalNamespace::__PyramidBloomRendererSO__Level::__get_up()  {
return ::cordl_internals::getInstanceField<::UnityEngine::RenderTexture*, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RenderTexture*> GlobalNamespace::__PyramidBloomRendererSO__Level::__get_up() const {
return ::cordl_internals::getInstanceField<::UnityEngine::RenderTexture*, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "down", ty: "::UnityEngine::RenderTexture*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "up", ty: "::UnityEngine::RenderTexture*", modifiers: "", def_value: Some("csnull") }]
constexpr ::GlobalNamespace::__PyramidBloomRendererSO__Level::__PyramidBloomRendererSO__Level(::UnityEngine::RenderTexture*  down, ::UnityEngine::RenderTexture*  up) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->down = down;
this->up = up;
}
//  Writing Method size for method: ::GlobalNamespace::PyramidBloomRendererSO.OnEnable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PyramidBloomRendererSO::*)()>(&::GlobalNamespace::PyramidBloomRendererSO::OnEnable)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x2101298;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PyramidBloomRendererSO*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PyramidBloomRendererSO*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PyramidBloomRendererSO.OnDisable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PyramidBloomRendererSO::*)()>(&::GlobalNamespace::PyramidBloomRendererSO::OnDisable)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x21013a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PyramidBloomRendererSO*>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PyramidBloomRendererSO.RenderBloom
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PyramidBloomRendererSO::*)(::UnityEngine::RenderTexture*, ::UnityEngine::RenderTexture*, float_t, bool, bool, bool, bool)>(&::GlobalNamespace::PyramidBloomRendererSO::RenderBloom)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x21013cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PyramidBloomRendererSO*>::get(),
                            "RenderBloom",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PyramidBloomRendererSO.RenderBloom
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PyramidBloomRendererSO::*)(::UnityEngine::RenderTexture*, ::UnityEngine::RenderTexture*, float_t, float_t, float_t, float_t, bool, bool, float_t, float_t, float_t, float_t, ::GlobalNamespace::__PyramidBloomRendererSO__Pass, ::GlobalNamespace::__PyramidBloomRendererSO__Pass, ::GlobalNamespace::__PyramidBloomRendererSO__Pass, ::GlobalNamespace::__PyramidBloomRendererSO__Pass, bool, bool)>(&::GlobalNamespace::PyramidBloomRendererSO::RenderBloom)> {
  constexpr static std::size_t size = 0x81c;
  constexpr static std::size_t addrs = 0x210145c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PyramidBloomRendererSO*>::get(),
                            "RenderBloom",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PyramidBloomRendererSO__Pass>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PyramidBloomRendererSO__Pass>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PyramidBloomRendererSO__Pass>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PyramidBloomRendererSO__Pass>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PyramidBloomRendererSO._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PyramidBloomRendererSO::*)()>(&::GlobalNamespace::PyramidBloomRendererSO::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2101c78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PyramidBloomRendererSO*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::PyramidBloomRendererSO::__set__shader(::UnityEngine::Shader*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Shader*, 0x18>(this, std::forward<::UnityEngine::Shader*>(value));
}
constexpr ::UnityEngine::Shader* GlobalNamespace::PyramidBloomRendererSO::__get__shader()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Shader*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Shader*> GlobalNamespace::PyramidBloomRendererSO::__get__shader() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Shader*, 0x18>(this);
}
constexpr void GlobalNamespace::PyramidBloomRendererSO::__set__material(::UnityEngine::Material*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Material*, 0x20>(this, std::forward<::UnityEngine::Material*>(value));
}
constexpr ::UnityEngine::Material* GlobalNamespace::PyramidBloomRendererSO::__get__material()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Material*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> GlobalNamespace::PyramidBloomRendererSO::__get__material() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Material*, 0x20>(this);
}
constexpr void GlobalNamespace::PyramidBloomRendererSO::__set__pyramid(::ArrayW<::GlobalNamespace::__PyramidBloomRendererSO__Level,::Array<::GlobalNamespace::__PyramidBloomRendererSO__Level>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::__PyramidBloomRendererSO__Level,::Array<::GlobalNamespace::__PyramidBloomRendererSO__Level>*>, 0x28>(this, std::forward<::ArrayW<::GlobalNamespace::__PyramidBloomRendererSO__Level,::Array<::GlobalNamespace::__PyramidBloomRendererSO__Level>*>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::__PyramidBloomRendererSO__Level,::Array<::GlobalNamespace::__PyramidBloomRendererSO__Level>*>& GlobalNamespace::PyramidBloomRendererSO::__get__pyramid()  {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::__PyramidBloomRendererSO__Level,::Array<::GlobalNamespace::__PyramidBloomRendererSO__Level>*>, 0x28>(this);
}
constexpr ::ArrayW<::GlobalNamespace::__PyramidBloomRendererSO__Level,::Array<::GlobalNamespace::__PyramidBloomRendererSO__Level>*> const& GlobalNamespace::PyramidBloomRendererSO::__get__pyramid() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::__PyramidBloomRendererSO__Level,::Array<::GlobalNamespace::__PyramidBloomRendererSO__Level>*>, 0x28>(this);
}
inline void GlobalNamespace::PyramidBloomRendererSO::setStaticF__bloomTexID(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_bloomTexID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PyramidBloomRendererSO*>::get>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::PyramidBloomRendererSO::getStaticF__bloomTexID()  {
return ::cordl_internals::getStaticField<int32_t, "_bloomTexID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PyramidBloomRendererSO*>::get>();
}
inline void GlobalNamespace::PyramidBloomRendererSO::setStaticF__globalIntensityTex(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_globalIntensityTex", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PyramidBloomRendererSO*>::get>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::PyramidBloomRendererSO::getStaticF__globalIntensityTex()  {
return ::cordl_internals::getStaticField<int32_t, "_globalIntensityTex", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PyramidBloomRendererSO*>::get>();
}
inline void GlobalNamespace::PyramidBloomRendererSO::setStaticF__autoExposureLimitID(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_autoExposureLimitID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PyramidBloomRendererSO*>::get>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::PyramidBloomRendererSO::getStaticF__autoExposureLimitID()  {
return ::cordl_internals::getStaticField<int32_t, "_autoExposureLimitID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PyramidBloomRendererSO*>::get>();
}
inline void GlobalNamespace::PyramidBloomRendererSO::setStaticF__sampleScaleID(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_sampleScaleID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PyramidBloomRendererSO*>::get>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::PyramidBloomRendererSO::getStaticF__sampleScaleID()  {
return ::cordl_internals::getStaticField<int32_t, "_sampleScaleID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PyramidBloomRendererSO*>::get>();
}
inline void GlobalNamespace::PyramidBloomRendererSO::setStaticF__combineSrcID(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_combineSrcID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PyramidBloomRendererSO*>::get>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::PyramidBloomRendererSO::getStaticF__combineSrcID()  {
return ::cordl_internals::getStaticField<int32_t, "_combineSrcID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PyramidBloomRendererSO*>::get>();
}
inline void GlobalNamespace::PyramidBloomRendererSO::setStaticF__combineDstID(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_combineDstID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PyramidBloomRendererSO*>::get>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::PyramidBloomRendererSO::getStaticF__combineDstID()  {
return ::cordl_internals::getStaticField<int32_t, "_combineDstID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PyramidBloomRendererSO*>::get>();
}
inline void GlobalNamespace::PyramidBloomRendererSO::setStaticF__alphaWeightsID(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_alphaWeightsID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PyramidBloomRendererSO*>::get>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::PyramidBloomRendererSO::getStaticF__alphaWeightsID()  {
return ::cordl_internals::getStaticField<int32_t, "_alphaWeightsID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PyramidBloomRendererSO*>::get>();
}
constexpr void GlobalNamespace::PyramidBloomRendererSO::__set_kIsScreenspaceEffectKeyword(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x30>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::PyramidBloomRendererSO::__get_kIsScreenspaceEffectKeyword()  {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this);
}
constexpr ::StringW const& GlobalNamespace::PyramidBloomRendererSO::__get_kIsScreenspaceEffectKeyword() const {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this);
}
constexpr void GlobalNamespace::PyramidBloomRendererSO::__set_kLegacyAutoExposureKeyword(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x38>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::PyramidBloomRendererSO::__get_kLegacyAutoExposureKeyword()  {
return ::cordl_internals::getInstanceField<::StringW, 0x38>(this);
}
constexpr ::StringW const& GlobalNamespace::PyramidBloomRendererSO::__get_kLegacyAutoExposureKeyword() const {
return ::cordl_internals::getInstanceField<::StringW, 0x38>(this);
}
constexpr void GlobalNamespace::PyramidBloomRendererSO::__set__initialized(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x40>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::PyramidBloomRendererSO::__get__initialized()  {
return ::cordl_internals::getInstanceField<bool, 0x40>(this);
}
constexpr bool const& GlobalNamespace::PyramidBloomRendererSO::__get__initialized() const {
return ::cordl_internals::getInstanceField<bool, 0x40>(this);
}
inline void GlobalNamespace::PyramidBloomRendererSO::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PyramidBloomRendererSO*>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::PyramidBloomRendererSO::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PyramidBloomRendererSO*>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::PyramidBloomRendererSO::RenderBloom(::UnityEngine::RenderTexture*  src, ::UnityEngine::RenderTexture*  dest, float_t  radius, bool  alphaWeights, bool  betterQuality, bool  gammaCorrection, bool  legacyAutoExposure)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PyramidBloomRendererSO*>::get(),
                            "RenderBloom",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, src, dest, radius, alphaWeights, betterQuality, gammaCorrection, legacyAutoExposure);
}
/// @param isScreenspaceEffect: bool (default: false)
inline void GlobalNamespace::PyramidBloomRendererSO::RenderBloom(::UnityEngine::RenderTexture*  src, ::UnityEngine::RenderTexture*  dest, float_t  radius, float_t  intensity, float_t  autoExposureLimit, float_t  downIntensityOffset, bool  uniformPyramidWeights, bool  downsampleOnFirstPass, float_t  pyramidWeightsParam, float_t  alphaWeights, float_t  firstUpsampleBrightness, float_t  finalUpsampleBrightness, ::GlobalNamespace::__PyramidBloomRendererSO__Pass  preFilterPass, ::GlobalNamespace::__PyramidBloomRendererSO__Pass  downsamplePass, ::GlobalNamespace::__PyramidBloomRendererSO__Pass  upsamplePass, ::GlobalNamespace::__PyramidBloomRendererSO__Pass  finalUpsamplePass, bool  legacyAutoExposure, bool  isScreenspaceEffect)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PyramidBloomRendererSO*>::get(),
                            "RenderBloom",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PyramidBloomRendererSO__Pass>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PyramidBloomRendererSO__Pass>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PyramidBloomRendererSO__Pass>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PyramidBloomRendererSO__Pass>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, src, dest, radius, intensity, autoExposureLimit, downIntensityOffset, uniformPyramidWeights, downsampleOnFirstPass, pyramidWeightsParam, alphaWeights, firstUpsampleBrightness, finalUpsampleBrightness, preFilterPass, downsamplePass, upsamplePass, finalUpsamplePass, legacyAutoExposure, isScreenspaceEffect);
}
inline ::GlobalNamespace::PyramidBloomRendererSO* GlobalNamespace::PyramidBloomRendererSO::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::PyramidBloomRendererSO*>());
}
inline void GlobalNamespace::PyramidBloomRendererSO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PyramidBloomRendererSO*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
