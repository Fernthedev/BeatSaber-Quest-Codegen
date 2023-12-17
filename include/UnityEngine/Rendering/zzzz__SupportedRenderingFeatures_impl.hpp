#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__SupportedRenderingFeatures_def.hpp"
#include "UnityEngine/zzzz__LightmapBakeType_def.hpp"
#include "UnityEngine/zzzz__LightmapsMode_def.hpp"
#include "UnityEngine/Rendering/zzzz__SupportedRenderingFeatures_def.hpp"
#include "UnityEngine/zzzz__MixedLightingMode_def.hpp"
constexpr void UnityEngine::Rendering::__SupportedRenderingFeatures__ReflectionProbeModes::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::Rendering::__SupportedRenderingFeatures__ReflectionProbeModes::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::Rendering::__SupportedRenderingFeatures__ReflectionProbeModes::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::__SupportedRenderingFeatures__ReflectionProbeModes::__SupportedRenderingFeatures__ReflectionProbeModes(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::Rendering::__SupportedRenderingFeatures__ReflectionProbeModes  UnityEngine::Rendering::__SupportedRenderingFeatures__ReflectionProbeModes::None{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::Rendering::__SupportedRenderingFeatures__ReflectionProbeModes  UnityEngine::Rendering::__SupportedRenderingFeatures__ReflectionProbeModes::Rotation{static_cast<int32_t>(0x1)};
constexpr void UnityEngine::Rendering::__SupportedRenderingFeatures__LightmapMixedBakeModes::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::Rendering::__SupportedRenderingFeatures__LightmapMixedBakeModes::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::Rendering::__SupportedRenderingFeatures__LightmapMixedBakeModes::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::__SupportedRenderingFeatures__LightmapMixedBakeModes::__SupportedRenderingFeatures__LightmapMixedBakeModes(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::Rendering::__SupportedRenderingFeatures__LightmapMixedBakeModes  UnityEngine::Rendering::__SupportedRenderingFeatures__LightmapMixedBakeModes::None{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::Rendering::__SupportedRenderingFeatures__LightmapMixedBakeModes  UnityEngine::Rendering::__SupportedRenderingFeatures__LightmapMixedBakeModes::IndirectOnly{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::Rendering::__SupportedRenderingFeatures__LightmapMixedBakeModes  UnityEngine::Rendering::__SupportedRenderingFeatures__LightmapMixedBakeModes::Subtractive{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::Rendering::__SupportedRenderingFeatures__LightmapMixedBakeModes  UnityEngine::Rendering::__SupportedRenderingFeatures__LightmapMixedBakeModes::Shadowmask{static_cast<int32_t>(0x4)};
//  Writing Method size for method: ::UnityEngine::Rendering::SupportedRenderingFeatures.get_active
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::SupportedRenderingFeatures* (*)()>(&::UnityEngine::Rendering::SupportedRenderingFeatures::get_active)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2cee4b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(),
                            "get_active",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SupportedRenderingFeatures.set_active
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Rendering::SupportedRenderingFeatures*)>(&::UnityEngine::Rendering::SupportedRenderingFeatures::set_active)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2ced124;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(),
                            "set_active",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SupportedRenderingFeatures.get_defaultMixedLightingModes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::__SupportedRenderingFeatures__LightmapMixedBakeModes (::UnityEngine::Rendering::SupportedRenderingFeatures::*)()>(&::UnityEngine::Rendering::SupportedRenderingFeatures::get_defaultMixedLightingModes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cee55c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(),
                            "get_defaultMixedLightingModes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SupportedRenderingFeatures.get_mixedLightingModes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::__SupportedRenderingFeatures__LightmapMixedBakeModes (::UnityEngine::Rendering::SupportedRenderingFeatures::*)()>(&::UnityEngine::Rendering::SupportedRenderingFeatures::get_mixedLightingModes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cee564;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(),
                            "get_mixedLightingModes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SupportedRenderingFeatures.get_lightmapBakeTypes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::LightmapBakeType (::UnityEngine::Rendering::SupportedRenderingFeatures::*)()>(&::UnityEngine::Rendering::SupportedRenderingFeatures::get_lightmapBakeTypes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cee56c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(),
                            "get_lightmapBakeTypes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SupportedRenderingFeatures.get_lightmapsModes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::LightmapsMode (::UnityEngine::Rendering::SupportedRenderingFeatures::*)()>(&::UnityEngine::Rendering::SupportedRenderingFeatures::get_lightmapsModes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cee574;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(),
                            "get_lightmapsModes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SupportedRenderingFeatures.get_enlightenLightmapper
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::SupportedRenderingFeatures::*)()>(&::UnityEngine::Rendering::SupportedRenderingFeatures::get_enlightenLightmapper)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cee57c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(),
                            "get_enlightenLightmapper",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SupportedRenderingFeatures.get_enlighten
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::SupportedRenderingFeatures::*)()>(&::UnityEngine::Rendering::SupportedRenderingFeatures::get_enlighten)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cee584;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(),
                            "get_enlighten",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SupportedRenderingFeatures.get_rendersUIOverlay
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::SupportedRenderingFeatures::*)()>(&::UnityEngine::Rendering::SupportedRenderingFeatures::get_rendersUIOverlay)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cee58c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(),
                            "get_rendersUIOverlay",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SupportedRenderingFeatures.get_autoAmbientProbeBaking
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::SupportedRenderingFeatures::*)()>(&::UnityEngine::Rendering::SupportedRenderingFeatures::get_autoAmbientProbeBaking)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cee594;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(),
                            "get_autoAmbientProbeBaking",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SupportedRenderingFeatures.get_autoDefaultReflectionProbeBaking
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::SupportedRenderingFeatures::*)()>(&::UnityEngine::Rendering::SupportedRenderingFeatures::get_autoDefaultReflectionProbeBaking)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cee59c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(),
                            "get_autoDefaultReflectionProbeBaking",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SupportedRenderingFeatures.FallbackMixedLightingModeByRef
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::cordl_internals::intptr_t)>(&::UnityEngine::Rendering::SupportedRenderingFeatures::FallbackMixedLightingModeByRef)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x2cee5a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(),
                            "FallbackMixedLightingModeByRef",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SupportedRenderingFeatures.IsMixedLightingModeSupported
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::MixedLightingMode)>(&::UnityEngine::Rendering::SupportedRenderingFeatures::IsMixedLightingModeSupported)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2cee6d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(),
                            "IsMixedLightingModeSupported",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MixedLightingMode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SupportedRenderingFeatures.IsMixedLightingModeSupportedByRef
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::MixedLightingMode, ::cordl_internals::intptr_t)>(&::UnityEngine::Rendering::SupportedRenderingFeatures::IsMixedLightingModeSupportedByRef)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x2cee744;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(),
                            "IsMixedLightingModeSupportedByRef",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MixedLightingMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SupportedRenderingFeatures.IsLightmapBakeTypeSupported
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::LightmapBakeType)>(&::UnityEngine::Rendering::SupportedRenderingFeatures::IsLightmapBakeTypeSupported)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2cee84c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(),
                            "IsLightmapBakeTypeSupported",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LightmapBakeType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SupportedRenderingFeatures.IsLightmapBakeTypeSupportedByRef
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::LightmapBakeType, ::cordl_internals::intptr_t)>(&::UnityEngine::Rendering::SupportedRenderingFeatures::IsLightmapBakeTypeSupportedByRef)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x2cee8b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(),
                            "IsLightmapBakeTypeSupportedByRef",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LightmapBakeType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SupportedRenderingFeatures.IsLightmapsModeSupportedByRef
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::LightmapsMode, ::cordl_internals::intptr_t)>(&::UnityEngine::Rendering::SupportedRenderingFeatures::IsLightmapsModeSupportedByRef)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2cee9a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(),
                            "IsLightmapsModeSupportedByRef",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LightmapsMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SupportedRenderingFeatures.IsLightmapperSupportedByRef
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, ::cordl_internals::intptr_t)>(&::UnityEngine::Rendering::SupportedRenderingFeatures::IsLightmapperSupportedByRef)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2ceea34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(),
                            "IsLightmapperSupportedByRef",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SupportedRenderingFeatures.IsUIOverlayRenderedBySRP
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::cordl_internals::intptr_t)>(&::UnityEngine::Rendering::SupportedRenderingFeatures::IsUIOverlayRenderedBySRP)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2ceeab8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(),
                            "IsUIOverlayRenderedBySRP",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SupportedRenderingFeatures.IsAutoAmbientProbeBakingSupported
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::cordl_internals::intptr_t)>(&::UnityEngine::Rendering::SupportedRenderingFeatures::IsAutoAmbientProbeBakingSupported)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2ceeb30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(),
                            "IsAutoAmbientProbeBakingSupported",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SupportedRenderingFeatures.IsAutoDefaultReflectionProbeBakingSupported
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::cordl_internals::intptr_t)>(&::UnityEngine::Rendering::SupportedRenderingFeatures::IsAutoDefaultReflectionProbeBakingSupported)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2ceeba8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(),
                            "IsAutoDefaultReflectionProbeBakingSupported",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SupportedRenderingFeatures.FallbackLightmapperByRef
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::cordl_internals::intptr_t)>(&::UnityEngine::Rendering::SupportedRenderingFeatures::FallbackLightmapperByRef)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2ceec20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(),
                            "FallbackLightmapperByRef",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SupportedRenderingFeatures._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::SupportedRenderingFeatures::*)()>(&::UnityEngine::Rendering::SupportedRenderingFeatures::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2ced094;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::SupportedRenderingFeatures::setStaticF_s_Active(::UnityEngine::Rendering::SupportedRenderingFeatures*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Rendering::SupportedRenderingFeatures*, "s_Active", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get>(std::forward<::UnityEngine::Rendering::SupportedRenderingFeatures*>(value));
}
inline ::UnityEngine::Rendering::SupportedRenderingFeatures* UnityEngine::Rendering::SupportedRenderingFeatures::getStaticF_s_Active()  {
return ::cordl_internals::getStaticField<::UnityEngine::Rendering::SupportedRenderingFeatures*, "s_Active", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get>();
}
constexpr void UnityEngine::Rendering::SupportedRenderingFeatures::__set__reflectionProbeModes_k__BackingField(::UnityEngine::Rendering::__SupportedRenderingFeatures__ReflectionProbeModes  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Rendering::__SupportedRenderingFeatures__ReflectionProbeModes, 0x10>(this, std::forward<::UnityEngine::Rendering::__SupportedRenderingFeatures__ReflectionProbeModes>(value));
}
constexpr ::UnityEngine::Rendering::__SupportedRenderingFeatures__ReflectionProbeModes& UnityEngine::Rendering::SupportedRenderingFeatures::__get__reflectionProbeModes_k__BackingField()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Rendering::__SupportedRenderingFeatures__ReflectionProbeModes, 0x10>(this);
}
constexpr ::UnityEngine::Rendering::__SupportedRenderingFeatures__ReflectionProbeModes const& UnityEngine::Rendering::SupportedRenderingFeatures::__get__reflectionProbeModes_k__BackingField() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Rendering::__SupportedRenderingFeatures__ReflectionProbeModes, 0x10>(this);
}
constexpr void UnityEngine::Rendering::SupportedRenderingFeatures::__set__defaultMixedLightingModes_k__BackingField(::UnityEngine::Rendering::__SupportedRenderingFeatures__LightmapMixedBakeModes  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Rendering::__SupportedRenderingFeatures__LightmapMixedBakeModes, 0x14>(this, std::forward<::UnityEngine::Rendering::__SupportedRenderingFeatures__LightmapMixedBakeModes>(value));
}
constexpr ::UnityEngine::Rendering::__SupportedRenderingFeatures__LightmapMixedBakeModes& UnityEngine::Rendering::SupportedRenderingFeatures::__get__defaultMixedLightingModes_k__BackingField()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Rendering::__SupportedRenderingFeatures__LightmapMixedBakeModes, 0x14>(this);
}
constexpr ::UnityEngine::Rendering::__SupportedRenderingFeatures__LightmapMixedBakeModes const& UnityEngine::Rendering::SupportedRenderingFeatures::__get__defaultMixedLightingModes_k__BackingField() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Rendering::__SupportedRenderingFeatures__LightmapMixedBakeModes, 0x14>(this);
}
constexpr void UnityEngine::Rendering::SupportedRenderingFeatures::__set__mixedLightingModes_k__BackingField(::UnityEngine::Rendering::__SupportedRenderingFeatures__LightmapMixedBakeModes  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Rendering::__SupportedRenderingFeatures__LightmapMixedBakeModes, 0x18>(this, std::forward<::UnityEngine::Rendering::__SupportedRenderingFeatures__LightmapMixedBakeModes>(value));
}
constexpr ::UnityEngine::Rendering::__SupportedRenderingFeatures__LightmapMixedBakeModes& UnityEngine::Rendering::SupportedRenderingFeatures::__get__mixedLightingModes_k__BackingField()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Rendering::__SupportedRenderingFeatures__LightmapMixedBakeModes, 0x18>(this);
}
constexpr ::UnityEngine::Rendering::__SupportedRenderingFeatures__LightmapMixedBakeModes const& UnityEngine::Rendering::SupportedRenderingFeatures::__get__mixedLightingModes_k__BackingField() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Rendering::__SupportedRenderingFeatures__LightmapMixedBakeModes, 0x18>(this);
}
constexpr void UnityEngine::Rendering::SupportedRenderingFeatures::__set__lightmapBakeTypes_k__BackingField(::UnityEngine::LightmapBakeType  value)  {
::cordl_internals::setInstanceField<::UnityEngine::LightmapBakeType, 0x1c>(this, std::forward<::UnityEngine::LightmapBakeType>(value));
}
constexpr ::UnityEngine::LightmapBakeType& UnityEngine::Rendering::SupportedRenderingFeatures::__get__lightmapBakeTypes_k__BackingField()  {
return ::cordl_internals::getInstanceField<::UnityEngine::LightmapBakeType, 0x1c>(this);
}
constexpr ::UnityEngine::LightmapBakeType const& UnityEngine::Rendering::SupportedRenderingFeatures::__get__lightmapBakeTypes_k__BackingField() const {
return ::cordl_internals::getInstanceField<::UnityEngine::LightmapBakeType, 0x1c>(this);
}
constexpr void UnityEngine::Rendering::SupportedRenderingFeatures::__set__lightmapsModes_k__BackingField(::UnityEngine::LightmapsMode  value)  {
::cordl_internals::setInstanceField<::UnityEngine::LightmapsMode, 0x20>(this, std::forward<::UnityEngine::LightmapsMode>(value));
}
constexpr ::UnityEngine::LightmapsMode& UnityEngine::Rendering::SupportedRenderingFeatures::__get__lightmapsModes_k__BackingField()  {
return ::cordl_internals::getInstanceField<::UnityEngine::LightmapsMode, 0x20>(this);
}
constexpr ::UnityEngine::LightmapsMode const& UnityEngine::Rendering::SupportedRenderingFeatures::__get__lightmapsModes_k__BackingField() const {
return ::cordl_internals::getInstanceField<::UnityEngine::LightmapsMode, 0x20>(this);
}
constexpr void UnityEngine::Rendering::SupportedRenderingFeatures::__set__enlightenLightmapper_k__BackingField(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x24>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::Rendering::SupportedRenderingFeatures::__get__enlightenLightmapper_k__BackingField()  {
return ::cordl_internals::getInstanceField<bool, 0x24>(this);
}
constexpr bool const& UnityEngine::Rendering::SupportedRenderingFeatures::__get__enlightenLightmapper_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x24>(this);
}
constexpr void UnityEngine::Rendering::SupportedRenderingFeatures::__set__enlighten_k__BackingField(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x25>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::Rendering::SupportedRenderingFeatures::__get__enlighten_k__BackingField()  {
return ::cordl_internals::getInstanceField<bool, 0x25>(this);
}
constexpr bool const& UnityEngine::Rendering::SupportedRenderingFeatures::__get__enlighten_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x25>(this);
}
constexpr void UnityEngine::Rendering::SupportedRenderingFeatures::__set__lightProbeProxyVolumes_k__BackingField(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x26>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::Rendering::SupportedRenderingFeatures::__get__lightProbeProxyVolumes_k__BackingField()  {
return ::cordl_internals::getInstanceField<bool, 0x26>(this);
}
constexpr bool const& UnityEngine::Rendering::SupportedRenderingFeatures::__get__lightProbeProxyVolumes_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x26>(this);
}
constexpr void UnityEngine::Rendering::SupportedRenderingFeatures::__set__motionVectors_k__BackingField(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x27>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::Rendering::SupportedRenderingFeatures::__get__motionVectors_k__BackingField()  {
return ::cordl_internals::getInstanceField<bool, 0x27>(this);
}
constexpr bool const& UnityEngine::Rendering::SupportedRenderingFeatures::__get__motionVectors_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x27>(this);
}
constexpr void UnityEngine::Rendering::SupportedRenderingFeatures::__set__receiveShadows_k__BackingField(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x28>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::Rendering::SupportedRenderingFeatures::__get__receiveShadows_k__BackingField()  {
return ::cordl_internals::getInstanceField<bool, 0x28>(this);
}
constexpr bool const& UnityEngine::Rendering::SupportedRenderingFeatures::__get__receiveShadows_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x28>(this);
}
constexpr void UnityEngine::Rendering::SupportedRenderingFeatures::__set__reflectionProbes_k__BackingField(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x29>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::Rendering::SupportedRenderingFeatures::__get__reflectionProbes_k__BackingField()  {
return ::cordl_internals::getInstanceField<bool, 0x29>(this);
}
constexpr bool const& UnityEngine::Rendering::SupportedRenderingFeatures::__get__reflectionProbes_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x29>(this);
}
constexpr void UnityEngine::Rendering::SupportedRenderingFeatures::__set__reflectionProbesBlendDistance_k__BackingField(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x2a>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::Rendering::SupportedRenderingFeatures::__get__reflectionProbesBlendDistance_k__BackingField()  {
return ::cordl_internals::getInstanceField<bool, 0x2a>(this);
}
constexpr bool const& UnityEngine::Rendering::SupportedRenderingFeatures::__get__reflectionProbesBlendDistance_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x2a>(this);
}
constexpr void UnityEngine::Rendering::SupportedRenderingFeatures::__set__rendererPriority_k__BackingField(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x2b>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::Rendering::SupportedRenderingFeatures::__get__rendererPriority_k__BackingField()  {
return ::cordl_internals::getInstanceField<bool, 0x2b>(this);
}
constexpr bool const& UnityEngine::Rendering::SupportedRenderingFeatures::__get__rendererPriority_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x2b>(this);
}
constexpr void UnityEngine::Rendering::SupportedRenderingFeatures::__set__rendersUIOverlay_k__BackingField(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x2c>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::Rendering::SupportedRenderingFeatures::__get__rendersUIOverlay_k__BackingField()  {
return ::cordl_internals::getInstanceField<bool, 0x2c>(this);
}
constexpr bool const& UnityEngine::Rendering::SupportedRenderingFeatures::__get__rendersUIOverlay_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x2c>(this);
}
constexpr void UnityEngine::Rendering::SupportedRenderingFeatures::__set__overridesEnvironmentLighting_k__BackingField(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x2d>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::Rendering::SupportedRenderingFeatures::__get__overridesEnvironmentLighting_k__BackingField()  {
return ::cordl_internals::getInstanceField<bool, 0x2d>(this);
}
constexpr bool const& UnityEngine::Rendering::SupportedRenderingFeatures::__get__overridesEnvironmentLighting_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x2d>(this);
}
constexpr void UnityEngine::Rendering::SupportedRenderingFeatures::__set__overridesFog_k__BackingField(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x2e>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::Rendering::SupportedRenderingFeatures::__get__overridesFog_k__BackingField()  {
return ::cordl_internals::getInstanceField<bool, 0x2e>(this);
}
constexpr bool const& UnityEngine::Rendering::SupportedRenderingFeatures::__get__overridesFog_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x2e>(this);
}
constexpr void UnityEngine::Rendering::SupportedRenderingFeatures::__set__overridesRealtimeReflectionProbes_k__BackingField(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x2f>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::Rendering::SupportedRenderingFeatures::__get__overridesRealtimeReflectionProbes_k__BackingField()  {
return ::cordl_internals::getInstanceField<bool, 0x2f>(this);
}
constexpr bool const& UnityEngine::Rendering::SupportedRenderingFeatures::__get__overridesRealtimeReflectionProbes_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x2f>(this);
}
constexpr void UnityEngine::Rendering::SupportedRenderingFeatures::__set__overridesOtherLightingSettings_k__BackingField(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x30>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::Rendering::SupportedRenderingFeatures::__get__overridesOtherLightingSettings_k__BackingField()  {
return ::cordl_internals::getInstanceField<bool, 0x30>(this);
}
constexpr bool const& UnityEngine::Rendering::SupportedRenderingFeatures::__get__overridesOtherLightingSettings_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x30>(this);
}
constexpr void UnityEngine::Rendering::SupportedRenderingFeatures::__set__editableMaterialRenderQueue_k__BackingField(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x31>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::Rendering::SupportedRenderingFeatures::__get__editableMaterialRenderQueue_k__BackingField()  {
return ::cordl_internals::getInstanceField<bool, 0x31>(this);
}
constexpr bool const& UnityEngine::Rendering::SupportedRenderingFeatures::__get__editableMaterialRenderQueue_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x31>(this);
}
constexpr void UnityEngine::Rendering::SupportedRenderingFeatures::__set__overridesLODBias_k__BackingField(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x32>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::Rendering::SupportedRenderingFeatures::__get__overridesLODBias_k__BackingField()  {
return ::cordl_internals::getInstanceField<bool, 0x32>(this);
}
constexpr bool const& UnityEngine::Rendering::SupportedRenderingFeatures::__get__overridesLODBias_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x32>(this);
}
constexpr void UnityEngine::Rendering::SupportedRenderingFeatures::__set__overridesMaximumLODLevel_k__BackingField(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x33>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::Rendering::SupportedRenderingFeatures::__get__overridesMaximumLODLevel_k__BackingField()  {
return ::cordl_internals::getInstanceField<bool, 0x33>(this);
}
constexpr bool const& UnityEngine::Rendering::SupportedRenderingFeatures::__get__overridesMaximumLODLevel_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x33>(this);
}
constexpr void UnityEngine::Rendering::SupportedRenderingFeatures::__set__rendererProbes_k__BackingField(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x34>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::Rendering::SupportedRenderingFeatures::__get__rendererProbes_k__BackingField()  {
return ::cordl_internals::getInstanceField<bool, 0x34>(this);
}
constexpr bool const& UnityEngine::Rendering::SupportedRenderingFeatures::__get__rendererProbes_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x34>(this);
}
constexpr void UnityEngine::Rendering::SupportedRenderingFeatures::__set__particleSystemInstancing_k__BackingField(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x35>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::Rendering::SupportedRenderingFeatures::__get__particleSystemInstancing_k__BackingField()  {
return ::cordl_internals::getInstanceField<bool, 0x35>(this);
}
constexpr bool const& UnityEngine::Rendering::SupportedRenderingFeatures::__get__particleSystemInstancing_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x35>(this);
}
constexpr void UnityEngine::Rendering::SupportedRenderingFeatures::__set__autoAmbientProbeBaking_k__BackingField(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x36>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::Rendering::SupportedRenderingFeatures::__get__autoAmbientProbeBaking_k__BackingField()  {
return ::cordl_internals::getInstanceField<bool, 0x36>(this);
}
constexpr bool const& UnityEngine::Rendering::SupportedRenderingFeatures::__get__autoAmbientProbeBaking_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x36>(this);
}
constexpr void UnityEngine::Rendering::SupportedRenderingFeatures::__set__autoDefaultReflectionProbeBaking_k__BackingField(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x37>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::Rendering::SupportedRenderingFeatures::__get__autoDefaultReflectionProbeBaking_k__BackingField()  {
return ::cordl_internals::getInstanceField<bool, 0x37>(this);
}
constexpr bool const& UnityEngine::Rendering::SupportedRenderingFeatures::__get__autoDefaultReflectionProbeBaking_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x37>(this);
}
constexpr void UnityEngine::Rendering::SupportedRenderingFeatures::__set__overridesShadowmask_k__BackingField(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x38>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::Rendering::SupportedRenderingFeatures::__get__overridesShadowmask_k__BackingField()  {
return ::cordl_internals::getInstanceField<bool, 0x38>(this);
}
constexpr bool const& UnityEngine::Rendering::SupportedRenderingFeatures::__get__overridesShadowmask_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x38>(this);
}
constexpr void UnityEngine::Rendering::SupportedRenderingFeatures::__set__overrideShadowmaskMessage_k__BackingField(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x40>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& UnityEngine::Rendering::SupportedRenderingFeatures::__get__overrideShadowmaskMessage_k__BackingField()  {
return ::cordl_internals::getInstanceField<::StringW, 0x40>(this);
}
constexpr ::StringW const& UnityEngine::Rendering::SupportedRenderingFeatures::__get__overrideShadowmaskMessage_k__BackingField() const {
return ::cordl_internals::getInstanceField<::StringW, 0x40>(this);
}
inline ::UnityEngine::Rendering::SupportedRenderingFeatures* UnityEngine::Rendering::SupportedRenderingFeatures::get_active()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(),
                            "get_active",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::SupportedRenderingFeatures*, false>(nullptr, ___internal_method);
}
inline void UnityEngine::Rendering::SupportedRenderingFeatures::set_active(::UnityEngine::Rendering::SupportedRenderingFeatures*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(),
                            "set_active",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline ::UnityEngine::Rendering::__SupportedRenderingFeatures__LightmapMixedBakeModes UnityEngine::Rendering::SupportedRenderingFeatures::get_defaultMixedLightingModes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(),
                            "get_defaultMixedLightingModes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::__SupportedRenderingFeatures__LightmapMixedBakeModes, false>(*this, ___internal_method);
}
inline ::UnityEngine::Rendering::__SupportedRenderingFeatures__LightmapMixedBakeModes UnityEngine::Rendering::SupportedRenderingFeatures::get_mixedLightingModes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(),
                            "get_mixedLightingModes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::__SupportedRenderingFeatures__LightmapMixedBakeModes, false>(*this, ___internal_method);
}
inline ::UnityEngine::LightmapBakeType UnityEngine::Rendering::SupportedRenderingFeatures::get_lightmapBakeTypes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(),
                            "get_lightmapBakeTypes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::LightmapBakeType, false>(*this, ___internal_method);
}
inline ::UnityEngine::LightmapsMode UnityEngine::Rendering::SupportedRenderingFeatures::get_lightmapsModes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(),
                            "get_lightmapsModes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::LightmapsMode, false>(*this, ___internal_method);
}
inline bool UnityEngine::Rendering::SupportedRenderingFeatures::get_enlightenLightmapper()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(),
                            "get_enlightenLightmapper",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool UnityEngine::Rendering::SupportedRenderingFeatures::get_enlighten()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(),
                            "get_enlighten",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool UnityEngine::Rendering::SupportedRenderingFeatures::get_rendersUIOverlay()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(),
                            "get_rendersUIOverlay",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool UnityEngine::Rendering::SupportedRenderingFeatures::get_autoAmbientProbeBaking()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(),
                            "get_autoAmbientProbeBaking",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool UnityEngine::Rendering::SupportedRenderingFeatures::get_autoDefaultReflectionProbeBaking()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(),
                            "get_autoDefaultReflectionProbeBaking",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::SupportedRenderingFeatures::FallbackMixedLightingModeByRef(::cordl_internals::intptr_t  fallbackModePtr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(),
                            "FallbackMixedLightingModeByRef",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, fallbackModePtr);
}
inline bool UnityEngine::Rendering::SupportedRenderingFeatures::IsMixedLightingModeSupported(::UnityEngine::MixedLightingMode  mixedMode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(),
                            "IsMixedLightingModeSupported",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MixedLightingMode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, mixedMode);
}
inline void UnityEngine::Rendering::SupportedRenderingFeatures::IsMixedLightingModeSupportedByRef(::UnityEngine::MixedLightingMode  mixedMode, ::cordl_internals::intptr_t  isSupportedPtr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(),
                            "IsMixedLightingModeSupportedByRef",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MixedLightingMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, mixedMode, isSupportedPtr);
}
inline bool UnityEngine::Rendering::SupportedRenderingFeatures::IsLightmapBakeTypeSupported(::UnityEngine::LightmapBakeType  bakeType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(),
                            "IsLightmapBakeTypeSupported",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LightmapBakeType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, bakeType);
}
inline void UnityEngine::Rendering::SupportedRenderingFeatures::IsLightmapBakeTypeSupportedByRef(::UnityEngine::LightmapBakeType  bakeType, ::cordl_internals::intptr_t  isSupportedPtr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(),
                            "IsLightmapBakeTypeSupportedByRef",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LightmapBakeType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, bakeType, isSupportedPtr);
}
inline void UnityEngine::Rendering::SupportedRenderingFeatures::IsLightmapsModeSupportedByRef(::UnityEngine::LightmapsMode  mode, ::cordl_internals::intptr_t  isSupportedPtr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(),
                            "IsLightmapsModeSupportedByRef",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LightmapsMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, mode, isSupportedPtr);
}
inline void UnityEngine::Rendering::SupportedRenderingFeatures::IsLightmapperSupportedByRef(int32_t  lightmapper, ::cordl_internals::intptr_t  isSupportedPtr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(),
                            "IsLightmapperSupportedByRef",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, lightmapper, isSupportedPtr);
}
inline void UnityEngine::Rendering::SupportedRenderingFeatures::IsUIOverlayRenderedBySRP(::cordl_internals::intptr_t  isSupportedPtr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(),
                            "IsUIOverlayRenderedBySRP",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, isSupportedPtr);
}
inline void UnityEngine::Rendering::SupportedRenderingFeatures::IsAutoAmbientProbeBakingSupported(::cordl_internals::intptr_t  isSupportedPtr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(),
                            "IsAutoAmbientProbeBakingSupported",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, isSupportedPtr);
}
inline void UnityEngine::Rendering::SupportedRenderingFeatures::IsAutoDefaultReflectionProbeBakingSupported(::cordl_internals::intptr_t  isSupportedPtr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(),
                            "IsAutoDefaultReflectionProbeBakingSupported",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, isSupportedPtr);
}
inline void UnityEngine::Rendering::SupportedRenderingFeatures::FallbackLightmapperByRef(::cordl_internals::intptr_t  lightmapperPtr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(),
                            "FallbackLightmapperByRef",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, lightmapperPtr);
}
inline ::UnityEngine::Rendering::SupportedRenderingFeatures* UnityEngine::Rendering::SupportedRenderingFeatures::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::Rendering::SupportedRenderingFeatures*>());
}
inline void UnityEngine::Rendering::SupportedRenderingFeatures::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SupportedRenderingFeatures*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
