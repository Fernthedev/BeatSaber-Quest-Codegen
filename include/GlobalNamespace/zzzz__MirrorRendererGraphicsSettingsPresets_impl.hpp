#pragma once
#include "GlobalNamespace/zzzz__NamedPreset_impl.hpp"
#include "GlobalNamespace/zzzz__NamedPresetsSO_impl.hpp"
#include "GlobalNamespace/zzzz__MirrorRendererGraphicsSettingsPresets_def.hpp"
#include "GlobalNamespace/zzzz__NamedPreset_def.hpp"
#include "GlobalNamespace/zzzz__MirrorRendererGraphicsSettingsPresets_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
constexpr void GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset__MirrorType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset__MirrorType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset__MirrorType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset__MirrorType::__MirrorRendererGraphicsSettingsPresets__Preset__MirrorType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset__MirrorType  GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset__MirrorType::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset__MirrorType  GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset__MirrorType::FakeMirror{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset__MirrorType  GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset__MirrorType::RenderedMirror{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset::*)()>(&::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x235039c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset::__set_mirrorType(::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset__MirrorType  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset__MirrorType, 0x18>(this, std::forward<::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset__MirrorType>(value));
}
constexpr ::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset__MirrorType& GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset::__get_mirrorType()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset__MirrorType, 0x18>(this);
}
constexpr ::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset__MirrorType const& GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset::__get_mirrorType() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset__MirrorType, 0x18>(this);
}
constexpr void GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset::__set_reflectLayers(::UnityEngine::LayerMask  value)  {
::cordl_internals::setInstanceField<::UnityEngine::LayerMask, 0x1c>(this, std::forward<::UnityEngine::LayerMask>(value));
}
constexpr ::UnityEngine::LayerMask& GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset::__get_reflectLayers()  {
return ::cordl_internals::getInstanceField<::UnityEngine::LayerMask, 0x1c>(this);
}
constexpr ::UnityEngine::LayerMask const& GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset::__get_reflectLayers() const {
return ::cordl_internals::getInstanceField<::UnityEngine::LayerMask, 0x1c>(this);
}
constexpr void GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset::__set_stereoTextureWidth(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset::__get_stereoTextureWidth()  {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
constexpr int32_t const& GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset::__get_stereoTextureWidth() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
constexpr void GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset::__set_stereoTextureHeight(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x24>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset::__get_stereoTextureHeight()  {
return ::cordl_internals::getInstanceField<int32_t, 0x24>(this);
}
constexpr int32_t const& GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset::__get_stereoTextureHeight() const {
return ::cordl_internals::getInstanceField<int32_t, 0x24>(this);
}
constexpr void GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset::__set_monoTextureWidth(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset::__get_monoTextureWidth()  {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this);
}
constexpr int32_t const& GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset::__get_monoTextureWidth() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this);
}
constexpr void GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset::__set_monoTextureHeight(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x2c>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset::__get_monoTextureHeight()  {
return ::cordl_internals::getInstanceField<int32_t, 0x2c>(this);
}
constexpr int32_t const& GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset::__get_monoTextureHeight() const {
return ::cordl_internals::getInstanceField<int32_t, 0x2c>(this);
}
constexpr void GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset::__set_maxAntiAliasing(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x30>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset::__get_maxAntiAliasing()  {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this);
}
constexpr int32_t const& GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset::__get_maxAntiAliasing() const {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this);
}
constexpr void GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset::__set_enableBloomPrePassFog(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x34>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset::__get_enableBloomPrePassFog()  {
return ::cordl_internals::getInstanceField<bool, 0x34>(this);
}
constexpr bool const& GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset::__get_enableBloomPrePassFog() const {
return ::cordl_internals::getInstanceField<bool, 0x34>(this);
}
inline ::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset* GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset*>());
}
inline void GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::MirrorRendererGraphicsSettingsPresets.get_presets
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset*,::Array<::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset*>*> (::GlobalNamespace::MirrorRendererGraphicsSettingsPresets::*)()>(&::GlobalNamespace::MirrorRendererGraphicsSettingsPresets::get_presets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2350384;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirrorRendererGraphicsSettingsPresets*>::get(),
                            "get_presets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MirrorRendererGraphicsSettingsPresets.get_namedPresets
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::GlobalNamespace::NamedPreset*,::Array<::GlobalNamespace::NamedPreset*>*> (::GlobalNamespace::MirrorRendererGraphicsSettingsPresets::*)()>(&::GlobalNamespace::MirrorRendererGraphicsSettingsPresets::get_namedPresets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x235038c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirrorRendererGraphicsSettingsPresets*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirrorRendererGraphicsSettingsPresets*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MirrorRendererGraphicsSettingsPresets._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MirrorRendererGraphicsSettingsPresets::*)()>(&::GlobalNamespace::MirrorRendererGraphicsSettingsPresets::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2350394;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirrorRendererGraphicsSettingsPresets*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::MirrorRendererGraphicsSettingsPresets::__set__presets(::ArrayW<::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset*,::Array<::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset*,::Array<::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset*>*>, 0x18>(this, std::forward<::ArrayW<::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset*,::Array<::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset*>*>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset*,::Array<::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset*>*>& GlobalNamespace::MirrorRendererGraphicsSettingsPresets::__get__presets()  {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset*,::Array<::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset*>*>, 0x18>(this);
}
constexpr ::ArrayW<::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset*,::Array<::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset*>*> const& GlobalNamespace::MirrorRendererGraphicsSettingsPresets::__get__presets() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset*,::Array<::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset*>*>, 0x18>(this);
}
inline ::ArrayW<::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset*,::Array<::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset*>*> GlobalNamespace::MirrorRendererGraphicsSettingsPresets::get_presets()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirrorRendererGraphicsSettingsPresets*>::get(),
                            "get_presets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset*,::Array<::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset*>*>, false>(*this, ___internal_method);
}
inline ::ArrayW<::GlobalNamespace::NamedPreset*,::Array<::GlobalNamespace::NamedPreset*>*> GlobalNamespace::MirrorRendererGraphicsSettingsPresets::get_namedPresets()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirrorRendererGraphicsSettingsPresets*>::get(),
                            "get_namedPresets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::NamedPreset*,::Array<::GlobalNamespace::NamedPreset*>*>, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::MirrorRendererGraphicsSettingsPresets* GlobalNamespace::MirrorRendererGraphicsSettingsPresets::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MirrorRendererGraphicsSettingsPresets*>());
}
inline void GlobalNamespace::MirrorRendererGraphicsSettingsPresets::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirrorRendererGraphicsSettingsPresets*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
