#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PauseController_def.hpp"
#include "GlobalNamespace/zzzz__ILevelRestartController_def.hpp"
#include "GlobalNamespace/zzzz__IGamePause_def.hpp"
#include "GlobalNamespace/zzzz__IReturnToMenuController_def.hpp"
#include "GlobalNamespace/zzzz__PauseController_def.hpp"
#include "GlobalNamespace/zzzz__IVRPlatformHelper_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "GlobalNamespace/zzzz__PauseMenuManager_def.hpp"
#include "GlobalNamespace/zzzz__IMenuButtonTrigger_def.hpp"
#include "GlobalNamespace/zzzz__ILevelStartController_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectManager_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__PauseController__InitData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PauseController__InitData::*)(bool)>(&::GlobalNamespace::__PauseController__InitData::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x23c8590;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PauseController__InitData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__PauseController__InitData::__set_startPaused(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__PauseController__InitData::__get_startPaused()  {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr bool const& GlobalNamespace::__PauseController__InitData::__get_startPaused() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
inline ::GlobalNamespace::__PauseController__InitData* GlobalNamespace::__PauseController__InitData::New_ctor(bool  startPaused)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__PauseController__InitData*>(startPaused));
}
inline void GlobalNamespace::__PauseController__InitData::_ctor(bool  startPaused)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PauseController__InitData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, startPaused);
}
//  Writing Method size for method: ::GlobalNamespace::__PauseController____c__DisplayClass25_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PauseController____c__DisplayClass25_0::*)()>(&::GlobalNamespace::__PauseController____c__DisplayClass25_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23c85b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PauseController____c__DisplayClass25_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PauseController____c__DisplayClass25_0._get_canPause_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PauseController____c__DisplayClass25_0::*)(bool)>(&::GlobalNamespace::__PauseController____c__DisplayClass25_0::_get_canPause_b__0)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x23c85c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PauseController____c__DisplayClass25_0*>::get(),
                            "<get_canPause>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__PauseController____c__DisplayClass25_0::__set_value(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__PauseController____c__DisplayClass25_0::__get_value()  {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr bool const& GlobalNamespace::__PauseController____c__DisplayClass25_0::__get_value() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
