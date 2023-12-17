#pragma once
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__TubeLightBehaviour_def.hpp"
#include "GlobalNamespace/zzzz__ColorSO_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "GlobalNamespace/zzzz__DirectionalLight_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "GlobalNamespace/zzzz__TubeBloomPrePassLight_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "GlobalNamespace/zzzz__TubeLightBehaviour_def.hpp"
#include "UnityEngine/Playables/zzzz__FrameData_def.hpp"
constexpr void GlobalNamespace::__TubeLightBehaviour__ParameterType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__TubeLightBehaviour__ParameterType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__TubeLightBehaviour__ParameterType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__TubeLightBehaviour__ParameterType::__TubeLightBehaviour__ParameterType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__TubeLightBehaviour__ParameterType  GlobalNamespace::__TubeLightBehaviour__ParameterType::Values{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__TubeLightBehaviour__ParameterType  GlobalNamespace::__TubeLightBehaviour__ParameterType::References{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::GlobalNamespace::TubeLightBehaviour.ProcessFrame
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TubeLightBehaviour::*)(::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*)>(&::GlobalNamespace::TubeLightBehaviour::ProcessFrame)> {
  constexpr static std::size_t size = 0x408;
  constexpr static std::size_t addrs = 0x2317dc0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TubeLightBehaviour*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TubeLightBehaviour*>::get(),
                                  20
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TubeLightBehaviour.OnPlayableDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TubeLightBehaviour::*)(::UnityEngine::Playables::Playable)>(&::GlobalNamespace::TubeLightBehaviour::OnPlayableDestroy)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x23181c8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TubeLightBehaviour*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TubeLightBehaviour*>::get(),
                                  16
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TubeLightBehaviour._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TubeLightBehaviour::*)()>(&::GlobalNamespace::TubeLightBehaviour::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2318294;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TubeLightBehaviour*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::TubeLightBehaviour::__set__noPredefinedStartValue(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::TubeLightBehaviour::__get__noPredefinedStartValue()  {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr bool const& GlobalNamespace::TubeLightBehaviour::__get__noPredefinedStartValue() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr void GlobalNamespace::TubeLightBehaviour::__set_startColor(::GlobalNamespace::ColorSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::ColorSO*, 0x18>(this, std::forward<::GlobalNamespace::ColorSO*>(value));
}
constexpr ::GlobalNamespace::ColorSO* GlobalNamespace::TubeLightBehaviour::__get_startColor()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ColorSO*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorSO*> GlobalNamespace::TubeLightBehaviour::__get_startColor() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ColorSO*, 0x18>(this);
}
constexpr void GlobalNamespace::TubeLightBehaviour::__set_endColor(::GlobalNamespace::ColorSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::ColorSO*, 0x20>(this, std::forward<::GlobalNamespace::ColorSO*>(value));
}
constexpr ::GlobalNamespace::ColorSO* GlobalNamespace::TubeLightBehaviour::__get_endColor()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ColorSO*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorSO*> GlobalNamespace::TubeLightBehaviour::__get_endColor() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ColorSO*, 0x20>(this);
}
constexpr void GlobalNamespace::TubeLightBehaviour::__set_blend(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x28>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::TubeLightBehaviour::__get_blend()  {
return ::cordl_internals::getInstanceField<float_t, 0x28>(this);
}
constexpr float_t const& GlobalNamespace::TubeLightBehaviour::__get_blend() const {
return ::cordl_internals::getInstanceField<float_t, 0x28>(this);
}
constexpr void GlobalNamespace::TubeLightBehaviour::__set__initialized(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x2c>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::TubeLightBehaviour::__get__initialized()  {
return ::cordl_internals::getInstanceField<bool, 0x2c>(this);
}
constexpr bool const& GlobalNamespace::TubeLightBehaviour::__get__initialized() const {
return ::cordl_internals::getInstanceField<bool, 0x2c>(this);
}
constexpr void GlobalNamespace::TubeLightBehaviour::__set__originalColor(::UnityEngine::Color  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color, 0x30>(this, std::forward<::UnityEngine::Color>(value));
}
constexpr ::UnityEngine::Color& GlobalNamespace::TubeLightBehaviour::__get__originalColor()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x30>(this);
}
constexpr ::UnityEngine::Color const& GlobalNamespace::TubeLightBehaviour::__get__originalColor() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x30>(this);
}
constexpr void GlobalNamespace::TubeLightBehaviour::__set__tubeLights(::ArrayW<::GlobalNamespace::TubeBloomPrePassLight*,::Array<::GlobalNamespace::TubeBloomPrePassLight*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::TubeBloomPrePassLight*,::Array<::GlobalNamespace::TubeBloomPrePassLight*>*>, 0x40>(this, std::forward<::ArrayW<::GlobalNamespace::TubeBloomPrePassLight*,::Array<::GlobalNamespace::TubeBloomPrePassLight*>*>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::TubeBloomPrePassLight*,::Array<::GlobalNamespace::TubeBloomPrePassLight*>*>& GlobalNamespace::TubeLightBehaviour::__get__tubeLights()  {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::TubeBloomPrePassLight*,::Array<::GlobalNamespace::TubeBloomPrePassLight*>*>, 0x40>(this);
}
constexpr ::ArrayW<::GlobalNamespace::TubeBloomPrePassLight*,::Array<::GlobalNamespace::TubeBloomPrePassLight*>*> const& GlobalNamespace::TubeLightBehaviour::__get__tubeLights() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::TubeBloomPrePassLight*,::Array<::GlobalNamespace::TubeBloomPrePassLight*>*>, 0x40>(this);
}
constexpr void GlobalNamespace::TubeLightBehaviour::__set__directionalLights(::ArrayW<::GlobalNamespace::DirectionalLight*,::Array<::GlobalNamespace::DirectionalLight*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::DirectionalLight*,::Array<::GlobalNamespace::DirectionalLight*>*>, 0x48>(this, std::forward<::ArrayW<::GlobalNamespace::DirectionalLight*,::Array<::GlobalNamespace::DirectionalLight*>*>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::DirectionalLight*,::Array<::GlobalNamespace::DirectionalLight*>*>& GlobalNamespace::TubeLightBehaviour::__get__directionalLights()  {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::DirectionalLight*,::Array<::GlobalNamespace::DirectionalLight*>*>, 0x48>(this);
}
constexpr ::ArrayW<::GlobalNamespace::DirectionalLight*,::Array<::GlobalNamespace::DirectionalLight*>*> const& GlobalNamespace::TubeLightBehaviour::__get__directionalLights() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::DirectionalLight*,::Array<::GlobalNamespace::DirectionalLight*>*>, 0x48>(this);
}
constexpr void GlobalNamespace::TubeLightBehaviour::__set_started(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x50>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::TubeLightBehaviour::__get_started()  {
return ::cordl_internals::getInstanceField<bool, 0x50>(this);
}
constexpr bool const& GlobalNamespace::TubeLightBehaviour::__get_started() const {
return ::cordl_internals::getInstanceField<bool, 0x50>(this);
}
constexpr void GlobalNamespace::TubeLightBehaviour::__set__firstFrameColor(::UnityEngine::Color  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color, 0x54>(this, std::forward<::UnityEngine::Color>(value));
}
constexpr ::UnityEngine::Color& GlobalNamespace::TubeLightBehaviour::__get__firstFrameColor()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x54>(this);
}
constexpr ::UnityEngine::Color const& GlobalNamespace::TubeLightBehaviour::__get__firstFrameColor() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x54>(this);
}
inline void GlobalNamespace::TubeLightBehaviour::ProcessFrame(::UnityEngine::Playables::Playable  playable, ::UnityEngine::Playables::FrameData  info, ::System::Object*  playerData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TubeLightBehaviour*>::get(),
                            "ProcessFrame",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::Playable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::FrameData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, playable, info, playerData);
}
inline void GlobalNamespace::TubeLightBehaviour::OnPlayableDestroy(::UnityEngine::Playables::Playable  playable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TubeLightBehaviour*>::get(),
                            "OnPlayableDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::Playable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, playable);
}
inline ::GlobalNamespace::TubeLightBehaviour* GlobalNamespace::TubeLightBehaviour::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::TubeLightBehaviour*>());
}
inline void GlobalNamespace::TubeLightBehaviour::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TubeLightBehaviour*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
