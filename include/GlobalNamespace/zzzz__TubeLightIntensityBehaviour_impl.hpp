#pragma once
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__TubeLightIntensityBehaviour_def.hpp"
#include "GlobalNamespace/zzzz__DirectionalLight_def.hpp"
#include "GlobalNamespace/zzzz__TubeBloomPrePassLight_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "UnityEngine/Playables/zzzz__FrameData_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TubeLightIntensityBehaviour.ProcessFrame
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TubeLightIntensityBehaviour::*)(::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*)>(&::GlobalNamespace::TubeLightIntensityBehaviour::ProcessFrame)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x2318354;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TubeLightIntensityBehaviour*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TubeLightIntensityBehaviour*>::get(),
                                  20
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TubeLightIntensityBehaviour.EnableObjects
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TubeLightIntensityBehaviour::*)(bool)>(&::GlobalNamespace::TubeLightIntensityBehaviour::EnableObjects)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x23186c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TubeLightIntensityBehaviour*>::get(),
                            "EnableObjects",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TubeLightIntensityBehaviour.OnPlayableDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TubeLightIntensityBehaviour::*)(::UnityEngine::Playables::Playable)>(&::GlobalNamespace::TubeLightIntensityBehaviour::OnPlayableDestroy)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2318798;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TubeLightIntensityBehaviour*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TubeLightIntensityBehaviour*>::get(),
                                  16
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TubeLightIntensityBehaviour._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TubeLightIntensityBehaviour::*)()>(&::GlobalNamespace::TubeLightIntensityBehaviour::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2318864;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TubeLightIntensityBehaviour*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::TubeLightIntensityBehaviour::__set__noPredefinedStartValue(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::TubeLightIntensityBehaviour::__get__noPredefinedStartValue()  {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr bool const& GlobalNamespace::TubeLightIntensityBehaviour::__get__noPredefinedStartValue() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr void GlobalNamespace::TubeLightIntensityBehaviour::__set__startLightIntensity(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x14>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::TubeLightIntensityBehaviour::__get__startLightIntensity()  {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this);
}
constexpr float_t const& GlobalNamespace::TubeLightIntensityBehaviour::__get__startLightIntensity() const {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this);
}
constexpr void GlobalNamespace::TubeLightIntensityBehaviour::__set__startLaserIntensity(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x18>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::TubeLightIntensityBehaviour::__get__startLaserIntensity()  {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this);
}
constexpr float_t const& GlobalNamespace::TubeLightIntensityBehaviour::__get__startLaserIntensity() const {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this);
}
constexpr void GlobalNamespace::TubeLightIntensityBehaviour::__set__endLightIntensity(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x1c>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::TubeLightIntensityBehaviour::__get__endLightIntensity()  {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this);
}
constexpr float_t const& GlobalNamespace::TubeLightIntensityBehaviour::__get__endLightIntensity() const {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this);
}
constexpr void GlobalNamespace::TubeLightIntensityBehaviour::__set__endLaserIntensity(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x20>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::TubeLightIntensityBehaviour::__get__endLaserIntensity()  {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this);
}
constexpr float_t const& GlobalNamespace::TubeLightIntensityBehaviour::__get__endLaserIntensity() const {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this);
}
constexpr void GlobalNamespace::TubeLightIntensityBehaviour::__set__disableWhenFinished(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x24>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::TubeLightIntensityBehaviour::__get__disableWhenFinished()  {
return ::cordl_internals::getInstanceField<bool, 0x24>(this);
}
constexpr bool const& GlobalNamespace::TubeLightIntensityBehaviour::__get__disableWhenFinished() const {
return ::cordl_internals::getInstanceField<bool, 0x24>(this);
}
constexpr void GlobalNamespace::TubeLightIntensityBehaviour::__set__blend(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x28>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::TubeLightIntensityBehaviour::__get__blend()  {
return ::cordl_internals::getInstanceField<float_t, 0x28>(this);
}
constexpr float_t const& GlobalNamespace::TubeLightIntensityBehaviour::__get__blend() const {
return ::cordl_internals::getInstanceField<float_t, 0x28>(this);
}
constexpr void GlobalNamespace::TubeLightIntensityBehaviour::__set__initialized(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x2c>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::TubeLightIntensityBehaviour::__get__initialized()  {
return ::cordl_internals::getInstanceField<bool, 0x2c>(this);
}
constexpr bool const& GlobalNamespace::TubeLightIntensityBehaviour::__get__initialized() const {
return ::cordl_internals::getInstanceField<bool, 0x2c>(this);
}
constexpr void GlobalNamespace::TubeLightIntensityBehaviour::__set__originalLightIntensity(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x30>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::TubeLightIntensityBehaviour::__get__originalLightIntensity()  {
return ::cordl_internals::getInstanceField<float_t, 0x30>(this);
}
constexpr float_t const& GlobalNamespace::TubeLightIntensityBehaviour::__get__originalLightIntensity() const {
return ::cordl_internals::getInstanceField<float_t, 0x30>(this);
}
constexpr void GlobalNamespace::TubeLightIntensityBehaviour::__set__originalLaserIntensity(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x34>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::TubeLightIntensityBehaviour::__get__originalLaserIntensity()  {
return ::cordl_internals::getInstanceField<float_t, 0x34>(this);
}
constexpr float_t const& GlobalNamespace::TubeLightIntensityBehaviour::__get__originalLaserIntensity() const {
return ::cordl_internals::getInstanceField<float_t, 0x34>(this);
}
constexpr void GlobalNamespace::TubeLightIntensityBehaviour::__set__tubeLights(::ArrayW<::GlobalNamespace::TubeBloomPrePassLight*,::Array<::GlobalNamespace::TubeBloomPrePassLight*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::TubeBloomPrePassLight*,::Array<::GlobalNamespace::TubeBloomPrePassLight*>*>, 0x38>(this, std::forward<::ArrayW<::GlobalNamespace::TubeBloomPrePassLight*,::Array<::GlobalNamespace::TubeBloomPrePassLight*>*>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::TubeBloomPrePassLight*,::Array<::GlobalNamespace::TubeBloomPrePassLight*>*>& GlobalNamespace::TubeLightIntensityBehaviour::__get__tubeLights()  {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::TubeBloomPrePassLight*,::Array<::GlobalNamespace::TubeBloomPrePassLight*>*>, 0x38>(this);
}
constexpr ::ArrayW<::GlobalNamespace::TubeBloomPrePassLight*,::Array<::GlobalNamespace::TubeBloomPrePassLight*>*> const& GlobalNamespace::TubeLightIntensityBehaviour::__get__tubeLights() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::TubeBloomPrePassLight*,::Array<::GlobalNamespace::TubeBloomPrePassLight*>*>, 0x38>(this);
}
constexpr void GlobalNamespace::TubeLightIntensityBehaviour::__set__directionalLights(::ArrayW<::GlobalNamespace::DirectionalLight*,::Array<::GlobalNamespace::DirectionalLight*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::DirectionalLight*,::Array<::GlobalNamespace::DirectionalLight*>*>, 0x40>(this, std::forward<::ArrayW<::GlobalNamespace::DirectionalLight*,::Array<::GlobalNamespace::DirectionalLight*>*>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::DirectionalLight*,::Array<::GlobalNamespace::DirectionalLight*>*>& GlobalNamespace::TubeLightIntensityBehaviour::__get__directionalLights()  {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::DirectionalLight*,::Array<::GlobalNamespace::DirectionalLight*>*>, 0x40>(this);
}
constexpr ::ArrayW<::GlobalNamespace::DirectionalLight*,::Array<::GlobalNamespace::DirectionalLight*>*> const& GlobalNamespace::TubeLightIntensityBehaviour::__get__directionalLights() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::DirectionalLight*,::Array<::GlobalNamespace::DirectionalLight*>*>, 0x40>(this);
}
constexpr void GlobalNamespace::TubeLightIntensityBehaviour::__set__started(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x48>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::TubeLightIntensityBehaviour::__get__started()  {
return ::cordl_internals::getInstanceField<bool, 0x48>(this);
}
constexpr bool const& GlobalNamespace::TubeLightIntensityBehaviour::__get__started() const {
return ::cordl_internals::getInstanceField<bool, 0x48>(this);
}
constexpr void GlobalNamespace::TubeLightIntensityBehaviour::__set__finished(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x49>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::TubeLightIntensityBehaviour::__get__finished()  {
return ::cordl_internals::getInstanceField<bool, 0x49>(this);
}
constexpr bool const& GlobalNamespace::TubeLightIntensityBehaviour::__get__finished() const {
return ::cordl_internals::getInstanceField<bool, 0x49>(this);
}
constexpr void GlobalNamespace::TubeLightIntensityBehaviour::__set__firstFrameLightIntensity(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x4c>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::TubeLightIntensityBehaviour::__get__firstFrameLightIntensity()  {
return ::cordl_internals::getInstanceField<float_t, 0x4c>(this);
}
constexpr float_t const& GlobalNamespace::TubeLightIntensityBehaviour::__get__firstFrameLightIntensity() const {
return ::cordl_internals::getInstanceField<float_t, 0x4c>(this);
}
constexpr void GlobalNamespace::TubeLightIntensityBehaviour::__set__firstFrameLaserIntensity(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x50>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::TubeLightIntensityBehaviour::__get__firstFrameLaserIntensity()  {
return ::cordl_internals::getInstanceField<float_t, 0x50>(this);
}
constexpr float_t const& GlobalNamespace::TubeLightIntensityBehaviour::__get__firstFrameLaserIntensity() const {
return ::cordl_internals::getInstanceField<float_t, 0x50>(this);
}
inline void GlobalNamespace::TubeLightIntensityBehaviour::ProcessFrame(::UnityEngine::Playables::Playable  playable, ::UnityEngine::Playables::FrameData  info, ::System::Object*  playerData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TubeLightIntensityBehaviour*>::get(),
                            "ProcessFrame",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::Playable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::FrameData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, playable, info, playerData);
}
inline void GlobalNamespace::TubeLightIntensityBehaviour::EnableObjects(bool  on)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TubeLightIntensityBehaviour*>::get(),
                            "EnableObjects",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, on);
}
inline void GlobalNamespace::TubeLightIntensityBehaviour::OnPlayableDestroy(::UnityEngine::Playables::Playable  playable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TubeLightIntensityBehaviour*>::get(),
                            "OnPlayableDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::Playable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, playable);
}
inline ::GlobalNamespace::TubeLightIntensityBehaviour* GlobalNamespace::TubeLightIntensityBehaviour::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::TubeLightIntensityBehaviour*>());
}
inline void GlobalNamespace::TubeLightIntensityBehaviour::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TubeLightIntensityBehaviour*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