inline ::GlobalNamespace::__PauseController____c__DisplayClass25_0* GlobalNamespace::__PauseController____c__DisplayClass25_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__PauseController____c__DisplayClass25_0*>());
}
inline void GlobalNamespace::__PauseController____c__DisplayClass25_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PauseController____c__DisplayClass25_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__PauseController____c__DisplayClass25_0::_get_canPause_b__0(bool  newValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PauseController____c__DisplayClass25_0*>::get(),
                            "<get_canPause>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, newValue);
}
//  Writing Method size for method: ::GlobalNamespace::PauseController.add_didPauseEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PauseController::*)(::System::Action*)>(&::GlobalNamespace::PauseController::add_didPauseEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x23bca34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseController*>::get(),
                            "add_didPauseEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PauseController.remove_didPauseEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PauseController::*)(::System::Action*)>(&::GlobalNamespace::PauseController::remove_didPauseEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x23bc348;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseController*>::get(),
                            "remove_didPauseEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PauseController.add_didResumeEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PauseController::*)(::System::Action*)>(&::GlobalNamespace::PauseController::add_didResumeEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x23bcad0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseController*>::get(),
                            "add_didResumeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PauseController.remove_didResumeEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PauseController::*)(::System::Action*)>(&::GlobalNamespace::PauseController::remove_didResumeEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x23bc3e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseController*>::get(),
                            "remove_didResumeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PauseController.add_canPauseEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PauseController::*)(::System::Action_1<::System::Action_1<bool>*>*)>(&::GlobalNamespace::PauseController::add_canPauseEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x23bc984;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseController*>::get(),
                            "add_canPauseEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Action_1<bool>*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PauseController.remove_canPauseEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PauseController::*)(::System::Action_1<::System::Action_1<bool>*>*)>(&::GlobalNamespace::PauseController::remove_canPauseEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x23bc298;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseController*>::get(),
                            "remove_canPauseEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Action_1<bool>*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PauseController.add_didReturnToMenuEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PauseController::*)(::System::Action*)>(&::GlobalNamespace::PauseController::add_didReturnToMenuEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x23c73f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseController*>::get(),
                            "add_didReturnToMenuEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PauseController.remove_didReturnToMenuEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PauseController::*)(::System::Action*)>(&::GlobalNamespace::PauseController::remove_didReturnToMenuEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x23c7494;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseController*>::get(),
                            "remove_didReturnToMenuEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PauseController.get_wantsToPause
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::PauseController::*)()>(&::GlobalNamespace::PauseController::get_wantsToPause)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23c7530;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseController*>::get(),
                            "get_wantsToPause",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PauseController.get_canPause
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::PauseController::*)()>(&::GlobalNamespace::PauseController::get_canPause)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x23c7538;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseController*>::get(),
                            "get_canPause",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PauseController.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PauseController::*)()>(&::GlobalNamespace::PauseController::Start)> {
  constexpr static std::size_t size = 0x57c;
  constexpr static std::size_t addrs = 0x23c7624;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseController*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PauseController.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PauseController::*)()>(&::GlobalNamespace::PauseController::OnDestroy)> {
  constexpr static std::size_t size = 0x5a8;
  constexpr static std::size_t addrs = 0x23c7c50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseController*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PauseController.OnApplicationPause
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PauseController::*)(bool)>(&::GlobalNamespace::PauseController::OnApplicationPause)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x23c81f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseController*>::get(),
                            "OnApplicationPause",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PauseController.Pause
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PauseController::*)()>(&::GlobalNamespace::PauseController::Pause)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x23bd648;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseController*>::get(),
                            "Pause",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PauseController.PauseGameOnStartupIfItShouldBePaused
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PauseController::*)()>(&::GlobalNamespace::PauseController::PauseGameOnStartupIfItShouldBePaused)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x23c8204;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseController*>::get(),
                            "PauseGameOnStartupIfItShouldBePaused",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PauseController.HandleLevelDidStart
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PauseController::*)()>(&::GlobalNamespace::PauseController::HandleLevelDidStart)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x23c8250;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseController*>::get(),
                            "HandleLevelDidStart",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PauseController.HandleLevelWillStartIntro
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PauseController::*)()>(&::GlobalNamespace::PauseController::HandleLevelWillStartIntro)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x23c8254;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseController*>::get(),
                            "HandleLevelWillStartIntro",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PauseController.HandleMenuButtonTriggered
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PauseController::*)()>(&::GlobalNamespace::PauseController::HandleMenuButtonTriggered)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x23c8258;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseController*>::get(),
                            "HandleMenuButtonTriggered",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PauseController.HandleInputFocusWasCaptured
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PauseController::*)()>(&::GlobalNamespace::PauseController::HandleInputFocusWasCaptured)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x23c825c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseController*>::get(),
                            "HandleInputFocusWasCaptured",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PauseController.HandleHMDUnmounted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PauseController::*)()>(&::GlobalNamespace::PauseController::HandleHMDUnmounted)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x23c8260;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseController*>::get(),
                            "HandleHMDUnmounted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PauseController.HandleControllersDidDisconnectEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PauseController::*)()>(&::GlobalNamespace::PauseController::HandleControllersDidDisconnectEvent)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x23c8264;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseController*>::get(),
                            "HandleControllersDidDisconnectEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PauseController.HandlePauseMenuManagerDidFinishResumeAnimation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PauseController::*)()>(&::GlobalNamespace::PauseController::HandlePauseMenuManagerDidFinishResumeAnimation)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x23c8268;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseController*>::get(),
                            "HandlePauseMenuManagerDidFinishResumeAnimation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PauseController.HandlePauseMenuManagerDidPressContinueButton
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PauseController::*)()>(&::GlobalNamespace::PauseController::HandlePauseMenuManagerDidPressContinueButton)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x23c8354;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseController*>::get(),
                            "HandlePauseMenuManagerDidPressContinueButton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PauseController.HandlePauseMenuManagerDidPressRestartButton
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PauseController::*)()>(&::GlobalNamespace::PauseController::HandlePauseMenuManagerDidPressRestartButton)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x23c8430;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseController*>::get(),
                            "HandlePauseMenuManagerDidPressRestartButton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PauseController.HandlePauseMenuManagerDidPressMenuButton
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PauseController::*)()>(&::GlobalNamespace::PauseController::HandlePauseMenuManagerDidPressMenuButton)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x23c84d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseController*>::get(),
                            "HandlePauseMenuManagerDidPressMenuButton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PauseController.GetDefaultPausedState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::PauseController::*)()>(&::GlobalNamespace::PauseController::GetDefaultPausedState)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x23c7ba0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseController*>::get(),
                            "GetDefaultPausedState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PauseController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PauseController::*)()>(&::GlobalNamespace::PauseController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23c8588;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::PauseController::__set__pauseMenuManager(::GlobalNamespace::PauseMenuManager*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::PauseMenuManager*, 0x18>(this, std::forward<::GlobalNamespace::PauseMenuManager*>(value));
}
constexpr ::GlobalNamespace::PauseMenuManager* GlobalNamespace::PauseController::__get__pauseMenuManager()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PauseMenuManager*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PauseMenuManager*> GlobalNamespace::PauseController::__get__pauseMenuManager() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PauseMenuManager*, 0x18>(this);
}
constexpr void GlobalNamespace::PauseController::__set__gamePause(::GlobalNamespace::IGamePause*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IGamePause*, 0x20>(this, std::forward<::GlobalNamespace::IGamePause*>(value));
}
constexpr ::GlobalNamespace::IGamePause* GlobalNamespace::PauseController::__get__gamePause()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IGamePause*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IGamePause*> GlobalNamespace::PauseController::__get__gamePause() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IGamePause*, 0x20>(this);
}
constexpr void GlobalNamespace::PauseController::__set__menuButtonTrigger(::GlobalNamespace::IMenuButtonTrigger*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IMenuButtonTrigger*, 0x28>(this, std::forward<::GlobalNamespace::IMenuButtonTrigger*>(value));
}
constexpr ::GlobalNamespace::IMenuButtonTrigger* GlobalNamespace::PauseController::__get__menuButtonTrigger()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IMenuButtonTrigger*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMenuButtonTrigger*> GlobalNamespace::PauseController::__get__menuButtonTrigger() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IMenuButtonTrigger*, 0x28>(this);
}
constexpr void GlobalNamespace::PauseController::__set__beatmapObjectManager(::GlobalNamespace::BeatmapObjectManager*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapObjectManager*, 0x30>(this, std::forward<::GlobalNamespace::BeatmapObjectManager*>(value));
}
constexpr ::GlobalNamespace::BeatmapObjectManager* GlobalNamespace::PauseController::__get__beatmapObjectManager()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapObjectManager*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapObjectManager*> GlobalNamespace::PauseController::__get__beatmapObjectManager() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapObjectManager*, 0x30>(this);
}
constexpr void GlobalNamespace::PauseController::__set__levelRestartController(::GlobalNamespace::ILevelRestartController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::ILevelRestartController*, 0x38>(this, std::forward<::GlobalNamespace::ILevelRestartController*>(value));
}
constexpr ::GlobalNamespace::ILevelRestartController* GlobalNamespace::PauseController::__get__levelRestartController()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ILevelRestartController*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ILevelRestartController*> GlobalNamespace::PauseController::__get__levelRestartController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ILevelRestartController*, 0x38>(this);
}
constexpr void GlobalNamespace::PauseController::__set__returnToMenuController(::GlobalNamespace::IReturnToMenuController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IReturnToMenuController*, 0x40>(this, std::forward<::GlobalNamespace::IReturnToMenuController*>(value));
}
constexpr ::GlobalNamespace::IReturnToMenuController* GlobalNamespace::PauseController::__get__returnToMenuController()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IReturnToMenuController*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IReturnToMenuController*> GlobalNamespace::PauseController::__get__returnToMenuController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IReturnToMenuController*, 0x40>(this);
}
constexpr void GlobalNamespace::PauseController::__set__vrPlatformHelper(::GlobalNamespace::IVRPlatformHelper*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IVRPlatformHelper*, 0x48>(this, std::forward<::GlobalNamespace::IVRPlatformHelper*>(value));
}
constexpr ::GlobalNamespace::IVRPlatformHelper* GlobalNamespace::PauseController::__get__vrPlatformHelper()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IVRPlatformHelper*, 0x48>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IVRPlatformHelper*> GlobalNamespace::PauseController::__get__vrPlatformHelper() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IVRPlatformHelper*, 0x48>(this);
}
constexpr void GlobalNamespace::PauseController::__set__levelStartController(::GlobalNamespace::ILevelStartController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::ILevelStartController*, 0x50>(this, std::forward<::GlobalNamespace::ILevelStartController*>(value));
}
constexpr ::GlobalNamespace::ILevelStartController* GlobalNamespace::PauseController::__get__levelStartController()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ILevelStartController*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ILevelStartController*> GlobalNamespace::PauseController::__get__levelStartController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ILevelStartController*, 0x50>(this);
}
constexpr void GlobalNamespace::PauseController::__set__initData(::GlobalNamespace::__PauseController__InitData*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__PauseController__InitData*, 0x58>(this, std::forward<::GlobalNamespace::__PauseController__InitData*>(value));
}
constexpr ::GlobalNamespace::__PauseController__InitData* GlobalNamespace::PauseController::__get__initData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__PauseController__InitData*, 0x58>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PauseController__InitData*> GlobalNamespace::PauseController::__get__initData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__PauseController__InitData*, 0x58>(this);
}
constexpr void GlobalNamespace::PauseController::__set_didPauseEvent(::System::Action*  value)  {
::cordl_internals::setInstanceField<::System::Action*, 0x60>(this, std::forward<::System::Action*>(value));
}
constexpr ::System::Action* GlobalNamespace::PauseController::__get_didPauseEvent()  {
return ::cordl_internals::getInstanceField<::System::Action*, 0x60>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> GlobalNamespace::PauseController::__get_didPauseEvent() const {
return ::cordl_internals::getInstanceField<::System::Action*, 0x60>(this);
}
constexpr void GlobalNamespace::PauseController::__set_didResumeEvent(::System::Action*  value)  {
::cordl_internals::setInstanceField<::System::Action*, 0x68>(this, std::forward<::System::Action*>(value));
}
constexpr ::System::Action* GlobalNamespace::PauseController::__get_didResumeEvent()  {
return ::cordl_internals::getInstanceField<::System::Action*, 0x68>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> GlobalNamespace::PauseController::__get_didResumeEvent() const {
return ::cordl_internals::getInstanceField<::System::Action*, 0x68>(this);
}
constexpr void GlobalNamespace::PauseController::__set_canPauseEvent(::System::Action_1<::System::Action_1<bool>*>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<::System::Action_1<bool>*>*, 0x70>(this, std::forward<::System::Action_1<::System::Action_1<bool>*>*>(value));
}
constexpr ::System::Action_1<::System::Action_1<bool>*>* GlobalNamespace::PauseController::__get_canPauseEvent()  {
return ::cordl_internals::getInstanceField<::System::Action_1<::System::Action_1<bool>*>*, 0x70>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::System::Action_1<bool>*>*> GlobalNamespace::PauseController::__get_canPauseEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::System::Action_1<bool>*>*, 0x70>(this);
}
constexpr void GlobalNamespace::PauseController::__set_didReturnToMenuEvent(::System::Action*  value)  {
::cordl_internals::setInstanceField<::System::Action*, 0x78>(this, std::forward<::System::Action*>(value));
}
constexpr ::System::Action* GlobalNamespace::PauseController::__get_didReturnToMenuEvent()  {
return ::cordl_internals::getInstanceField<::System::Action*, 0x78>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> GlobalNamespace::PauseController::__get_didReturnToMenuEvent() const {
return ::cordl_internals::getInstanceField<::System::Action*, 0x78>(this);
}
constexpr void GlobalNamespace::PauseController::__set__wantsToPause(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x80>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::PauseController::__get__wantsToPause()  {
return ::cordl_internals::getInstanceField<bool, 0x80>(this);
}
constexpr bool const& GlobalNamespace::PauseController::__get__wantsToPause() const {
return ::cordl_internals::getInstanceField<bool, 0x80>(this);
}
constexpr void GlobalNamespace::PauseController::__set__paused(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x81>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::PauseController::__get__paused()  {
return ::cordl_internals::getInstanceField<bool, 0x81>(this);
}
constexpr bool const& GlobalNamespace::PauseController::__get__paused() const {
return ::cordl_internals::getInstanceField<bool, 0x81>(this);
}
inline void GlobalNamespace::PauseController::add_didPauseEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseController*>::get(),
                            "add_didPauseEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::PauseController::remove_didPauseEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseController*>::get(),
                            "remove_didPauseEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::PauseController::add_didResumeEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseController*>::get(),
                            "add_didResumeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::PauseController::remove_didResumeEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseController*>::get(),
                            "remove_didResumeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::PauseController::add_canPauseEvent(::System::Action_1<::System::Action_1<bool>*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseController*>::get(),
                            "add_canPauseEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Action_1<bool>*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::PauseController::remove_canPauseEvent(::System::Action_1<::System::Action_1<bool>*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseController*>::get(),
                            "remove_canPauseEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Action_1<bool>*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::PauseController::add_didReturnToMenuEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseController*>::get(),
                            "add_didReturnToMenuEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::PauseController::remove_didReturnToMenuEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseController*>::get(),
                            "remove_didReturnToMenuEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline bool GlobalNamespace::PauseController::get_wantsToPause()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseController*>::get(),
                            "get_wantsToPause",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool GlobalNamespace::PauseController::get_canPause()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseController*>::get(),
                            "get_canPause",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void GlobalNamespace::PauseController::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseController*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::PauseController::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseController*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::PauseController::OnApplicationPause(bool  pauseStatus)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseController*>::get(),
                            "OnApplicationPause",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, pauseStatus);
}
inline void GlobalNamespace::PauseController::Pause()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseController*>::get(),
                            "Pause",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::PauseController::PauseGameOnStartupIfItShouldBePaused()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseController*>::get(),
                            "PauseGameOnStartupIfItShouldBePaused",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::PauseController::HandleLevelDidStart()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseController*>::get(),
                            "HandleLevelDidStart",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::PauseController::HandleLevelWillStartIntro()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseController*>::get(),
                            "HandleLevelWillStartIntro",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::PauseController::HandleMenuButtonTriggered()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseController*>::get(),
                            "HandleMenuButtonTriggered",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::PauseController::HandleInputFocusWasCaptured()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseController*>::get(),
                            "HandleInputFocusWasCaptured",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::PauseController::HandleHMDUnmounted()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseController*>::get(),
                            "HandleHMDUnmounted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::PauseController::HandleControllersDidDisconnectEvent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseController*>::get(),
                            "HandleControllersDidDisconnectEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::PauseController::HandlePauseMenuManagerDidFinishResumeAnimation()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseController*>::get(),
                            "HandlePauseMenuManagerDidFinishResumeAnimation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::PauseController::HandlePauseMenuManagerDidPressContinueButton()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseController*>::get(),
                            "HandlePauseMenuManagerDidPressContinueButton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::PauseController::HandlePauseMenuManagerDidPressRestartButton()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseController*>::get(),
                            "HandlePauseMenuManagerDidPressRestartButton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::PauseController::HandlePauseMenuManagerDidPressMenuButton()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseController*>::get(),
                            "HandlePauseMenuManagerDidPressMenuButton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool GlobalNamespace::PauseController::GetDefaultPausedState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseController*>::get(),
                            "GetDefaultPausedState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::PauseController* GlobalNamespace::PauseController::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::PauseController*>());
}
inline void GlobalNamespace::PauseController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
