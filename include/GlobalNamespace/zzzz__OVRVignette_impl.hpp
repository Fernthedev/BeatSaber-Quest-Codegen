#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__OVRVignette_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
#include "UnityEngine/zzzz__MeshFilter_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "GlobalNamespace/zzzz__OVRVignette_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_def.hpp"
constexpr void GlobalNamespace::__OVRVignette__MeshComplexityLevel::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__OVRVignette__MeshComplexityLevel::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__OVRVignette__MeshComplexityLevel::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRVignette__MeshComplexityLevel::__OVRVignette__MeshComplexityLevel(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__OVRVignette__MeshComplexityLevel  GlobalNamespace::__OVRVignette__MeshComplexityLevel::VerySimple{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__OVRVignette__MeshComplexityLevel  GlobalNamespace::__OVRVignette__MeshComplexityLevel::Simple{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::__OVRVignette__MeshComplexityLevel  GlobalNamespace::__OVRVignette__MeshComplexityLevel::Normal{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::__OVRVignette__MeshComplexityLevel  GlobalNamespace::__OVRVignette__MeshComplexityLevel::Detailed{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::__OVRVignette__MeshComplexityLevel  GlobalNamespace::__OVRVignette__MeshComplexityLevel::VeryDetailed{static_cast<int32_t>(0x4)};
constexpr void GlobalNamespace::__OVRVignette__FalloffType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__OVRVignette__FalloffType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__OVRVignette__FalloffType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRVignette__FalloffType::__OVRVignette__FalloffType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__OVRVignette__FalloffType  GlobalNamespace::__OVRVignette__FalloffType::Linear{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__OVRVignette__FalloffType  GlobalNamespace::__OVRVignette__FalloffType::Quadratic{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::GlobalNamespace::OVRVignette.GetTriangleCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::OVRVignette::*)()>(&::GlobalNamespace::OVRVignette::GetTriangleCount)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x27c4414;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVignette*>::get(),
                            "GetTriangleCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVignette.BuildMeshes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVignette::*)()>(&::GlobalNamespace::OVRVignette::BuildMeshes)> {
  constexpr static std::size_t size = 0x688;
  constexpr static std::size_t addrs = 0x27c4438;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVignette*>::get(),
                            "BuildMeshes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVignette.BuildMaterials
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVignette::*)()>(&::GlobalNamespace::OVRVignette::BuildMaterials)> {
  constexpr static std::size_t size = 0x3a8;
  constexpr static std::size_t addrs = 0x27c4ac0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVignette*>::get(),
                            "BuildMaterials",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVignette.OnEnable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVignette::*)()>(&::GlobalNamespace::OVRVignette::OnEnable)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x27c4e68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVignette*>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVignette.OnDisable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVignette::*)()>(&::GlobalNamespace::OVRVignette::OnDisable)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x27c4f0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVignette*>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVignette.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVignette::*)()>(&::GlobalNamespace::OVRVignette::Awake)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0x27c4ff0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVignette*>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVignette.GetTanFovAndOffsetForStereoEye
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVignette::*)(::UnityEngine::__Camera__StereoscopicEye, ByRef<float_t>, ByRef<float_t>, ByRef<float_t>, ByRef<float_t>)>(&::GlobalNamespace::OVRVignette::GetTanFovAndOffsetForStereoEye)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x27c5304;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVignette*>::get(),
                            "GetTanFovAndOffsetForStereoEye",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::__Camera__StereoscopicEye>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVignette.GetTanFovAndOffsetForMonoEye
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVignette::*)(ByRef<float_t>, ByRef<float_t>, ByRef<float_t>, ByRef<float_t>)>(&::GlobalNamespace::OVRVignette::GetTanFovAndOffsetForMonoEye)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x27c54fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVignette*>::get(),
                            "GetTanFovAndOffsetForMonoEye",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVignette.VisibilityTest
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRVignette::*)(float_t, float_t, float_t, float_t)>(&::GlobalNamespace::OVRVignette::VisibilityTest)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x27c5588;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVignette*>::get(),
                            "VisibilityTest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVignette.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVignette::*)()>(&::GlobalNamespace::OVRVignette::Update)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x27c55bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVignette*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVignette.EnableRenderers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVignette::*)()>(&::GlobalNamespace::OVRVignette::EnableRenderers)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x27c592c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVignette*>::get(),
                            "EnableRenderers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVignette.DisableRenderers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVignette::*)()>(&::GlobalNamespace::OVRVignette::DisableRenderers)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x27c4fb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVignette*>::get(),
                            "DisableRenderers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVignette.OnPreCull
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVignette::*)()>(&::GlobalNamespace::OVRVignette::OnPreCull)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x27c5964;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVignette*>::get(),
                            "OnPreCull",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVignette.OnPostRender
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVignette::*)()>(&::GlobalNamespace::OVRVignette::OnPostRender)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x27c5968;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVignette*>::get(),
                            "OnPostRender",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVignette.OnBeginCameraRendering
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVignette::*)(::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Camera*)>(&::GlobalNamespace::OVRVignette::OnBeginCameraRendering)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x27c596c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVignette*>::get(),
                            "OnBeginCameraRendering",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ScriptableRenderContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVignette._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRVignette::*)()>(&::GlobalNamespace::OVRVignette::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x27c59f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVignette*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRVignette::setStaticF_QUADRATIC_FALLOFF(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "QUADRATIC_FALLOFF", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVignette*>::get>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::OVRVignette::getStaticF_QUADRATIC_FALLOFF()  {
return ::cordl_internals::getStaticField<::StringW, "QUADRATIC_FALLOFF", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVignette*>::get>();
}
constexpr void GlobalNamespace::OVRVignette::__set_VignetteShader(::UnityEngine::Shader*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Shader*, 0x18>(this, std::forward<::UnityEngine::Shader*>(value));
}
constexpr ::UnityEngine::Shader* GlobalNamespace::OVRVignette::__get_VignetteShader()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Shader*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Shader*> GlobalNamespace::OVRVignette::__get_VignetteShader() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Shader*, 0x18>(this);
}
constexpr void GlobalNamespace::OVRVignette::__set_MeshComplexity(::GlobalNamespace::__OVRVignette__MeshComplexityLevel  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__OVRVignette__MeshComplexityLevel, 0x20>(this, std::forward<::GlobalNamespace::__OVRVignette__MeshComplexityLevel>(value));
}
constexpr ::GlobalNamespace::__OVRVignette__MeshComplexityLevel& GlobalNamespace::OVRVignette::__get_MeshComplexity()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRVignette__MeshComplexityLevel, 0x20>(this);
}
constexpr ::GlobalNamespace::__OVRVignette__MeshComplexityLevel const& GlobalNamespace::OVRVignette::__get_MeshComplexity() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRVignette__MeshComplexityLevel, 0x20>(this);
}
constexpr void GlobalNamespace::OVRVignette::__set_Falloff(::GlobalNamespace::__OVRVignette__FalloffType  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__OVRVignette__FalloffType, 0x24>(this, std::forward<::GlobalNamespace::__OVRVignette__FalloffType>(value));
}
constexpr ::GlobalNamespace::__OVRVignette__FalloffType& GlobalNamespace::OVRVignette::__get_Falloff()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRVignette__FalloffType, 0x24>(this);
}
constexpr ::GlobalNamespace::__OVRVignette__FalloffType const& GlobalNamespace::OVRVignette::__get_Falloff() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRVignette__FalloffType, 0x24>(this);
}
constexpr void GlobalNamespace::OVRVignette::__set_VignetteFieldOfView(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x28>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::OVRVignette::__get_VignetteFieldOfView()  {
return ::cordl_internals::getInstanceField<float_t, 0x28>(this);
}
constexpr float_t const& GlobalNamespace::OVRVignette::__get_VignetteFieldOfView() const {
return ::cordl_internals::getInstanceField<float_t, 0x28>(this);
}
constexpr void GlobalNamespace::OVRVignette::__set_VignetteAspectRatio(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x2c>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::OVRVignette::__get_VignetteAspectRatio()  {
return ::cordl_internals::getInstanceField<float_t, 0x2c>(this);
}
constexpr float_t const& GlobalNamespace::OVRVignette::__get_VignetteAspectRatio() const {
return ::cordl_internals::getInstanceField<float_t, 0x2c>(this);
}
constexpr void GlobalNamespace::OVRVignette::__set_VignetteFalloffDegrees(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x30>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::OVRVignette::__get_VignetteFalloffDegrees()  {
return ::cordl_internals::getInstanceField<float_t, 0x30>(this);
}
constexpr float_t const& GlobalNamespace::OVRVignette::__get_VignetteFalloffDegrees() const {
return ::cordl_internals::getInstanceField<float_t, 0x30>(this);
}
constexpr void GlobalNamespace::OVRVignette::__set_VignetteColor(::UnityEngine::Color  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color, 0x34>(this, std::forward<::UnityEngine::Color>(value));
}
constexpr ::UnityEngine::Color& GlobalNamespace::OVRVignette::__get_VignetteColor()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x34>(this);
}
constexpr ::UnityEngine::Color const& GlobalNamespace::OVRVignette::__get_VignetteColor() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x34>(this);
}
constexpr void GlobalNamespace::OVRVignette::__set__Camera(::UnityEngine::Camera*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Camera*, 0x48>(this, std::forward<::UnityEngine::Camera*>(value));
}
constexpr ::UnityEngine::Camera* GlobalNamespace::OVRVignette::__get__Camera()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Camera*, 0x48>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Camera*> GlobalNamespace::OVRVignette::__get__Camera() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Camera*, 0x48>(this);
}
constexpr void GlobalNamespace::OVRVignette::__set__OpaqueMeshFilter(::UnityEngine::MeshFilter*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::MeshFilter*, 0x50>(this, std::forward<::UnityEngine::MeshFilter*>(value));
}
constexpr ::UnityEngine::MeshFilter* GlobalNamespace::OVRVignette::__get__OpaqueMeshFilter()  {
return ::cordl_internals::getInstanceField<::UnityEngine::MeshFilter*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MeshFilter*> GlobalNamespace::OVRVignette::__get__OpaqueMeshFilter() const {
return ::cordl_internals::getInstanceField<::UnityEngine::MeshFilter*, 0x50>(this);
}
constexpr void GlobalNamespace::OVRVignette::__set__TransparentMeshFilter(::UnityEngine::MeshFilter*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::MeshFilter*, 0x58>(this, std::forward<::UnityEngine::MeshFilter*>(value));
}
constexpr ::UnityEngine::MeshFilter* GlobalNamespace::OVRVignette::__get__TransparentMeshFilter()  {
return ::cordl_internals::getInstanceField<::UnityEngine::MeshFilter*, 0x58>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MeshFilter*> GlobalNamespace::OVRVignette::__get__TransparentMeshFilter() const {
return ::cordl_internals::getInstanceField<::UnityEngine::MeshFilter*, 0x58>(this);
}
constexpr void GlobalNamespace::OVRVignette::__set__OpaqueMeshRenderer(::UnityEngine::MeshRenderer*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::MeshRenderer*, 0x60>(this, std::forward<::UnityEngine::MeshRenderer*>(value));
}
constexpr ::UnityEngine::MeshRenderer* GlobalNamespace::OVRVignette::__get__OpaqueMeshRenderer()  {
return ::cordl_internals::getInstanceField<::UnityEngine::MeshRenderer*, 0x60>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MeshRenderer*> GlobalNamespace::OVRVignette::__get__OpaqueMeshRenderer() const {
return ::cordl_internals::getInstanceField<::UnityEngine::MeshRenderer*, 0x60>(this);
}
constexpr void GlobalNamespace::OVRVignette::__set__TransparentMeshRenderer(::UnityEngine::MeshRenderer*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::MeshRenderer*, 0x68>(this, std::forward<::UnityEngine::MeshRenderer*>(value));
}
constexpr ::UnityEngine::MeshRenderer* GlobalNamespace::OVRVignette::__get__TransparentMeshRenderer()  {
return ::cordl_internals::getInstanceField<::UnityEngine::MeshRenderer*, 0x68>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MeshRenderer*> GlobalNamespace::OVRVignette::__get__TransparentMeshRenderer() const {
return ::cordl_internals::getInstanceField<::UnityEngine::MeshRenderer*, 0x68>(this);
}
constexpr void GlobalNamespace::OVRVignette::__set__OpaqueMesh(::UnityEngine::Mesh*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Mesh*, 0x70>(this, std::forward<::UnityEngine::Mesh*>(value));
}
constexpr ::UnityEngine::Mesh* GlobalNamespace::OVRVignette::__get__OpaqueMesh()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Mesh*, 0x70>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Mesh*> GlobalNamespace::OVRVignette::__get__OpaqueMesh() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Mesh*, 0x70>(this);
}
constexpr void GlobalNamespace::OVRVignette::__set__TransparentMesh(::UnityEngine::Mesh*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Mesh*, 0x78>(this, std::forward<::UnityEngine::Mesh*>(value));
}
constexpr ::UnityEngine::Mesh* GlobalNamespace::OVRVignette::__get__TransparentMesh()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Mesh*, 0x78>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Mesh*> GlobalNamespace::OVRVignette::__get__TransparentMesh() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Mesh*, 0x78>(this);
}
constexpr void GlobalNamespace::OVRVignette::__set__OpaqueMaterial(::UnityEngine::Material*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Material*, 0x80>(this, std::forward<::UnityEngine::Material*>(value));
}
constexpr ::UnityEngine::Material* GlobalNamespace::OVRVignette::__get__OpaqueMaterial()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Material*, 0x80>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> GlobalNamespace::OVRVignette::__get__OpaqueMaterial() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Material*, 0x80>(this);
}
constexpr void GlobalNamespace::OVRVignette::__set__TransparentMaterial(::UnityEngine::Material*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Material*, 0x88>(this, std::forward<::UnityEngine::Material*>(value));
}
constexpr ::UnityEngine::Material* GlobalNamespace::OVRVignette::__get__TransparentMaterial()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Material*, 0x88>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> GlobalNamespace::OVRVignette::__get__TransparentMaterial() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Material*, 0x88>(this);
}
constexpr void GlobalNamespace::OVRVignette::__set__ShaderScaleAndOffset0Property(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x90>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::OVRVignette::__get__ShaderScaleAndOffset0Property()  {
return ::cordl_internals::getInstanceField<int32_t, 0x90>(this);
}
constexpr int32_t const& GlobalNamespace::OVRVignette::__get__ShaderScaleAndOffset0Property() const {
return ::cordl_internals::getInstanceField<int32_t, 0x90>(this);
}
constexpr void GlobalNamespace::OVRVignette::__set__ShaderScaleAndOffset1Property(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x94>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::OVRVignette::__get__ShaderScaleAndOffset1Property()  {
return ::cordl_internals::getInstanceField<int32_t, 0x94>(this);
}
constexpr int32_t const& GlobalNamespace::OVRVignette::__get__ShaderScaleAndOffset1Property() const {
return ::cordl_internals::getInstanceField<int32_t, 0x94>(this);
}
constexpr void GlobalNamespace::OVRVignette::__set__TransparentScaleAndOffset0(::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>, 0x98>(this, std::forward<::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>& GlobalNamespace::OVRVignette::__get__TransparentScaleAndOffset0()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>, 0x98>(this);
}
constexpr ::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*> const& GlobalNamespace::OVRVignette::__get__TransparentScaleAndOffset0() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>, 0x98>(this);
}
constexpr void GlobalNamespace::OVRVignette::__set__TransparentScaleAndOffset1(::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>, 0xa0>(this, std::forward<::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>& GlobalNamespace::OVRVignette::__get__TransparentScaleAndOffset1()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>, 0xa0>(this);
}
constexpr ::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*> const& GlobalNamespace::OVRVignette::__get__TransparentScaleAndOffset1() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>, 0xa0>(this);
}
constexpr void GlobalNamespace::OVRVignette::__set__OpaqueScaleAndOffset0(::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>, 0xa8>(this, std::forward<::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>& GlobalNamespace::OVRVignette::__get__OpaqueScaleAndOffset0()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>, 0xa8>(this);
}
constexpr ::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*> const& GlobalNamespace::OVRVignette::__get__OpaqueScaleAndOffset0() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>, 0xa8>(this);
}
constexpr void GlobalNamespace::OVRVignette::__set__OpaqueScaleAndOffset1(::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>, 0xb0>(this, std::forward<::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>& GlobalNamespace::OVRVignette::__get__OpaqueScaleAndOffset1()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>, 0xb0>(this);
}
constexpr ::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*> const& GlobalNamespace::OVRVignette::__get__OpaqueScaleAndOffset1() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>, 0xb0>(this);
}
constexpr void GlobalNamespace::OVRVignette::__set__OpaqueVignetteVisible(bool  value)  {
::cordl_internals::setInstanceField<bool, 0xb8>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::OVRVignette::__get__OpaqueVignetteVisible()  {
return ::cordl_internals::getInstanceField<bool, 0xb8>(this);
}
constexpr bool const& GlobalNamespace::OVRVignette::__get__OpaqueVignetteVisible() const {
return ::cordl_internals::getInstanceField<bool, 0xb8>(this);
}
constexpr void GlobalNamespace::OVRVignette::__set__TransparentVignetteVisible(bool  value)  {
::cordl_internals::setInstanceField<bool, 0xb9>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::OVRVignette::__get__TransparentVignetteVisible()  {
return ::cordl_internals::getInstanceField<bool, 0xb9>(this);
}
constexpr bool const& GlobalNamespace::OVRVignette::__get__TransparentVignetteVisible() const {
return ::cordl_internals::getInstanceField<bool, 0xb9>(this);
}
inline int32_t GlobalNamespace::OVRVignette::GetTriangleCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVignette*>::get(),
                            "GetTriangleCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRVignette::BuildMeshes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVignette*>::get(),
                            "BuildMeshes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRVignette::BuildMaterials()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVignette*>::get(),
                            "BuildMaterials",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRVignette::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVignette*>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRVignette::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVignette*>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRVignette::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVignette*>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRVignette::GetTanFovAndOffsetForStereoEye(::UnityEngine::__Camera__StereoscopicEye  eye, ByRef<float_t>  tanFovX, ByRef<float_t>  tanFovY, ByRef<float_t>  offsetX, ByRef<float_t>  offsetY)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVignette*>::get(),
                            "GetTanFovAndOffsetForStereoEye",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::__Camera__StereoscopicEye>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, eye, tanFovX, tanFovY, offsetX, offsetY);
}
inline void GlobalNamespace::OVRVignette::GetTanFovAndOffsetForMonoEye(ByRef<float_t>  tanFovX, ByRef<float_t>  tanFovY, ByRef<float_t>  offsetX, ByRef<float_t>  offsetY)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVignette*>::get(),
                            "GetTanFovAndOffsetForMonoEye",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, tanFovX, tanFovY, offsetX, offsetY);
}
inline bool GlobalNamespace::OVRVignette::VisibilityTest(float_t  scaleX, float_t  scaleY, float_t  offsetX, float_t  offsetY)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVignette*>::get(),
                            "VisibilityTest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, scaleX, scaleY, offsetX, offsetY);
}
inline void GlobalNamespace::OVRVignette::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVignette*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRVignette::EnableRenderers()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVignette*>::get(),
                            "EnableRenderers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRVignette::DisableRenderers()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVignette*>::get(),
                            "DisableRenderers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRVignette::OnPreCull()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVignette*>::get(),
                            "OnPreCull",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRVignette::OnPostRender()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVignette*>::get(),
                            "OnPostRender",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRVignette::OnBeginCameraRendering(::UnityEngine::Rendering::ScriptableRenderContext  context, ::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVignette*>::get(),
                            "OnBeginCameraRendering",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ScriptableRenderContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, context, camera);
}
inline ::GlobalNamespace::OVRVignette* GlobalNamespace::OVRVignette::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::OVRVignette*>());
}
inline void GlobalNamespace::OVRVignette::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRVignette*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
