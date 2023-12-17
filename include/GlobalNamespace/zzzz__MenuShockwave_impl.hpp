#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MenuShockwave_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
#include "GlobalNamespace/zzzz__Signal_def.hpp"
#include "VRUIControls/zzzz__VRPointer_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MenuShockwave.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuShockwave::*)()>(&::GlobalNamespace::MenuShockwave::Awake)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2283630;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuShockwave*>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuShockwave.OnEnable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuShockwave::*)()>(&::GlobalNamespace::MenuShockwave::OnEnable)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2283640;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuShockwave*>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuShockwave.OnDisable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuShockwave::*)()>(&::GlobalNamespace::MenuShockwave::OnDisable)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2283714;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuShockwave*>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuShockwave.HandleButtonClickEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuShockwave::*)()>(&::GlobalNamespace::MenuShockwave::HandleButtonClickEvent)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x22837e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuShockwave*>::get(),
                            "HandleButtonClickEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuShockwave.SpawnShockwave
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuShockwave::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::MenuShockwave::SpawnShockwave)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2283810;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuShockwave*>::get(),
                            "SpawnShockwave",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuShockwave._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuShockwave::*)()>(&::GlobalNamespace::MenuShockwave::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22838b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuShockwave*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::MenuShockwave::__set__shockwavePS(::UnityEngine::ParticleSystem*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::ParticleSystem*, 0x18>(this, std::forward<::UnityEngine::ParticleSystem*>(value));
}
constexpr ::UnityEngine::ParticleSystem* GlobalNamespace::MenuShockwave::__get__shockwavePS()  {
return ::cordl_internals::getInstanceField<::UnityEngine::ParticleSystem*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ParticleSystem*> GlobalNamespace::MenuShockwave::__get__shockwavePS() const {
return ::cordl_internals::getInstanceField<::UnityEngine::ParticleSystem*, 0x18>(this);
}
constexpr void GlobalNamespace::MenuShockwave::__set__vrPointer(::VRUIControls::VRPointer*  value)  {
::cordl_internals::setInstanceField<::VRUIControls::VRPointer*, 0x20>(this, std::forward<::VRUIControls::VRPointer*>(value));
}
constexpr ::VRUIControls::VRPointer* GlobalNamespace::MenuShockwave::__get__vrPointer()  {
return ::cordl_internals::getInstanceField<::VRUIControls::VRPointer*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::VRUIControls::VRPointer*> GlobalNamespace::MenuShockwave::__get__vrPointer() const {
return ::cordl_internals::getInstanceField<::VRUIControls::VRPointer*, 0x20>(this);
}
constexpr void GlobalNamespace::MenuShockwave::__set__buttonClickEvents(::ArrayW<::GlobalNamespace::Signal*,::Array<::GlobalNamespace::Signal*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::Signal*,::Array<::GlobalNamespace::Signal*>*>, 0x28>(this, std::forward<::ArrayW<::GlobalNamespace::Signal*,::Array<::GlobalNamespace::Signal*>*>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::Signal*,::Array<::GlobalNamespace::Signal*>*>& GlobalNamespace::MenuShockwave::__get__buttonClickEvents()  {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::Signal*,::Array<::GlobalNamespace::Signal*>*>, 0x28>(this);
}
constexpr ::ArrayW<::GlobalNamespace::Signal*,::Array<::GlobalNamespace::Signal*>*> const& GlobalNamespace::MenuShockwave::__get__buttonClickEvents() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::Signal*,::Array<::GlobalNamespace::Signal*>*>, 0x28>(this);
}
constexpr void GlobalNamespace::MenuShockwave::__set__shockwavePSEmitParams(::UnityEngine::__ParticleSystem__EmitParams  value)  {
::cordl_internals::setInstanceField<::UnityEngine::__ParticleSystem__EmitParams, 0x30>(this, std::forward<::UnityEngine::__ParticleSystem__EmitParams>(value));
}
constexpr ::UnityEngine::__ParticleSystem__EmitParams& GlobalNamespace::MenuShockwave::__get__shockwavePSEmitParams()  {
return ::cordl_internals::getInstanceField<::UnityEngine::__ParticleSystem__EmitParams, 0x30>(this);
}
constexpr ::UnityEngine::__ParticleSystem__EmitParams const& GlobalNamespace::MenuShockwave::__get__shockwavePSEmitParams() const {
return ::cordl_internals::getInstanceField<::UnityEngine::__ParticleSystem__EmitParams, 0x30>(this);
}
inline void GlobalNamespace::MenuShockwave::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuShockwave*>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::MenuShockwave::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuShockwave*>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::MenuShockwave::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuShockwave*>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::MenuShockwave::HandleButtonClickEvent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuShockwave*>::get(),
                            "HandleButtonClickEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::MenuShockwave::SpawnShockwave(::UnityEngine::Vector3  pos)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuShockwave*>::get(),
                            "SpawnShockwave",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, pos);
}
inline ::GlobalNamespace::MenuShockwave* GlobalNamespace::MenuShockwave::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MenuShockwave*>());
}
inline void GlobalNamespace::MenuShockwave::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuShockwave*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
