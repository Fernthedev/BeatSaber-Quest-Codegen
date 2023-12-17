#pragma once
#include "GlobalNamespace/zzzz__ScenesTransitionSetupDataSO_impl.hpp"
#include "GlobalNamespace/zzzz__TutorialScenesTransitionSetupDataSO_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "GlobalNamespace/zzzz__TutorialScenesTransitionSetupDataSO_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSpecificSettings_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentInfoSO_def.hpp"
#include "GlobalNamespace/zzzz__SceneInfo_def.hpp"
constexpr void GlobalNamespace::__TutorialScenesTransitionSetupDataSO__TutorialEndStateType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__TutorialScenesTransitionSetupDataSO__TutorialEndStateType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__TutorialScenesTransitionSetupDataSO__TutorialEndStateType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__TutorialScenesTransitionSetupDataSO__TutorialEndStateType::__TutorialScenesTransitionSetupDataSO__TutorialEndStateType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__TutorialScenesTransitionSetupDataSO__TutorialEndStateType  GlobalNamespace::__TutorialScenesTransitionSetupDataSO__TutorialEndStateType::Completed{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__TutorialScenesTransitionSetupDataSO__TutorialEndStateType  GlobalNamespace::__TutorialScenesTransitionSetupDataSO__TutorialEndStateType::ReturnToMenu{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::__TutorialScenesTransitionSetupDataSO__TutorialEndStateType  GlobalNamespace::__TutorialScenesTransitionSetupDataSO__TutorialEndStateType::Restart{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::GlobalNamespace::TutorialScenesTransitionSetupDataSO.add_didFinishEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TutorialScenesTransitionSetupDataSO::*)(::System::Action_2<::GlobalNamespace::TutorialScenesTransitionSetupDataSO*,::GlobalNamespace::__TutorialScenesTransitionSetupDataSO__TutorialEndStateType>*)>(&::GlobalNamespace::TutorialScenesTransitionSetupDataSO::add_didFinishEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x231ee7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialScenesTransitionSetupDataSO*>::get(),
                            "add_didFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::TutorialScenesTransitionSetupDataSO*,::GlobalNamespace::__TutorialScenesTransitionSetupDataSO__TutorialEndStateType>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialScenesTransitionSetupDataSO.remove_didFinishEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TutorialScenesTransitionSetupDataSO::*)(::System::Action_2<::GlobalNamespace::TutorialScenesTransitionSetupDataSO*,::GlobalNamespace::__TutorialScenesTransitionSetupDataSO__TutorialEndStateType>*)>(&::GlobalNamespace::TutorialScenesTransitionSetupDataSO::remove_didFinishEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x231e2e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialScenesTransitionSetupDataSO*>::get(),
                            "remove_didFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::TutorialScenesTransitionSetupDataSO*,::GlobalNamespace::__TutorialScenesTransitionSetupDataSO__TutorialEndStateType>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialScenesTransitionSetupDataSO.get_playerSpecificSettings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PlayerSpecificSettings* (::GlobalNamespace::TutorialScenesTransitionSetupDataSO::*)()>(&::GlobalNamespace::TutorialScenesTransitionSetupDataSO::get_playerSpecificSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2320058;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialScenesTransitionSetupDataSO*>::get(),
                            "get_playerSpecificSettings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialScenesTransitionSetupDataSO.set_playerSpecificSettings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TutorialScenesTransitionSetupDataSO::*)(::GlobalNamespace::PlayerSpecificSettings*)>(&::GlobalNamespace::TutorialScenesTransitionSetupDataSO::set_playerSpecificSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2320060;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialScenesTransitionSetupDataSO*>::get(),
                            "set_playerSpecificSettings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettings*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialScenesTransitionSetupDataSO.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TutorialScenesTransitionSetupDataSO::*)(::GlobalNamespace::PlayerSpecificSettings*)>(&::GlobalNamespace::TutorialScenesTransitionSetupDataSO::Init)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x231c004;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialScenesTransitionSetupDataSO*>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettings*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialScenesTransitionSetupDataSO.Finish
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TutorialScenesTransitionSetupDataSO::*)(::GlobalNamespace::__TutorialScenesTransitionSetupDataSO__TutorialEndStateType)>(&::GlobalNamespace::TutorialScenesTransitionSetupDataSO::Finish)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2320068;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialScenesTransitionSetupDataSO*>::get(),
                            "Finish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__TutorialScenesTransitionSetupDataSO__TutorialEndStateType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialScenesTransitionSetupDataSO._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TutorialScenesTransitionSetupDataSO::*)()>(&::GlobalNamespace::TutorialScenesTransitionSetupDataSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2320090;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialScenesTransitionSetupDataSO*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::TutorialScenesTransitionSetupDataSO::__set__environmentInfo(::GlobalNamespace::EnvironmentInfoSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::EnvironmentInfoSO*, 0x30>(this, std::forward<::GlobalNamespace::EnvironmentInfoSO*>(value));
}
constexpr ::GlobalNamespace::EnvironmentInfoSO* GlobalNamespace::TutorialScenesTransitionSetupDataSO::__get__environmentInfo()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::EnvironmentInfoSO*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnvironmentInfoSO*> GlobalNamespace::TutorialScenesTransitionSetupDataSO::__get__environmentInfo() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::EnvironmentInfoSO*, 0x30>(this);
}
constexpr void GlobalNamespace::TutorialScenesTransitionSetupDataSO::__set__tutorialSceneInfo(::GlobalNamespace::SceneInfo*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::SceneInfo*, 0x38>(this, std::forward<::GlobalNamespace::SceneInfo*>(value));
}
constexpr ::GlobalNamespace::SceneInfo* GlobalNamespace::TutorialScenesTransitionSetupDataSO::__get__tutorialSceneInfo()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SceneInfo*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SceneInfo*> GlobalNamespace::TutorialScenesTransitionSetupDataSO::__get__tutorialSceneInfo() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SceneInfo*, 0x38>(this);
}
constexpr void GlobalNamespace::TutorialScenesTransitionSetupDataSO::__set__gameCoreSceneInfo(::GlobalNamespace::SceneInfo*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::SceneInfo*, 0x40>(this, std::forward<::GlobalNamespace::SceneInfo*>(value));
}
constexpr ::GlobalNamespace::SceneInfo* GlobalNamespace::TutorialScenesTransitionSetupDataSO::__get__gameCoreSceneInfo()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SceneInfo*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SceneInfo*> GlobalNamespace::TutorialScenesTransitionSetupDataSO::__get__gameCoreSceneInfo() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SceneInfo*, 0x40>(this);
}
constexpr void GlobalNamespace::TutorialScenesTransitionSetupDataSO::__set_didFinishEvent(::System::Action_2<::GlobalNamespace::TutorialScenesTransitionSetupDataSO*,::GlobalNamespace::__TutorialScenesTransitionSetupDataSO__TutorialEndStateType>*  value)  {
::cordl_internals::setInstanceField<::System::Action_2<::GlobalNamespace::TutorialScenesTransitionSetupDataSO*,::GlobalNamespace::__TutorialScenesTransitionSetupDataSO__TutorialEndStateType>*, 0x48>(this, std::forward<::System::Action_2<::GlobalNamespace::TutorialScenesTransitionSetupDataSO*,::GlobalNamespace::__TutorialScenesTransitionSetupDataSO__TutorialEndStateType>*>(value));
}
constexpr ::System::Action_2<::GlobalNamespace::TutorialScenesTransitionSetupDataSO*,::GlobalNamespace::__TutorialScenesTransitionSetupDataSO__TutorialEndStateType>* GlobalNamespace::TutorialScenesTransitionSetupDataSO::__get_didFinishEvent()  {
return ::cordl_internals::getInstanceField<::System::Action_2<::GlobalNamespace::TutorialScenesTransitionSetupDataSO*,::GlobalNamespace::__TutorialScenesTransitionSetupDataSO__TutorialEndStateType>*, 0x48>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::TutorialScenesTransitionSetupDataSO*,::GlobalNamespace::__TutorialScenesTransitionSetupDataSO__TutorialEndStateType>*> GlobalNamespace::TutorialScenesTransitionSetupDataSO::__get_didFinishEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_2<::GlobalNamespace::TutorialScenesTransitionSetupDataSO*,::GlobalNamespace::__TutorialScenesTransitionSetupDataSO__TutorialEndStateType>*, 0x48>(this);
}
constexpr void GlobalNamespace::TutorialScenesTransitionSetupDataSO::__set__playerSpecificSettings_k__BackingField(::GlobalNamespace::PlayerSpecificSettings*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::PlayerSpecificSettings*, 0x50>(this, std::forward<::GlobalNamespace::PlayerSpecificSettings*>(value));
}
constexpr ::GlobalNamespace::PlayerSpecificSettings* GlobalNamespace::TutorialScenesTransitionSetupDataSO::__get__playerSpecificSettings_k__BackingField()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PlayerSpecificSettings*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerSpecificSettings*> GlobalNamespace::TutorialScenesTransitionSetupDataSO::__get__playerSpecificSettings_k__BackingField() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PlayerSpecificSettings*, 0x50>(this);
}
inline void GlobalNamespace::TutorialScenesTransitionSetupDataSO::add_didFinishEvent(::System::Action_2<::GlobalNamespace::TutorialScenesTransitionSetupDataSO*,::GlobalNamespace::__TutorialScenesTransitionSetupDataSO__TutorialEndStateType>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialScenesTransitionSetupDataSO*>::get(),
                            "add_didFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::TutorialScenesTransitionSetupDataSO*,::GlobalNamespace::__TutorialScenesTransitionSetupDataSO__TutorialEndStateType>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::TutorialScenesTransitionSetupDataSO::remove_didFinishEvent(::System::Action_2<::GlobalNamespace::TutorialScenesTransitionSetupDataSO*,::GlobalNamespace::__TutorialScenesTransitionSetupDataSO__TutorialEndStateType>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialScenesTransitionSetupDataSO*>::get(),
                            "remove_didFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::TutorialScenesTransitionSetupDataSO*,::GlobalNamespace::__TutorialScenesTransitionSetupDataSO__TutorialEndStateType>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::GlobalNamespace::PlayerSpecificSettings* GlobalNamespace::TutorialScenesTransitionSetupDataSO::get_playerSpecificSettings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialScenesTransitionSetupDataSO*>::get(),
                            "get_playerSpecificSettings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerSpecificSettings*, false>(*this, ___internal_method);
}
inline void GlobalNamespace::TutorialScenesTransitionSetupDataSO::set_playerSpecificSettings(::GlobalNamespace::PlayerSpecificSettings*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialScenesTransitionSetupDataSO*>::get(),
                            "set_playerSpecificSettings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettings*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::TutorialScenesTransitionSetupDataSO::Init(::GlobalNamespace::PlayerSpecificSettings*  playerSpecificSettings)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialScenesTransitionSetupDataSO*>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettings*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, playerSpecificSettings);
}
inline void GlobalNamespace::TutorialScenesTransitionSetupDataSO::Finish(::GlobalNamespace::__TutorialScenesTransitionSetupDataSO__TutorialEndStateType  endState)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialScenesTransitionSetupDataSO*>::get(),
                            "Finish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__TutorialScenesTransitionSetupDataSO__TutorialEndStateType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, endState);
}
inline ::GlobalNamespace::TutorialScenesTransitionSetupDataSO* GlobalNamespace::TutorialScenesTransitionSetupDataSO::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::TutorialScenesTransitionSetupDataSO*>());
}
inline void GlobalNamespace::TutorialScenesTransitionSetupDataSO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialScenesTransitionSetupDataSO*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
