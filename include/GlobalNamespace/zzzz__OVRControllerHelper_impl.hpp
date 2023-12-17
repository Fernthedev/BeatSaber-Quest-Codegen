#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__OVRControllerHelper_def.hpp"
#include "GlobalNamespace/zzzz__OVRInput_def.hpp"
#include "GlobalNamespace/zzzz__OVRControllerHelper_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Animator_def.hpp"
constexpr void GlobalNamespace::__OVRControllerHelper__ControllerType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__OVRControllerHelper__ControllerType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__OVRControllerHelper__ControllerType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRControllerHelper__ControllerType::__OVRControllerHelper__ControllerType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__OVRControllerHelper__ControllerType  GlobalNamespace::__OVRControllerHelper__ControllerType::QuestAndRiftS{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::__OVRControllerHelper__ControllerType  GlobalNamespace::__OVRControllerHelper__ControllerType::Rift{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::__OVRControllerHelper__ControllerType  GlobalNamespace::__OVRControllerHelper__ControllerType::Quest2{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::__OVRControllerHelper__ControllerType  GlobalNamespace::__OVRControllerHelper__ControllerType::TouchPro{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::__OVRControllerHelper__ControllerType  GlobalNamespace::__OVRControllerHelper__ControllerType::TouchPlus{static_cast<int32_t>(0x5)};
//  Writing Method size for method: ::GlobalNamespace::OVRControllerHelper.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRControllerHelper::*)()>(&::GlobalNamespace::OVRControllerHelper::Start)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x27a232c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRControllerHelper*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRControllerHelper.InitializeControllerModels
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRControllerHelper::*)()>(&::GlobalNamespace::OVRControllerHelper::InitializeControllerModels)> {
  constexpr static std::size_t size = 0x49c;
  constexpr static std::size_t addrs = 0x27a239c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRControllerHelper*>::get(),
                            "InitializeControllerModels",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRControllerHelper.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRControllerHelper::*)()>(&::GlobalNamespace::OVRControllerHelper::Update)> {
  constexpr static std::size_t size = 0x880;
  constexpr static std::size_t addrs = 0x27a2838;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRControllerHelper*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRControllerHelper.InputFocusAquired
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRControllerHelper::*)()>(&::GlobalNamespace::OVRControllerHelper::InputFocusAquired)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x27a30b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRControllerHelper*>::get(),
                            "InputFocusAquired",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRControllerHelper.InputFocusLost
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRControllerHelper::*)()>(&::GlobalNamespace::OVRControllerHelper::InputFocusLost)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27a30c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRControllerHelper*>::get(),
                            "InputFocusLost",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRControllerHelper._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRControllerHelper::*)()>(&::GlobalNamespace::OVRControllerHelper::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x27a30cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRControllerHelper*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::OVRControllerHelper::__set_m_modelOculusTouchQuestAndRiftSLeftController(::UnityEngine::GameObject*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::GameObject*, 0x18>(this, std::forward<::UnityEngine::GameObject*>(value));
}
constexpr ::UnityEngine::GameObject* GlobalNamespace::OVRControllerHelper::__get_m_modelOculusTouchQuestAndRiftSLeftController()  {
return ::cordl_internals::getInstanceField<::UnityEngine::GameObject*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> GlobalNamespace::OVRControllerHelper::__get_m_modelOculusTouchQuestAndRiftSLeftController() const {
return ::cordl_internals::getInstanceField<::UnityEngine::GameObject*, 0x18>(this);
}
constexpr void GlobalNamespace::OVRControllerHelper::__set_m_modelOculusTouchQuestAndRiftSRightController(::UnityEngine::GameObject*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::GameObject*, 0x20>(this, std::forward<::UnityEngine::GameObject*>(value));
}
constexpr ::UnityEngine::GameObject* GlobalNamespace::OVRControllerHelper::__get_m_modelOculusTouchQuestAndRiftSRightController()  {
return ::cordl_internals::getInstanceField<::UnityEngine::GameObject*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> GlobalNamespace::OVRControllerHelper::__get_m_modelOculusTouchQuestAndRiftSRightController() const {
return ::cordl_internals::getInstanceField<::UnityEngine::GameObject*, 0x20>(this);
}
constexpr void GlobalNamespace::OVRControllerHelper::__set_m_modelOculusTouchRiftLeftController(::UnityEngine::GameObject*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::GameObject*, 0x28>(this, std::forward<::UnityEngine::GameObject*>(value));
}
constexpr ::UnityEngine::GameObject* GlobalNamespace::OVRControllerHelper::__get_m_modelOculusTouchRiftLeftController()  {
return ::cordl_internals::getInstanceField<::UnityEngine::GameObject*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> GlobalNamespace::OVRControllerHelper::__get_m_modelOculusTouchRiftLeftController() const {
return ::cordl_internals::getInstanceField<::UnityEngine::GameObject*, 0x28>(this);
}
constexpr void GlobalNamespace::OVRControllerHelper::__set_m_modelOculusTouchRiftRightController(::UnityEngine::GameObject*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::GameObject*, 0x30>(this, std::forward<::UnityEngine::GameObject*>(value));
}
constexpr ::UnityEngine::GameObject* GlobalNamespace::OVRControllerHelper::__get_m_modelOculusTouchRiftRightController()  {
return ::cordl_internals::getInstanceField<::UnityEngine::GameObject*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> GlobalNamespace::OVRControllerHelper::__get_m_modelOculusTouchRiftRightController() const {
return ::cordl_internals::getInstanceField<::UnityEngine::GameObject*, 0x30>(this);
}
constexpr void GlobalNamespace::OVRControllerHelper::__set_m_modelOculusTouchQuest2LeftController(::UnityEngine::GameObject*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::GameObject*, 0x38>(this, std::forward<::UnityEngine::GameObject*>(value));
}
constexpr ::UnityEngine::GameObject* GlobalNamespace::OVRControllerHelper::__get_m_modelOculusTouchQuest2LeftController()  {
return ::cordl_internals::getInstanceField<::UnityEngine::GameObject*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> GlobalNamespace::OVRControllerHelper::__get_m_modelOculusTouchQuest2LeftController() const {
return ::cordl_internals::getInstanceField<::UnityEngine::GameObject*, 0x38>(this);
}
constexpr void GlobalNamespace::OVRControllerHelper::__set_m_modelOculusTouchQuest2RightController(::UnityEngine::GameObject*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::GameObject*, 0x40>(this, std::forward<::UnityEngine::GameObject*>(value));
}
constexpr ::UnityEngine::GameObject* GlobalNamespace::OVRControllerHelper::__get_m_modelOculusTouchQuest2RightController()  {
return ::cordl_internals::getInstanceField<::UnityEngine::GameObject*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> GlobalNamespace::OVRControllerHelper::__get_m_modelOculusTouchQuest2RightController() const {
return ::cordl_internals::getInstanceField<::UnityEngine::GameObject*, 0x40>(this);
}
constexpr void GlobalNamespace::OVRControllerHelper::__set_m_modelMetaTouchProLeftController(::UnityEngine::GameObject*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::GameObject*, 0x48>(this, std::forward<::UnityEngine::GameObject*>(value));
}
constexpr ::UnityEngine::GameObject* GlobalNamespace::OVRControllerHelper::__get_m_modelMetaTouchProLeftController()  {
return ::cordl_internals::getInstanceField<::UnityEngine::GameObject*, 0x48>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> GlobalNamespace::OVRControllerHelper::__get_m_modelMetaTouchProLeftController() const {
return ::cordl_internals::getInstanceField<::UnityEngine::GameObject*, 0x48>(this);
}
constexpr void GlobalNamespace::OVRControllerHelper::__set_m_modelMetaTouchProRightController(::UnityEngine::GameObject*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::GameObject*, 0x50>(this, std::forward<::UnityEngine::GameObject*>(value));
}
constexpr ::UnityEngine::GameObject* GlobalNamespace::OVRControllerHelper::__get_m_modelMetaTouchProRightController()  {
return ::cordl_internals::getInstanceField<::UnityEngine::GameObject*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> GlobalNamespace::OVRControllerHelper::__get_m_modelMetaTouchProRightController() const {
return ::cordl_internals::getInstanceField<::UnityEngine::GameObject*, 0x50>(this);
}
constexpr void GlobalNamespace::OVRControllerHelper::__set_m_modelMetaTouchPlusLeftController(::UnityEngine::GameObject*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::GameObject*, 0x58>(this, std::forward<::UnityEngine::GameObject*>(value));
}
constexpr ::UnityEngine::GameObject* GlobalNamespace::OVRControllerHelper::__get_m_modelMetaTouchPlusLeftController()  {
return ::cordl_internals::getInstanceField<::UnityEngine::GameObject*, 0x58>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> GlobalNamespace::OVRControllerHelper::__get_m_modelMetaTouchPlusLeftController() const {
return ::cordl_internals::getInstanceField<::UnityEngine::GameObject*, 0x58>(this);
}
constexpr void GlobalNamespace::OVRControllerHelper::__set_m_modelMetaTouchPlusRightController(::UnityEngine::GameObject*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::GameObject*, 0x60>(this, std::forward<::UnityEngine::GameObject*>(value));
}
constexpr ::UnityEngine::GameObject* GlobalNamespace::OVRControllerHelper::__get_m_modelMetaTouchPlusRightController()  {
return ::cordl_internals::getInstanceField<::UnityEngine::GameObject*, 0x60>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> GlobalNamespace::OVRControllerHelper::__get_m_modelMetaTouchPlusRightController() const {
return ::cordl_internals::getInstanceField<::UnityEngine::GameObject*, 0x60>(this);
}
constexpr void GlobalNamespace::OVRControllerHelper::__set_m_controller(::GlobalNamespace::__OVRInput__Controller  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__OVRInput__Controller, 0x68>(this, std::forward<::GlobalNamespace::__OVRInput__Controller>(value));
}
constexpr ::GlobalNamespace::__OVRInput__Controller& GlobalNamespace::OVRControllerHelper::__get_m_controller()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRInput__Controller, 0x68>(this);
}
constexpr ::GlobalNamespace::__OVRInput__Controller const& GlobalNamespace::OVRControllerHelper::__get_m_controller() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRInput__Controller, 0x68>(this);
}
constexpr void GlobalNamespace::OVRControllerHelper::__set_m_showState(::GlobalNamespace::__OVRInput__InputDeviceShowState  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__OVRInput__InputDeviceShowState, 0x6c>(this, std::forward<::GlobalNamespace::__OVRInput__InputDeviceShowState>(value));
}
constexpr ::GlobalNamespace::__OVRInput__InputDeviceShowState& GlobalNamespace::OVRControllerHelper::__get_m_showState()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRInput__InputDeviceShowState, 0x6c>(this);
}
constexpr ::GlobalNamespace::__OVRInput__InputDeviceShowState const& GlobalNamespace::OVRControllerHelper::__get_m_showState() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRInput__InputDeviceShowState, 0x6c>(this);
}
constexpr void GlobalNamespace::OVRControllerHelper::__set_showWhenHandsArePoweredByNaturalControllerPoses(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x70>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::OVRControllerHelper::__get_showWhenHandsArePoweredByNaturalControllerPoses()  {
return ::cordl_internals::getInstanceField<bool, 0x70>(this);
}
constexpr bool const& GlobalNamespace::OVRControllerHelper::__get_showWhenHandsArePoweredByNaturalControllerPoses() const {
return ::cordl_internals::getInstanceField<bool, 0x70>(this);
}
constexpr void GlobalNamespace::OVRControllerHelper::__set_m_animator(::UnityEngine::Animator*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Animator*, 0x78>(this, std::forward<::UnityEngine::Animator*>(value));
}
constexpr ::UnityEngine::Animator* GlobalNamespace::OVRControllerHelper::__get_m_animator()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Animator*, 0x78>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Animator*> GlobalNamespace::OVRControllerHelper::__get_m_animator() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Animator*, 0x78>(this);
}
constexpr void GlobalNamespace::OVRControllerHelper::__set_m_activeController(::UnityEngine::GameObject*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::GameObject*, 0x80>(this, std::forward<::UnityEngine::GameObject*>(value));
}
constexpr ::UnityEngine::GameObject* GlobalNamespace::OVRControllerHelper::__get_m_activeController()  {
return ::cordl_internals::getInstanceField<::UnityEngine::GameObject*, 0x80>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> GlobalNamespace::OVRControllerHelper::__get_m_activeController() const {
return ::cordl_internals::getInstanceField<::UnityEngine::GameObject*, 0x80>(this);
}
constexpr void GlobalNamespace::OVRControllerHelper::__set_m_controllerModelsInitialized(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x88>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::OVRControllerHelper::__get_m_controllerModelsInitialized()  {
return ::cordl_internals::getInstanceField<bool, 0x88>(this);
}
constexpr bool const& GlobalNamespace::OVRControllerHelper::__get_m_controllerModelsInitialized() const {
return ::cordl_internals::getInstanceField<bool, 0x88>(this);
}
constexpr void GlobalNamespace::OVRControllerHelper::__set_m_hasInputFocus(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x89>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::OVRControllerHelper::__get_m_hasInputFocus()  {
return ::cordl_internals::getInstanceField<bool, 0x89>(this);
}
constexpr bool const& GlobalNamespace::OVRControllerHelper::__get_m_hasInputFocus() const {
return ::cordl_internals::getInstanceField<bool, 0x89>(this);
}
constexpr void GlobalNamespace::OVRControllerHelper::__set_m_hasInputFocusPrev(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x8a>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::OVRControllerHelper::__get_m_hasInputFocusPrev()  {
return ::cordl_internals::getInstanceField<bool, 0x8a>(this);
}
constexpr bool const& GlobalNamespace::OVRControllerHelper::__get_m_hasInputFocusPrev() const {
return ::cordl_internals::getInstanceField<bool, 0x8a>(this);
}
constexpr void GlobalNamespace::OVRControllerHelper::__set_activeControllerType(::GlobalNamespace::__OVRControllerHelper__ControllerType  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__OVRControllerHelper__ControllerType, 0x8c>(this, std::forward<::GlobalNamespace::__OVRControllerHelper__ControllerType>(value));
}
constexpr ::GlobalNamespace::__OVRControllerHelper__ControllerType& GlobalNamespace::OVRControllerHelper::__get_activeControllerType()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRControllerHelper__ControllerType, 0x8c>(this);
}
constexpr ::GlobalNamespace::__OVRControllerHelper__ControllerType const& GlobalNamespace::OVRControllerHelper::__get_activeControllerType() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRControllerHelper__ControllerType, 0x8c>(this);
}
constexpr void GlobalNamespace::OVRControllerHelper::__set_m_prevControllerConnected(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x90>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::OVRControllerHelper::__get_m_prevControllerConnected()  {
return ::cordl_internals::getInstanceField<bool, 0x90>(this);
}
constexpr bool const& GlobalNamespace::OVRControllerHelper::__get_m_prevControllerConnected() const {
return ::cordl_internals::getInstanceField<bool, 0x90>(this);
}
constexpr void GlobalNamespace::OVRControllerHelper::__set_m_prevControllerConnectedCached(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x91>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::OVRControllerHelper::__get_m_prevControllerConnectedCached()  {
return ::cordl_internals::getInstanceField<bool, 0x91>(this);
}
constexpr bool const& GlobalNamespace::OVRControllerHelper::__get_m_prevControllerConnectedCached() const {
return ::cordl_internals::getInstanceField<bool, 0x91>(this);
}
constexpr void GlobalNamespace::OVRControllerHelper::__set_m_prevControllerInHandState(::GlobalNamespace::__OVRInput__ControllerInHandState  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__OVRInput__ControllerInHandState, 0x94>(this, std::forward<::GlobalNamespace::__OVRInput__ControllerInHandState>(value));
}
constexpr ::GlobalNamespace::__OVRInput__ControllerInHandState& GlobalNamespace::OVRControllerHelper::__get_m_prevControllerInHandState()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRInput__ControllerInHandState, 0x94>(this);
}
constexpr ::GlobalNamespace::__OVRInput__ControllerInHandState const& GlobalNamespace::OVRControllerHelper::__get_m_prevControllerInHandState() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRInput__ControllerInHandState, 0x94>(this);
}
inline void GlobalNamespace::OVRControllerHelper::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRControllerHelper*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRControllerHelper::InitializeControllerModels()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRControllerHelper*>::get(),
                            "InitializeControllerModels",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRControllerHelper::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRControllerHelper*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRControllerHelper::InputFocusAquired()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRControllerHelper*>::get(),
                            "InputFocusAquired",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRControllerHelper::InputFocusLost()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRControllerHelper*>::get(),
                            "InputFocusLost",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::OVRControllerHelper* GlobalNamespace::OVRControllerHelper::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::OVRControllerHelper*>());
}
inline void GlobalNamespace::OVRControllerHelper::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRControllerHelper*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
