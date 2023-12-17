#pragma once
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__AvatarColorBehaviour_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Playables/zzzz__FrameData_def.hpp"
#include "GlobalNamespace/zzzz__EaseType_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__AvatarVisualController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AvatarColorBehaviour.OnGraphStart
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AvatarColorBehaviour::*)(::UnityEngine::Playables::Playable)>(&::GlobalNamespace::AvatarColorBehaviour::OnGraphStart)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2315250;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarColorBehaviour*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarColorBehaviour*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AvatarColorBehaviour.ProcessFrame
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AvatarColorBehaviour::*)(::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*)>(&::GlobalNamespace::AvatarColorBehaviour::ProcessFrame)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x23152c4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarColorBehaviour*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarColorBehaviour*>::get(),
                                  20
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AvatarColorBehaviour.OnPlayableDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AvatarColorBehaviour::*)(::UnityEngine::Playables::Playable)>(&::GlobalNamespace::AvatarColorBehaviour::OnPlayableDestroy)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x23154ac;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarColorBehaviour*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarColorBehaviour*>::get(),
                                  16
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AvatarColorBehaviour._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AvatarColorBehaviour::*)()>(&::GlobalNamespace::AvatarColorBehaviour::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2315538;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarColorBehaviour*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::AvatarColorBehaviour::__set__startColor(::UnityEngine::Color  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color, 0x10>(this, std::forward<::UnityEngine::Color>(value));
}
constexpr ::UnityEngine::Color& GlobalNamespace::AvatarColorBehaviour::__get__startColor()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x10>(this);
}
constexpr ::UnityEngine::Color const& GlobalNamespace::AvatarColorBehaviour::__get__startColor() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x10>(this);
}
constexpr void GlobalNamespace::AvatarColorBehaviour::__set__endColor(::UnityEngine::Color  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color, 0x20>(this, std::forward<::UnityEngine::Color>(value));
}
constexpr ::UnityEngine::Color& GlobalNamespace::AvatarColorBehaviour::__get__endColor()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x20>(this);
}
constexpr ::UnityEngine::Color const& GlobalNamespace::AvatarColorBehaviour::__get__endColor() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x20>(this);
}
constexpr void GlobalNamespace::AvatarColorBehaviour::__set__easeType(::GlobalNamespace::EaseType  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::EaseType, 0x30>(this, std::forward<::GlobalNamespace::EaseType>(value));
}
constexpr ::GlobalNamespace::EaseType& GlobalNamespace::AvatarColorBehaviour::__get__easeType()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::EaseType, 0x30>(this);
}
constexpr ::GlobalNamespace::EaseType const& GlobalNamespace::AvatarColorBehaviour::__get__easeType() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::EaseType, 0x30>(this);
}
constexpr void GlobalNamespace::AvatarColorBehaviour::__set__avatarVisualController(::BeatSaber::AvatarCore::AvatarVisualController*  value)  {
::cordl_internals::setInstanceField<::BeatSaber::AvatarCore::AvatarVisualController*, 0x38>(this, std::forward<::BeatSaber::AvatarCore::AvatarVisualController*>(value));
}
constexpr ::BeatSaber::AvatarCore::AvatarVisualController* GlobalNamespace::AvatarColorBehaviour::__get__avatarVisualController()  {
return ::cordl_internals::getInstanceField<::BeatSaber::AvatarCore::AvatarVisualController*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::BeatSaber::AvatarCore::AvatarVisualController*> GlobalNamespace::AvatarColorBehaviour::__get__avatarVisualController() const {
return ::cordl_internals::getInstanceField<::BeatSaber::AvatarCore::AvatarVisualController*, 0x38>(this);
}
constexpr void GlobalNamespace::AvatarColorBehaviour::__set__duration(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x40>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::AvatarColorBehaviour::__get__duration()  {
return ::cordl_internals::getInstanceField<float_t, 0x40>(this);
}
constexpr float_t const& GlobalNamespace::AvatarColorBehaviour::__get__duration() const {
return ::cordl_internals::getInstanceField<float_t, 0x40>(this);
}
inline void GlobalNamespace::AvatarColorBehaviour::OnGraphStart(::UnityEngine::Playables::Playable  playable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarColorBehaviour*>::get(),
                            "OnGraphStart",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::Playable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, playable);
}
inline void GlobalNamespace::AvatarColorBehaviour::ProcessFrame(::UnityEngine::Playables::Playable  playable, ::UnityEngine::Playables::FrameData  info, ::System::Object*  playerData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarColorBehaviour*>::get(),
                            "ProcessFrame",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::Playable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::FrameData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, playable, info, playerData);
}
inline void GlobalNamespace::AvatarColorBehaviour::OnPlayableDestroy(::UnityEngine::Playables::Playable  playable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarColorBehaviour*>::get(),
                            "OnPlayableDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::Playable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, playable);
}
inline ::GlobalNamespace::AvatarColorBehaviour* GlobalNamespace::AvatarColorBehaviour::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::AvatarColorBehaviour*>());
}
inline void GlobalNamespace::AvatarColorBehaviour::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarColorBehaviour*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
