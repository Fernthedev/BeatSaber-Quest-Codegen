#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__VRRenderingParamsSetup_def.hpp"
#include "GlobalNamespace/zzzz__MainSettingsModelSO_def.hpp"
#include "GlobalNamespace/zzzz__FloatSO_def.hpp"
#include "GlobalNamespace/zzzz__BoolSO_def.hpp"
#include "GlobalNamespace/zzzz__IVRPlatformHelper_def.hpp"
#include "GlobalNamespace/zzzz__VRRenderingParamsSetup_def.hpp"
constexpr void GlobalNamespace::__VRRenderingParamsSetup__SceneType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__VRRenderingParamsSetup__SceneType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__VRRenderingParamsSetup__SceneType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__VRRenderingParamsSetup__SceneType::__VRRenderingParamsSetup__SceneType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__VRRenderingParamsSetup__SceneType  GlobalNamespace::__VRRenderingParamsSetup__SceneType::Undefined{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__VRRenderingParamsSetup__SceneType  GlobalNamespace::__VRRenderingParamsSetup__SceneType::Menu{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::__VRRenderingParamsSetup__SceneType  GlobalNamespace::__VRRenderingParamsSetup__SceneType::Game{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::GlobalNamespace::VRRenderingParamsSetup.OnEnable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::VRRenderingParamsSetup::*)()>(&::GlobalNamespace::VRRenderingParamsSetup::OnEnable)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x2314d38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRRenderingParamsSetup*>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRRenderingParamsSetup.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::VRRenderingParamsSetup::*)()>(&::GlobalNamespace::VRRenderingParamsSetup::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2315038;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRRenderingParamsSetup*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRRenderingParamsSetup.SetupOculus
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::VRRenderingParamsSetup::*)()>(&::GlobalNamespace::VRRenderingParamsSetup::SetupOculus)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x2314e28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRRenderingParamsSetup*>::get(),
                            "SetupOculus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRRenderingParamsSetup._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::VRRenderingParamsSetup::*)()>(&::GlobalNamespace::VRRenderingParamsSetup::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x231503c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRRenderingParamsSetup*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::VRRenderingParamsSetup::__set__vrResolutionScale(::GlobalNamespace::FloatSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::FloatSO*, 0x18>(this, std::forward<::GlobalNamespace::FloatSO*>(value));
}
constexpr ::GlobalNamespace::FloatSO* GlobalNamespace::VRRenderingParamsSetup::__get__vrResolutionScale()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::FloatSO*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FloatSO*> GlobalNamespace::VRRenderingParamsSetup::__get__vrResolutionScale() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::FloatSO*, 0x18>(this);
}
constexpr void GlobalNamespace::VRRenderingParamsSetup::__set__menuVRResolutionScaleMultiplier(::GlobalNamespace::FloatSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::FloatSO*, 0x20>(this, std::forward<::GlobalNamespace::FloatSO*>(value));
}
constexpr ::GlobalNamespace::FloatSO* GlobalNamespace::VRRenderingParamsSetup::__get__menuVRResolutionScaleMultiplier()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::FloatSO*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FloatSO*> GlobalNamespace::VRRenderingParamsSetup::__get__menuVRResolutionScaleMultiplier() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::FloatSO*, 0x20>(this);
}
constexpr void GlobalNamespace::VRRenderingParamsSetup::__set__useFixedFoveatedRenderingDuringGameplay(::GlobalNamespace::BoolSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BoolSO*, 0x28>(this, std::forward<::GlobalNamespace::BoolSO*>(value));
}
constexpr ::GlobalNamespace::BoolSO* GlobalNamespace::VRRenderingParamsSetup::__get__useFixedFoveatedRenderingDuringGameplay()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BoolSO*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BoolSO*> GlobalNamespace::VRRenderingParamsSetup::__get__useFixedFoveatedRenderingDuringGameplay() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BoolSO*, 0x28>(this);
}
constexpr void GlobalNamespace::VRRenderingParamsSetup::__set__sceneType(::GlobalNamespace::__VRRenderingParamsSetup__SceneType  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__VRRenderingParamsSetup__SceneType, 0x30>(this, std::forward<::GlobalNamespace::__VRRenderingParamsSetup__SceneType>(value));
}
constexpr ::GlobalNamespace::__VRRenderingParamsSetup__SceneType& GlobalNamespace::VRRenderingParamsSetup::__get__sceneType()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__VRRenderingParamsSetup__SceneType, 0x30>(this);
}
constexpr ::GlobalNamespace::__VRRenderingParamsSetup__SceneType const& GlobalNamespace::VRRenderingParamsSetup::__get__sceneType() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__VRRenderingParamsSetup__SceneType, 0x30>(this);
}
constexpr void GlobalNamespace::VRRenderingParamsSetup::__set__vrPlatformHelper(::GlobalNamespace::IVRPlatformHelper*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IVRPlatformHelper*, 0x38>(this, std::forward<::GlobalNamespace::IVRPlatformHelper*>(value));
}
constexpr ::GlobalNamespace::IVRPlatformHelper* GlobalNamespace::VRRenderingParamsSetup::__get__vrPlatformHelper()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IVRPlatformHelper*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IVRPlatformHelper*> GlobalNamespace::VRRenderingParamsSetup::__get__vrPlatformHelper() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IVRPlatformHelper*, 0x38>(this);
}
constexpr void GlobalNamespace::VRRenderingParamsSetup::__set__mainSettingsModel(::GlobalNamespace::MainSettingsModelSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MainSettingsModelSO*, 0x40>(this, std::forward<::GlobalNamespace::MainSettingsModelSO*>(value));
}
constexpr ::GlobalNamespace::MainSettingsModelSO* GlobalNamespace::VRRenderingParamsSetup::__get__mainSettingsModel()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MainSettingsModelSO*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MainSettingsModelSO*> GlobalNamespace::VRRenderingParamsSetup::__get__mainSettingsModel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MainSettingsModelSO*, 0x40>(this);
}
inline void GlobalNamespace::VRRenderingParamsSetup::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRRenderingParamsSetup*>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::VRRenderingParamsSetup::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRRenderingParamsSetup*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::VRRenderingParamsSetup::SetupOculus()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRRenderingParamsSetup*>::get(),
                            "SetupOculus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::VRRenderingParamsSetup* GlobalNamespace::VRRenderingParamsSetup::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::VRRenderingParamsSetup*>());
}
inline void GlobalNamespace::VRRenderingParamsSetup::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRRenderingParamsSetup*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
