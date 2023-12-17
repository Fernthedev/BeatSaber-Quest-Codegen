#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerGameplayAnimator_def.hpp"
#include "GlobalNamespace/zzzz__ColorSO_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerController_def.hpp"
#include "Tweening/zzzz__TimeTweeningManager_def.hpp"
#include "GlobalNamespace/zzzz__LightsAnimator_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLeadPlayerProvider_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerGameplayAnimator.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerGameplayAnimator::*)()>(&::GlobalNamespace::MultiplayerGameplayAnimator::Start)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x224c8c4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerGameplayAnimator*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerGameplayAnimator*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerGameplayAnimator.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerGameplayAnimator::*)()>(&::GlobalNamespace::MultiplayerGameplayAnimator::OnDestroy)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x224c958;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerGameplayAnimator*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerGameplayAnimator*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerGameplayAnimator.AnimateNewLeaderSelected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerGameplayAnimator::*)(bool)>(&::GlobalNamespace::MultiplayerGameplayAnimator::AnimateNewLeaderSelected)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerGameplayAnimator*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerGameplayAnimator*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerGameplayAnimator.HandleStateChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerGameplayAnimator::*)(::GlobalNamespace::__MultiplayerController__State)>(&::GlobalNamespace::MultiplayerGameplayAnimator::HandleStateChanged)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x224cb94;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerGameplayAnimator*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerGameplayAnimator*>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerGameplayAnimator.HandleNewLeaderWasSelected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerGameplayAnimator::*)(::StringW)>(&::GlobalNamespace::MultiplayerGameplayAnimator::HandleNewLeaderWasSelected)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x224cda8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerGameplayAnimator*>::get(),
                            "HandleNewLeaderWasSelected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerGameplayAnimator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerGameplayAnimator::*)()>(&::GlobalNamespace::MultiplayerGameplayAnimator::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x224ce90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerGameplayAnimator*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::MultiplayerGameplayAnimator::__set__activeLightsColor(::GlobalNamespace::ColorSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::ColorSO*, 0x18>(this, std::forward<::GlobalNamespace::ColorSO*>(value));
}
constexpr ::GlobalNamespace::ColorSO* GlobalNamespace::MultiplayerGameplayAnimator::__get__activeLightsColor()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ColorSO*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorSO*> GlobalNamespace::MultiplayerGameplayAnimator::__get__activeLightsColor() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ColorSO*, 0x18>(this);
}
constexpr void GlobalNamespace::MultiplayerGameplayAnimator::__set__leadingLightsColor(::GlobalNamespace::ColorSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::ColorSO*, 0x20>(this, std::forward<::GlobalNamespace::ColorSO*>(value));
}
constexpr ::GlobalNamespace::ColorSO* GlobalNamespace::MultiplayerGameplayAnimator::__get__leadingLightsColor()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ColorSO*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorSO*> GlobalNamespace::MultiplayerGameplayAnimator::__get__leadingLightsColor() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ColorSO*, 0x20>(this);
}
constexpr void GlobalNamespace::MultiplayerGameplayAnimator::__set__failedLightsColor(::GlobalNamespace::ColorSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::ColorSO*, 0x28>(this, std::forward<::GlobalNamespace::ColorSO*>(value));
}
constexpr ::GlobalNamespace::ColorSO* GlobalNamespace::MultiplayerGameplayAnimator::__get__failedLightsColor()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ColorSO*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorSO*> GlobalNamespace::MultiplayerGameplayAnimator::__get__failedLightsColor() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ColorSO*, 0x28>(this);
}
constexpr void GlobalNamespace::MultiplayerGameplayAnimator::__set__leadingSwitchCrossFadeDuration(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x30>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::MultiplayerGameplayAnimator::__get__leadingSwitchCrossFadeDuration()  {
return ::cordl_internals::getInstanceField<float_t, 0x30>(this);
}
constexpr float_t const& GlobalNamespace::MultiplayerGameplayAnimator::__get__leadingSwitchCrossFadeDuration() const {
return ::cordl_internals::getInstanceField<float_t, 0x30>(this);
}
constexpr void GlobalNamespace::MultiplayerGameplayAnimator::__set__gameplayLightsAnimators(::ArrayW<::GlobalNamespace::LightsAnimator*,::Array<::GlobalNamespace::LightsAnimator*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::LightsAnimator*,::Array<::GlobalNamespace::LightsAnimator*>*>, 0x38>(this, std::forward<::ArrayW<::GlobalNamespace::LightsAnimator*,::Array<::GlobalNamespace::LightsAnimator*>*>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::LightsAnimator*,::Array<::GlobalNamespace::LightsAnimator*>*>& GlobalNamespace::MultiplayerGameplayAnimator::__get__gameplayLightsAnimators()  {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::LightsAnimator*,::Array<::GlobalNamespace::LightsAnimator*>*>, 0x38>(this);
}
constexpr ::ArrayW<::GlobalNamespace::LightsAnimator*,::Array<::GlobalNamespace::LightsAnimator*>*> const& GlobalNamespace::MultiplayerGameplayAnimator::__get__gameplayLightsAnimators() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::LightsAnimator*,::Array<::GlobalNamespace::LightsAnimator*>*>, 0x38>(this);
}
constexpr void GlobalNamespace::MultiplayerGameplayAnimator::__set__allLightsAnimators(::ArrayW<::GlobalNamespace::LightsAnimator*,::Array<::GlobalNamespace::LightsAnimator*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::LightsAnimator*,::Array<::GlobalNamespace::LightsAnimator*>*>, 0x40>(this, std::forward<::ArrayW<::GlobalNamespace::LightsAnimator*,::Array<::GlobalNamespace::LightsAnimator*>*>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::LightsAnimator*,::Array<::GlobalNamespace::LightsAnimator*>*>& GlobalNamespace::MultiplayerGameplayAnimator::__get__allLightsAnimators()  {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::LightsAnimator*,::Array<::GlobalNamespace::LightsAnimator*>*>, 0x40>(this);
}
constexpr ::ArrayW<::GlobalNamespace::LightsAnimator*,::Array<::GlobalNamespace::LightsAnimator*>*> const& GlobalNamespace::MultiplayerGameplayAnimator::__get__allLightsAnimators() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::LightsAnimator*,::Array<::GlobalNamespace::LightsAnimator*>*>, 0x40>(this);
}
constexpr void GlobalNamespace::MultiplayerGameplayAnimator::__set__leadPlayerProvider(::GlobalNamespace::MultiplayerLeadPlayerProvider*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MultiplayerLeadPlayerProvider*, 0x48>(this, std::forward<::GlobalNamespace::MultiplayerLeadPlayerProvider*>(value));
}
constexpr ::GlobalNamespace::MultiplayerLeadPlayerProvider* GlobalNamespace::MultiplayerGameplayAnimator::__get__leadPlayerProvider()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerLeadPlayerProvider*, 0x48>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerLeadPlayerProvider*> GlobalNamespace::MultiplayerGameplayAnimator::__get__leadPlayerProvider() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerLeadPlayerProvider*, 0x48>(this);
}
constexpr void GlobalNamespace::MultiplayerGameplayAnimator::__set__multiplayerController(::GlobalNamespace::MultiplayerController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MultiplayerController*, 0x50>(this, std::forward<::GlobalNamespace::MultiplayerController*>(value));
}
constexpr ::GlobalNamespace::MultiplayerController* GlobalNamespace::MultiplayerGameplayAnimator::__get__multiplayerController()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerController*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerController*> GlobalNamespace::MultiplayerGameplayAnimator::__get__multiplayerController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerController*, 0x50>(this);
}
constexpr void GlobalNamespace::MultiplayerGameplayAnimator::__set_tweeningManager(::Tweening::TimeTweeningManager*  value)  {
::cordl_internals::setInstanceField<::Tweening::TimeTweeningManager*, 0x58>(this, std::forward<::Tweening::TimeTweeningManager*>(value));
}
constexpr ::Tweening::TimeTweeningManager* GlobalNamespace::MultiplayerGameplayAnimator::__get_tweeningManager()  {
return ::cordl_internals::getInstanceField<::Tweening::TimeTweeningManager*, 0x58>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Tweening::TimeTweeningManager*> GlobalNamespace::MultiplayerGameplayAnimator::__get_tweeningManager() const {
return ::cordl_internals::getInstanceField<::Tweening::TimeTweeningManager*, 0x58>(this);
}
constexpr void GlobalNamespace::MultiplayerGameplayAnimator::__set_connectedPlayer(::GlobalNamespace::IConnectedPlayer*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IConnectedPlayer*, 0x60>(this, std::forward<::GlobalNamespace::IConnectedPlayer*>(value));
}
constexpr ::GlobalNamespace::IConnectedPlayer* GlobalNamespace::MultiplayerGameplayAnimator::__get_connectedPlayer()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IConnectedPlayer*, 0x60>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IConnectedPlayer*> GlobalNamespace::MultiplayerGameplayAnimator::__get_connectedPlayer() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IConnectedPlayer*, 0x60>(this);
}
inline void GlobalNamespace::MultiplayerGameplayAnimator::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerGameplayAnimator*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerGameplayAnimator::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerGameplayAnimator*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerGameplayAnimator::AnimateNewLeaderSelected(bool  isLeading)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerGameplayAnimator*>::get(),
                            "AnimateNewLeaderSelected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, isLeading);
}
inline void GlobalNamespace::MultiplayerGameplayAnimator::HandleStateChanged(::GlobalNamespace::__MultiplayerController__State  state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerGameplayAnimator*>::get(),
                            "HandleStateChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MultiplayerController__State>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, state);
}
inline void GlobalNamespace::MultiplayerGameplayAnimator::HandleNewLeaderWasSelected(::StringW  userId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerGameplayAnimator*>::get(),
                            "HandleNewLeaderWasSelected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, userId);
}
inline ::GlobalNamespace::MultiplayerGameplayAnimator* GlobalNamespace::MultiplayerGameplayAnimator::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MultiplayerGameplayAnimator*>());
}
inline void GlobalNamespace::MultiplayerGameplayAnimator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerGameplayAnimator*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
