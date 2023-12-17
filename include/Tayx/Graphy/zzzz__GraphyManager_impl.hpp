#pragma once
#include "Tayx/Graphy/Utils/zzzz__G_Singleton_1_impl.hpp"
#include "Tayx/Graphy/zzzz__GraphyManager_def.hpp"
#include "Tayx/Graphy/Audio/zzzz__G_AudioMonitor_def.hpp"
#include "Tayx/Graphy/Advanced/zzzz__G_AdvancedData_def.hpp"
#include "Tayx/Graphy/zzzz__GraphyManager_def.hpp"
#include "Tayx/Graphy/Ram/zzzz__G_RamManager_def.hpp"
#include "Tayx/Graphy/Audio/zzzz__G_AudioManager_def.hpp"
#include "UnityEngine/zzzz__FFTWindow_def.hpp"
#include "Tayx/Graphy/Ram/zzzz__G_RamMonitor_def.hpp"
#include "UnityEngine/InputSystem/zzzz__Key_def.hpp"
#include "Tayx/Graphy/Fps/zzzz__G_FpsMonitor_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__AudioListener_def.hpp"
#include "Tayx/Graphy/Fps/zzzz__G_FpsManager_def.hpp"
constexpr void Tayx::Graphy::__GraphyManager__Mode::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& Tayx::Graphy::__GraphyManager__Mode::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& Tayx::Graphy::__GraphyManager__Mode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Tayx::Graphy::__GraphyManager__Mode::__GraphyManager__Mode(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::Tayx::Graphy::__GraphyManager__Mode  Tayx::Graphy::__GraphyManager__Mode::FULL{static_cast<int32_t>(0x0)};
constexpr ::Tayx::Graphy::__GraphyManager__Mode  Tayx::Graphy::__GraphyManager__Mode::LIGHT{static_cast<int32_t>(0x1)};
constexpr void Tayx::Graphy::__GraphyManager__ModuleType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& Tayx::Graphy::__GraphyManager__ModuleType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& Tayx::Graphy::__GraphyManager__ModuleType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Tayx::Graphy::__GraphyManager__ModuleType::__GraphyManager__ModuleType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::Tayx::Graphy::__GraphyManager__ModuleType  Tayx::Graphy::__GraphyManager__ModuleType::FPS{static_cast<int32_t>(0x0)};
constexpr ::Tayx::Graphy::__GraphyManager__ModuleType  Tayx::Graphy::__GraphyManager__ModuleType::RAM{static_cast<int32_t>(0x1)};
constexpr ::Tayx::Graphy::__GraphyManager__ModuleType  Tayx::Graphy::__GraphyManager__ModuleType::AUDIO{static_cast<int32_t>(0x2)};
constexpr ::Tayx::Graphy::__GraphyManager__ModuleType  Tayx::Graphy::__GraphyManager__ModuleType::ADVANCED{static_cast<int32_t>(0x3)};
constexpr void Tayx::Graphy::__GraphyManager__ModuleState::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& Tayx::Graphy::__GraphyManager__ModuleState::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& Tayx::Graphy::__GraphyManager__ModuleState::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Tayx::Graphy::__GraphyManager__ModuleState::__GraphyManager__ModuleState(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::Tayx::Graphy::__GraphyManager__ModuleState  Tayx::Graphy::__GraphyManager__ModuleState::FULL{static_cast<int32_t>(0x0)};
constexpr ::Tayx::Graphy::__GraphyManager__ModuleState  Tayx::Graphy::__GraphyManager__ModuleState::TEXT{static_cast<int32_t>(0x1)};
constexpr ::Tayx::Graphy::__GraphyManager__ModuleState  Tayx::Graphy::__GraphyManager__ModuleState::BASIC{static_cast<int32_t>(0x2)};
constexpr ::Tayx::Graphy::__GraphyManager__ModuleState  Tayx::Graphy::__GraphyManager__ModuleState::BACKGROUND{static_cast<int32_t>(0x3)};
constexpr ::Tayx::Graphy::__GraphyManager__ModuleState  Tayx::Graphy::__GraphyManager__ModuleState::OFF{static_cast<int32_t>(0x4)};
constexpr void Tayx::Graphy::__GraphyManager__ModulePosition::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& Tayx::Graphy::__GraphyManager__ModulePosition::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& Tayx::Graphy::__GraphyManager__ModulePosition::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Tayx::Graphy::__GraphyManager__ModulePosition::__GraphyManager__ModulePosition(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::Tayx::Graphy::__GraphyManager__ModulePosition  Tayx::Graphy::__GraphyManager__ModulePosition::TOP_RIGHT{static_cast<int32_t>(0x0)};
constexpr ::Tayx::Graphy::__GraphyManager__ModulePosition  Tayx::Graphy::__GraphyManager__ModulePosition::TOP_LEFT{static_cast<int32_t>(0x1)};
constexpr ::Tayx::Graphy::__GraphyManager__ModulePosition  Tayx::Graphy::__GraphyManager__ModulePosition::BOTTOM_RIGHT{static_cast<int32_t>(0x2)};
constexpr ::Tayx::Graphy::__GraphyManager__ModulePosition  Tayx::Graphy::__GraphyManager__ModulePosition::BOTTOM_LEFT{static_cast<int32_t>(0x3)};
constexpr ::Tayx::Graphy::__GraphyManager__ModulePosition  Tayx::Graphy::__GraphyManager__ModulePosition::FREE{static_cast<int32_t>(0x4)};
constexpr void Tayx::Graphy::__GraphyManager__LookForAudioListener::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& Tayx::Graphy::__GraphyManager__LookForAudioListener::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& Tayx::Graphy::__GraphyManager__LookForAudioListener::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Tayx::Graphy::__GraphyManager__LookForAudioListener::__GraphyManager__LookForAudioListener(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::Tayx::Graphy::__GraphyManager__LookForAudioListener  Tayx::Graphy::__GraphyManager__LookForAudioListener::ALWAYS{static_cast<int32_t>(0x0)};
constexpr ::Tayx::Graphy::__GraphyManager__LookForAudioListener  Tayx::Graphy::__GraphyManager__LookForAudioListener::ON_SCENE_LOAD{static_cast<int32_t>(0x1)};
constexpr ::Tayx::Graphy::__GraphyManager__LookForAudioListener  Tayx::Graphy::__GraphyManager__LookForAudioListener::NEVER{static_cast<int32_t>(0x2)};
constexpr void Tayx::Graphy::__GraphyManager__ModulePreset::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& Tayx::Graphy::__GraphyManager__ModulePreset::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& Tayx::Graphy::__GraphyManager__ModulePreset::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Tayx::Graphy::__GraphyManager__ModulePreset::__GraphyManager__ModulePreset(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::Tayx::Graphy::__GraphyManager__ModulePreset  Tayx::Graphy::__GraphyManager__ModulePreset::FPS_BASIC{static_cast<int32_t>(0x0)};
constexpr ::Tayx::Graphy::__GraphyManager__ModulePreset  Tayx::Graphy::__GraphyManager__ModulePreset::FPS_TEXT{static_cast<int32_t>(0x1)};
constexpr ::Tayx::Graphy::__GraphyManager__ModulePreset  Tayx::Graphy::__GraphyManager__ModulePreset::FPS_FULL{static_cast<int32_t>(0x2)};
constexpr ::Tayx::Graphy::__GraphyManager__ModulePreset  Tayx::Graphy::__GraphyManager__ModulePreset::FPS_TEXT_RAM_TEXT{static_cast<int32_t>(0x3)};
constexpr ::Tayx::Graphy::__GraphyManager__ModulePreset  Tayx::Graphy::__GraphyManager__ModulePreset::FPS_FULL_RAM_TEXT{static_cast<int32_t>(0x4)};
constexpr ::Tayx::Graphy::__GraphyManager__ModulePreset  Tayx::Graphy::__GraphyManager__ModulePreset::FPS_FULL_RAM_FULL{static_cast<int32_t>(0x5)};
constexpr ::Tayx::Graphy::__GraphyManager__ModulePreset  Tayx::Graphy::__GraphyManager__ModulePreset::FPS_TEXT_RAM_TEXT_AUDIO_TEXT{static_cast<int32_t>(0x6)};
constexpr ::Tayx::Graphy::__GraphyManager__ModulePreset  Tayx::Graphy::__GraphyManager__ModulePreset::FPS_FULL_RAM_TEXT_AUDIO_TEXT{static_cast<int32_t>(0x7)};
constexpr ::Tayx::Graphy::__GraphyManager__ModulePreset  Tayx::Graphy::__GraphyManager__ModulePreset::FPS_FULL_RAM_FULL_AUDIO_TEXT{static_cast<int32_t>(0x8)};
constexpr ::Tayx::Graphy::__GraphyManager__ModulePreset  Tayx::Graphy::__GraphyManager__ModulePreset::FPS_FULL_RAM_FULL_AUDIO_FULL{static_cast<int32_t>(0x9)};
constexpr ::Tayx::Graphy::__GraphyManager__ModulePreset  Tayx::Graphy::__GraphyManager__ModulePreset::FPS_FULL_RAM_FULL_AUDIO_FULL_ADVANCED_FULL{static_cast<int32_t>(0xa)};
constexpr ::Tayx::Graphy::__GraphyManager__ModulePreset  Tayx::Graphy::__GraphyManager__ModulePreset::FPS_BASIC_ADVANCED_FULL{static_cast<int32_t>(0xb)};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::_ctor)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x2a006c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.get_GraphyMode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Tayx::Graphy::__GraphyManager__Mode (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::get_GraphyMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a007f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "get_GraphyMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.set_GraphyMode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::GraphyManager::*)(::Tayx::Graphy::__GraphyManager__Mode)>(&::Tayx::Graphy::GraphyManager::set_GraphyMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a00800;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "set_GraphyMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tayx::Graphy::__GraphyManager__Mode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.get_EnableOnStartup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::get_EnableOnStartup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a00848;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "get_EnableOnStartup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.get_KeepAlive
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::get_KeepAlive)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a00850;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "get_KeepAlive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.get_Background
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::get_Background)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a00858;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "get_Background",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.set_Background
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::GraphyManager::*)(bool)>(&::Tayx::Graphy::GraphyManager::set_Background)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2a00860;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "set_Background",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.get_BackgroundColor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::get_BackgroundColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2a0086c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "get_BackgroundColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.set_BackgroundColor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::GraphyManager::*)(::UnityEngine::Color)>(&::Tayx::Graphy::GraphyManager::set_BackgroundColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2a00878;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "set_BackgroundColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.get_GraphModulePosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Tayx::Graphy::__GraphyManager__ModulePosition (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::get_GraphModulePosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a00884;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "get_GraphModulePosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.set_GraphModulePosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::GraphyManager::*)(::Tayx::Graphy::__GraphyManager__ModulePosition)>(&::Tayx::Graphy::GraphyManager::set_GraphModulePosition)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2a0088c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "set_GraphModulePosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tayx::Graphy::__GraphyManager__ModulePosition>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.get_FpsModuleState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Tayx::Graphy::__GraphyManager__ModuleState (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::get_FpsModuleState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a0119c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "get_FpsModuleState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.set_FpsModuleState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::GraphyManager::*)(::Tayx::Graphy::__GraphyManager__ModuleState)>(&::Tayx::Graphy::GraphyManager::set_FpsModuleState)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2a011a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "set_FpsModuleState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tayx::Graphy::__GraphyManager__ModuleState>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.get_GoodFPSColor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::get_GoodFPSColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2a01378;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "get_GoodFPSColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.set_GoodFPSColor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::GraphyManager::*)(::UnityEngine::Color)>(&::Tayx::Graphy::GraphyManager::set_GoodFPSColor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2a01384;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "set_GoodFPSColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.get_CautionFPSColor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::get_CautionFPSColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2a015a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "get_CautionFPSColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.set_CautionFPSColor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::GraphyManager::*)(::UnityEngine::Color)>(&::Tayx::Graphy::GraphyManager::set_CautionFPSColor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2a015b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "set_CautionFPSColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.get_CriticalFPSColor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::get_CriticalFPSColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2a015d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "get_CriticalFPSColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.set_CriticalFPSColor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::GraphyManager::*)(::UnityEngine::Color)>(&::Tayx::Graphy::GraphyManager::set_CriticalFPSColor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2a015e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "set_CriticalFPSColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.get_GoodFPSThreshold
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::get_GoodFPSThreshold)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a01604;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "get_GoodFPSThreshold",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.set_GoodFPSThreshold
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::GraphyManager::*)(int32_t)>(&::Tayx::Graphy::GraphyManager::set_GoodFPSThreshold)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2a0160c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "set_GoodFPSThreshold",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.get_CautionFPSThreshold
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::get_CautionFPSThreshold)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a0162c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "get_CautionFPSThreshold",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.set_CautionFPSThreshold
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::GraphyManager::*)(int32_t)>(&::Tayx::Graphy::GraphyManager::set_CautionFPSThreshold)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2a01634;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "set_CautionFPSThreshold",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.get_FpsGraphResolution
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::get_FpsGraphResolution)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a01654;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "get_FpsGraphResolution",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.set_FpsGraphResolution
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::GraphyManager::*)(int32_t)>(&::Tayx::Graphy::GraphyManager::set_FpsGraphResolution)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2a0165c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "set_FpsGraphResolution",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.get_FpsTextUpdateRate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::get_FpsTextUpdateRate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a0167c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "get_FpsTextUpdateRate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.set_FpsTextUpdateRate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::GraphyManager::*)(int32_t)>(&::Tayx::Graphy::GraphyManager::set_FpsTextUpdateRate)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2a01684;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "set_FpsTextUpdateRate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.get_CurrentFPS
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::get_CurrentFPS)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2a016a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "get_CurrentFPS",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.get_AverageFPS
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::get_AverageFPS)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2a016c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "get_AverageFPS",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.get_MinFPS
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::get_MinFPS)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2a016e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "get_MinFPS",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.get_MaxFPS
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::get_MaxFPS)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2a01704;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "get_MaxFPS",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.get_RamModuleState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Tayx::Graphy::__GraphyManager__ModuleState (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::get_RamModuleState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a01724;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "get_RamModuleState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.set_RamModuleState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::GraphyManager::*)(::Tayx::Graphy::__GraphyManager__ModuleState)>(&::Tayx::Graphy::GraphyManager::set_RamModuleState)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2a0172c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "set_RamModuleState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tayx::Graphy::__GraphyManager__ModuleState>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.get_AllocatedRamColor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::get_AllocatedRamColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2a018a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "get_AllocatedRamColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.set_AllocatedRamColor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::GraphyManager::*)(::UnityEngine::Color)>(&::Tayx::Graphy::GraphyManager::set_AllocatedRamColor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2a018ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "set_AllocatedRamColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.get_ReservedRamColor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::get_ReservedRamColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2a01a7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "get_ReservedRamColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.set_ReservedRamColor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::GraphyManager::*)(::UnityEngine::Color)>(&::Tayx::Graphy::GraphyManager::set_ReservedRamColor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2a01a88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "set_ReservedRamColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.get_MonoRamColor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::get_MonoRamColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2a01aac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "get_MonoRamColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.set_MonoRamColor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::GraphyManager::*)(::UnityEngine::Color)>(&::Tayx::Graphy::GraphyManager::set_MonoRamColor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2a01ab8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "set_MonoRamColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.get_RamGraphResolution
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::get_RamGraphResolution)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a01adc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "get_RamGraphResolution",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.set_RamGraphResolution
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::GraphyManager::*)(int32_t)>(&::Tayx::Graphy::GraphyManager::set_RamGraphResolution)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2a01ae4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "set_RamGraphResolution",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.get_RamTextUpdateRate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::get_RamTextUpdateRate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a01b04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "get_RamTextUpdateRate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.set_RamTextUpdateRate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::GraphyManager::*)(int32_t)>(&::Tayx::Graphy::GraphyManager::set_RamTextUpdateRate)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2a01b0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "set_RamTextUpdateRate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.get_AllocatedRam
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::get_AllocatedRam)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2a01b2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "get_AllocatedRam",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.get_ReservedRam
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::get_ReservedRam)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2a01b48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "get_ReservedRam",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.get_MonoRam
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::get_MonoRam)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2a01b64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "get_MonoRam",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.get_AudioModuleState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Tayx::Graphy::__GraphyManager__ModuleState (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::get_AudioModuleState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a01b80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "get_AudioModuleState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.set_AudioModuleState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::GraphyManager::*)(::Tayx::Graphy::__GraphyManager__ModuleState)>(&::Tayx::Graphy::GraphyManager::set_AudioModuleState)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2a01b88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "set_AudioModuleState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tayx::Graphy::__GraphyManager__ModuleState>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.get_AudioListener
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AudioListener* (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::get_AudioListener)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a01cfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "get_AudioListener",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.set_AudioListener
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::GraphyManager::*)(::UnityEngine::AudioListener*)>(&::Tayx::Graphy::GraphyManager::set_AudioListener)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2a01d04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "set_AudioListener",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioListener*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.get_FindAudioListenerInCameraIfNull
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Tayx::Graphy::__GraphyManager__LookForAudioListener (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::get_FindAudioListenerInCameraIfNull)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a01ee8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "get_FindAudioListenerInCameraIfNull",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.set_FindAudioListenerInCameraIfNull
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::GraphyManager::*)(::Tayx::Graphy::__GraphyManager__LookForAudioListener)>(&::Tayx::Graphy::GraphyManager::set_FindAudioListenerInCameraIfNull)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2a01ef0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "set_FindAudioListenerInCameraIfNull",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tayx::Graphy::__GraphyManager__LookForAudioListener>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.get_AudioGraphColor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::get_AudioGraphColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2a01f10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "get_AudioGraphColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.set_AudioGraphColor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::GraphyManager::*)(::UnityEngine::Color)>(&::Tayx::Graphy::GraphyManager::set_AudioGraphColor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2a01f1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "set_AudioGraphColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.get_AudioGraphResolution
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::get_AudioGraphResolution)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a01f40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "get_AudioGraphResolution",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.set_AudioGraphResolution
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::GraphyManager::*)(int32_t)>(&::Tayx::Graphy::GraphyManager::set_AudioGraphResolution)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2a01f48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "set_AudioGraphResolution",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.get_AudioTextUpdateRate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::get_AudioTextUpdateRate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a01f68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "get_AudioTextUpdateRate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.set_AudioTextUpdateRate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::GraphyManager::*)(int32_t)>(&::Tayx::Graphy::GraphyManager::set_AudioTextUpdateRate)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2a01f70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "set_AudioTextUpdateRate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.get_FftWindow
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::FFTWindow (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::get_FftWindow)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a01f90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "get_FftWindow",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.set_FftWindow
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::GraphyManager::*)(::UnityEngine::FFTWindow)>(&::Tayx::Graphy::GraphyManager::set_FftWindow)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2a01f98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "set_FftWindow",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::FFTWindow>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.get_SpectrumSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::get_SpectrumSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a01fb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "get_SpectrumSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.set_SpectrumSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::GraphyManager::*)(int32_t)>(&::Tayx::Graphy::GraphyManager::set_SpectrumSize)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2a01fc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "set_SpectrumSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.get_Spectrum
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<float_t,::Array<float_t>*> (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::get_Spectrum)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2a01fe0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "get_Spectrum",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.get_MaxDB
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::get_MaxDB)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2a01ffc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "get_MaxDB",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.get_AdvancedModuleState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Tayx::Graphy::__GraphyManager__ModuleState (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::get_AdvancedModuleState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a02018;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "get_AdvancedModuleState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.set_AdvancedModuleState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::GraphyManager::*)(::Tayx::Graphy::__GraphyManager__ModuleState)>(&::Tayx::Graphy::GraphyManager::set_AdvancedModuleState)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2a02020;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "set_AdvancedModuleState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tayx::Graphy::__GraphyManager__ModuleState>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.get_AdvancedModulePosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Tayx::Graphy::__GraphyManager__ModulePosition (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::get_AdvancedModulePosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a020bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "get_AdvancedModulePosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.set_AdvancedModulePosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::GraphyManager::*)(::Tayx::Graphy::__GraphyManager__ModulePosition)>(&::Tayx::Graphy::GraphyManager::set_AdvancedModulePosition)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2a020c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "set_AdvancedModulePosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tayx::Graphy::__GraphyManager__ModulePosition>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2a02744;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::OnDestroy)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2a02cd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::Update)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2a02e7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.OnApplicationFocus
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::GraphyManager::*)(bool)>(&::Tayx::Graphy::GraphyManager::OnApplicationFocus)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2a02ffc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "OnApplicationFocus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.SetModulePosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::GraphyManager::*)(::Tayx::Graphy::__GraphyManager__ModuleType, ::Tayx::Graphy::__GraphyManager__ModulePosition)>(&::Tayx::Graphy::GraphyManager::SetModulePosition)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2a03058;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "SetModulePosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tayx::Graphy::__GraphyManager__ModuleType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tayx::Graphy::__GraphyManager__ModulePosition>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.SetModuleMode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::GraphyManager::*)(::Tayx::Graphy::__GraphyManager__ModuleType, ::Tayx::Graphy::__GraphyManager__ModuleState)>(&::Tayx::Graphy::GraphyManager::SetModuleMode)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2a030d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "SetModuleMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tayx::Graphy::__GraphyManager__ModuleType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tayx::Graphy::__GraphyManager__ModuleState>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.ToggleModes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::ToggleModes)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2a0316c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "ToggleModes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.SetPreset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::GraphyManager::*)(::Tayx::Graphy::__GraphyManager__ModulePreset)>(&::Tayx::Graphy::GraphyManager::SetPreset)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x2a03254;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "SetPreset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tayx::Graphy::__GraphyManager__ModulePreset>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.ToggleActive
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::ToggleActive)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a034e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "ToggleActive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.Enable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::Enable)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2a034f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "Enable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.Disable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::Disable)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2a03580;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "Disable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::Init)> {
  constexpr static std::size_t size = 0x590;
  constexpr static std::size_t addrs = 0x2a02748;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.CheckForHotkeyPresses
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::CheckForHotkeyPresses)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x2a02e94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "CheckForHotkeyPresses",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.CheckFor1KeyPress
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Tayx::Graphy::GraphyManager::*)(::UnityEngine::InputSystem::Key)>(&::Tayx::Graphy::GraphyManager::CheckFor1KeyPress)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2a05960;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "CheckFor1KeyPress",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Key>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.CheckFor2KeyPress
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Tayx::Graphy::GraphyManager::*)(::UnityEngine::InputSystem::Key, ::UnityEngine::InputSystem::Key)>(&::Tayx::Graphy::GraphyManager::CheckFor2KeyPress)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x2a057f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "CheckFor2KeyPress",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Key>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Key>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.CheckFor3KeyPress
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Tayx::Graphy::GraphyManager::*)(::UnityEngine::InputSystem::Key, ::UnityEngine::InputSystem::Key, ::UnityEngine::InputSystem::Key)>(&::Tayx::Graphy::GraphyManager::CheckFor3KeyPress)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x2a05524;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "CheckFor3KeyPress",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Key>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Key>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Key>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.UpdateAllParameters
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::UpdateAllParameters)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2a00808;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "UpdateAllParameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyManager.RefreshAllParameters
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::GraphyManager::*)()>(&::Tayx::Graphy::GraphyManager::RefreshAllParameters)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2a03018;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "RefreshAllParameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void Tayx::Graphy::GraphyManager::__set_m_graphyMode(::Tayx::Graphy::__GraphyManager__Mode  value)  {
::cordl_internals::setInstanceField<::Tayx::Graphy::__GraphyManager__Mode, 0x18>(this, std::forward<::Tayx::Graphy::__GraphyManager__Mode>(value));
}
constexpr ::Tayx::Graphy::__GraphyManager__Mode& Tayx::Graphy::GraphyManager::__get_m_graphyMode()  {
return ::cordl_internals::getInstanceField<::Tayx::Graphy::__GraphyManager__Mode, 0x18>(this);
}
constexpr ::Tayx::Graphy::__GraphyManager__Mode const& Tayx::Graphy::GraphyManager::__get_m_graphyMode() const {
return ::cordl_internals::getInstanceField<::Tayx::Graphy::__GraphyManager__Mode, 0x18>(this);
}
constexpr void Tayx::Graphy::GraphyManager::__set_m_enableOnStartup(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x1c>(this, std::forward<bool>(value));
}
constexpr bool& Tayx::Graphy::GraphyManager::__get_m_enableOnStartup()  {
return ::cordl_internals::getInstanceField<bool, 0x1c>(this);
}
constexpr bool const& Tayx::Graphy::GraphyManager::__get_m_enableOnStartup() const {
return ::cordl_internals::getInstanceField<bool, 0x1c>(this);
}
constexpr void Tayx::Graphy::GraphyManager::__set_m_keepAlive(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x1d>(this, std::forward<bool>(value));
}
constexpr bool& Tayx::Graphy::GraphyManager::__get_m_keepAlive()  {
return ::cordl_internals::getInstanceField<bool, 0x1d>(this);
}
constexpr bool const& Tayx::Graphy::GraphyManager::__get_m_keepAlive() const {
return ::cordl_internals::getInstanceField<bool, 0x1d>(this);
}
constexpr void Tayx::Graphy::GraphyManager::__set_m_background(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x1e>(this, std::forward<bool>(value));
}
constexpr bool& Tayx::Graphy::GraphyManager::__get_m_background()  {
return ::cordl_internals::getInstanceField<bool, 0x1e>(this);
}
constexpr bool const& Tayx::Graphy::GraphyManager::__get_m_background() const {
return ::cordl_internals::getInstanceField<bool, 0x1e>(this);
}
constexpr void Tayx::Graphy::GraphyManager::__set_m_backgroundColor(::UnityEngine::Color  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color, 0x20>(this, std::forward<::UnityEngine::Color>(value));
}
constexpr ::UnityEngine::Color& Tayx::Graphy::GraphyManager::__get_m_backgroundColor()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x20>(this);
}
constexpr ::UnityEngine::Color const& Tayx::Graphy::GraphyManager::__get_m_backgroundColor() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x20>(this);
}
constexpr void Tayx::Graphy::GraphyManager::__set_m_enableHotkeys(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x30>(this, std::forward<bool>(value));
}
constexpr bool& Tayx::Graphy::GraphyManager::__get_m_enableHotkeys()  {
return ::cordl_internals::getInstanceField<bool, 0x30>(this);
}
constexpr bool const& Tayx::Graphy::GraphyManager::__get_m_enableHotkeys() const {
return ::cordl_internals::getInstanceField<bool, 0x30>(this);
}
constexpr void Tayx::Graphy::GraphyManager::__set_m_toggleModeKeyCode(::UnityEngine::InputSystem::Key  value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::Key, 0x34>(this, std::forward<::UnityEngine::InputSystem::Key>(value));
}
constexpr ::UnityEngine::InputSystem::Key& Tayx::Graphy::GraphyManager::__get_m_toggleModeKeyCode()  {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::Key, 0x34>(this);
}
constexpr ::UnityEngine::InputSystem::Key const& Tayx::Graphy::GraphyManager::__get_m_toggleModeKeyCode() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::Key, 0x34>(this);
}
constexpr void Tayx::Graphy::GraphyManager::__set_m_toggleModeCtrl(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x38>(this, std::forward<bool>(value));
}
constexpr bool& Tayx::Graphy::GraphyManager::__get_m_toggleModeCtrl()  {
return ::cordl_internals::getInstanceField<bool, 0x38>(this);
}
constexpr bool const& Tayx::Graphy::GraphyManager::__get_m_toggleModeCtrl() const {
return ::cordl_internals::getInstanceField<bool, 0x38>(this);
}
constexpr void Tayx::Graphy::GraphyManager::__set_m_toggleModeAlt(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x39>(this, std::forward<bool>(value));
}
constexpr bool& Tayx::Graphy::GraphyManager::__get_m_toggleModeAlt()  {
return ::cordl_internals::getInstanceField<bool, 0x39>(this);
}
constexpr bool const& Tayx::Graphy::GraphyManager::__get_m_toggleModeAlt() const {
return ::cordl_internals::getInstanceField<bool, 0x39>(this);
}
constexpr void Tayx::Graphy::GraphyManager::__set_m_toggleActiveKeyCode(::UnityEngine::InputSystem::Key  value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::Key, 0x3c>(this, std::forward<::UnityEngine::InputSystem::Key>(value));
}
constexpr ::UnityEngine::InputSystem::Key& Tayx::Graphy::GraphyManager::__get_m_toggleActiveKeyCode()  {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::Key, 0x3c>(this);
}
constexpr ::UnityEngine::InputSystem::Key const& Tayx::Graphy::GraphyManager::__get_m_toggleActiveKeyCode() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::Key, 0x3c>(this);
}
constexpr void Tayx::Graphy::GraphyManager::__set_m_toggleActiveCtrl(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x40>(this, std::forward<bool>(value));
}
constexpr bool& Tayx::Graphy::GraphyManager::__get_m_toggleActiveCtrl()  {
return ::cordl_internals::getInstanceField<bool, 0x40>(this);
}
constexpr bool const& Tayx::Graphy::GraphyManager::__get_m_toggleActiveCtrl() const {
return ::cordl_internals::getInstanceField<bool, 0x40>(this);
}
constexpr void Tayx::Graphy::GraphyManager::__set_m_toggleActiveAlt(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x41>(this, std::forward<bool>(value));
}
constexpr bool& Tayx::Graphy::GraphyManager::__get_m_toggleActiveAlt()  {
return ::cordl_internals::getInstanceField<bool, 0x41>(this);
}
constexpr bool const& Tayx::Graphy::GraphyManager::__get_m_toggleActiveAlt() const {
return ::cordl_internals::getInstanceField<bool, 0x41>(this);
}
constexpr void Tayx::Graphy::GraphyManager::__set_m_graphModulePosition(::Tayx::Graphy::__GraphyManager__ModulePosition  value)  {
::cordl_internals::setInstanceField<::Tayx::Graphy::__GraphyManager__ModulePosition, 0x44>(this, std::forward<::Tayx::Graphy::__GraphyManager__ModulePosition>(value));
}
constexpr ::Tayx::Graphy::__GraphyManager__ModulePosition& Tayx::Graphy::GraphyManager::__get_m_graphModulePosition()  {
return ::cordl_internals::getInstanceField<::Tayx::Graphy::__GraphyManager__ModulePosition, 0x44>(this);
}
constexpr ::Tayx::Graphy::__GraphyManager__ModulePosition const& Tayx::Graphy::GraphyManager::__get_m_graphModulePosition() const {
return ::cordl_internals::getInstanceField<::Tayx::Graphy::__GraphyManager__ModulePosition, 0x44>(this);
}
constexpr void Tayx::Graphy::GraphyManager::__set_m_fpsModuleState(::Tayx::Graphy::__GraphyManager__ModuleState  value)  {
::cordl_internals::setInstanceField<::Tayx::Graphy::__GraphyManager__ModuleState, 0x48>(this, std::forward<::Tayx::Graphy::__GraphyManager__ModuleState>(value));
}
constexpr ::Tayx::Graphy::__GraphyManager__ModuleState& Tayx::Graphy::GraphyManager::__get_m_fpsModuleState()  {
return ::cordl_internals::getInstanceField<::Tayx::Graphy::__GraphyManager__ModuleState, 0x48>(this);
}
constexpr ::Tayx::Graphy::__GraphyManager__ModuleState const& Tayx::Graphy::GraphyManager::__get_m_fpsModuleState() const {
return ::cordl_internals::getInstanceField<::Tayx::Graphy::__GraphyManager__ModuleState, 0x48>(this);
}
constexpr void Tayx::Graphy::GraphyManager::__set_m_goodFpsColor(::UnityEngine::Color  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color, 0x4c>(this, std::forward<::UnityEngine::Color>(value));
}
constexpr ::UnityEngine::Color& Tayx::Graphy::GraphyManager::__get_m_goodFpsColor()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x4c>(this);
}
constexpr ::UnityEngine::Color const& Tayx::Graphy::GraphyManager::__get_m_goodFpsColor() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x4c>(this);
}
constexpr void Tayx::Graphy::GraphyManager::__set_m_goodFpsThreshold(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x5c>(this, std::forward<int32_t>(value));
}
constexpr int32_t& Tayx::Graphy::GraphyManager::__get_m_goodFpsThreshold()  {
return ::cordl_internals::getInstanceField<int32_t, 0x5c>(this);
}
constexpr int32_t const& Tayx::Graphy::GraphyManager::__get_m_goodFpsThreshold() const {
return ::cordl_internals::getInstanceField<int32_t, 0x5c>(this);
}
constexpr void Tayx::Graphy::GraphyManager::__set_m_cautionFpsColor(::UnityEngine::Color  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color, 0x60>(this, std::forward<::UnityEngine::Color>(value));
}
constexpr ::UnityEngine::Color& Tayx::Graphy::GraphyManager::__get_m_cautionFpsColor()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x60>(this);
}
constexpr ::UnityEngine::Color const& Tayx::Graphy::GraphyManager::__get_m_cautionFpsColor() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x60>(this);
}
constexpr void Tayx::Graphy::GraphyManager::__set_m_cautionFpsThreshold(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x70>(this, std::forward<int32_t>(value));
}
constexpr int32_t& Tayx::Graphy::GraphyManager::__get_m_cautionFpsThreshold()  {
return ::cordl_internals::getInstanceField<int32_t, 0x70>(this);
}
constexpr int32_t const& Tayx::Graphy::GraphyManager::__get_m_cautionFpsThreshold() const {
return ::cordl_internals::getInstanceField<int32_t, 0x70>(this);
}
constexpr void Tayx::Graphy::GraphyManager::__set_m_criticalFpsColor(::UnityEngine::Color  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color, 0x74>(this, std::forward<::UnityEngine::Color>(value));
}
constexpr ::UnityEngine::Color& Tayx::Graphy::GraphyManager::__get_m_criticalFpsColor()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x74>(this);
}
constexpr ::UnityEngine::Color const& Tayx::Graphy::GraphyManager::__get_m_criticalFpsColor() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x74>(this);
}
constexpr void Tayx::Graphy::GraphyManager::__set_m_fpsGraphResolution(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x84>(this, std::forward<int32_t>(value));
}
constexpr int32_t& Tayx::Graphy::GraphyManager::__get_m_fpsGraphResolution()  {
return ::cordl_internals::getInstanceField<int32_t, 0x84>(this);
}
constexpr int32_t const& Tayx::Graphy::GraphyManager::__get_m_fpsGraphResolution() const {
return ::cordl_internals::getInstanceField<int32_t, 0x84>(this);
}
constexpr void Tayx::Graphy::GraphyManager::__set_m_fpsTextUpdateRate(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x88>(this, std::forward<int32_t>(value));
}
constexpr int32_t& Tayx::Graphy::GraphyManager::__get_m_fpsTextUpdateRate()  {
return ::cordl_internals::getInstanceField<int32_t, 0x88>(this);
}
constexpr int32_t const& Tayx::Graphy::GraphyManager::__get_m_fpsTextUpdateRate() const {
return ::cordl_internals::getInstanceField<int32_t, 0x88>(this);
}
constexpr void Tayx::Graphy::GraphyManager::__set_m_ramModuleState(::Tayx::Graphy::__GraphyManager__ModuleState  value)  {
::cordl_internals::setInstanceField<::Tayx::Graphy::__GraphyManager__ModuleState, 0x8c>(this, std::forward<::Tayx::Graphy::__GraphyManager__ModuleState>(value));
}
constexpr ::Tayx::Graphy::__GraphyManager__ModuleState& Tayx::Graphy::GraphyManager::__get_m_ramModuleState()  {
return ::cordl_internals::getInstanceField<::Tayx::Graphy::__GraphyManager__ModuleState, 0x8c>(this);
}
constexpr ::Tayx::Graphy::__GraphyManager__ModuleState const& Tayx::Graphy::GraphyManager::__get_m_ramModuleState() const {
return ::cordl_internals::getInstanceField<::Tayx::Graphy::__GraphyManager__ModuleState, 0x8c>(this);
}
constexpr void Tayx::Graphy::GraphyManager::__set_m_allocatedRamColor(::UnityEngine::Color  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color, 0x90>(this, std::forward<::UnityEngine::Color>(value));
}
constexpr ::UnityEngine::Color& Tayx::Graphy::GraphyManager::__get_m_allocatedRamColor()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x90>(this);
}
constexpr ::UnityEngine::Color const& Tayx::Graphy::GraphyManager::__get_m_allocatedRamColor() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x90>(this);
}
constexpr void Tayx::Graphy::GraphyManager::__set_m_reservedRamColor(::UnityEngine::Color  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color, 0xa0>(this, std::forward<::UnityEngine::Color>(value));
}
constexpr ::UnityEngine::Color& Tayx::Graphy::GraphyManager::__get_m_reservedRamColor()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0xa0>(this);
}
constexpr ::UnityEngine::Color const& Tayx::Graphy::GraphyManager::__get_m_reservedRamColor() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0xa0>(this);
}
constexpr void Tayx::Graphy::GraphyManager::__set_m_monoRamColor(::UnityEngine::Color  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color, 0xb0>(this, std::forward<::UnityEngine::Color>(value));
}
constexpr ::UnityEngine::Color& Tayx::Graphy::GraphyManager::__get_m_monoRamColor()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0xb0>(this);
}
constexpr ::UnityEngine::Color const& Tayx::Graphy::GraphyManager::__get_m_monoRamColor() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0xb0>(this);
}
constexpr void Tayx::Graphy::GraphyManager::__set_m_ramGraphResolution(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0xc0>(this, std::forward<int32_t>(value));
}
constexpr int32_t& Tayx::Graphy::GraphyManager::__get_m_ramGraphResolution()  {
return ::cordl_internals::getInstanceField<int32_t, 0xc0>(this);
}
constexpr int32_t const& Tayx::Graphy::GraphyManager::__get_m_ramGraphResolution() const {
return ::cordl_internals::getInstanceField<int32_t, 0xc0>(this);
}
constexpr void Tayx::Graphy::GraphyManager::__set_m_ramTextUpdateRate(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0xc4>(this, std::forward<int32_t>(value));
}
constexpr int32_t& Tayx::Graphy::GraphyManager::__get_m_ramTextUpdateRate()  {
return ::cordl_internals::getInstanceField<int32_t, 0xc4>(this);
}
constexpr int32_t const& Tayx::Graphy::GraphyManager::__get_m_ramTextUpdateRate() const {
return ::cordl_internals::getInstanceField<int32_t, 0xc4>(this);
}
constexpr void Tayx::Graphy::GraphyManager::__set_m_audioModuleState(::Tayx::Graphy::__GraphyManager__ModuleState  value)  {
::cordl_internals::setInstanceField<::Tayx::Graphy::__GraphyManager__ModuleState, 0xc8>(this, std::forward<::Tayx::Graphy::__GraphyManager__ModuleState>(value));
}
constexpr ::Tayx::Graphy::__GraphyManager__ModuleState& Tayx::Graphy::GraphyManager::__get_m_audioModuleState()  {
return ::cordl_internals::getInstanceField<::Tayx::Graphy::__GraphyManager__ModuleState, 0xc8>(this);
}
constexpr ::Tayx::Graphy::__GraphyManager__ModuleState const& Tayx::Graphy::GraphyManager::__get_m_audioModuleState() const {
return ::cordl_internals::getInstanceField<::Tayx::Graphy::__GraphyManager__ModuleState, 0xc8>(this);
}
constexpr void Tayx::Graphy::GraphyManager::__set_m_findAudioListenerInCameraIfNull(::Tayx::Graphy::__GraphyManager__LookForAudioListener  value)  {
::cordl_internals::setInstanceField<::Tayx::Graphy::__GraphyManager__LookForAudioListener, 0xcc>(this, std::forward<::Tayx::Graphy::__GraphyManager__LookForAudioListener>(value));
}
constexpr ::Tayx::Graphy::__GraphyManager__LookForAudioListener& Tayx::Graphy::GraphyManager::__get_m_findAudioListenerInCameraIfNull()  {
return ::cordl_internals::getInstanceField<::Tayx::Graphy::__GraphyManager__LookForAudioListener, 0xcc>(this);
}
constexpr ::Tayx::Graphy::__GraphyManager__LookForAudioListener const& Tayx::Graphy::GraphyManager::__get_m_findAudioListenerInCameraIfNull() const {
return ::cordl_internals::getInstanceField<::Tayx::Graphy::__GraphyManager__LookForAudioListener, 0xcc>(this);
}
constexpr void Tayx::Graphy::GraphyManager::__set_m_audioListener(::UnityEngine::AudioListener*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::AudioListener*, 0xd0>(this, std::forward<::UnityEngine::AudioListener*>(value));
}
constexpr ::UnityEngine::AudioListener* Tayx::Graphy::GraphyManager::__get_m_audioListener()  {
return ::cordl_internals::getInstanceField<::UnityEngine::AudioListener*, 0xd0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AudioListener*> Tayx::Graphy::GraphyManager::__get_m_audioListener() const {
return ::cordl_internals::getInstanceField<::UnityEngine::AudioListener*, 0xd0>(this);
}
constexpr void Tayx::Graphy::GraphyManager::__set_m_audioGraphColor(::UnityEngine::Color  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color, 0xd8>(this, std::forward<::UnityEngine::Color>(value));
}
constexpr ::UnityEngine::Color& Tayx::Graphy::GraphyManager::__get_m_audioGraphColor()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0xd8>(this);
}
constexpr ::UnityEngine::Color const& Tayx::Graphy::GraphyManager::__get_m_audioGraphColor() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0xd8>(this);
}
constexpr void Tayx::Graphy::GraphyManager::__set_m_audioGraphResolution(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0xe8>(this, std::forward<int32_t>(value));
}
constexpr int32_t& Tayx::Graphy::GraphyManager::__get_m_audioGraphResolution()  {
return ::cordl_internals::getInstanceField<int32_t, 0xe8>(this);
}
constexpr int32_t const& Tayx::Graphy::GraphyManager::__get_m_audioGraphResolution() const {
return ::cordl_internals::getInstanceField<int32_t, 0xe8>(this);
}
constexpr void Tayx::Graphy::GraphyManager::__set_m_audioTextUpdateRate(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0xec>(this, std::forward<int32_t>(value));
}
constexpr int32_t& Tayx::Graphy::GraphyManager::__get_m_audioTextUpdateRate()  {
return ::cordl_internals::getInstanceField<int32_t, 0xec>(this);
}
constexpr int32_t const& Tayx::Graphy::GraphyManager::__get_m_audioTextUpdateRate() const {
return ::cordl_internals::getInstanceField<int32_t, 0xec>(this);
}
constexpr void Tayx::Graphy::GraphyManager::__set_m_FFTWindow(::UnityEngine::FFTWindow  value)  {
::cordl_internals::setInstanceField<::UnityEngine::FFTWindow, 0xf0>(this, std::forward<::UnityEngine::FFTWindow>(value));
}
constexpr ::UnityEngine::FFTWindow& Tayx::Graphy::GraphyManager::__get_m_FFTWindow()  {
return ::cordl_internals::getInstanceField<::UnityEngine::FFTWindow, 0xf0>(this);
}
constexpr ::UnityEngine::FFTWindow const& Tayx::Graphy::GraphyManager::__get_m_FFTWindow() const {
return ::cordl_internals::getInstanceField<::UnityEngine::FFTWindow, 0xf0>(this);
}
constexpr void Tayx::Graphy::GraphyManager::__set_m_spectrumSize(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0xf4>(this, std::forward<int32_t>(value));
}
constexpr int32_t& Tayx::Graphy::GraphyManager::__get_m_spectrumSize()  {
return ::cordl_internals::getInstanceField<int32_t, 0xf4>(this);
}
constexpr int32_t const& Tayx::Graphy::GraphyManager::__get_m_spectrumSize() const {
return ::cordl_internals::getInstanceField<int32_t, 0xf4>(this);
}
constexpr void Tayx::Graphy::GraphyManager::__set_m_advancedModulePosition(::Tayx::Graphy::__GraphyManager__ModulePosition  value)  {
::cordl_internals::setInstanceField<::Tayx::Graphy::__GraphyManager__ModulePosition, 0xf8>(this, std::forward<::Tayx::Graphy::__GraphyManager__ModulePosition>(value));
}
constexpr ::Tayx::Graphy::__GraphyManager__ModulePosition& Tayx::Graphy::GraphyManager::__get_m_advancedModulePosition()  {
return ::cordl_internals::getInstanceField<::Tayx::Graphy::__GraphyManager__ModulePosition, 0xf8>(this);
}
constexpr ::Tayx::Graphy::__GraphyManager__ModulePosition const& Tayx::Graphy::GraphyManager::__get_m_advancedModulePosition() const {
return ::cordl_internals::getInstanceField<::Tayx::Graphy::__GraphyManager__ModulePosition, 0xf8>(this);
}
constexpr void Tayx::Graphy::GraphyManager::__set_m_advancedModuleState(::Tayx::Graphy::__GraphyManager__ModuleState  value)  {
::cordl_internals::setInstanceField<::Tayx::Graphy::__GraphyManager__ModuleState, 0xfc>(this, std::forward<::Tayx::Graphy::__GraphyManager__ModuleState>(value));
}
constexpr ::Tayx::Graphy::__GraphyManager__ModuleState& Tayx::Graphy::GraphyManager::__get_m_advancedModuleState()  {
return ::cordl_internals::getInstanceField<::Tayx::Graphy::__GraphyManager__ModuleState, 0xfc>(this);
}
constexpr ::Tayx::Graphy::__GraphyManager__ModuleState const& Tayx::Graphy::GraphyManager::__get_m_advancedModuleState() const {
return ::cordl_internals::getInstanceField<::Tayx::Graphy::__GraphyManager__ModuleState, 0xfc>(this);
}
constexpr void Tayx::Graphy::GraphyManager::__set_m_initialized(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x100>(this, std::forward<bool>(value));
}
constexpr bool& Tayx::Graphy::GraphyManager::__get_m_initialized()  {
return ::cordl_internals::getInstanceField<bool, 0x100>(this);
}
constexpr bool const& Tayx::Graphy::GraphyManager::__get_m_initialized() const {
return ::cordl_internals::getInstanceField<bool, 0x100>(this);
}
constexpr void Tayx::Graphy::GraphyManager::__set_m_active(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x101>(this, std::forward<bool>(value));
}
constexpr bool& Tayx::Graphy::GraphyManager::__get_m_active()  {
return ::cordl_internals::getInstanceField<bool, 0x101>(this);
}
constexpr bool const& Tayx::Graphy::GraphyManager::__get_m_active() const {
return ::cordl_internals::getInstanceField<bool, 0x101>(this);
}
constexpr void Tayx::Graphy::GraphyManager::__set_m_focused(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x102>(this, std::forward<bool>(value));
}
constexpr bool& Tayx::Graphy::GraphyManager::__get_m_focused()  {
return ::cordl_internals::getInstanceField<bool, 0x102>(this);
}
constexpr bool const& Tayx::Graphy::GraphyManager::__get_m_focused() const {
return ::cordl_internals::getInstanceField<bool, 0x102>(this);
}
constexpr void Tayx::Graphy::GraphyManager::__set_m_fpsManager(::Tayx::Graphy::Fps::G_FpsManager*  value)  {
::cordl_internals::setInstanceField<::Tayx::Graphy::Fps::G_FpsManager*, 0x108>(this, std::forward<::Tayx::Graphy::Fps::G_FpsManager*>(value));
}
constexpr ::Tayx::Graphy::Fps::G_FpsManager* Tayx::Graphy::GraphyManager::__get_m_fpsManager()  {
return ::cordl_internals::getInstanceField<::Tayx::Graphy::Fps::G_FpsManager*, 0x108>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Tayx::Graphy::Fps::G_FpsManager*> Tayx::Graphy::GraphyManager::__get_m_fpsManager() const {
return ::cordl_internals::getInstanceField<::Tayx::Graphy::Fps::G_FpsManager*, 0x108>(this);
}
constexpr void Tayx::Graphy::GraphyManager::__set_m_ramManager(::Tayx::Graphy::Ram::G_RamManager*  value)  {
::cordl_internals::setInstanceField<::Tayx::Graphy::Ram::G_RamManager*, 0x110>(this, std::forward<::Tayx::Graphy::Ram::G_RamManager*>(value));
}
constexpr ::Tayx::Graphy::Ram::G_RamManager* Tayx::Graphy::GraphyManager::__get_m_ramManager()  {
return ::cordl_internals::getInstanceField<::Tayx::Graphy::Ram::G_RamManager*, 0x110>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Tayx::Graphy::Ram::G_RamManager*> Tayx::Graphy::GraphyManager::__get_m_ramManager() const {
return ::cordl_internals::getInstanceField<::Tayx::Graphy::Ram::G_RamManager*, 0x110>(this);
}
constexpr void Tayx::Graphy::GraphyManager::__set_m_audioManager(::Tayx::Graphy::Audio::G_AudioManager*  value)  {
::cordl_internals::setInstanceField<::Tayx::Graphy::Audio::G_AudioManager*, 0x118>(this, std::forward<::Tayx::Graphy::Audio::G_AudioManager*>(value));
}
constexpr ::Tayx::Graphy::Audio::G_AudioManager* Tayx::Graphy::GraphyManager::__get_m_audioManager()  {
return ::cordl_internals::getInstanceField<::Tayx::Graphy::Audio::G_AudioManager*, 0x118>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Tayx::Graphy::Audio::G_AudioManager*> Tayx::Graphy::GraphyManager::__get_m_audioManager() const {
return ::cordl_internals::getInstanceField<::Tayx::Graphy::Audio::G_AudioManager*, 0x118>(this);
}
constexpr void Tayx::Graphy::GraphyManager::__set_m_advancedData(::Tayx::Graphy::Advanced::G_AdvancedData*  value)  {
::cordl_internals::setInstanceField<::Tayx::Graphy::Advanced::G_AdvancedData*, 0x120>(this, std::forward<::Tayx::Graphy::Advanced::G_AdvancedData*>(value));
}
constexpr ::Tayx::Graphy::Advanced::G_AdvancedData* Tayx::Graphy::GraphyManager::__get_m_advancedData()  {
return ::cordl_internals::getInstanceField<::Tayx::Graphy::Advanced::G_AdvancedData*, 0x120>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Tayx::Graphy::Advanced::G_AdvancedData*> Tayx::Graphy::GraphyManager::__get_m_advancedData() const {
return ::cordl_internals::getInstanceField<::Tayx::Graphy::Advanced::G_AdvancedData*, 0x120>(this);
}
constexpr void Tayx::Graphy::GraphyManager::__set_m_fpsMonitor(::Tayx::Graphy::Fps::G_FpsMonitor*  value)  {
::cordl_internals::setInstanceField<::Tayx::Graphy::Fps::G_FpsMonitor*, 0x128>(this, std::forward<::Tayx::Graphy::Fps::G_FpsMonitor*>(value));
}
constexpr ::Tayx::Graphy::Fps::G_FpsMonitor* Tayx::Graphy::GraphyManager::__get_m_fpsMonitor()  {
return ::cordl_internals::getInstanceField<::Tayx::Graphy::Fps::G_FpsMonitor*, 0x128>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Tayx::Graphy::Fps::G_FpsMonitor*> Tayx::Graphy::GraphyManager::__get_m_fpsMonitor() const {
return ::cordl_internals::getInstanceField<::Tayx::Graphy::Fps::G_FpsMonitor*, 0x128>(this);
}
constexpr void Tayx::Graphy::GraphyManager::__set_m_ramMonitor(::Tayx::Graphy::Ram::G_RamMonitor*  value)  {
::cordl_internals::setInstanceField<::Tayx::Graphy::Ram::G_RamMonitor*, 0x130>(this, std::forward<::Tayx::Graphy::Ram::G_RamMonitor*>(value));
}
constexpr ::Tayx::Graphy::Ram::G_RamMonitor* Tayx::Graphy::GraphyManager::__get_m_ramMonitor()  {
return ::cordl_internals::getInstanceField<::Tayx::Graphy::Ram::G_RamMonitor*, 0x130>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Tayx::Graphy::Ram::G_RamMonitor*> Tayx::Graphy::GraphyManager::__get_m_ramMonitor() const {
return ::cordl_internals::getInstanceField<::Tayx::Graphy::Ram::G_RamMonitor*, 0x130>(this);
}
constexpr void Tayx::Graphy::GraphyManager::__set_m_audioMonitor(::Tayx::Graphy::Audio::G_AudioMonitor*  value)  {
::cordl_internals::setInstanceField<::Tayx::Graphy::Audio::G_AudioMonitor*, 0x138>(this, std::forward<::Tayx::Graphy::Audio::G_AudioMonitor*>(value));
}
constexpr ::Tayx::Graphy::Audio::G_AudioMonitor* Tayx::Graphy::GraphyManager::__get_m_audioMonitor()  {
return ::cordl_internals::getInstanceField<::Tayx::Graphy::Audio::G_AudioMonitor*, 0x138>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Tayx::Graphy::Audio::G_AudioMonitor*> Tayx::Graphy::GraphyManager::__get_m_audioMonitor() const {
return ::cordl_internals::getInstanceField<::Tayx::Graphy::Audio::G_AudioMonitor*, 0x138>(this);
}
constexpr void Tayx::Graphy::GraphyManager::__set_m_modulePresetState(::Tayx::Graphy::__GraphyManager__ModulePreset  value)  {
::cordl_internals::setInstanceField<::Tayx::Graphy::__GraphyManager__ModulePreset, 0x140>(this, std::forward<::Tayx::Graphy::__GraphyManager__ModulePreset>(value));
}
constexpr ::Tayx::Graphy::__GraphyManager__ModulePreset& Tayx::Graphy::GraphyManager::__get_m_modulePresetState()  {
return ::cordl_internals::getInstanceField<::Tayx::Graphy::__GraphyManager__ModulePreset, 0x140>(this);
}
constexpr ::Tayx::Graphy::__GraphyManager__ModulePreset const& Tayx::Graphy::GraphyManager::__get_m_modulePresetState() const {
return ::cordl_internals::getInstanceField<::Tayx::Graphy::__GraphyManager__ModulePreset, 0x140>(this);
}
inline ::Tayx::Graphy::GraphyManager* Tayx::Graphy::GraphyManager::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::Tayx::Graphy::GraphyManager*>());
}
inline void Tayx::Graphy::GraphyManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::Tayx::Graphy::__GraphyManager__Mode Tayx::Graphy::GraphyManager::get_GraphyMode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "get_GraphyMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Tayx::Graphy::__GraphyManager__Mode, false>(*this, ___internal_method);
}
inline void Tayx::Graphy::GraphyManager::set_GraphyMode(::Tayx::Graphy::__GraphyManager__Mode  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "set_GraphyMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tayx::Graphy::__GraphyManager__Mode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline bool Tayx::Graphy::GraphyManager::get_EnableOnStartup()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "get_EnableOnStartup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool Tayx::Graphy::GraphyManager::get_KeepAlive()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "get_KeepAlive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool Tayx::Graphy::GraphyManager::get_Background()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "get_Background",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void Tayx::Graphy::GraphyManager::set_Background(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "set_Background",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::Color Tayx::Graphy::GraphyManager::get_BackgroundColor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "get_BackgroundColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(*this, ___internal_method);
}
inline void Tayx::Graphy::GraphyManager::set_BackgroundColor(::UnityEngine::Color  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "set_BackgroundColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::Tayx::Graphy::__GraphyManager__ModulePosition Tayx::Graphy::GraphyManager::get_GraphModulePosition()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "get_GraphModulePosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Tayx::Graphy::__GraphyManager__ModulePosition, false>(*this, ___internal_method);
}
inline void Tayx::Graphy::GraphyManager::set_GraphModulePosition(::Tayx::Graphy::__GraphyManager__ModulePosition  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "set_GraphModulePosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tayx::Graphy::__GraphyManager__ModulePosition>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::Tayx::Graphy::__GraphyManager__ModuleState Tayx::Graphy::GraphyManager::get_FpsModuleState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "get_FpsModuleState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Tayx::Graphy::__GraphyManager__ModuleState, false>(*this, ___internal_method);
}
inline void Tayx::Graphy::GraphyManager::set_FpsModuleState(::Tayx::Graphy::__GraphyManager__ModuleState  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "set_FpsModuleState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tayx::Graphy::__GraphyManager__ModuleState>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::Color Tayx::Graphy::GraphyManager::get_GoodFPSColor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "get_GoodFPSColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(*this, ___internal_method);
}
inline void Tayx::Graphy::GraphyManager::set_GoodFPSColor(::UnityEngine::Color  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "set_GoodFPSColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::Color Tayx::Graphy::GraphyManager::get_CautionFPSColor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "get_CautionFPSColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(*this, ___internal_method);
}
inline void Tayx::Graphy::GraphyManager::set_CautionFPSColor(::UnityEngine::Color  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "set_CautionFPSColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::Color Tayx::Graphy::GraphyManager::get_CriticalFPSColor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "get_CriticalFPSColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(*this, ___internal_method);
}
inline void Tayx::Graphy::GraphyManager::set_CriticalFPSColor(::UnityEngine::Color  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "set_CriticalFPSColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline int32_t Tayx::Graphy::GraphyManager::get_GoodFPSThreshold()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "get_GoodFPSThreshold",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline void Tayx::Graphy::GraphyManager::set_GoodFPSThreshold(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "set_GoodFPSThreshold",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline int32_t Tayx::Graphy::GraphyManager::get_CautionFPSThreshold()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "get_CautionFPSThreshold",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline void Tayx::Graphy::GraphyManager::set_CautionFPSThreshold(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "set_CautionFPSThreshold",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline int32_t Tayx::Graphy::GraphyManager::get_FpsGraphResolution()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "get_FpsGraphResolution",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline void Tayx::Graphy::GraphyManager::set_FpsGraphResolution(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "set_FpsGraphResolution",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline int32_t Tayx::Graphy::GraphyManager::get_FpsTextUpdateRate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "get_FpsTextUpdateRate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline void Tayx::Graphy::GraphyManager::set_FpsTextUpdateRate(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "set_FpsTextUpdateRate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline float_t Tayx::Graphy::GraphyManager::get_CurrentFPS()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "get_CurrentFPS",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline float_t Tayx::Graphy::GraphyManager::get_AverageFPS()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "get_AverageFPS",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline float_t Tayx::Graphy::GraphyManager::get_MinFPS()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "get_MinFPS",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline float_t Tayx::Graphy::GraphyManager::get_MaxFPS()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "get_MaxFPS",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline ::Tayx::Graphy::__GraphyManager__ModuleState Tayx::Graphy::GraphyManager::get_RamModuleState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "get_RamModuleState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Tayx::Graphy::__GraphyManager__ModuleState, false>(*this, ___internal_method);
}
inline void Tayx::Graphy::GraphyManager::set_RamModuleState(::Tayx::Graphy::__GraphyManager__ModuleState  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "set_RamModuleState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tayx::Graphy::__GraphyManager__ModuleState>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::Color Tayx::Graphy::GraphyManager::get_AllocatedRamColor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "get_AllocatedRamColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(*this, ___internal_method);
}
inline void Tayx::Graphy::GraphyManager::set_AllocatedRamColor(::UnityEngine::Color  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "set_AllocatedRamColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::Color Tayx::Graphy::GraphyManager::get_ReservedRamColor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "get_ReservedRamColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(*this, ___internal_method);
}
inline void Tayx::Graphy::GraphyManager::set_ReservedRamColor(::UnityEngine::Color  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "set_ReservedRamColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::Color Tayx::Graphy::GraphyManager::get_MonoRamColor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "get_MonoRamColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(*this, ___internal_method);
}
inline void Tayx::Graphy::GraphyManager::set_MonoRamColor(::UnityEngine::Color  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "set_MonoRamColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline int32_t Tayx::Graphy::GraphyManager::get_RamGraphResolution()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "get_RamGraphResolution",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline void Tayx::Graphy::GraphyManager::set_RamGraphResolution(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "set_RamGraphResolution",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline int32_t Tayx::Graphy::GraphyManager::get_RamTextUpdateRate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "get_RamTextUpdateRate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline void Tayx::Graphy::GraphyManager::set_RamTextUpdateRate(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "set_RamTextUpdateRate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline float_t Tayx::Graphy::GraphyManager::get_AllocatedRam()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "get_AllocatedRam",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline float_t Tayx::Graphy::GraphyManager::get_ReservedRam()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "get_ReservedRam",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline float_t Tayx::Graphy::GraphyManager::get_MonoRam()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "get_MonoRam",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline ::Tayx::Graphy::__GraphyManager__ModuleState Tayx::Graphy::GraphyManager::get_AudioModuleState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "get_AudioModuleState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Tayx::Graphy::__GraphyManager__ModuleState, false>(*this, ___internal_method);
}
inline void Tayx::Graphy::GraphyManager::set_AudioModuleState(::Tayx::Graphy::__GraphyManager__ModuleState  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "set_AudioModuleState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tayx::Graphy::__GraphyManager__ModuleState>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::AudioListener* Tayx::Graphy::GraphyManager::get_AudioListener()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "get_AudioListener",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AudioListener*, false>(*this, ___internal_method);
}
inline void Tayx::Graphy::GraphyManager::set_AudioListener(::UnityEngine::AudioListener*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "set_AudioListener",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioListener*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::Tayx::Graphy::__GraphyManager__LookForAudioListener Tayx::Graphy::GraphyManager::get_FindAudioListenerInCameraIfNull()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "get_FindAudioListenerInCameraIfNull",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Tayx::Graphy::__GraphyManager__LookForAudioListener, false>(*this, ___internal_method);
}
inline void Tayx::Graphy::GraphyManager::set_FindAudioListenerInCameraIfNull(::Tayx::Graphy::__GraphyManager__LookForAudioListener  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "set_FindAudioListenerInCameraIfNull",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tayx::Graphy::__GraphyManager__LookForAudioListener>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::Color Tayx::Graphy::GraphyManager::get_AudioGraphColor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "get_AudioGraphColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(*this, ___internal_method);
}
inline void Tayx::Graphy::GraphyManager::set_AudioGraphColor(::UnityEngine::Color  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "set_AudioGraphColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline int32_t Tayx::Graphy::GraphyManager::get_AudioGraphResolution()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "get_AudioGraphResolution",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline void Tayx::Graphy::GraphyManager::set_AudioGraphResolution(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "set_AudioGraphResolution",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline int32_t Tayx::Graphy::GraphyManager::get_AudioTextUpdateRate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "get_AudioTextUpdateRate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline void Tayx::Graphy::GraphyManager::set_AudioTextUpdateRate(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "set_AudioTextUpdateRate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::FFTWindow Tayx::Graphy::GraphyManager::get_FftWindow()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "get_FftWindow",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::FFTWindow, false>(*this, ___internal_method);
}
inline void Tayx::Graphy::GraphyManager::set_FftWindow(::UnityEngine::FFTWindow  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "set_FftWindow",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::FFTWindow>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline int32_t Tayx::Graphy::GraphyManager::get_SpectrumSize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "get_SpectrumSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline void Tayx::Graphy::GraphyManager::set_SpectrumSize(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "set_SpectrumSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::ArrayW<float_t,::Array<float_t>*> Tayx::Graphy::GraphyManager::get_Spectrum()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "get_Spectrum",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<float_t,::Array<float_t>*>, false>(*this, ___internal_method);
}
inline float_t Tayx::Graphy::GraphyManager::get_MaxDB()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "get_MaxDB",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline ::Tayx::Graphy::__GraphyManager__ModuleState Tayx::Graphy::GraphyManager::get_AdvancedModuleState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "get_AdvancedModuleState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Tayx::Graphy::__GraphyManager__ModuleState, false>(*this, ___internal_method);
}
inline void Tayx::Graphy::GraphyManager::set_AdvancedModuleState(::Tayx::Graphy::__GraphyManager__ModuleState  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "set_AdvancedModuleState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tayx::Graphy::__GraphyManager__ModuleState>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::Tayx::Graphy::__GraphyManager__ModulePosition Tayx::Graphy::GraphyManager::get_AdvancedModulePosition()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "get_AdvancedModulePosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Tayx::Graphy::__GraphyManager__ModulePosition, false>(*this, ___internal_method);
}
inline void Tayx::Graphy::GraphyManager::set_AdvancedModulePosition(::Tayx::Graphy::__GraphyManager__ModulePosition  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "set_AdvancedModulePosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tayx::Graphy::__GraphyManager__ModulePosition>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void Tayx::Graphy::GraphyManager::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void Tayx::Graphy::GraphyManager::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void Tayx::Graphy::GraphyManager::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void Tayx::Graphy::GraphyManager::OnApplicationFocus(bool  isFocused)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "OnApplicationFocus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, isFocused);
}
inline void Tayx::Graphy::GraphyManager::SetModulePosition(::Tayx::Graphy::__GraphyManager__ModuleType  moduleType, ::Tayx::Graphy::__GraphyManager__ModulePosition  modulePosition)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "SetModulePosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tayx::Graphy::__GraphyManager__ModuleType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tayx::Graphy::__GraphyManager__ModulePosition>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, moduleType, modulePosition);
}
inline void Tayx::Graphy::GraphyManager::SetModuleMode(::Tayx::Graphy::__GraphyManager__ModuleType  moduleType, ::Tayx::Graphy::__GraphyManager__ModuleState  moduleState)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "SetModuleMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tayx::Graphy::__GraphyManager__ModuleType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tayx::Graphy::__GraphyManager__ModuleState>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, moduleType, moduleState);
}
inline void Tayx::Graphy::GraphyManager::ToggleModes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "ToggleModes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void Tayx::Graphy::GraphyManager::SetPreset(::Tayx::Graphy::__GraphyManager__ModulePreset  modulePreset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "SetPreset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tayx::Graphy::__GraphyManager__ModulePreset>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, modulePreset);
}
inline void Tayx::Graphy::GraphyManager::ToggleActive()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "ToggleActive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void Tayx::Graphy::GraphyManager::Enable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "Enable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void Tayx::Graphy::GraphyManager::Disable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "Disable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void Tayx::Graphy::GraphyManager::Init()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void Tayx::Graphy::GraphyManager::CheckForHotkeyPresses()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "CheckForHotkeyPresses",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool Tayx::Graphy::GraphyManager::CheckFor1KeyPress(::UnityEngine::InputSystem::Key  key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "CheckFor1KeyPress",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Key>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, key);
}
inline bool Tayx::Graphy::GraphyManager::CheckFor2KeyPress(::UnityEngine::InputSystem::Key  key1, ::UnityEngine::InputSystem::Key  key2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "CheckFor2KeyPress",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Key>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Key>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, key1, key2);
}
inline bool Tayx::Graphy::GraphyManager::CheckFor3KeyPress(::UnityEngine::InputSystem::Key  key1, ::UnityEngine::InputSystem::Key  key2, ::UnityEngine::InputSystem::Key  key3)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "CheckFor3KeyPress",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Key>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Key>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Key>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, key1, key2, key3);
}
inline void Tayx::Graphy::GraphyManager::UpdateAllParameters()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "UpdateAllParameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void Tayx::Graphy::GraphyManager::RefreshAllParameters()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyManager*>::get(),
                            "RefreshAllParameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
