#pragma once
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_impl.hpp"
#include "UnityEngine/Timeline/zzzz__ActivationControlPlayable_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/Timeline/zzzz__ActivationControlPlayable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableGraph_def.hpp"
#include "UnityEngine/Playables/zzzz__ScriptPlayable_1_def.hpp"
#include "UnityEngine/Playables/zzzz__FrameData_def.hpp"
constexpr void UnityEngine::Timeline::__ActivationControlPlayable__PostPlaybackState::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::Timeline::__ActivationControlPlayable__PostPlaybackState::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::Timeline::__ActivationControlPlayable__PostPlaybackState::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Timeline::__ActivationControlPlayable__PostPlaybackState::__ActivationControlPlayable__PostPlaybackState(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::Timeline::__ActivationControlPlayable__PostPlaybackState  UnityEngine::Timeline::__ActivationControlPlayable__PostPlaybackState::Active{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::Timeline::__ActivationControlPlayable__PostPlaybackState  UnityEngine::Timeline::__ActivationControlPlayable__PostPlaybackState::Inactive{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::Timeline::__ActivationControlPlayable__PostPlaybackState  UnityEngine::Timeline::__ActivationControlPlayable__PostPlaybackState::Revert{static_cast<int32_t>(0x2)};
constexpr void UnityEngine::Timeline::__ActivationControlPlayable__InitialState::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::Timeline::__ActivationControlPlayable__InitialState::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::Timeline::__ActivationControlPlayable__InitialState::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Timeline::__ActivationControlPlayable__InitialState::__ActivationControlPlayable__InitialState(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::Timeline::__ActivationControlPlayable__InitialState  UnityEngine::Timeline::__ActivationControlPlayable__InitialState::Unset{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::Timeline::__ActivationControlPlayable__InitialState  UnityEngine::Timeline::__ActivationControlPlayable__InitialState::Active{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::Timeline::__ActivationControlPlayable__InitialState  UnityEngine::Timeline::__ActivationControlPlayable__InitialState::Inactive{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::UnityEngine::Timeline::ActivationControlPlayable.Create
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::ScriptPlayable_1<::UnityEngine::Timeline::ActivationControlPlayable*> (*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::__ActivationControlPlayable__PostPlaybackState)>(&::UnityEngine::Timeline::ActivationControlPlayable::Create)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x2c65224;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::ActivationControlPlayable*>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::PlayableGraph>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::__ActivationControlPlayable__PostPlaybackState>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::ActivationControlPlayable.OnBehaviourPlay
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::ActivationControlPlayable::*)(::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData)>(&::UnityEngine::Timeline::ActivationControlPlayable::OnBehaviourPlay)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2c6a31c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::ActivationControlPlayable*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::ActivationControlPlayable*>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::ActivationControlPlayable.OnBehaviourPause
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::ActivationControlPlayable::*)(::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData)>(&::UnityEngine::Timeline::ActivationControlPlayable::OnBehaviourPause)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2c6a3a4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::ActivationControlPlayable*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::ActivationControlPlayable*>::get(),
                                  18
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::ActivationControlPlayable.ProcessFrame
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::ActivationControlPlayable::*)(::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*)>(&::UnityEngine::Timeline::ActivationControlPlayable::ProcessFrame)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2c6a44c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::ActivationControlPlayable*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::ActivationControlPlayable*>::get(),
                                  20
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::ActivationControlPlayable.OnGraphStart
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::ActivationControlPlayable::*)(::UnityEngine::Playables::Playable)>(&::UnityEngine::Timeline::ActivationControlPlayable::OnGraphStart)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2c6a4d4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::ActivationControlPlayable*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::ActivationControlPlayable*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::ActivationControlPlayable.OnPlayableDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::ActivationControlPlayable::*)(::UnityEngine::Playables::Playable)>(&::UnityEngine::Timeline::ActivationControlPlayable::OnPlayableDestroy)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2c6a568;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::ActivationControlPlayable*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::ActivationControlPlayable*>::get(),
                                  16
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::ActivationControlPlayable._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::ActivationControlPlayable::*)()>(&::UnityEngine::Timeline::ActivationControlPlayable::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2c6a634;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::ActivationControlPlayable*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::Timeline::ActivationControlPlayable::__set_gameObject(::UnityEngine::GameObject*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::GameObject*, 0x10>(this, std::forward<::UnityEngine::GameObject*>(value));
}
constexpr ::UnityEngine::GameObject* UnityEngine::Timeline::ActivationControlPlayable::__get_gameObject()  {
return ::cordl_internals::getInstanceField<::UnityEngine::GameObject*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> UnityEngine::Timeline::ActivationControlPlayable::__get_gameObject() const {
return ::cordl_internals::getInstanceField<::UnityEngine::GameObject*, 0x10>(this);
}
constexpr void UnityEngine::Timeline::ActivationControlPlayable::__set_postPlayback(::UnityEngine::Timeline::__ActivationControlPlayable__PostPlaybackState  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Timeline::__ActivationControlPlayable__PostPlaybackState, 0x18>(this, std::forward<::UnityEngine::Timeline::__ActivationControlPlayable__PostPlaybackState>(value));
}
constexpr ::UnityEngine::Timeline::__ActivationControlPlayable__PostPlaybackState& UnityEngine::Timeline::ActivationControlPlayable::__get_postPlayback()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Timeline::__ActivationControlPlayable__PostPlaybackState, 0x18>(this);
}
constexpr ::UnityEngine::Timeline::__ActivationControlPlayable__PostPlaybackState const& UnityEngine::Timeline::ActivationControlPlayable::__get_postPlayback() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Timeline::__ActivationControlPlayable__PostPlaybackState, 0x18>(this);
}
constexpr void UnityEngine::Timeline::ActivationControlPlayable::__set_m_InitialState(::UnityEngine::Timeline::__ActivationControlPlayable__InitialState  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Timeline::__ActivationControlPlayable__InitialState, 0x1c>(this, std::forward<::UnityEngine::Timeline::__ActivationControlPlayable__InitialState>(value));
}
constexpr ::UnityEngine::Timeline::__ActivationControlPlayable__InitialState& UnityEngine::Timeline::ActivationControlPlayable::__get_m_InitialState()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Timeline::__ActivationControlPlayable__InitialState, 0x1c>(this);
}
constexpr ::UnityEngine::Timeline::__ActivationControlPlayable__InitialState const& UnityEngine::Timeline::ActivationControlPlayable::__get_m_InitialState() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Timeline::__ActivationControlPlayable__InitialState, 0x1c>(this);
}
inline ::UnityEngine::Playables::ScriptPlayable_1<::UnityEngine::Timeline::ActivationControlPlayable*> UnityEngine::Timeline::ActivationControlPlayable::Create(::UnityEngine::Playables::PlayableGraph  graph, ::UnityEngine::GameObject*  gameObject, ::UnityEngine::Timeline::__ActivationControlPlayable__PostPlaybackState  postPlaybackState)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::ActivationControlPlayable*>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::PlayableGraph>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::__ActivationControlPlayable__PostPlaybackState>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::ScriptPlayable_1<::UnityEngine::Timeline::ActivationControlPlayable*>, false>(nullptr, ___internal_method, graph, gameObject, postPlaybackState);
}
inline void UnityEngine::Timeline::ActivationControlPlayable::OnBehaviourPlay(::UnityEngine::Playables::Playable  playable, ::UnityEngine::Playables::FrameData  info)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::ActivationControlPlayable*>::get(),
                            "OnBehaviourPlay",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::Playable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::FrameData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, playable, info);
}
inline void UnityEngine::Timeline::ActivationControlPlayable::OnBehaviourPause(::UnityEngine::Playables::Playable  playable, ::UnityEngine::Playables::FrameData  info)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::ActivationControlPlayable*>::get(),
                            "OnBehaviourPause",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::Playable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::FrameData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, playable, info);
}
inline void UnityEngine::Timeline::ActivationControlPlayable::ProcessFrame(::UnityEngine::Playables::Playable  playable, ::UnityEngine::Playables::FrameData  info, ::System::Object*  userData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::ActivationControlPlayable*>::get(),
                            "ProcessFrame",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::Playable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::FrameData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, playable, info, userData);
}
inline void UnityEngine::Timeline::ActivationControlPlayable::OnGraphStart(::UnityEngine::Playables::Playable  playable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::ActivationControlPlayable*>::get(),
                            "OnGraphStart",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::Playable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, playable);
}
inline void UnityEngine::Timeline::ActivationControlPlayable::OnPlayableDestroy(::UnityEngine::Playables::Playable  playable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::ActivationControlPlayable*>::get(),
                            "OnPlayableDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::Playable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, playable);
}
inline ::UnityEngine::Timeline::ActivationControlPlayable* UnityEngine::Timeline::ActivationControlPlayable::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::Timeline::ActivationControlPlayable*>());
}
inline void UnityEngine::Timeline::ActivationControlPlayable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::ActivationControlPlayable*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
