#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "RootMotion/FinalIK/zzzz__InteractionObject_def.hpp"
#include "RootMotion/FinalIK/zzzz__IKSolverFullBodyBiped_def.hpp"
#include "RootMotion/FinalIK/zzzz__InteractionTarget_def.hpp"
#include "RootMotion/FinalIK/zzzz__FullBodyBipedEffector_def.hpp"
#include "RootMotion/FinalIK/zzzz__InteractionSystem_def.hpp"
#include "RootMotion/FinalIK/zzzz__InteractionObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Animator_def.hpp"
#include "UnityEngine/zzzz__Animation_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
//  Writing Method size for method: ::RootMotion::FinalIK::__InteractionObject__InteractionEvent.Activate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__InteractionObject__InteractionEvent::*)(::UnityEngine::Transform*)>(&::RootMotion::FinalIK::__InteractionObject__InteractionEvent::Activate)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x1285e5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__InteractionObject__InteractionEvent*>::get(),
                            "Activate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__InteractionObject__InteractionEvent._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__InteractionObject__InteractionEvent::*)()>(&::RootMotion::FinalIK::__InteractionObject__InteractionEvent::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12876e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__InteractionObject__InteractionEvent*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void RootMotion::FinalIK::__InteractionObject__InteractionEvent::__set_time(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x10>(this, std::forward<float_t>(value));
}
constexpr float_t& RootMotion::FinalIK::__InteractionObject__InteractionEvent::__get_time()  {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this);
}
constexpr float_t const& RootMotion::FinalIK::__InteractionObject__InteractionEvent::__get_time() const {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this);
}
constexpr void RootMotion::FinalIK::__InteractionObject__InteractionEvent::__set_pause(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x14>(this, std::forward<bool>(value));
}
constexpr bool& RootMotion::FinalIK::__InteractionObject__InteractionEvent::__get_pause()  {
return ::cordl_internals::getInstanceField<bool, 0x14>(this);
}
constexpr bool const& RootMotion::FinalIK::__InteractionObject__InteractionEvent::__get_pause() const {
return ::cordl_internals::getInstanceField<bool, 0x14>(this);
}
constexpr void RootMotion::FinalIK::__InteractionObject__InteractionEvent::__set_pickUp(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x15>(this, std::forward<bool>(value));
}
constexpr bool& RootMotion::FinalIK::__InteractionObject__InteractionEvent::__get_pickUp()  {
return ::cordl_internals::getInstanceField<bool, 0x15>(this);
}
constexpr bool const& RootMotion::FinalIK::__InteractionObject__InteractionEvent::__get_pickUp() const {
return ::cordl_internals::getInstanceField<bool, 0x15>(this);
}
constexpr void RootMotion::FinalIK::__InteractionObject__InteractionEvent::__set_animations(::ArrayW<::RootMotion::FinalIK::__InteractionObject__AnimatorEvent*,::Array<::RootMotion::FinalIK::__InteractionObject__AnimatorEvent*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::RootMotion::FinalIK::__InteractionObject__AnimatorEvent*,::Array<::RootMotion::FinalIK::__InteractionObject__AnimatorEvent*>*>, 0x18>(this, std::forward<::ArrayW<::RootMotion::FinalIK::__InteractionObject__AnimatorEvent*,::Array<::RootMotion::FinalIK::__InteractionObject__AnimatorEvent*>*>>(value));
}
constexpr ::ArrayW<::RootMotion::FinalIK::__InteractionObject__AnimatorEvent*,::Array<::RootMotion::FinalIK::__InteractionObject__AnimatorEvent*>*>& RootMotion::FinalIK::__InteractionObject__InteractionEvent::__get_animations()  {
return ::cordl_internals::getInstanceField<::ArrayW<::RootMotion::FinalIK::__InteractionObject__AnimatorEvent*,::Array<::RootMotion::FinalIK::__InteractionObject__AnimatorEvent*>*>, 0x18>(this);
}
constexpr ::ArrayW<::RootMotion::FinalIK::__InteractionObject__AnimatorEvent*,::Array<::RootMotion::FinalIK::__InteractionObject__AnimatorEvent*>*> const& RootMotion::FinalIK::__InteractionObject__InteractionEvent::__get_animations() const {
return ::cordl_internals::getInstanceField<::ArrayW<::RootMotion::FinalIK::__InteractionObject__AnimatorEvent*,::Array<::RootMotion::FinalIK::__InteractionObject__AnimatorEvent*>*>, 0x18>(this);
}
constexpr void RootMotion::FinalIK::__InteractionObject__InteractionEvent::__set_messages(::ArrayW<::RootMotion::FinalIK::__InteractionObject__Message*,::Array<::RootMotion::FinalIK::__InteractionObject__Message*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::RootMotion::FinalIK::__InteractionObject__Message*,::Array<::RootMotion::FinalIK::__InteractionObject__Message*>*>, 0x20>(this, std::forward<::ArrayW<::RootMotion::FinalIK::__InteractionObject__Message*,::Array<::RootMotion::FinalIK::__InteractionObject__Message*>*>>(value));
}
constexpr ::ArrayW<::RootMotion::FinalIK::__InteractionObject__Message*,::Array<::RootMotion::FinalIK::__InteractionObject__Message*>*>& RootMotion::FinalIK::__InteractionObject__InteractionEvent::__get_messages()  {
return ::cordl_internals::getInstanceField<::ArrayW<::RootMotion::FinalIK::__InteractionObject__Message*,::Array<::RootMotion::FinalIK::__InteractionObject__Message*>*>, 0x20>(this);
}
constexpr ::ArrayW<::RootMotion::FinalIK::__InteractionObject__Message*,::Array<::RootMotion::FinalIK::__InteractionObject__Message*>*> const& RootMotion::FinalIK::__InteractionObject__InteractionEvent::__get_messages() const {
return ::cordl_internals::getInstanceField<::ArrayW<::RootMotion::FinalIK::__InteractionObject__Message*,::Array<::RootMotion::FinalIK::__InteractionObject__Message*>*>, 0x20>(this);
}
constexpr void RootMotion::FinalIK::__InteractionObject__InteractionEvent::__set_unityEvent(::UnityEngine::Events::UnityEvent*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Events::UnityEvent*, 0x28>(this, std::forward<::UnityEngine::Events::UnityEvent*>(value));
}
constexpr ::UnityEngine::Events::UnityEvent* RootMotion::FinalIK::__InteractionObject__InteractionEvent::__get_unityEvent()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Events::UnityEvent*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Events::UnityEvent*> RootMotion::FinalIK::__InteractionObject__InteractionEvent::__get_unityEvent() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Events::UnityEvent*, 0x28>(this);
}
inline void RootMotion::FinalIK::__InteractionObject__InteractionEvent::Activate(::UnityEngine::Transform*  t)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__InteractionObject__InteractionEvent*>::get(),
                            "Activate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, t);
}
inline ::RootMotion::FinalIK::__InteractionObject__InteractionEvent* RootMotion::FinalIK::__InteractionObject__InteractionEvent::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::RootMotion::FinalIK::__InteractionObject__InteractionEvent*>());
}
inline void RootMotion::FinalIK::__InteractionObject__InteractionEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__InteractionObject__InteractionEvent*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::RootMotion::FinalIK::__InteractionObject__Message.Send
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__InteractionObject__Message::*)(::UnityEngine::Transform*)>(&::RootMotion::FinalIK::__InteractionObject__Message::Send)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x12875ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__InteractionObject__Message*>::get(),
                            "Send",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__InteractionObject__Message._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__InteractionObject__Message::*)()>(&::RootMotion::FinalIK::__InteractionObject__Message::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12876ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__InteractionObject__Message*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void RootMotion::FinalIK::__InteractionObject__Message::__set_function(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& RootMotion::FinalIK::__InteractionObject__Message::__get_function()  {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr ::StringW const& RootMotion::FinalIK::__InteractionObject__Message::__get_function() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr void RootMotion::FinalIK::__InteractionObject__Message::__set_recipient(::UnityEngine::GameObject*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::GameObject*, 0x18>(this, std::forward<::UnityEngine::GameObject*>(value));
}
constexpr ::UnityEngine::GameObject* RootMotion::FinalIK::__InteractionObject__Message::__get_recipient()  {
return ::cordl_internals::getInstanceField<::UnityEngine::GameObject*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> RootMotion::FinalIK::__InteractionObject__Message::__get_recipient() const {
return ::cordl_internals::getInstanceField<::UnityEngine::GameObject*, 0x18>(this);
}
inline void RootMotion::FinalIK::__InteractionObject__Message::Send(::UnityEngine::Transform*  t)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__InteractionObject__Message*>::get(),
                            "Send",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, t);
}
inline ::RootMotion::FinalIK::__InteractionObject__Message* RootMotion::FinalIK::__InteractionObject__Message::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::RootMotion::FinalIK::__InteractionObject__Message*>());
}
inline void RootMotion::FinalIK::__InteractionObject__Message::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__InteractionObject__Message*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::RootMotion::FinalIK::__InteractionObject__AnimatorEvent.Activate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__InteractionObject__AnimatorEvent::*)(bool)>(&::RootMotion::FinalIK::__InteractionObject__AnimatorEvent::Activate)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x1287510;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__InteractionObject__AnimatorEvent*>::get(),
                            "Activate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__InteractionObject__AnimatorEvent.Activate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__InteractionObject__AnimatorEvent::*)(::UnityEngine::Animator*)>(&::RootMotion::FinalIK::__InteractionObject__AnimatorEvent::Activate)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x12876f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__InteractionObject__AnimatorEvent*>::get(),
                            "Activate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Animator*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__InteractionObject__AnimatorEvent.Activate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__InteractionObject__AnimatorEvent::*)(::UnityEngine::Animation*)>(&::RootMotion::FinalIK::__InteractionObject__AnimatorEvent::Activate)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x12877a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__InteractionObject__AnimatorEvent*>::get(),
                            "Activate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Animation*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__InteractionObject__AnimatorEvent._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__InteractionObject__AnimatorEvent::*)()>(&::RootMotion::FinalIK::__InteractionObject__AnimatorEvent::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x128787c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__InteractionObject__AnimatorEvent*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void RootMotion::FinalIK::__InteractionObject__AnimatorEvent::__set_animator(::UnityEngine::Animator*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Animator*, 0x10>(this, std::forward<::UnityEngine::Animator*>(value));
}
constexpr ::UnityEngine::Animator* RootMotion::FinalIK::__InteractionObject__AnimatorEvent::__get_animator()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Animator*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Animator*> RootMotion::FinalIK::__InteractionObject__AnimatorEvent::__get_animator() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Animator*, 0x10>(this);
}
constexpr void RootMotion::FinalIK::__InteractionObject__AnimatorEvent::__set_animation(::UnityEngine::Animation*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Animation*, 0x18>(this, std::forward<::UnityEngine::Animation*>(value));
}
constexpr ::UnityEngine::Animation* RootMotion::FinalIK::__InteractionObject__AnimatorEvent::__get_animation()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Animation*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Animation*> RootMotion::FinalIK::__InteractionObject__AnimatorEvent::__get_animation() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Animation*, 0x18>(this);
}
constexpr void RootMotion::FinalIK::__InteractionObject__AnimatorEvent::__set_animationState(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& RootMotion::FinalIK::__InteractionObject__AnimatorEvent::__get_animationState()  {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this);
}
constexpr ::StringW const& RootMotion::FinalIK::__InteractionObject__AnimatorEvent::__get_animationState() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this);
}
constexpr void RootMotion::FinalIK::__InteractionObject__AnimatorEvent::__set_crossfadeTime(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x28>(this, std::forward<float_t>(value));
}
constexpr float_t& RootMotion::FinalIK::__InteractionObject__AnimatorEvent::__get_crossfadeTime()  {
return ::cordl_internals::getInstanceField<float_t, 0x28>(this);
}
constexpr float_t const& RootMotion::FinalIK::__InteractionObject__AnimatorEvent::__get_crossfadeTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x28>(this);
}
constexpr void RootMotion::FinalIK::__InteractionObject__AnimatorEvent::__set_layer(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x2c>(this, std::forward<int32_t>(value));
}
constexpr int32_t& RootMotion::FinalIK::__InteractionObject__AnimatorEvent::__get_layer()  {
return ::cordl_internals::getInstanceField<int32_t, 0x2c>(this);
}
constexpr int32_t const& RootMotion::FinalIK::__InteractionObject__AnimatorEvent::__get_layer() const {
return ::cordl_internals::getInstanceField<int32_t, 0x2c>(this);
}
constexpr void RootMotion::FinalIK::__InteractionObject__AnimatorEvent::__set_resetNormalizedTime(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x30>(this, std::forward<bool>(value));
}
constexpr bool& RootMotion::FinalIK::__InteractionObject__AnimatorEvent::__get_resetNormalizedTime()  {
return ::cordl_internals::getInstanceField<bool, 0x30>(this);
}
constexpr bool const& RootMotion::FinalIK::__InteractionObject__AnimatorEvent::__get_resetNormalizedTime() const {
return ::cordl_internals::getInstanceField<bool, 0x30>(this);
}
inline void RootMotion::FinalIK::__InteractionObject__AnimatorEvent::Activate(bool  pickUp)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__InteractionObject__AnimatorEvent*>::get(),
                            "Activate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, pickUp);
}
inline void RootMotion::FinalIK::__InteractionObject__AnimatorEvent::Activate(::UnityEngine::Animator*  animator)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__InteractionObject__AnimatorEvent*>::get(),
                            "Activate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Animator*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, animator);
}
inline void RootMotion::FinalIK::__InteractionObject__AnimatorEvent::Activate(::UnityEngine::Animation*  animation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__InteractionObject__AnimatorEvent*>::get(),
                            "Activate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Animation*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, animation);
}
inline ::RootMotion::FinalIK::__InteractionObject__AnimatorEvent* RootMotion::FinalIK::__InteractionObject__AnimatorEvent::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::RootMotion::FinalIK::__InteractionObject__AnimatorEvent*>());
}
inline void RootMotion::FinalIK::__InteractionObject__AnimatorEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__InteractionObject__AnimatorEvent*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
constexpr void GlobalNamespace::__InteractionObject__WeightCurve__Type::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__InteractionObject__WeightCurve__Type::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__InteractionObject__WeightCurve__Type::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__InteractionObject__WeightCurve__Type::__InteractionObject__WeightCurve__Type(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__InteractionObject__WeightCurve__Type  GlobalNamespace::__InteractionObject__WeightCurve__Type::PositionWeight{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__InteractionObject__WeightCurve__Type  GlobalNamespace::__InteractionObject__WeightCurve__Type::RotationWeight{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::__InteractionObject__WeightCurve__Type  GlobalNamespace::__InteractionObject__WeightCurve__Type::PositionOffsetX{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::__InteractionObject__WeightCurve__Type  GlobalNamespace::__InteractionObject__WeightCurve__Type::PositionOffsetY{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::__InteractionObject__WeightCurve__Type  GlobalNamespace::__InteractionObject__WeightCurve__Type::PositionOffsetZ{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::__InteractionObject__WeightCurve__Type  GlobalNamespace::__InteractionObject__WeightCurve__Type::Pull{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::__InteractionObject__WeightCurve__Type  GlobalNamespace::__InteractionObject__WeightCurve__Type::Reach{static_cast<int32_t>(0x6)};
constexpr ::GlobalNamespace::__InteractionObject__WeightCurve__Type  GlobalNamespace::__InteractionObject__WeightCurve__Type::RotateBoneWeight{static_cast<int32_t>(0x7)};
constexpr ::GlobalNamespace::__InteractionObject__WeightCurve__Type  GlobalNamespace::__InteractionObject__WeightCurve__Type::Push{static_cast<int32_t>(0x8)};
constexpr ::GlobalNamespace::__InteractionObject__WeightCurve__Type  GlobalNamespace::__InteractionObject__WeightCurve__Type::PushParent{static_cast<int32_t>(0x9)};
constexpr ::GlobalNamespace::__InteractionObject__WeightCurve__Type  GlobalNamespace::__InteractionObject__WeightCurve__Type::PoserWeight{static_cast<int32_t>(0xa)};
constexpr ::GlobalNamespace::__InteractionObject__WeightCurve__Type  GlobalNamespace::__InteractionObject__WeightCurve__Type::BendGoalWeight{static_cast<int32_t>(0xb)};
//  Writing Method size for method: ::RootMotion::FinalIK::__InteractionObject__WeightCurve.GetValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::RootMotion::FinalIK::__InteractionObject__WeightCurve::*)(float_t)>(&::RootMotion::FinalIK::__InteractionObject__WeightCurve::GetValue)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1286e20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__InteractionObject__WeightCurve*>::get(),
                            "GetValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__InteractionObject__WeightCurve._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__InteractionObject__WeightCurve::*)()>(&::RootMotion::FinalIK::__InteractionObject__WeightCurve::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1287890;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__InteractionObject__WeightCurve*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void RootMotion::FinalIK::__InteractionObject__WeightCurve::__set_type(::GlobalNamespace::__InteractionObject__WeightCurve__Type  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__InteractionObject__WeightCurve__Type, 0x10>(this, std::forward<::GlobalNamespace::__InteractionObject__WeightCurve__Type>(value));
}
constexpr ::GlobalNamespace::__InteractionObject__WeightCurve__Type& RootMotion::FinalIK::__InteractionObject__WeightCurve::__get_type()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__InteractionObject__WeightCurve__Type, 0x10>(this);
}
constexpr ::GlobalNamespace::__InteractionObject__WeightCurve__Type const& RootMotion::FinalIK::__InteractionObject__WeightCurve::__get_type() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__InteractionObject__WeightCurve__Type, 0x10>(this);
}
constexpr void RootMotion::FinalIK::__InteractionObject__WeightCurve::__set_curve(::UnityEngine::AnimationCurve*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::AnimationCurve*, 0x18>(this, std::forward<::UnityEngine::AnimationCurve*>(value));
}
constexpr ::UnityEngine::AnimationCurve* RootMotion::FinalIK::__InteractionObject__WeightCurve::__get_curve()  {
return ::cordl_internals::getInstanceField<::UnityEngine::AnimationCurve*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> RootMotion::FinalIK::__InteractionObject__WeightCurve::__get_curve() const {
return ::cordl_internals::getInstanceField<::UnityEngine::AnimationCurve*, 0x18>(this);
}
inline float_t RootMotion::FinalIK::__InteractionObject__WeightCurve::GetValue(float_t  timer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__InteractionObject__WeightCurve*>::get(),
                            "GetValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method, timer);
}
inline ::RootMotion::FinalIK::__InteractionObject__WeightCurve* RootMotion::FinalIK::__InteractionObject__WeightCurve::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::RootMotion::FinalIK::__InteractionObject__WeightCurve*>());
}
inline void RootMotion::FinalIK::__InteractionObject__WeightCurve::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__InteractionObject__WeightCurve*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::RootMotion::FinalIK::__InteractionObject__Multiplier.GetValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::RootMotion::FinalIK::__InteractionObject__Multiplier::*)(::RootMotion::FinalIK::__InteractionObject__WeightCurve*, float_t)>(&::RootMotion::FinalIK::__InteractionObject__Multiplier::GetValue)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1287428;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__InteractionObject__Multiplier*>::get(),
                            "GetValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::__InteractionObject__WeightCurve*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__InteractionObject__Multiplier._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__InteractionObject__Multiplier::*)()>(&::RootMotion::FinalIK::__InteractionObject__Multiplier::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1287898;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__InteractionObject__Multiplier*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void RootMotion::FinalIK::__InteractionObject__Multiplier::__set_curve(::GlobalNamespace::__InteractionObject__WeightCurve__Type  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__InteractionObject__WeightCurve__Type, 0x10>(this, std::forward<::GlobalNamespace::__InteractionObject__WeightCurve__Type>(value));
}
constexpr ::GlobalNamespace::__InteractionObject__WeightCurve__Type& RootMotion::FinalIK::__InteractionObject__Multiplier::__get_curve()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__InteractionObject__WeightCurve__Type, 0x10>(this);
}
constexpr ::GlobalNamespace::__InteractionObject__WeightCurve__Type const& RootMotion::FinalIK::__InteractionObject__Multiplier::__get_curve() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__InteractionObject__WeightCurve__Type, 0x10>(this);
}
constexpr void RootMotion::FinalIK::__InteractionObject__Multiplier::__set_multiplier(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x14>(this, std::forward<float_t>(value));
}
constexpr float_t& RootMotion::FinalIK::__InteractionObject__Multiplier::__get_multiplier()  {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this);
}
constexpr float_t const& RootMotion::FinalIK::__InteractionObject__Multiplier::__get_multiplier() const {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this);
}
constexpr void RootMotion::FinalIK::__InteractionObject__Multiplier::__set_result(::GlobalNamespace::__InteractionObject__WeightCurve__Type  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__InteractionObject__WeightCurve__Type, 0x18>(this, std::forward<::GlobalNamespace::__InteractionObject__WeightCurve__Type>(value));
}
constexpr ::GlobalNamespace::__InteractionObject__WeightCurve__Type& RootMotion::FinalIK::__InteractionObject__Multiplier::__get_result()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__InteractionObject__WeightCurve__Type, 0x18>(this);
}
constexpr ::GlobalNamespace::__InteractionObject__WeightCurve__Type const& RootMotion::FinalIK::__InteractionObject__Multiplier::__get_result() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__InteractionObject__WeightCurve__Type, 0x18>(this);
}
inline float_t RootMotion::FinalIK::__InteractionObject__Multiplier::GetValue(::RootMotion::FinalIK::__InteractionObject__WeightCurve*  weightCurve, float_t  timer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__InteractionObject__Multiplier*>::get(),
                            "GetValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::__InteractionObject__WeightCurve*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method, weightCurve, timer);
}
inline ::RootMotion::FinalIK::__InteractionObject__Multiplier* RootMotion::FinalIK::__InteractionObject__Multiplier::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::RootMotion::FinalIK::__InteractionObject__Multiplier*>());
}
inline void RootMotion::FinalIK::__InteractionObject__Multiplier::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__InteractionObject__Multiplier*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionObject.OpenUserManual
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionObject::*)()>(&::RootMotion::FinalIK::InteractionObject::OpenUserManual)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x1286768;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject*>::get(),
                            "OpenUserManual",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionObject.OpenScriptReference
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionObject::*)()>(&::RootMotion::FinalIK::InteractionObject::OpenScriptReference)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x12867ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject*>::get(),
                            "OpenScriptReference",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionObject.OpenTutorial1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionObject::*)()>(&::RootMotion::FinalIK::InteractionObject::OpenTutorial1)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x12867f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject*>::get(),
                            "OpenTutorial1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionObject.OpenTutorial2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionObject::*)()>(&::RootMotion::FinalIK::InteractionObject::OpenTutorial2)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x1286834;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject*>::get(),
                            "OpenTutorial2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionObject.OpenTutorial3
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionObject::*)()>(&::RootMotion::FinalIK::InteractionObject::OpenTutorial3)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x1286878;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject*>::get(),
                            "OpenTutorial3",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionObject.OpenTutorial4
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionObject::*)()>(&::RootMotion::FinalIK::InteractionObject::OpenTutorial4)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x12868bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject*>::get(),
                            "OpenTutorial4",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionObject.SupportGroup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionObject::*)()>(&::RootMotion::FinalIK::InteractionObject::SupportGroup)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x1286900;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject*>::get(),
                            "SupportGroup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionObject.ASThread
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionObject::*)()>(&::RootMotion::FinalIK::InteractionObject::ASThread)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x1286944;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject*>::get(),
                            "ASThread",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionObject.get_length
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::RootMotion::FinalIK::InteractionObject::*)()>(&::RootMotion::FinalIK::InteractionObject::get_length)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1286988;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject*>::get(),
                            "get_length",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionObject.set_length
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionObject::*)(float_t)>(&::RootMotion::FinalIK::InteractionObject::set_length)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1286990;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject*>::get(),
                            "set_length",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionObject.get_lastUsedInteractionSystem
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::RootMotion::FinalIK::InteractionSystem* (::RootMotion::FinalIK::InteractionObject::*)()>(&::RootMotion::FinalIK::InteractionObject::get_lastUsedInteractionSystem)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1286998;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject*>::get(),
                            "get_lastUsedInteractionSystem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionObject.set_lastUsedInteractionSystem
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionObject::*)(::RootMotion::FinalIK::InteractionSystem*)>(&::RootMotion::FinalIK::InteractionObject::set_lastUsedInteractionSystem)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12869a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject*>::get(),
                            "set_lastUsedInteractionSystem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::InteractionSystem*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionObject.Initiate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionObject::*)()>(&::RootMotion::FinalIK::InteractionObject::Initiate)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x12869a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject*>::get(),
                            "Initiate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionObject.get_lookAtTarget
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (::RootMotion::FinalIK::InteractionObject::*)()>(&::RootMotion::FinalIK::InteractionObject::get_lookAtTarget)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1286b58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject*>::get(),
                            "get_lookAtTarget",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionObject.GetTarget
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::RootMotion::FinalIK::InteractionTarget* (::RootMotion::FinalIK::InteractionObject::*)(::RootMotion::FinalIK::FullBodyBipedEffector, ::RootMotion::FinalIK::InteractionSystem*)>(&::RootMotion::FinalIK::InteractionObject::GetTarget)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x1286bd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject*>::get(),
                            "GetTarget",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::FullBodyBipedEffector>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::InteractionSystem*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionObject.CurveUsed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RootMotion::FinalIK::InteractionObject::*)(::GlobalNamespace::__InteractionObject__WeightCurve__Type)>(&::RootMotion::FinalIK::InteractionObject::CurveUsed)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x1284720;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject*>::get(),
                            "CurveUsed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__InteractionObject__WeightCurve__Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionObject.GetTargets
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::RootMotion::FinalIK::InteractionTarget*,::Array<::RootMotion::FinalIK::InteractionTarget*>*> (::RootMotion::FinalIK::InteractionObject::*)()>(&::RootMotion::FinalIK::InteractionObject::GetTargets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1286d50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject*>::get(),
                            "GetTargets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionObject.GetTarget
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (::RootMotion::FinalIK::InteractionObject::*)(::RootMotion::FinalIK::FullBodyBipedEffector, ::StringW)>(&::RootMotion::FinalIK::InteractionObject::GetTarget)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x12845dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject*>::get(),
                            "GetTarget",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::FullBodyBipedEffector>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionObject.OnStartInteraction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionObject::*)(::RootMotion::FinalIK::InteractionSystem*)>(&::RootMotion::FinalIK::InteractionObject::OnStartInteraction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1284718;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject*>::get(),
                            "OnStartInteraction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::InteractionSystem*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionObject.Apply
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionObject::*)(::RootMotion::FinalIK::IKSolverFullBodyBiped*, ::RootMotion::FinalIK::FullBodyBipedEffector, ::RootMotion::FinalIK::InteractionTarget*, float_t, float_t)>(&::RootMotion::FinalIK::InteractionObject::Apply)> {
  constexpr static std::size_t size = 0x408;
  constexpr static std::size_t addrs = 0x1285298;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject*>::get(),
                            "Apply",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::IKSolverFullBodyBiped*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::FullBodyBipedEffector>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::InteractionTarget*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionObject.GetValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::RootMotion::FinalIK::InteractionObject::*)(::GlobalNamespace::__InteractionObject__WeightCurve__Type, ::RootMotion::FinalIK::InteractionTarget*, float_t)>(&::RootMotion::FinalIK::InteractionObject::GetValue)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x1285ad8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject*>::get(),
                            "GetValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__InteractionObject__WeightCurve__Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::InteractionTarget*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionObject.get_targetsRoot
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (::RootMotion::FinalIK::InteractionObject::*)()>(&::RootMotion::FinalIK::InteractionObject::get_targetsRoot)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1285f20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject*>::get(),
                            "get_targetsRoot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionObject.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionObject::*)()>(&::RootMotion::FinalIK::InteractionObject::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1287458;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionObject.Apply
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionObject::*)(::RootMotion::FinalIK::IKSolverFullBodyBiped*, ::RootMotion::FinalIK::FullBodyBipedEffector, ::GlobalNamespace::__InteractionObject__WeightCurve__Type, float_t, float_t)>(&::RootMotion::FinalIK::InteractionObject::Apply)> {
  constexpr static std::size_t size = 0x590;
  constexpr static std::size_t addrs = 0x1286e3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject*>::get(),
                            "Apply",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::IKSolverFullBodyBiped*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::FullBodyBipedEffector>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__InteractionObject__WeightCurve__Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionObject.GetTarget
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (::RootMotion::FinalIK::InteractionObject::*)(::RootMotion::FinalIK::FullBodyBipedEffector)>(&::RootMotion::FinalIK::InteractionObject::GetTarget)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x1286d58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject*>::get(),
                            "GetTarget",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::FullBodyBipedEffector>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionObject.GetWeightCurveIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::RootMotion::FinalIK::InteractionObject::*)(::GlobalNamespace::__InteractionObject__WeightCurve__Type)>(&::RootMotion::FinalIK::InteractionObject::GetWeightCurveIndex)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x12873cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject*>::get(),
                            "GetWeightCurveIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__InteractionObject__WeightCurve__Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionObject.GetMultiplierIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::RootMotion::FinalIK::InteractionObject::*)(::GlobalNamespace::__InteractionObject__WeightCurve__Type)>(&::RootMotion::FinalIK::InteractionObject::GetMultiplierIndex)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x128745c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject*>::get(),
                            "GetMultiplierIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__InteractionObject__WeightCurve__Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionObject._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionObject::*)()>(&::RootMotion::FinalIK::InteractionObject::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x12874b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void RootMotion::FinalIK::InteractionObject::__set_otherLookAtTarget(::UnityEngine::Transform*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Transform*, 0x18>(this, std::forward<::UnityEngine::Transform*>(value));
}
constexpr ::UnityEngine::Transform* RootMotion::FinalIK::InteractionObject::__get_otherLookAtTarget()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> RootMotion::FinalIK::InteractionObject::__get_otherLookAtTarget() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x18>(this);
}
constexpr void RootMotion::FinalIK::InteractionObject::__set_otherTargetsRoot(::UnityEngine::Transform*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Transform*, 0x20>(this, std::forward<::UnityEngine::Transform*>(value));
}
constexpr ::UnityEngine::Transform* RootMotion::FinalIK::InteractionObject::__get_otherTargetsRoot()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> RootMotion::FinalIK::InteractionObject::__get_otherTargetsRoot() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x20>(this);
}
constexpr void RootMotion::FinalIK::InteractionObject::__set_positionOffsetSpace(::UnityEngine::Transform*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Transform*, 0x28>(this, std::forward<::UnityEngine::Transform*>(value));
}
constexpr ::UnityEngine::Transform* RootMotion::FinalIK::InteractionObject::__get_positionOffsetSpace()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> RootMotion::FinalIK::InteractionObject::__get_positionOffsetSpace() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x28>(this);
}
constexpr void RootMotion::FinalIK::InteractionObject::__set_weightCurves(::ArrayW<::RootMotion::FinalIK::__InteractionObject__WeightCurve*,::Array<::RootMotion::FinalIK::__InteractionObject__WeightCurve*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::RootMotion::FinalIK::__InteractionObject__WeightCurve*,::Array<::RootMotion::FinalIK::__InteractionObject__WeightCurve*>*>, 0x30>(this, std::forward<::ArrayW<::RootMotion::FinalIK::__InteractionObject__WeightCurve*,::Array<::RootMotion::FinalIK::__InteractionObject__WeightCurve*>*>>(value));
}
constexpr ::ArrayW<::RootMotion::FinalIK::__InteractionObject__WeightCurve*,::Array<::RootMotion::FinalIK::__InteractionObject__WeightCurve*>*>& RootMotion::FinalIK::InteractionObject::__get_weightCurves()  {
return ::cordl_internals::getInstanceField<::ArrayW<::RootMotion::FinalIK::__InteractionObject__WeightCurve*,::Array<::RootMotion::FinalIK::__InteractionObject__WeightCurve*>*>, 0x30>(this);
}
constexpr ::ArrayW<::RootMotion::FinalIK::__InteractionObject__WeightCurve*,::Array<::RootMotion::FinalIK::__InteractionObject__WeightCurve*>*> const& RootMotion::FinalIK::InteractionObject::__get_weightCurves() const {
return ::cordl_internals::getInstanceField<::ArrayW<::RootMotion::FinalIK::__InteractionObject__WeightCurve*,::Array<::RootMotion::FinalIK::__InteractionObject__WeightCurve*>*>, 0x30>(this);
}
constexpr void RootMotion::FinalIK::InteractionObject::__set_multipliers(::ArrayW<::RootMotion::FinalIK::__InteractionObject__Multiplier*,::Array<::RootMotion::FinalIK::__InteractionObject__Multiplier*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::RootMotion::FinalIK::__InteractionObject__Multiplier*,::Array<::RootMotion::FinalIK::__InteractionObject__Multiplier*>*>, 0x38>(this, std::forward<::ArrayW<::RootMotion::FinalIK::__InteractionObject__Multiplier*,::Array<::RootMotion::FinalIK::__InteractionObject__Multiplier*>*>>(value));
}
constexpr ::ArrayW<::RootMotion::FinalIK::__InteractionObject__Multiplier*,::Array<::RootMotion::FinalIK::__InteractionObject__Multiplier*>*>& RootMotion::FinalIK::InteractionObject::__get_multipliers()  {
return ::cordl_internals::getInstanceField<::ArrayW<::RootMotion::FinalIK::__InteractionObject__Multiplier*,::Array<::RootMotion::FinalIK::__InteractionObject__Multiplier*>*>, 0x38>(this);
}
constexpr ::ArrayW<::RootMotion::FinalIK::__InteractionObject__Multiplier*,::Array<::RootMotion::FinalIK::__InteractionObject__Multiplier*>*> const& RootMotion::FinalIK::InteractionObject::__get_multipliers() const {
return ::cordl_internals::getInstanceField<::ArrayW<::RootMotion::FinalIK::__InteractionObject__Multiplier*,::Array<::RootMotion::FinalIK::__InteractionObject__Multiplier*>*>, 0x38>(this);
}
constexpr void RootMotion::FinalIK::InteractionObject::__set_events(::ArrayW<::RootMotion::FinalIK::__InteractionObject__InteractionEvent*,::Array<::RootMotion::FinalIK::__InteractionObject__InteractionEvent*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::RootMotion::FinalIK::__InteractionObject__InteractionEvent*,::Array<::RootMotion::FinalIK::__InteractionObject__InteractionEvent*>*>, 0x40>(this, std::forward<::ArrayW<::RootMotion::FinalIK::__InteractionObject__InteractionEvent*,::Array<::RootMotion::FinalIK::__InteractionObject__InteractionEvent*>*>>(value));
}
constexpr ::ArrayW<::RootMotion::FinalIK::__InteractionObject__InteractionEvent*,::Array<::RootMotion::FinalIK::__InteractionObject__InteractionEvent*>*>& RootMotion::FinalIK::InteractionObject::__get_events()  {
return ::cordl_internals::getInstanceField<::ArrayW<::RootMotion::FinalIK::__InteractionObject__InteractionEvent*,::Array<::RootMotion::FinalIK::__InteractionObject__InteractionEvent*>*>, 0x40>(this);
}
constexpr ::ArrayW<::RootMotion::FinalIK::__InteractionObject__InteractionEvent*,::Array<::RootMotion::FinalIK::__InteractionObject__InteractionEvent*>*> const& RootMotion::FinalIK::InteractionObject::__get_events() const {
return ::cordl_internals::getInstanceField<::ArrayW<::RootMotion::FinalIK::__InteractionObject__InteractionEvent*,::Array<::RootMotion::FinalIK::__InteractionObject__InteractionEvent*>*>, 0x40>(this);
}
constexpr void RootMotion::FinalIK::InteractionObject::__set__length_k__BackingField(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x48>(this, std::forward<float_t>(value));
}
constexpr float_t& RootMotion::FinalIK::InteractionObject::__get__length_k__BackingField()  {
return ::cordl_internals::getInstanceField<float_t, 0x48>(this);
}
constexpr float_t const& RootMotion::FinalIK::InteractionObject::__get__length_k__BackingField() const {
return ::cordl_internals::getInstanceField<float_t, 0x48>(this);
}
constexpr void RootMotion::FinalIK::InteractionObject::__set__lastUsedInteractionSystem_k__BackingField(::RootMotion::FinalIK::InteractionSystem*  value)  {
::cordl_internals::setInstanceField<::RootMotion::FinalIK::InteractionSystem*, 0x50>(this, std::forward<::RootMotion::FinalIK::InteractionSystem*>(value));
}
constexpr ::RootMotion::FinalIK::InteractionSystem* RootMotion::FinalIK::InteractionObject::__get__lastUsedInteractionSystem_k__BackingField()  {
return ::cordl_internals::getInstanceField<::RootMotion::FinalIK::InteractionSystem*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::InteractionSystem*> RootMotion::FinalIK::InteractionObject::__get__lastUsedInteractionSystem_k__BackingField() const {
return ::cordl_internals::getInstanceField<::RootMotion::FinalIK::InteractionSystem*, 0x50>(this);
}
constexpr void RootMotion::FinalIK::InteractionObject::__set_targets(::ArrayW<::RootMotion::FinalIK::InteractionTarget*,::Array<::RootMotion::FinalIK::InteractionTarget*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::RootMotion::FinalIK::InteractionTarget*,::Array<::RootMotion::FinalIK::InteractionTarget*>*>, 0x58>(this, std::forward<::ArrayW<::RootMotion::FinalIK::InteractionTarget*,::Array<::RootMotion::FinalIK::InteractionTarget*>*>>(value));
}
constexpr ::ArrayW<::RootMotion::FinalIK::InteractionTarget*,::Array<::RootMotion::FinalIK::InteractionTarget*>*>& RootMotion::FinalIK::InteractionObject::__get_targets()  {
return ::cordl_internals::getInstanceField<::ArrayW<::RootMotion::FinalIK::InteractionTarget*,::Array<::RootMotion::FinalIK::InteractionTarget*>*>, 0x58>(this);
}
constexpr ::ArrayW<::RootMotion::FinalIK::InteractionTarget*,::Array<::RootMotion::FinalIK::InteractionTarget*>*> const& RootMotion::FinalIK::InteractionObject::__get_targets() const {
return ::cordl_internals::getInstanceField<::ArrayW<::RootMotion::FinalIK::InteractionTarget*,::Array<::RootMotion::FinalIK::InteractionTarget*>*>, 0x58>(this);
}
inline void RootMotion::FinalIK::InteractionObject::OpenUserManual()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject*>::get(),
                            "OpenUserManual",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void RootMotion::FinalIK::InteractionObject::OpenScriptReference()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject*>::get(),
                            "OpenScriptReference",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void RootMotion::FinalIK::InteractionObject::OpenTutorial1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject*>::get(),
                            "OpenTutorial1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void RootMotion::FinalIK::InteractionObject::OpenTutorial2()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject*>::get(),
                            "OpenTutorial2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void RootMotion::FinalIK::InteractionObject::OpenTutorial3()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject*>::get(),
                            "OpenTutorial3",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void RootMotion::FinalIK::InteractionObject::OpenTutorial4()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject*>::get(),
                            "OpenTutorial4",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void RootMotion::FinalIK::InteractionObject::SupportGroup()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject*>::get(),
                            "SupportGroup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void RootMotion::FinalIK::InteractionObject::ASThread()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject*>::get(),
                            "ASThread",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline float_t RootMotion::FinalIK::InteractionObject::get_length()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject*>::get(),
                            "get_length",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline void RootMotion::FinalIK::InteractionObject::set_length(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject*>::get(),
                            "set_length",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::RootMotion::FinalIK::InteractionSystem* RootMotion::FinalIK::InteractionObject::get_lastUsedInteractionSystem()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject*>::get(),
                            "get_lastUsedInteractionSystem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::RootMotion::FinalIK::InteractionSystem*, false>(*this, ___internal_method);
}
inline void RootMotion::FinalIK::InteractionObject::set_lastUsedInteractionSystem(::RootMotion::FinalIK::InteractionSystem*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject*>::get(),
                            "set_lastUsedInteractionSystem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::InteractionSystem*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void RootMotion::FinalIK::InteractionObject::Initiate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject*>::get(),
                            "Initiate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::UnityEngine::Transform* RootMotion::FinalIK::InteractionObject::get_lookAtTarget()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject*>::get(),
                            "get_lookAtTarget",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Transform*, false>(*this, ___internal_method);
}
inline ::RootMotion::FinalIK::InteractionTarget* RootMotion::FinalIK::InteractionObject::GetTarget(::RootMotion::FinalIK::FullBodyBipedEffector  effectorType, ::RootMotion::FinalIK::InteractionSystem*  interactionSystem)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject*>::get(),
                            "GetTarget",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::FullBodyBipedEffector>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::InteractionSystem*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::RootMotion::FinalIK::InteractionTarget*, false>(*this, ___internal_method, effectorType, interactionSystem);
}
inline bool RootMotion::FinalIK::InteractionObject::CurveUsed(::GlobalNamespace::__InteractionObject__WeightCurve__Type  type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject*>::get(),
                            "CurveUsed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__InteractionObject__WeightCurve__Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, type);
}
inline ::ArrayW<::RootMotion::FinalIK::InteractionTarget*,::Array<::RootMotion::FinalIK::InteractionTarget*>*> RootMotion::FinalIK::InteractionObject::GetTargets()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject*>::get(),
                            "GetTargets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::RootMotion::FinalIK::InteractionTarget*,::Array<::RootMotion::FinalIK::InteractionTarget*>*>, false>(*this, ___internal_method);
}
inline ::UnityEngine::Transform* RootMotion::FinalIK::InteractionObject::GetTarget(::RootMotion::FinalIK::FullBodyBipedEffector  effectorType, ::StringW  tag)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject*>::get(),
                            "GetTarget",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::FullBodyBipedEffector>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Transform*, false>(*this, ___internal_method, effectorType, tag);
}
inline void RootMotion::FinalIK::InteractionObject::OnStartInteraction(::RootMotion::FinalIK::InteractionSystem*  interactionSystem)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject*>::get(),
                            "OnStartInteraction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::InteractionSystem*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, interactionSystem);
}
inline void RootMotion::FinalIK::InteractionObject::Apply(::RootMotion::FinalIK::IKSolverFullBodyBiped*  solver, ::RootMotion::FinalIK::FullBodyBipedEffector  effector, ::RootMotion::FinalIK::InteractionTarget*  target, float_t  timer, float_t  weight)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject*>::get(),
                            "Apply",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::IKSolverFullBodyBiped*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::FullBodyBipedEffector>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::InteractionTarget*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, solver, effector, target, timer, weight);
}
inline float_t RootMotion::FinalIK::InteractionObject::GetValue(::GlobalNamespace::__InteractionObject__WeightCurve__Type  weightCurveType, ::RootMotion::FinalIK::InteractionTarget*  target, float_t  timer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject*>::get(),
                            "GetValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__InteractionObject__WeightCurve__Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::InteractionTarget*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method, weightCurveType, target, timer);
}
inline ::UnityEngine::Transform* RootMotion::FinalIK::InteractionObject::get_targetsRoot()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject*>::get(),
                            "get_targetsRoot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Transform*, false>(*this, ___internal_method);
}
inline void RootMotion::FinalIK::InteractionObject::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void RootMotion::FinalIK::InteractionObject::Apply(::RootMotion::FinalIK::IKSolverFullBodyBiped*  solver, ::RootMotion::FinalIK::FullBodyBipedEffector  effector, ::GlobalNamespace::__InteractionObject__WeightCurve__Type  type, float_t  value, float_t  weight)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject*>::get(),
                            "Apply",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::IKSolverFullBodyBiped*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::FullBodyBipedEffector>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__InteractionObject__WeightCurve__Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, solver, effector, type, value, weight);
}
inline ::UnityEngine::Transform* RootMotion::FinalIK::InteractionObject::GetTarget(::RootMotion::FinalIK::FullBodyBipedEffector  effectorType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject*>::get(),
                            "GetTarget",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::FullBodyBipedEffector>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Transform*, false>(*this, ___internal_method, effectorType);
}
inline int32_t RootMotion::FinalIK::InteractionObject::GetWeightCurveIndex(::GlobalNamespace::__InteractionObject__WeightCurve__Type  weightCurveType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject*>::get(),
                            "GetWeightCurveIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__InteractionObject__WeightCurve__Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, weightCurveType);
}
inline int32_t RootMotion::FinalIK::InteractionObject::GetMultiplierIndex(::GlobalNamespace::__InteractionObject__WeightCurve__Type  weightCurveType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject*>::get(),
                            "GetMultiplierIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__InteractionObject__WeightCurve__Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, weightCurveType);
}
inline ::RootMotion::FinalIK::InteractionObject* RootMotion::FinalIK::InteractionObject::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::RootMotion::FinalIK::InteractionObject*>());
}
inline void RootMotion::FinalIK::InteractionObject::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
