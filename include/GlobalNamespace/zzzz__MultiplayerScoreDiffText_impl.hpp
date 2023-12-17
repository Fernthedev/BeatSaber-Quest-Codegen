#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerScoreDiffText_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerScoreDiffText_def.hpp"
#include "Tweening/zzzz__TimeTweeningManager_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLeadPlayerProvider_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "TMPro/zzzz__TextMeshPro_def.hpp"
#include "Tweening/zzzz__FloatTween_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
#include "UnityEngine/zzzz__SpriteRenderer_def.hpp"
constexpr void GlobalNamespace::__MultiplayerScoreDiffText__HorizontalPosition::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__MultiplayerScoreDiffText__HorizontalPosition::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__MultiplayerScoreDiffText__HorizontalPosition::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__MultiplayerScoreDiffText__HorizontalPosition::__MultiplayerScoreDiffText__HorizontalPosition(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__MultiplayerScoreDiffText__HorizontalPosition  GlobalNamespace::__MultiplayerScoreDiffText__HorizontalPosition::Left{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__MultiplayerScoreDiffText__HorizontalPosition  GlobalNamespace::__MultiplayerScoreDiffText__HorizontalPosition::Right{static_cast<int32_t>(0x1)};
constexpr void GlobalNamespace::__MultiplayerScoreDiffText__State::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__MultiplayerScoreDiffText__State::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__MultiplayerScoreDiffText__State::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__MultiplayerScoreDiffText__State::__MultiplayerScoreDiffText__State(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__MultiplayerScoreDiffText__State  GlobalNamespace::__MultiplayerScoreDiffText__State::Hidden{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__MultiplayerScoreDiffText__State  GlobalNamespace::__MultiplayerScoreDiffText__State::Displayed{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::__MultiplayerScoreDiffText__State  GlobalNamespace::__MultiplayerScoreDiffText__State::AnimatingDisplay{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::__MultiplayerScoreDiffText__State  GlobalNamespace::__MultiplayerScoreDiffText__State::AnimatingHide{static_cast<int32_t>(0x3)};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerScoreDiffText.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerScoreDiffText::*)()>(&::GlobalNamespace::MultiplayerScoreDiffText::Start)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x23d6fe8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerScoreDiffText*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerScoreDiffText.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerScoreDiffText::*)()>(&::GlobalNamespace::MultiplayerScoreDiffText::OnDestroy)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x23d7140;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerScoreDiffText*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerScoreDiffText.SetHorizontalPositionRelativeToLocalPlayer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerScoreDiffText::*)(::GlobalNamespace::__MultiplayerScoreDiffText__HorizontalPosition)>(&::GlobalNamespace::MultiplayerScoreDiffText::SetHorizontalPositionRelativeToLocalPlayer)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x23d7250;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerScoreDiffText*>::get(),
                            "SetHorizontalPositionRelativeToLocalPlayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MultiplayerScoreDiffText__HorizontalPosition>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerScoreDiffText.AnimateScoreDiff
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerScoreDiffText::*)(int32_t)>(&::GlobalNamespace::MultiplayerScoreDiffText::AnimateScoreDiff)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x23d7328;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerScoreDiffText*>::get(),
                            "AnimateScoreDiff",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerScoreDiffText.AnimateHide
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerScoreDiffText::*)()>(&::GlobalNamespace::MultiplayerScoreDiffText::AnimateHide)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x23d74d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerScoreDiffText*>::get(),
                            "AnimateHide",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerScoreDiffText.AnimateIsLeadPlayer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerScoreDiffText::*)(bool)>(&::GlobalNamespace::MultiplayerScoreDiffText::AnimateIsLeadPlayer)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x23d75c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerScoreDiffText*>::get(),
                            "AnimateIsLeadPlayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerScoreDiffText.HandleNewLeaderWasSelected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerScoreDiffText::*)(::StringW)>(&::GlobalNamespace::MultiplayerScoreDiffText::HandleNewLeaderWasSelected)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x23d761c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerScoreDiffText*>::get(),
                            "HandleNewLeaderWasSelected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerScoreDiffText._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerScoreDiffText::*)()>(&::GlobalNamespace::MultiplayerScoreDiffText::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x23d76dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerScoreDiffText*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerScoreDiffText._Start_b__14_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerScoreDiffText::*)(float_t)>(&::GlobalNamespace::MultiplayerScoreDiffText::_Start_b__14_0)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x23d76fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerScoreDiffText*>::get(),
                            "<Start>b__14_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerScoreDiffText._AnimateScoreDiff_b__17_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerScoreDiffText::*)()>(&::GlobalNamespace::MultiplayerScoreDiffText::_AnimateScoreDiff_b__17_0)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x23d7758;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerScoreDiffText*>::get(),
                            "<AnimateScoreDiff>b__17_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerScoreDiffText._AnimateHide_b__18_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerScoreDiffText::*)()>(&::GlobalNamespace::MultiplayerScoreDiffText::_AnimateHide_b__18_0)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x23d7764;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerScoreDiffText*>::get(),
                            "<AnimateHide>b__18_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::MultiplayerScoreDiffText::__set__activeTextColor(::UnityEngine::Color  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color, 0x18>(this, std::forward<::UnityEngine::Color>(value));
}
constexpr ::UnityEngine::Color& GlobalNamespace::MultiplayerScoreDiffText::__get__activeTextColor()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x18>(this);
}
constexpr ::UnityEngine::Color const& GlobalNamespace::MultiplayerScoreDiffText::__get__activeTextColor() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x18>(this);
}
constexpr void GlobalNamespace::MultiplayerScoreDiffText::__set__normalBackgroundColor(::UnityEngine::Color  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color, 0x28>(this, std::forward<::UnityEngine::Color>(value));
}
constexpr ::UnityEngine::Color& GlobalNamespace::MultiplayerScoreDiffText::__get__normalBackgroundColor()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x28>(this);
}
constexpr ::UnityEngine::Color const& GlobalNamespace::MultiplayerScoreDiffText::__get__normalBackgroundColor() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x28>(this);
}
constexpr void GlobalNamespace::MultiplayerScoreDiffText::__set__leadingBackgroundColor(::UnityEngine::Color  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color, 0x38>(this, std::forward<::UnityEngine::Color>(value));
}
constexpr ::UnityEngine::Color& GlobalNamespace::MultiplayerScoreDiffText::__get__leadingBackgroundColor()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x38>(this);
}
constexpr ::UnityEngine::Color const& GlobalNamespace::MultiplayerScoreDiffText::__get__leadingBackgroundColor() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x38>(this);
}
constexpr void GlobalNamespace::MultiplayerScoreDiffText::__set__useAutomaticLeadPlayerSelection(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x48>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::MultiplayerScoreDiffText::__get__useAutomaticLeadPlayerSelection()  {
return ::cordl_internals::getInstanceField<bool, 0x48>(this);
}
constexpr bool const& GlobalNamespace::MultiplayerScoreDiffText::__get__useAutomaticLeadPlayerSelection() const {
return ::cordl_internals::getInstanceField<bool, 0x48>(this);
}
constexpr void GlobalNamespace::MultiplayerScoreDiffText::__set__onPlatformText(::TMPro::TextMeshPro*  value)  {
::cordl_internals::setInstanceField<::TMPro::TextMeshPro*, 0x50>(this, std::forward<::TMPro::TextMeshPro*>(value));
}
constexpr ::TMPro::TextMeshPro* GlobalNamespace::MultiplayerScoreDiffText::__get__onPlatformText()  {
return ::cordl_internals::getInstanceField<::TMPro::TextMeshPro*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshPro*> GlobalNamespace::MultiplayerScoreDiffText::__get__onPlatformText() const {
return ::cordl_internals::getInstanceField<::TMPro::TextMeshPro*, 0x50>(this);
}
constexpr void GlobalNamespace::MultiplayerScoreDiffText::__set__backgroundSpriteRenderer(::UnityEngine::SpriteRenderer*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::SpriteRenderer*, 0x58>(this, std::forward<::UnityEngine::SpriteRenderer*>(value));
}
constexpr ::UnityEngine::SpriteRenderer* GlobalNamespace::MultiplayerScoreDiffText::__get__backgroundSpriteRenderer()  {
return ::cordl_internals::getInstanceField<::UnityEngine::SpriteRenderer*, 0x58>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::SpriteRenderer*> GlobalNamespace::MultiplayerScoreDiffText::__get__backgroundSpriteRenderer() const {
return ::cordl_internals::getInstanceField<::UnityEngine::SpriteRenderer*, 0x58>(this);
}
constexpr void GlobalNamespace::MultiplayerScoreDiffText::__set__tweeningManager(::Tweening::TimeTweeningManager*  value)  {
::cordl_internals::setInstanceField<::Tweening::TimeTweeningManager*, 0x60>(this, std::forward<::Tweening::TimeTweeningManager*>(value));
}
constexpr ::Tweening::TimeTweeningManager* GlobalNamespace::MultiplayerScoreDiffText::__get__tweeningManager()  {
return ::cordl_internals::getInstanceField<::Tweening::TimeTweeningManager*, 0x60>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Tweening::TimeTweeningManager*> GlobalNamespace::MultiplayerScoreDiffText::__get__tweeningManager() const {
return ::cordl_internals::getInstanceField<::Tweening::TimeTweeningManager*, 0x60>(this);
}
constexpr void GlobalNamespace::MultiplayerScoreDiffText::__set__connectedPlayer(::GlobalNamespace::IConnectedPlayer*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IConnectedPlayer*, 0x68>(this, std::forward<::GlobalNamespace::IConnectedPlayer*>(value));
}
constexpr ::GlobalNamespace::IConnectedPlayer* GlobalNamespace::MultiplayerScoreDiffText::__get__connectedPlayer()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IConnectedPlayer*, 0x68>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IConnectedPlayer*> GlobalNamespace::MultiplayerScoreDiffText::__get__connectedPlayer() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IConnectedPlayer*, 0x68>(this);
}
constexpr void GlobalNamespace::MultiplayerScoreDiffText::__set__leadPlayerProvider(::GlobalNamespace::MultiplayerLeadPlayerProvider*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MultiplayerLeadPlayerProvider*, 0x70>(this, std::forward<::GlobalNamespace::MultiplayerLeadPlayerProvider*>(value));
}
constexpr ::GlobalNamespace::MultiplayerLeadPlayerProvider* GlobalNamespace::MultiplayerScoreDiffText::__get__leadPlayerProvider()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerLeadPlayerProvider*, 0x70>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerLeadPlayerProvider*> GlobalNamespace::MultiplayerScoreDiffText::__get__leadPlayerProvider() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerLeadPlayerProvider*, 0x70>(this);
}
constexpr void GlobalNamespace::MultiplayerScoreDiffText::__set__currentBackgroundColor(::UnityEngine::Color  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color, 0x78>(this, std::forward<::UnityEngine::Color>(value));
}
constexpr ::UnityEngine::Color& GlobalNamespace::MultiplayerScoreDiffText::__get__currentBackgroundColor()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x78>(this);
}
constexpr ::UnityEngine::Color const& GlobalNamespace::MultiplayerScoreDiffText::__get__currentBackgroundColor() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x78>(this);
}
constexpr void GlobalNamespace::MultiplayerScoreDiffText::__set__state(::GlobalNamespace::__MultiplayerScoreDiffText__State  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__MultiplayerScoreDiffText__State, 0x88>(this, std::forward<::GlobalNamespace::__MultiplayerScoreDiffText__State>(value));
}
constexpr ::GlobalNamespace::__MultiplayerScoreDiffText__State& GlobalNamespace::MultiplayerScoreDiffText::__get__state()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__MultiplayerScoreDiffText__State, 0x88>(this);
}
constexpr ::GlobalNamespace::__MultiplayerScoreDiffText__State const& GlobalNamespace::MultiplayerScoreDiffText::__get__state() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__MultiplayerScoreDiffText__State, 0x88>(this);
}
constexpr void GlobalNamespace::MultiplayerScoreDiffText::__set__onPlatformTextAlphaTween(::Tweening::FloatTween*  value)  {
::cordl_internals::setInstanceField<::Tweening::FloatTween*, 0x90>(this, std::forward<::Tweening::FloatTween*>(value));
}
constexpr ::Tweening::FloatTween* GlobalNamespace::MultiplayerScoreDiffText::__get__onPlatformTextAlphaTween()  {
return ::cordl_internals::getInstanceField<::Tweening::FloatTween*, 0x90>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Tweening::FloatTween*> GlobalNamespace::MultiplayerScoreDiffText::__get__onPlatformTextAlphaTween() const {
return ::cordl_internals::getInstanceField<::Tweening::FloatTween*, 0x90>(this);
}
inline void GlobalNamespace::MultiplayerScoreDiffText::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerScoreDiffText*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerScoreDiffText::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerScoreDiffText*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerScoreDiffText::SetHorizontalPositionRelativeToLocalPlayer(::GlobalNamespace::__MultiplayerScoreDiffText__HorizontalPosition  relativePosition)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerScoreDiffText*>::get(),
                            "SetHorizontalPositionRelativeToLocalPlayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MultiplayerScoreDiffText__HorizontalPosition>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, relativePosition);
}
inline void GlobalNamespace::MultiplayerScoreDiffText::AnimateScoreDiff(int32_t  scoreDiff)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerScoreDiffText*>::get(),
                            "AnimateScoreDiff",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, scoreDiff);
}
inline void GlobalNamespace::MultiplayerScoreDiffText::AnimateHide()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerScoreDiffText*>::get(),
                            "AnimateHide",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerScoreDiffText::AnimateIsLeadPlayer(bool  isLeader)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerScoreDiffText*>::get(),
                            "AnimateIsLeadPlayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, isLeader);
}
inline void GlobalNamespace::MultiplayerScoreDiffText::HandleNewLeaderWasSelected(::StringW  userId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerScoreDiffText*>::get(),
                            "HandleNewLeaderWasSelected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, userId);
}
inline ::GlobalNamespace::MultiplayerScoreDiffText* GlobalNamespace::MultiplayerScoreDiffText::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MultiplayerScoreDiffText*>());
}
inline void GlobalNamespace::MultiplayerScoreDiffText::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerScoreDiffText*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerScoreDiffText::_Start_b__14_0(float_t  val)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerScoreDiffText*>::get(),
                            "<Start>b__14_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, val);
}
inline void GlobalNamespace::MultiplayerScoreDiffText::_AnimateScoreDiff_b__17_0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerScoreDiffText*>::get(),
                            "<AnimateScoreDiff>b__17_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerScoreDiffText::_AnimateHide_b__18_0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerScoreDiffText*>::get(),
                            "<AnimateHide>b__18_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
