#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/InputSystem/Users/zzzz__InputUser_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__SavedStructState_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlList_1_def.hpp"
#include "System/zzzz__Action_3_def.hpp"
#include "UnityEngine/InputSystem/zzzz__IInputActionCollection_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionChange_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDeviceChange_def.hpp"
#include "UnityEngine/InputSystem/Users/zzzz__InputUserAccountHandle_def.hpp"
#include "UnityEngine/InputSystem/Users/zzzz__InputUser_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__ReadOnlyArray_1_def.hpp"
#include "UnityEngine/InputSystem/Users/zzzz__InputUserPairingOptions_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
#include "UnityEngine/InputSystem/Users/zzzz__InputUserChange_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__ISavedState_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlScheme_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEventPtr_def.hpp"
#include "System/zzzz__Func_3_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__CallbackArray_1_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InlinedArray_1_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::__InputUser__ControlSchemeChangeSyntax.AndPairRemainingDevices
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Users::__InputUser__ControlSchemeChangeSyntax (::UnityEngine::InputSystem::Users::__InputUser__ControlSchemeChangeSyntax::*)()>(&::UnityEngine::InputSystem::Users::__InputUser__ControlSchemeChangeSyntax::AndPairRemainingDevices)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2acf1b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::__InputUser__ControlSchemeChangeSyntax>::get(),
                            "AndPairRemainingDevices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::InputSystem::Users::__InputUser__ControlSchemeChangeSyntax::__set_m_UserIndex(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::InputSystem::Users::__InputUser__ControlSchemeChangeSyntax::__get_m_UserIndex()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::InputSystem::Users::__InputUser__ControlSchemeChangeSyntax::__get_m_UserIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline ::UnityEngine::InputSystem::Users::__InputUser__ControlSchemeChangeSyntax UnityEngine::InputSystem::Users::__InputUser__ControlSchemeChangeSyntax::AndPairRemainingDevices()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::__InputUser__ControlSchemeChangeSyntax>::get(),
                            "AndPairRemainingDevices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Users::__InputUser__ControlSchemeChangeSyntax, false>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_UserIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::Users::__InputUser__ControlSchemeChangeSyntax::__InputUser__ControlSchemeChangeSyntax(int32_t  m_UserIndex) noexcept : ::bs_hook::ValueTypeWrapper<0x4>() {this->m_UserIndex = m_UserIndex;
}
constexpr void UnityEngine::InputSystem::Users::__InputUser__UserFlags::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::InputSystem::Users::__InputUser__UserFlags::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::InputSystem::Users::__InputUser__UserFlags::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::Users::__InputUser__UserFlags::__InputUser__UserFlags(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::InputSystem::Users::__InputUser__UserFlags  UnityEngine::InputSystem::Users::__InputUser__UserFlags::BindToAllDevices{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::InputSystem::Users::__InputUser__UserFlags  UnityEngine::InputSystem::Users::__InputUser__UserFlags::UserAccountSelectionInProgress{static_cast<int32_t>(0x2)};
constexpr void UnityEngine::InputSystem::Users::__InputUser__UserData::__set_platformUserAccountHandle(::System::Nullable_1<::UnityEngine::InputSystem::Users::InputUserAccountHandle>  value)  {
::cordl_internals::setInstanceField<::System::Nullable_1<::UnityEngine::InputSystem::Users::InputUserAccountHandle>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Nullable_1<::UnityEngine::InputSystem::Users::InputUserAccountHandle>>(value));
}
constexpr ::System::Nullable_1<::UnityEngine::InputSystem::Users::InputUserAccountHandle>& UnityEngine::InputSystem::Users::__InputUser__UserData::__get_platformUserAccountHandle()  {
return ::cordl_internals::getInstanceField<::System::Nullable_1<::UnityEngine::InputSystem::Users::InputUserAccountHandle>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Nullable_1<::UnityEngine::InputSystem::Users::InputUserAccountHandle> const& UnityEngine::InputSystem::Users::__InputUser__UserData::__get_platformUserAccountHandle() const {
return ::cordl_internals::getInstanceField<::System::Nullable_1<::UnityEngine::InputSystem::Users::InputUserAccountHandle>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::InputSystem::Users::__InputUser__UserData::__set_platformUserAccountName(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::StringW>(value));
}
constexpr ::StringW& UnityEngine::InputSystem::Users::__InputUser__UserData::__get_platformUserAccountName()  {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::StringW const& UnityEngine::InputSystem::Users::__InputUser__UserData::__get_platformUserAccountName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::InputSystem::Users::__InputUser__UserData::__set_platformUserAccountId(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::StringW>(value));
}
constexpr ::StringW& UnityEngine::InputSystem::Users::__InputUser__UserData::__get_platformUserAccountId()  {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::StringW const& UnityEngine::InputSystem::Users::__InputUser__UserData::__get_platformUserAccountId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::InputSystem::Users::__InputUser__UserData::__set_deviceCount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::InputSystem::Users::__InputUser__UserData::__get_deviceCount()  {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::InputSystem::Users::__InputUser__UserData::__get_deviceCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::InputSystem::Users::__InputUser__UserData::__set_deviceStartIndex(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x2c>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::InputSystem::Users::__InputUser__UserData::__get_deviceStartIndex()  {
return ::cordl_internals::getInstanceField<int32_t, 0x2c>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::InputSystem::Users::__InputUser__UserData::__get_deviceStartIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x2c>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::InputSystem::Users::__InputUser__UserData::__set_actions(::UnityEngine::InputSystem::IInputActionCollection*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::IInputActionCollection*, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::InputSystem::IInputActionCollection*>(value));
}
constexpr ::UnityEngine::InputSystem::IInputActionCollection* UnityEngine::InputSystem::Users::__InputUser__UserData::__get_actions()  {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::IInputActionCollection*, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::IInputActionCollection*> UnityEngine::InputSystem::Users::__InputUser__UserData::__get_actions() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::IInputActionCollection*, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::InputSystem::Users::__InputUser__UserData::__set_controlScheme(::System::Nullable_1<::UnityEngine::InputSystem::InputControlScheme>  value)  {
::cordl_internals::setInstanceField<::System::Nullable_1<::UnityEngine::InputSystem::InputControlScheme>, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Nullable_1<::UnityEngine::InputSystem::InputControlScheme>>(value));
}
constexpr ::System::Nullable_1<::UnityEngine::InputSystem::InputControlScheme>& UnityEngine::InputSystem::Users::__InputUser__UserData::__get_controlScheme()  {
return ::cordl_internals::getInstanceField<::System::Nullable_1<::UnityEngine::InputSystem::InputControlScheme>, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Nullable_1<::UnityEngine::InputSystem::InputControlScheme> const& UnityEngine::InputSystem::Users::__InputUser__UserData::__get_controlScheme() const {
return ::cordl_internals::getInstanceField<::System::Nullable_1<::UnityEngine::InputSystem::InputControlScheme>, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::InputSystem::Users::__InputUser__UserData::__set_controlSchemeMatch(::UnityEngine::InputSystem::__InputControlScheme__MatchResult  value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::__InputControlScheme__MatchResult, 0x58>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::InputSystem::__InputControlScheme__MatchResult>(value));
}
constexpr ::UnityEngine::InputSystem::__InputControlScheme__MatchResult& UnityEngine::InputSystem::Users::__InputUser__UserData::__get_controlSchemeMatch()  {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::__InputControlScheme__MatchResult, 0x58>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::UnityEngine::InputSystem::__InputControlScheme__MatchResult const& UnityEngine::InputSystem::Users::__InputUser__UserData::__get_controlSchemeMatch() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::__InputControlScheme__MatchResult, 0x58>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::InputSystem::Users::__InputUser__UserData::__set_lostDeviceCount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0xa8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::InputSystem::Users::__InputUser__UserData::__get_lostDeviceCount()  {
return ::cordl_internals::getInstanceField<int32_t, 0xa8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::InputSystem::Users::__InputUser__UserData::__get_lostDeviceCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0xa8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::InputSystem::Users::__InputUser__UserData::__set_lostDeviceStartIndex(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0xac>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::InputSystem::Users::__InputUser__UserData::__get_lostDeviceStartIndex()  {
return ::cordl_internals::getInstanceField<int32_t, 0xac>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::InputSystem::Users::__InputUser__UserData::__get_lostDeviceStartIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0xac>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::InputSystem::Users::__InputUser__UserData::__set_flags(::UnityEngine::InputSystem::Users::__InputUser__UserFlags  value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::Users::__InputUser__UserFlags, 0xb0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::InputSystem::Users::__InputUser__UserFlags>(value));
}
constexpr ::UnityEngine::InputSystem::Users::__InputUser__UserFlags& UnityEngine::InputSystem::Users::__InputUser__UserData::__get_flags()  {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::Users::__InputUser__UserFlags, 0xb0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::UnityEngine::InputSystem::Users::__InputUser__UserFlags const& UnityEngine::InputSystem::Users::__InputUser__UserData::__get_flags() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::Users::__InputUser__UserFlags, 0xb0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "platformUserAccountHandle", ty: "::System::Nullable_1<::UnityEngine::InputSystem::Users::InputUserAccountHandle>", modifiers: "", def_value: Some("{}") }, CppParam { name: "platformUserAccountName", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "platformUserAccountId", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "deviceCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "deviceStartIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "actions", ty: "::UnityEngine::InputSystem::IInputActionCollection*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "controlScheme", ty: "::System::Nullable_1<::UnityEngine::InputSystem::InputControlScheme>", modifiers: "", def_value: Some("{}") }, CppParam { name: "controlSchemeMatch", ty: "::UnityEngine::InputSystem::__InputControlScheme__MatchResult", modifiers: "", def_value: Some("{}") }, CppParam { name: "lostDeviceCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "lostDeviceStartIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "flags", ty: "::UnityEngine::InputSystem::Users::__InputUser__UserFlags", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::Users::__InputUser__UserData::__InputUser__UserData(::System::Nullable_1<::UnityEngine::InputSystem::Users::InputUserAccountHandle>  platformUserAccountHandle, ::StringW  platformUserAccountName, ::StringW  platformUserAccountId, int32_t  deviceCount, int32_t  deviceStartIndex, ::UnityEngine::InputSystem::IInputActionCollection*  actions, ::System::Nullable_1<::UnityEngine::InputSystem::InputControlScheme>  controlScheme, ::UnityEngine::InputSystem::__InputControlScheme__MatchResult  controlSchemeMatch, int32_t  lostDeviceCount, int32_t  lostDeviceStartIndex, ::UnityEngine::InputSystem::Users::__InputUser__UserFlags  flags) noexcept : ::bs_hook::ValueTypeWrapper<0xb8>() {this->platformUserAccountHandle = platformUserAccountHandle;
this->platformUserAccountName = platformUserAccountName;
this->platformUserAccountId = platformUserAccountId;
this->deviceCount = deviceCount;
this->deviceStartIndex = deviceStartIndex;
this->actions = actions;
this->controlScheme = controlScheme;
this->controlSchemeMatch = controlSchemeMatch;
this->lostDeviceCount = lostDeviceCount;
this->lostDeviceStartIndex = lostDeviceStartIndex;
this->flags = flags;
}
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::__InputUser__CompareDevicesByUserAccount.Compare
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::Users::__InputUser__CompareDevicesByUserAccount::*)(::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::InputDevice*)>(&::UnityEngine::InputSystem::Users::__InputUser__CompareDevicesByUserAccount::Compare)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2acf1dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::__InputUser__CompareDevicesByUserAccount>::get(),
                            "Compare",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::__InputUser__CompareDevicesByUserAccount.GetUserAccountHandleForDevice
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<::UnityEngine::InputSystem::Users::InputUserAccountHandle> (*)(::UnityEngine::InputSystem::InputDevice*)>(&::UnityEngine::InputSystem::Users::__InputUser__CompareDevicesByUserAccount::GetUserAccountHandleForDevice)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2acf218;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::__InputUser__CompareDevicesByUserAccount>::get(),
                            "GetUserAccountHandleForDevice",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::UnityEngine::InputSystem::InputDevice*>"
constexpr  UnityEngine::InputSystem::Users::__InputUser__CompareDevicesByUserAccount::operator ::System::Collections::Generic::IComparer_1<::UnityEngine::InputSystem::InputDevice*>*()  {
return static_cast<::System::Collections::Generic::IComparer_1<::UnityEngine::InputSystem::InputDevice*>*>(static_cast<void*>(::cordl_internals::Box(this)));
}
constexpr void UnityEngine::InputSystem::Users::__InputUser__CompareDevicesByUserAccount::__set_platformUserAccountHandle(::UnityEngine::InputSystem::Users::InputUserAccountHandle  value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::Users::InputUserAccountHandle, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::InputSystem::Users::InputUserAccountHandle>(value));
}
constexpr ::UnityEngine::InputSystem::Users::InputUserAccountHandle& UnityEngine::InputSystem::Users::__InputUser__CompareDevicesByUserAccount::__get_platformUserAccountHandle()  {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::Users::InputUserAccountHandle, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::UnityEngine::InputSystem::Users::InputUserAccountHandle const& UnityEngine::InputSystem::Users::__InputUser__CompareDevicesByUserAccount::__get_platformUserAccountHandle() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::Users::InputUserAccountHandle, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline int32_t UnityEngine::InputSystem::Users::__InputUser__CompareDevicesByUserAccount::Compare(::UnityEngine::InputSystem::InputDevice*  x, ::UnityEngine::InputSystem::InputDevice*  y)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::__InputUser__CompareDevicesByUserAccount>::get(),
                            "Compare",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, x, y);
}
inline ::System::Nullable_1<::UnityEngine::InputSystem::Users::InputUserAccountHandle> UnityEngine::InputSystem::Users::__InputUser__CompareDevicesByUserAccount::GetUserAccountHandleForDevice(::UnityEngine::InputSystem::InputDevice*  device)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::__InputUser__CompareDevicesByUserAccount>::get(),
                            "GetUserAccountHandleForDevice",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::UnityEngine::InputSystem::Users::InputUserAccountHandle>, false>(nullptr, ___internal_method, device);
}
// Ctor Parameters [CppParam { name: "platformUserAccountHandle", ty: "::UnityEngine::InputSystem::Users::InputUserAccountHandle", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::Users::__InputUser__CompareDevicesByUserAccount::__InputUser__CompareDevicesByUserAccount(::UnityEngine::InputSystem::Users::InputUserAccountHandle  platformUserAccountHandle) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->platformUserAccountHandle = platformUserAccountHandle;
}
constexpr void UnityEngine::InputSystem::Users::__InputUser__OngoingAccountSelection::__set_device(::UnityEngine::InputSystem::InputDevice*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::InputDevice*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::InputSystem::InputDevice*>(value));
}
constexpr ::UnityEngine::InputSystem::InputDevice* UnityEngine::InputSystem::Users::__InputUser__OngoingAccountSelection::__get_device()  {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::InputDevice*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputDevice*> UnityEngine::InputSystem::Users::__InputUser__OngoingAccountSelection::__get_device() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::InputDevice*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::InputSystem::Users::__InputUser__OngoingAccountSelection::__set_userId(uint32_t  value)  {
::cordl_internals::setInstanceField<uint32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint32_t>(value));
}
constexpr uint32_t& UnityEngine::InputSystem::Users::__InputUser__OngoingAccountSelection::__get_userId()  {
return ::cordl_internals::getInstanceField<uint32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint32_t const& UnityEngine::InputSystem::Users::__InputUser__OngoingAccountSelection::__get_userId() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "device", ty: "::UnityEngine::InputSystem::InputDevice*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "userId", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::Users::__InputUser__OngoingAccountSelection::__InputUser__OngoingAccountSelection(::UnityEngine::InputSystem::InputDevice*  device, uint32_t  userId) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->device = device;
this->userId = userId;
}
constexpr void UnityEngine::InputSystem::Users::__InputUser__GlobalState::__set_pairingStateVersion(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::InputSystem::Users::__InputUser__GlobalState::__get_pairingStateVersion()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::InputSystem::Users::__InputUser__GlobalState::__get_pairingStateVersion() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::InputSystem::Users::__InputUser__GlobalState::__set_lastUserId(uint32_t  value)  {
::cordl_internals::setInstanceField<uint32_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint32_t>(value));
}
constexpr uint32_t& UnityEngine::InputSystem::Users::__InputUser__GlobalState::__get_lastUserId()  {
return ::cordl_internals::getInstanceField<uint32_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint32_t const& UnityEngine::InputSystem::Users::__InputUser__GlobalState::__get_lastUserId() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::InputSystem::Users::__InputUser__GlobalState::__set_allUserCount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::InputSystem::Users::__InputUser__GlobalState::__get_allUserCount()  {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::InputSystem::Users::__InputUser__GlobalState::__get_allUserCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::InputSystem::Users::__InputUser__GlobalState::__set_allPairedDeviceCount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0xc>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::InputSystem::Users::__InputUser__GlobalState::__get_allPairedDeviceCount()  {
return ::cordl_internals::getInstanceField<int32_t, 0xc>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::InputSystem::Users::__InputUser__GlobalState::__get_allPairedDeviceCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0xc>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::InputSystem::Users::__InputUser__GlobalState::__set_allLostDeviceCount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::InputSystem::Users::__InputUser__GlobalState::__get_allLostDeviceCount()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::InputSystem::Users::__InputUser__GlobalState::__get_allLostDeviceCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::InputSystem::Users::__InputUser__GlobalState::__set_allUsers(::ArrayW<::UnityEngine::InputSystem::Users::InputUser,::Array<::UnityEngine::InputSystem::Users::InputUser>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::InputSystem::Users::InputUser,::Array<::UnityEngine::InputSystem::Users::InputUser>*>, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::ArrayW<::UnityEngine::InputSystem::Users::InputUser,::Array<::UnityEngine::InputSystem::Users::InputUser>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::InputSystem::Users::InputUser,::Array<::UnityEngine::InputSystem::Users::InputUser>*>& UnityEngine::InputSystem::Users::__InputUser__GlobalState::__get_allUsers()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::InputSystem::Users::InputUser,::Array<::UnityEngine::InputSystem::Users::InputUser>*>, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::ArrayW<::UnityEngine::InputSystem::Users::InputUser,::Array<::UnityEngine::InputSystem::Users::InputUser>*> const& UnityEngine::InputSystem::Users::__InputUser__GlobalState::__get_allUsers() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::InputSystem::Users::InputUser,::Array<::UnityEngine::InputSystem::Users::InputUser>*>, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::InputSystem::Users::__InputUser__GlobalState::__set_allUserData(::ArrayW<::UnityEngine::InputSystem::Users::__InputUser__UserData,::Array<::UnityEngine::InputSystem::Users::__InputUser__UserData>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::InputSystem::Users::__InputUser__UserData,::Array<::UnityEngine::InputSystem::Users::__InputUser__UserData>*>, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::ArrayW<::UnityEngine::InputSystem::Users::__InputUser__UserData,::Array<::UnityEngine::InputSystem::Users::__InputUser__UserData>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::InputSystem::Users::__InputUser__UserData,::Array<::UnityEngine::InputSystem::Users::__InputUser__UserData>*>& UnityEngine::InputSystem::Users::__InputUser__GlobalState::__get_allUserData()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::InputSystem::Users::__InputUser__UserData,::Array<::UnityEngine::InputSystem::Users::__InputUser__UserData>*>, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::ArrayW<::UnityEngine::InputSystem::Users::__InputUser__UserData,::Array<::UnityEngine::InputSystem::Users::__InputUser__UserData>*> const& UnityEngine::InputSystem::Users::__InputUser__GlobalState::__get_allUserData() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::InputSystem::Users::__InputUser__UserData,::Array<::UnityEngine::InputSystem::Users::__InputUser__UserData>*>, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::InputSystem::Users::__InputUser__GlobalState::__set_allPairedDevices(::ArrayW<::UnityEngine::InputSystem::InputDevice*,::Array<::UnityEngine::InputSystem::InputDevice*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::InputSystem::InputDevice*,::Array<::UnityEngine::InputSystem::InputDevice*>*>, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::ArrayW<::UnityEngine::InputSystem::InputDevice*,::Array<::UnityEngine::InputSystem::InputDevice*>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::InputSystem::InputDevice*,::Array<::UnityEngine::InputSystem::InputDevice*>*>& UnityEngine::InputSystem::Users::__InputUser__GlobalState::__get_allPairedDevices()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::InputSystem::InputDevice*,::Array<::UnityEngine::InputSystem::InputDevice*>*>, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::ArrayW<::UnityEngine::InputSystem::InputDevice*,::Array<::UnityEngine::InputSystem::InputDevice*>*> const& UnityEngine::InputSystem::Users::__InputUser__GlobalState::__get_allPairedDevices() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::InputSystem::InputDevice*,::Array<::UnityEngine::InputSystem::InputDevice*>*>, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::InputSystem::Users::__InputUser__GlobalState::__set_allLostDevices(::ArrayW<::UnityEngine::InputSystem::InputDevice*,::Array<::UnityEngine::InputSystem::InputDevice*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::InputSystem::InputDevice*,::Array<::UnityEngine::InputSystem::InputDevice*>*>, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::ArrayW<::UnityEngine::InputSystem::InputDevice*,::Array<::UnityEngine::InputSystem::InputDevice*>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::InputSystem::InputDevice*,::Array<::UnityEngine::InputSystem::InputDevice*>*>& UnityEngine::InputSystem::Users::__InputUser__GlobalState::__get_allLostDevices()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::InputSystem::InputDevice*,::Array<::UnityEngine::InputSystem::InputDevice*>*>, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::ArrayW<::UnityEngine::InputSystem::InputDevice*,::Array<::UnityEngine::InputSystem::InputDevice*>*> const& UnityEngine::InputSystem::Users::__InputUser__GlobalState::__get_allLostDevices() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::InputSystem::InputDevice*,::Array<::UnityEngine::InputSystem::InputDevice*>*>, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::InputSystem::Users::__InputUser__GlobalState::__set_ongoingAccountSelections(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Users::__InputUser__OngoingAccountSelection>  value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Users::__InputUser__OngoingAccountSelection>, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Users::__InputUser__OngoingAccountSelection>>(value));
}
constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Users::__InputUser__OngoingAccountSelection>& UnityEngine::InputSystem::Users::__InputUser__GlobalState::__get_ongoingAccountSelections()  {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Users::__InputUser__OngoingAccountSelection>, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Users::__InputUser__OngoingAccountSelection> const& UnityEngine::InputSystem::Users::__InputUser__GlobalState::__get_ongoingAccountSelections() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Users::__InputUser__OngoingAccountSelection>, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::InputSystem::Users::__InputUser__GlobalState::__set_onChange(::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_3<::UnityEngine::InputSystem::Users::InputUser,::UnityEngine::InputSystem::Users::InputUserChange,::UnityEngine::InputSystem::InputDevice*>*>  value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_3<::UnityEngine::InputSystem::Users::InputUser,::UnityEngine::InputSystem::Users::InputUserChange,::UnityEngine::InputSystem::InputDevice*>*>, 0x58>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_3<::UnityEngine::InputSystem::Users::InputUser,::UnityEngine::InputSystem::Users::InputUserChange,::UnityEngine::InputSystem::InputDevice*>*>>(value));
}
constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_3<::UnityEngine::InputSystem::Users::InputUser,::UnityEngine::InputSystem::Users::InputUserChange,::UnityEngine::InputSystem::InputDevice*>*>& UnityEngine::InputSystem::Users::__InputUser__GlobalState::__get_onChange()  {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_3<::UnityEngine::InputSystem::Users::InputUser,::UnityEngine::InputSystem::Users::InputUserChange,::UnityEngine::InputSystem::InputDevice*>*>, 0x58>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_3<::UnityEngine::InputSystem::Users::InputUser,::UnityEngine::InputSystem::Users::InputUserChange,::UnityEngine::InputSystem::InputDevice*>*> const& UnityEngine::InputSystem::Users::__InputUser__GlobalState::__get_onChange() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_3<::UnityEngine::InputSystem::Users::InputUser,::UnityEngine::InputSystem::Users::InputUserChange,::UnityEngine::InputSystem::InputDevice*>*>, 0x58>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::InputSystem::Users::__InputUser__GlobalState::__set_onUnpairedDeviceUsed(::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::UnityEngine::InputSystem::InputControl*,::UnityEngine::InputSystem::LowLevel::InputEventPtr>*>  value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::UnityEngine::InputSystem::InputControl*,::UnityEngine::InputSystem::LowLevel::InputEventPtr>*>, 0xa8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::UnityEngine::InputSystem::InputControl*,::UnityEngine::InputSystem::LowLevel::InputEventPtr>*>>(value));
}
constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::UnityEngine::InputSystem::InputControl*,::UnityEngine::InputSystem::LowLevel::InputEventPtr>*>& UnityEngine::InputSystem::Users::__InputUser__GlobalState::__get_onUnpairedDeviceUsed()  {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::UnityEngine::InputSystem::InputControl*,::UnityEngine::InputSystem::LowLevel::InputEventPtr>*>, 0xa8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::UnityEngine::InputSystem::InputControl*,::UnityEngine::InputSystem::LowLevel::InputEventPtr>*> const& UnityEngine::InputSystem::Users::__InputUser__GlobalState::__get_onUnpairedDeviceUsed() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::UnityEngine::InputSystem::InputControl*,::UnityEngine::InputSystem::LowLevel::InputEventPtr>*>, 0xa8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::InputSystem::Users::__InputUser__GlobalState::__set_onPreFilterUnpairedDeviceUsed(::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Func_3<::UnityEngine::InputSystem::InputDevice*,::UnityEngine::InputSystem::LowLevel::InputEventPtr,bool>*>  value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Func_3<::UnityEngine::InputSystem::InputDevice*,::UnityEngine::InputSystem::LowLevel::InputEventPtr,bool>*>, 0xf8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Func_3<::UnityEngine::InputSystem::InputDevice*,::UnityEngine::InputSystem::LowLevel::InputEventPtr,bool>*>>(value));
}
constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Func_3<::UnityEngine::InputSystem::InputDevice*,::UnityEngine::InputSystem::LowLevel::InputEventPtr,bool>*>& UnityEngine::InputSystem::Users::__InputUser__GlobalState::__get_onPreFilterUnpairedDeviceUsed()  {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Func_3<::UnityEngine::InputSystem::InputDevice*,::UnityEngine::InputSystem::LowLevel::InputEventPtr,bool>*>, 0xf8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Func_3<::UnityEngine::InputSystem::InputDevice*,::UnityEngine::InputSystem::LowLevel::InputEventPtr,bool>*> const& UnityEngine::InputSystem::Users::__InputUser__GlobalState::__get_onPreFilterUnpairedDeviceUsed() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Func_3<::UnityEngine::InputSystem::InputDevice*,::UnityEngine::InputSystem::LowLevel::InputEventPtr,bool>*>, 0xf8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::InputSystem::Users::__InputUser__GlobalState::__set_actionChangeDelegate(::System::Action_2<::System::Object*,::UnityEngine::InputSystem::InputActionChange>*  value)  {
::cordl_internals::setInstanceField<::System::Action_2<::System::Object*,::UnityEngine::InputSystem::InputActionChange>*, 0x148>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Action_2<::System::Object*,::UnityEngine::InputSystem::InputActionChange>*>(value));
}
constexpr ::System::Action_2<::System::Object*,::UnityEngine::InputSystem::InputActionChange>* UnityEngine::InputSystem::Users::__InputUser__GlobalState::__get_actionChangeDelegate()  {
return ::cordl_internals::getInstanceField<::System::Action_2<::System::Object*,::UnityEngine::InputSystem::InputActionChange>*, 0x148>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::System::Object*,::UnityEngine::InputSystem::InputActionChange>*> UnityEngine::InputSystem::Users::__InputUser__GlobalState::__get_actionChangeDelegate() const {
return ::cordl_internals::getInstanceField<::System::Action_2<::System::Object*,::UnityEngine::InputSystem::InputActionChange>*, 0x148>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::InputSystem::Users::__InputUser__GlobalState::__set_onDeviceChangeDelegate(::System::Action_2<::UnityEngine::InputSystem::InputDevice*,::UnityEngine::InputSystem::InputDeviceChange>*  value)  {
::cordl_internals::setInstanceField<::System::Action_2<::UnityEngine::InputSystem::InputDevice*,::UnityEngine::InputSystem::InputDeviceChange>*, 0x150>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Action_2<::UnityEngine::InputSystem::InputDevice*,::UnityEngine::InputSystem::InputDeviceChange>*>(value));
}
constexpr ::System::Action_2<::UnityEngine::InputSystem::InputDevice*,::UnityEngine::InputSystem::InputDeviceChange>* UnityEngine::InputSystem::Users::__InputUser__GlobalState::__get_onDeviceChangeDelegate()  {
return ::cordl_internals::getInstanceField<::System::Action_2<::UnityEngine::InputSystem::InputDevice*,::UnityEngine::InputSystem::InputDeviceChange>*, 0x150>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::UnityEngine::InputSystem::InputDevice*,::UnityEngine::InputSystem::InputDeviceChange>*> UnityEngine::InputSystem::Users::__InputUser__GlobalState::__get_onDeviceChangeDelegate() const {
return ::cordl_internals::getInstanceField<::System::Action_2<::UnityEngine::InputSystem::InputDevice*,::UnityEngine::InputSystem::InputDeviceChange>*, 0x150>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::InputSystem::Users::__InputUser__GlobalState::__set_onEventDelegate(::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr,::UnityEngine::InputSystem::InputDevice*>*  value)  {
::cordl_internals::setInstanceField<::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr,::UnityEngine::InputSystem::InputDevice*>*, 0x158>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr,::UnityEngine::InputSystem::InputDevice*>*>(value));
}
constexpr ::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr,::UnityEngine::InputSystem::InputDevice*>* UnityEngine::InputSystem::Users::__InputUser__GlobalState::__get_onEventDelegate()  {
return ::cordl_internals::getInstanceField<::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr,::UnityEngine::InputSystem::InputDevice*>*, 0x158>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr,::UnityEngine::InputSystem::InputDevice*>*> UnityEngine::InputSystem::Users::__InputUser__GlobalState::__get_onEventDelegate() const {
return ::cordl_internals::getInstanceField<::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr,::UnityEngine::InputSystem::InputDevice*>*, 0x158>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::InputSystem::Users::__InputUser__GlobalState::__set_onActionChangeHooked(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x160>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<bool>(value));
}
constexpr bool& UnityEngine::InputSystem::Users::__InputUser__GlobalState::__get_onActionChangeHooked()  {
return ::cordl_internals::getInstanceField<bool, 0x160>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr bool const& UnityEngine::InputSystem::Users::__InputUser__GlobalState::__get_onActionChangeHooked() const {
return ::cordl_internals::getInstanceField<bool, 0x160>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::InputSystem::Users::__InputUser__GlobalState::__set_onDeviceChangeHooked(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x161>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<bool>(value));
}
constexpr bool& UnityEngine::InputSystem::Users::__InputUser__GlobalState::__get_onDeviceChangeHooked()  {
return ::cordl_internals::getInstanceField<bool, 0x161>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr bool const& UnityEngine::InputSystem::Users::__InputUser__GlobalState::__get_onDeviceChangeHooked() const {
return ::cordl_internals::getInstanceField<bool, 0x161>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::InputSystem::Users::__InputUser__GlobalState::__set_onEventHooked(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x162>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<bool>(value));
}
constexpr bool& UnityEngine::InputSystem::Users::__InputUser__GlobalState::__get_onEventHooked()  {
return ::cordl_internals::getInstanceField<bool, 0x162>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr bool const& UnityEngine::InputSystem::Users::__InputUser__GlobalState::__get_onEventHooked() const {
return ::cordl_internals::getInstanceField<bool, 0x162>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::InputSystem::Users::__InputUser__GlobalState::__set_listenForUnpairedDeviceActivity(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x164>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::InputSystem::Users::__InputUser__GlobalState::__get_listenForUnpairedDeviceActivity()  {
return ::cordl_internals::getInstanceField<int32_t, 0x164>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::InputSystem::Users::__InputUser__GlobalState::__get_listenForUnpairedDeviceActivity() const {
return ::cordl_internals::getInstanceField<int32_t, 0x164>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "pairingStateVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "lastUserId", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "allUserCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "allPairedDeviceCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "allLostDeviceCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "allUsers", ty: "::ArrayW<::UnityEngine::InputSystem::Users::InputUser,::Array<::UnityEngine::InputSystem::Users::InputUser>*>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "allUserData", ty: "::ArrayW<::UnityEngine::InputSystem::Users::__InputUser__UserData,::Array<::UnityEngine::InputSystem::Users::__InputUser__UserData>*>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "allPairedDevices", ty: "::ArrayW<::UnityEngine::InputSystem::InputDevice*,::Array<::UnityEngine::InputSystem::InputDevice*>*>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "allLostDevices", ty: "::ArrayW<::UnityEngine::InputSystem::InputDevice*,::Array<::UnityEngine::InputSystem::InputDevice*>*>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "ongoingAccountSelections", ty: "::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Users::__InputUser__OngoingAccountSelection>", modifiers: "", def_value: Some("{}") }, CppParam { name: "onChange", ty: "::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_3<::UnityEngine::InputSystem::Users::InputUser,::UnityEngine::InputSystem::Users::InputUserChange,::UnityEngine::InputSystem::InputDevice*>*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "onUnpairedDeviceUsed", ty: "::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::UnityEngine::InputSystem::InputControl*,::UnityEngine::InputSystem::LowLevel::InputEventPtr>*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "onPreFilterUnpairedDeviceUsed", ty: "::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Func_3<::UnityEngine::InputSystem::InputDevice*,::UnityEngine::InputSystem::LowLevel::InputEventPtr,bool>*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "actionChangeDelegate", ty: "::System::Action_2<::System::Object*,::UnityEngine::InputSystem::InputActionChange>*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "onDeviceChangeDelegate", ty: "::System::Action_2<::UnityEngine::InputSystem::InputDevice*,::UnityEngine::InputSystem::InputDeviceChange>*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "onEventDelegate", ty: "::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr,::UnityEngine::InputSystem::InputDevice*>*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "onActionChangeHooked", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "onDeviceChangeHooked", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "onEventHooked", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "listenForUnpairedDeviceActivity", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::Users::__InputUser__GlobalState::__InputUser__GlobalState(int32_t  pairingStateVersion, uint32_t  lastUserId, int32_t  allUserCount, int32_t  allPairedDeviceCount, int32_t  allLostDeviceCount, ::ArrayW<::UnityEngine::InputSystem::Users::InputUser,::Array<::UnityEngine::InputSystem::Users::InputUser>*>  allUsers, ::ArrayW<::UnityEngine::InputSystem::Users::__InputUser__UserData,::Array<::UnityEngine::InputSystem::Users::__InputUser__UserData>*>  allUserData, ::ArrayW<::UnityEngine::InputSystem::InputDevice*,::Array<::UnityEngine::InputSystem::InputDevice*>*>  allPairedDevices, ::ArrayW<::UnityEngine::InputSystem::InputDevice*,::Array<::UnityEngine::InputSystem::InputDevice*>*>  allLostDevices, ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Users::__InputUser__OngoingAccountSelection>  ongoingAccountSelections, ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_3<::UnityEngine::InputSystem::Users::InputUser,::UnityEngine::InputSystem::Users::InputUserChange,::UnityEngine::InputSystem::InputDevice*>*>  onChange, ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::UnityEngine::InputSystem::InputControl*,::UnityEngine::InputSystem::LowLevel::InputEventPtr>*>  onUnpairedDeviceUsed, ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Func_3<::UnityEngine::InputSystem::InputDevice*,::UnityEngine::InputSystem::LowLevel::InputEventPtr,bool>*>  onPreFilterUnpairedDeviceUsed, ::System::Action_2<::System::Object*,::UnityEngine::InputSystem::InputActionChange>*  actionChangeDelegate, ::System::Action_2<::UnityEngine::InputSystem::InputDevice*,::UnityEngine::InputSystem::InputDeviceChange>*  onDeviceChangeDelegate, ::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr,::UnityEngine::InputSystem::InputDevice*>*  onEventDelegate, bool  onActionChangeHooked, bool  onDeviceChangeHooked, bool  onEventHooked, int32_t  listenForUnpairedDeviceActivity) noexcept : ::bs_hook::ValueTypeWrapper<0x168>() {this->pairingStateVersion = pairingStateVersion;
this->lastUserId = lastUserId;
this->allUserCount = allUserCount;
this->allPairedDeviceCount = allPairedDeviceCount;
this->allLostDeviceCount = allLostDeviceCount;
this->allUsers = allUsers;
this->allUserData = allUserData;
this->allPairedDevices = allPairedDevices;
this->allLostDevices = allLostDevices;
this->ongoingAccountSelections = ongoingAccountSelections;
this->onChange = onChange;
this->onUnpairedDeviceUsed = onUnpairedDeviceUsed;
this->onPreFilterUnpairedDeviceUsed = onPreFilterUnpairedDeviceUsed;
this->actionChangeDelegate = actionChangeDelegate;
this->onDeviceChangeDelegate = onDeviceChangeDelegate;
this->onEventDelegate = onEventDelegate;
this->onActionChangeHooked = onActionChangeHooked;
this->onDeviceChangeHooked = onDeviceChangeHooked;
this->onEventHooked = onEventHooked;
this->listenForUnpairedDeviceActivity = listenForUnpairedDeviceActivity;
}
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::__InputUser____c._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Users::__InputUser____c::*)()>(&::UnityEngine::InputSystem::Users::__InputUser____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2acf2b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::__InputUser____c*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::__InputUser____c._SaveAndResetState_b__86_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Users::__InputUser____c::*)(ByRef<::UnityEngine::InputSystem::Users::__InputUser__GlobalState>)>(&::UnityEngine::InputSystem::Users::__InputUser____c::_SaveAndResetState_b__86_0)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2acf2bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::__InputUser____c*>::get(),
                            "<SaveAndResetState>b__86_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::Users::__InputUser__GlobalState>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::__InputUser____c._SaveAndResetState_b__86_1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Users::__InputUser____c::*)()>(&::UnityEngine::InputSystem::Users::__InputUser____c::_SaveAndResetState_b__86_1)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2acf330;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::__InputUser____c*>::get(),
                            "<SaveAndResetState>b__86_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::Users::__InputUser____c::setStaticF___9(::UnityEngine::InputSystem::Users::__InputUser____c*  value)  {
::cordl_internals::setStaticField<::UnityEngine::InputSystem::Users::__InputUser____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::__InputUser____c*>::get>(std::forward<::UnityEngine::InputSystem::Users::__InputUser____c*>(value));
}
inline ::UnityEngine::InputSystem::Users::__InputUser____c* UnityEngine::InputSystem::Users::__InputUser____c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::Users::__InputUser____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::__InputUser____c*>::get>();
}
inline void UnityEngine::InputSystem::Users::__InputUser____c::setStaticF___9__86_0(::UnityEngine::InputSystem::Utilities::__SavedStructState_1__TypedRestore<::UnityEngine::InputSystem::Users::__InputUser__GlobalState>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::InputSystem::Utilities::__SavedStructState_1__TypedRestore<::UnityEngine::InputSystem::Users::__InputUser__GlobalState>*, "<>9__86_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::__InputUser____c*>::get>(std::forward<::UnityEngine::InputSystem::Utilities::__SavedStructState_1__TypedRestore<::UnityEngine::InputSystem::Users::__InputUser__GlobalState>*>(value));
}
inline ::UnityEngine::InputSystem::Utilities::__SavedStructState_1__TypedRestore<::UnityEngine::InputSystem::Users::__InputUser__GlobalState>* UnityEngine::InputSystem::Users::__InputUser____c::getStaticF___9__86_0()  {
return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::Utilities::__SavedStructState_1__TypedRestore<::UnityEngine::InputSystem::Users::__InputUser__GlobalState>*, "<>9__86_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::__InputUser____c*>::get>();
}
inline void UnityEngine::InputSystem::Users::__InputUser____c::setStaticF___9__86_1(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "<>9__86_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::__InputUser____c*>::get>(std::forward<::System::Action*>(value));
}
inline ::System::Action* UnityEngine::InputSystem::Users::__InputUser____c::getStaticF___9__86_1()  {
return ::cordl_internals::getStaticField<::System::Action*, "<>9__86_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::__InputUser____c*>::get>();
}
inline ::UnityEngine::InputSystem::Users::__InputUser____c* UnityEngine::InputSystem::Users::__InputUser____c::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::InputSystem::Users::__InputUser____c*>());
}
inline void UnityEngine::InputSystem::Users::__InputUser____c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::__InputUser____c*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::Users::__InputUser____c::_SaveAndResetState_b__86_0(ByRef<::UnityEngine::InputSystem::Users::__InputUser__GlobalState>  state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::__InputUser____c*>::get(),
                            "<SaveAndResetState>b__86_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::Users::__InputUser__GlobalState>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, state);
}
inline void UnityEngine::InputSystem::Users::__InputUser____c::_SaveAndResetState_b__86_1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::__InputUser____c*>::get(),
                            "<SaveAndResetState>b__86_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.get_valid
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::Users::InputUser::*)()>(&::UnityEngine::InputSystem::Users::InputUser::get_valid)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2abd218;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "get_valid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.get_index
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::Users::InputUser::*)()>(&::UnityEngine::InputSystem::Users::InputUser::get_index)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2ac9b70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "get_index",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.get_id
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::UnityEngine::InputSystem::Users::InputUser::*)()>(&::UnityEngine::InputSystem::Users::InputUser::get_id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ac9cf8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "get_id",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.get_platformUserAccountHandle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<::UnityEngine::InputSystem::Users::InputUserAccountHandle> (::UnityEngine::InputSystem::Users::InputUser::*)()>(&::UnityEngine::InputSystem::Users::InputUser::get_platformUserAccountHandle)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2ac9d00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "get_platformUserAccountHandle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.get_platformUserAccountName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::InputSystem::Users::InputUser::*)()>(&::UnityEngine::InputSystem::Users::InputUser::get_platformUserAccountName)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2ac9d90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "get_platformUserAccountName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.get_platformUserAccountId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::InputSystem::Users::InputUser::*)()>(&::UnityEngine::InputSystem::Users::InputUser::get_platformUserAccountId)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2ac9e08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "get_platformUserAccountId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.get_pairedDevices
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*> (::UnityEngine::InputSystem::Users::InputUser::*)()>(&::UnityEngine::InputSystem::Users::InputUser::get_pairedDevices)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2abdf80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "get_pairedDevices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.get_lostDevices
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*> (::UnityEngine::InputSystem::Users::InputUser::*)()>(&::UnityEngine::InputSystem::Users::InputUser::get_lostDevices)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2ac9e80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "get_lostDevices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.get_actions
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::IInputActionCollection* (::UnityEngine::InputSystem::Users::InputUser::*)()>(&::UnityEngine::InputSystem::Users::InputUser::get_actions)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2ac9f2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "get_actions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.get_controlScheme
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<::UnityEngine::InputSystem::InputControlScheme> (::UnityEngine::InputSystem::Users::InputUser::*)()>(&::UnityEngine::InputSystem::Users::InputUser::get_controlScheme)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2abd2bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "get_controlScheme",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.get_controlSchemeMatch
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::__InputControlScheme__MatchResult (::UnityEngine::InputSystem::Users::InputUser::*)()>(&::UnityEngine::InputSystem::Users::InputUser::get_controlSchemeMatch)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2ac9fa4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "get_controlSchemeMatch",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.get_hasMissingRequiredDevices
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::Users::InputUser::*)()>(&::UnityEngine::InputSystem::Users::InputUser::get_hasMissingRequiredDevices)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2abe074;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "get_hasMissingRequiredDevices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.get_all
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Users::InputUser> (*)()>(&::UnityEngine::InputSystem::Users::InputUser::get_all)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2aca030;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "get_all",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.add_onChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_3<::UnityEngine::InputSystem::Users::InputUser,::UnityEngine::InputSystem::Users::InputUserChange,::UnityEngine::InputSystem::InputDevice*>*)>(&::UnityEngine::InputSystem::Users::InputUser::add_onChange)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2ac12a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "add_onChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_3<::UnityEngine::InputSystem::Users::InputUser,::UnityEngine::InputSystem::Users::InputUserChange,::UnityEngine::InputSystem::InputDevice*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.remove_onChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_3<::UnityEngine::InputSystem::Users::InputUser,::UnityEngine::InputSystem::Users::InputUserChange,::UnityEngine::InputSystem::InputDevice*>*)>(&::UnityEngine::InputSystem::Users::InputUser::remove_onChange)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2ac1e3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "remove_onChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_3<::UnityEngine::InputSystem::Users::InputUser,::UnityEngine::InputSystem::Users::InputUserChange,::UnityEngine::InputSystem::InputDevice*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.add_onUnpairedDeviceUsed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_2<::UnityEngine::InputSystem::InputControl*,::UnityEngine::InputSystem::LowLevel::InputEventPtr>*)>(&::UnityEngine::InputSystem::Users::InputUser::add_onUnpairedDeviceUsed)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2ac1664;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "add_onUnpairedDeviceUsed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityEngine::InputSystem::InputControl*,::UnityEngine::InputSystem::LowLevel::InputEventPtr>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.remove_onUnpairedDeviceUsed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_2<::UnityEngine::InputSystem::InputControl*,::UnityEngine::InputSystem::LowLevel::InputEventPtr>*)>(&::UnityEngine::InputSystem::Users::InputUser::remove_onUnpairedDeviceUsed)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2ac1930;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "remove_onUnpairedDeviceUsed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityEngine::InputSystem::InputControl*,::UnityEngine::InputSystem::LowLevel::InputEventPtr>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.add_onPrefilterUnpairedDeviceActivity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Func_3<::UnityEngine::InputSystem::InputDevice*,::UnityEngine::InputSystem::LowLevel::InputEventPtr,bool>*)>(&::UnityEngine::InputSystem::Users::InputUser::add_onPrefilterUnpairedDeviceActivity)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2ac1740;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "add_onPrefilterUnpairedDeviceActivity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_3<::UnityEngine::InputSystem::InputDevice*,::UnityEngine::InputSystem::LowLevel::InputEventPtr,bool>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.remove_onPrefilterUnpairedDeviceActivity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Func_3<::UnityEngine::InputSystem::InputDevice*,::UnityEngine::InputSystem::LowLevel::InputEventPtr,bool>*)>(&::UnityEngine::InputSystem::Users::InputUser::remove_onPrefilterUnpairedDeviceActivity)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2ac1a24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "remove_onPrefilterUnpairedDeviceActivity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_3<::UnityEngine::InputSystem::InputDevice*,::UnityEngine::InputSystem::LowLevel::InputEventPtr,bool>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.get_listenForUnpairedDeviceActivity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::UnityEngine::InputSystem::Users::InputUser::get_listenForUnpairedDeviceActivity)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2ac17f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "get_listenForUnpairedDeviceActivity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.set_listenForUnpairedDeviceActivity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t)>(&::UnityEngine::InputSystem::Users::InputUser::set_listenForUnpairedDeviceActivity)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x2ac1840;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "set_listenForUnpairedDeviceActivity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::InputSystem::Users::InputUser::*)()>(&::UnityEngine::InputSystem::Users::InputUser::ToString)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x2aca264;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.AssociateActionsWithUser
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Users::InputUser::*)(::UnityEngine::InputSystem::IInputActionCollection*)>(&::UnityEngine::InputSystem::Users::InputUser::AssociateActionsWithUser)> {
  constexpr static std::size_t size = 0x338;
  constexpr static std::size_t addrs = 0x2ac0508;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "AssociateActionsWithUser",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::IInputActionCollection*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.ActivateControlScheme
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Users::__InputUser__ControlSchemeChangeSyntax (::UnityEngine::InputSystem::Users::InputUser::*)(::StringW)>(&::UnityEngine::InputSystem::Users::InputUser::ActivateControlScheme)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2ac0b5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "ActivateControlScheme",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.TryFindControlScheme
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::Users::InputUser::*)(::StringW, ByRef<::UnityEngine::InputSystem::InputControlScheme>)>(&::UnityEngine::InputSystem::Users::InputUser::TryFindControlScheme)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x2aca980;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "TryFindControlScheme",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::InputControlScheme>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.FindControlScheme
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Users::InputUser::*)(::StringW, ByRef<::UnityEngine::InputSystem::InputControlScheme>)>(&::UnityEngine::InputSystem::Users::InputUser::FindControlScheme)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2abeaf8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "FindControlScheme",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::InputControlScheme>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.ActivateControlScheme
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Users::__InputUser__ControlSchemeChangeSyntax (::UnityEngine::InputSystem::Users::InputUser::*)(::UnityEngine::InputSystem::InputControlScheme)>(&::UnityEngine::InputSystem::Users::InputUser::ActivateControlScheme)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x2ac0988;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "ActivateControlScheme",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControlScheme>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.ActivateControlSchemeInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Users::InputUser::*)(int32_t, ::UnityEngine::InputSystem::InputControlScheme)>(&::UnityEngine::InputSystem::Users::InputUser::ActivateControlSchemeInternal)> {
  constexpr static std::size_t size = 0x39c;
  constexpr static std::size_t addrs = 0x2aca5e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "ActivateControlSchemeInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControlScheme>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.UnpairDevice
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Users::InputUser::*)(::UnityEngine::InputSystem::InputDevice*)>(&::UnityEngine::InputSystem::Users::InputUser::UnpairDevice)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2ac2c4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "UnpairDevice",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.UnpairDevices
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Users::InputUser::*)()>(&::UnityEngine::InputSystem::Users::InputUser::UnpairDevices)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x2abfd70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "UnpairDevices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.RemoveLostDevicesForUser
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t)>(&::UnityEngine::InputSystem::Users::InputUser::RemoveLostDevicesForUser)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x2acb730;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "RemoveLostDevicesForUser",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.UnpairDevicesAndRemoveUser
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Users::InputUser::*)()>(&::UnityEngine::InputSystem::Users::InputUser::UnpairDevicesAndRemoveUser)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2ac08f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "UnpairDevicesAndRemoveUser",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.GetUnpairedInputDevices
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputDevice*> (*)()>(&::UnityEngine::InputSystem::Users::InputUser::GetUnpairedInputDevices)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2ac038c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "GetUnpairedInputDevices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.GetUnpairedInputDevices
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(ByRef<::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputDevice*>>)>(&::UnityEngine::InputSystem::Users::InputUser::GetUnpairedInputDevices)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x2acbf74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "GetUnpairedInputDevices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputDevice*>>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.FindUserPairedToDevice
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<::UnityEngine::InputSystem::Users::InputUser> (*)(::UnityEngine::InputSystem::InputDevice*)>(&::UnityEngine::InputSystem::Users::InputUser::FindUserPairedToDevice)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x2acc188;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "FindUserPairedToDevice",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.FindUserByAccount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<::UnityEngine::InputSystem::Users::InputUser> (*)(::UnityEngine::InputSystem::Users::InputUserAccountHandle)>(&::UnityEngine::InputSystem::Users::InputUser::FindUserByAccount)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x2acc374;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "FindUserByAccount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Users::InputUserAccountHandle>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.CreateUserWithoutPairedDevices
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Users::InputUser (*)()>(&::UnityEngine::InputSystem::Users::InputUser::CreateUserWithoutPairedDevices)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2ac091c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "CreateUserWithoutPairedDevices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.PerformPairingWithDevice
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Users::InputUser (*)(::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::Users::InputUser, ::UnityEngine::InputSystem::Users::InputUserPairingOptions)>(&::UnityEngine::InputSystem::Users::InputUser::PerformPairingWithDevice)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x2abffe8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "PerformPairingWithDevice",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Users::InputUser>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Users::InputUserPairingOptions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.InitiateUserAccountSelection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int32_t, ::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::Users::InputUserPairingOptions)>(&::UnityEngine::InputSystem::Users::InputUser::InitiateUserAccountSelection)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x2acc690;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "InitiateUserAccountSelection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Users::InputUserPairingOptions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::Users::InputUser::*)(::UnityEngine::InputSystem::Users::InputUser)>(&::UnityEngine::InputSystem::Users::InputUser::Equals)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2acd0cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Users::InputUser>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::Users::InputUser::*)(::System::Object*)>(&::UnityEngine::InputSystem::Users::InputUser::Equals)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2acd0dc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.GetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::Users::InputUser::*)()>(&::UnityEngine::InputSystem::Users::InputUser::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2acd154;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.op_Equality
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::InputSystem::Users::InputUser, ::UnityEngine::InputSystem::Users::InputUser)>(&::UnityEngine::InputSystem::Users::InputUser::op_Equality)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2ac2434;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "op_Equality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Users::InputUser>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Users::InputUser>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.op_Inequality
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::InputSystem::Users::InputUser, ::UnityEngine::InputSystem::Users::InputUser)>(&::UnityEngine::InputSystem::Users::InputUser::op_Inequality)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2acc684;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "op_Inequality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Users::InputUser>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Users::InputUser>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.AddUser
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::UnityEngine::InputSystem::Users::InputUser::AddUser)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x2acc594;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "AddUser",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.RemoveUser
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t)>(&::UnityEngine::InputSystem::Users::InputUser::RemoveUser)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x2acbcbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "RemoveUser",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.Notify
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, ::UnityEngine::InputSystem::Users::InputUserChange, ::UnityEngine::InputSystem::InputDevice*)>(&::UnityEngine::InputSystem::Users::InputUser::Notify)> {
  constexpr static std::size_t size = 0x308;
  constexpr static std::size_t addrs = 0x2acac00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "Notify",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Users::InputUserChange>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.TryFindUserIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(uint32_t)>(&::UnityEngine::InputSystem::Users::InputUser::TryFindUserIndex)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2ac9c64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "TryFindUserIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.TryFindUserIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::UnityEngine::InputSystem::Users::InputUserAccountHandle)>(&::UnityEngine::InputSystem::Users::InputUser::TryFindUserIndex)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x2acc4b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "TryFindUserIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Users::InputUserAccountHandle>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.TryFindUserIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::UnityEngine::InputSystem::InputDevice*)>(&::UnityEngine::InputSystem::Users::InputUser::TryFindUserIndex)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x2acc288;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "TryFindUserIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.AddDeviceToUser
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, ::UnityEngine::InputSystem::InputDevice*, bool, bool)>(&::UnityEngine::InputSystem::Users::InputUser::AddDeviceToUser)> {
  constexpr static std::size_t size = 0x40c;
  constexpr static std::size_t addrs = 0x2acc7a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "AddDeviceToUser",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.RemoveDeviceFromUser
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, ::UnityEngine::InputSystem::InputDevice*, bool)>(&::UnityEngine::InputSystem::Users::InputUser::RemoveDeviceFromUser)> {
  constexpr static std::size_t size = 0x460;
  constexpr static std::size_t addrs = 0x2acb85c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "RemoveDeviceFromUser",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.UpdateControlSchemeMatch
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, bool)>(&::UnityEngine::InputSystem::Users::InputUser::UpdateControlSchemeMatch)> {
  constexpr static std::size_t size = 0x828;
  constexpr static std::size_t addrs = 0x2acaf08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "UpdateControlSchemeMatch",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.UpdatePlatformUserAccount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(int32_t, ::UnityEngine::InputSystem::InputDevice*)>(&::UnityEngine::InputSystem::Users::InputUser::UpdatePlatformUserAccount)> {
  constexpr static std::size_t size = 0x36c;
  constexpr static std::size_t addrs = 0x2accbb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "UpdatePlatformUserAccount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.QueryPairedPlatformUserAccount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(::UnityEngine::InputSystem::InputDevice*, ByRef<::System::Nullable_1<::UnityEngine::InputSystem::Users::InputUserAccountHandle>>, ByRef<::StringW>, ByRef<::StringW>)>(&::UnityEngine::InputSystem::Users::InputUser::QueryPairedPlatformUserAccount)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x2acd2bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "QueryPairedPlatformUserAccount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Nullable_1<::UnityEngine::InputSystem::Users::InputUserAccountHandle>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.InitiateUserAccountSelectionAtPlatformLevel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::InputSystem::InputDevice*)>(&::UnityEngine::InputSystem::Users::InputUser::InitiateUserAccountSelectionAtPlatformLevel)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2accf20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "InitiateUserAccountSelectionAtPlatformLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.OnActionChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Object*, ::UnityEngine::InputSystem::InputActionChange)>(&::UnityEngine::InputSystem::Users::InputUser::OnActionChange)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2acd440;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "OnActionChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionChange>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.OnDeviceChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::InputDeviceChange)>(&::UnityEngine::InputSystem::Users::InputUser::OnDeviceChange)> {
  constexpr static std::size_t size = 0x488;
  constexpr static std::size_t addrs = 0x2acd508;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "OnDeviceChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDeviceChange>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.FindLostDevice
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::UnityEngine::InputSystem::InputDevice*, int32_t)>(&::UnityEngine::InputSystem::Users::InputUser::FindLostDevice)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2acd990;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "FindLostDevice",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.OnEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*)>(&::UnityEngine::InputSystem::Users::InputUser::OnEvent)> {
  constexpr static std::size_t size = 0x4bc;
  constexpr static std::size_t addrs = 0x2acda48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "OnEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.SaveAndResetState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::ISavedState* (*)()>(&::UnityEngine::InputSystem::Users::InputUser::SaveAndResetState)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x2acdf04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "SaveAndResetState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.HookIntoActionChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::InputSystem::Users::InputUser::HookIntoActionChange)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x2aca4d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "HookIntoActionChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.UnhookFromActionChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::InputSystem::Users::InputUser::UnhookFromActionChange)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2acd1e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "UnhookFromActionChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.HookIntoDeviceChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::InputSystem::Users::InputUser::HookIntoDeviceChange)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x2accfe0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "HookIntoDeviceChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.UnhookFromDeviceChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::InputSystem::Users::InputUser::UnhookFromDeviceChange)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2acd15c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "UnhookFromDeviceChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.HookIntoEvents
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::InputSystem::Users::InputUser::HookIntoEvents)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x2aca0b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "HookIntoEvents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.UnhookFromDeviceStateChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::InputSystem::Users::InputUser::UnhookFromDeviceStateChange)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2aca1bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "UnhookFromDeviceStateChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.DisposeAndResetGlobalState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::InputSystem::Users::InputUser::DisposeAndResetGlobalState)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2ace0e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "DisposeAndResetGlobalState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.ResetGlobals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::InputSystem::Users::InputUser::ResetGlobals)> {
  constexpr static std::size_t size = 0x1018;
  constexpr static std::size_t addrs = 0x2ace1a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "ResetGlobals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::InputSystem::Users::InputUser>"
constexpr  UnityEngine::InputSystem::Users::InputUser::operator ::System::IEquatable_1<::UnityEngine::InputSystem::Users::InputUser>*()  {
return static_cast<::System::IEquatable_1<::UnityEngine::InputSystem::Users::InputUser>*>(static_cast<void*>(::cordl_internals::Box(this)));
}
constexpr void UnityEngine::InputSystem::Users::InputUser::__set_m_Id(uint32_t  value)  {
::cordl_internals::setInstanceField<uint32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint32_t>(value));
}
constexpr uint32_t& UnityEngine::InputSystem::Users::InputUser::__get_m_Id()  {
return ::cordl_internals::getInstanceField<uint32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint32_t const& UnityEngine::InputSystem::Users::InputUser::__get_m_Id() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void UnityEngine::InputSystem::Users::InputUser::setStaticF_s_GlobalState(::UnityEngine::InputSystem::Users::__InputUser__GlobalState  value)  {
::cordl_internals::setStaticField<::UnityEngine::InputSystem::Users::__InputUser__GlobalState, "s_GlobalState", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get>(std::forward<::UnityEngine::InputSystem::Users::__InputUser__GlobalState>(value));
}
inline ::UnityEngine::InputSystem::Users::__InputUser__GlobalState UnityEngine::InputSystem::Users::InputUser::getStaticF_s_GlobalState()  {
return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::Users::__InputUser__GlobalState, "s_GlobalState", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get>();
}
inline bool UnityEngine::InputSystem::Users::InputUser::get_valid()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "get_valid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline int32_t UnityEngine::InputSystem::Users::InputUser::get_index()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "get_index",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline uint32_t UnityEngine::InputSystem::Users::InputUser::get_id()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "get_id",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(*this, ___internal_method);
}
inline ::System::Nullable_1<::UnityEngine::InputSystem::Users::InputUserAccountHandle> UnityEngine::InputSystem::Users::InputUser::get_platformUserAccountHandle()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "get_platformUserAccountHandle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::UnityEngine::InputSystem::Users::InputUserAccountHandle>, false>(*this, ___internal_method);
}
inline ::StringW UnityEngine::InputSystem::Users::InputUser::get_platformUserAccountName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "get_platformUserAccountName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline ::StringW UnityEngine::InputSystem::Users::InputUser::get_platformUserAccountId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "get_platformUserAccountId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*> UnityEngine::InputSystem::Users::InputUser::get_pairedDevices()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "get_pairedDevices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>, false>(*this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*> UnityEngine::InputSystem::Users::InputUser::get_lostDevices()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "get_lostDevices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>, false>(*this, ___internal_method);
}
inline ::UnityEngine::InputSystem::IInputActionCollection* UnityEngine::InputSystem::Users::InputUser::get_actions()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "get_actions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::IInputActionCollection*, false>(*this, ___internal_method);
}
inline ::System::Nullable_1<::UnityEngine::InputSystem::InputControlScheme> UnityEngine::InputSystem::Users::InputUser::get_controlScheme()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "get_controlScheme",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::UnityEngine::InputSystem::InputControlScheme>, false>(*this, ___internal_method);
}
inline ::UnityEngine::InputSystem::__InputControlScheme__MatchResult UnityEngine::InputSystem::Users::InputUser::get_controlSchemeMatch()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "get_controlSchemeMatch",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::__InputControlScheme__MatchResult, false>(*this, ___internal_method);
}
inline bool UnityEngine::InputSystem::Users::InputUser::get_hasMissingRequiredDevices()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "get_hasMissingRequiredDevices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Users::InputUser> UnityEngine::InputSystem::Users::InputUser::get_all()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "get_all",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Users::InputUser>, false>(nullptr, ___internal_method);
}
inline void UnityEngine::InputSystem::Users::InputUser::add_onChange(::System::Action_3<::UnityEngine::InputSystem::Users::InputUser,::UnityEngine::InputSystem::Users::InputUserChange,::UnityEngine::InputSystem::InputDevice*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "add_onChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_3<::UnityEngine::InputSystem::Users::InputUser,::UnityEngine::InputSystem::Users::InputUserChange,::UnityEngine::InputSystem::InputDevice*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void UnityEngine::InputSystem::Users::InputUser::remove_onChange(::System::Action_3<::UnityEngine::InputSystem::Users::InputUser,::UnityEngine::InputSystem::Users::InputUserChange,::UnityEngine::InputSystem::InputDevice*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "remove_onChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_3<::UnityEngine::InputSystem::Users::InputUser,::UnityEngine::InputSystem::Users::InputUserChange,::UnityEngine::InputSystem::InputDevice*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void UnityEngine::InputSystem::Users::InputUser::add_onUnpairedDeviceUsed(::System::Action_2<::UnityEngine::InputSystem::InputControl*,::UnityEngine::InputSystem::LowLevel::InputEventPtr>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "add_onUnpairedDeviceUsed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityEngine::InputSystem::InputControl*,::UnityEngine::InputSystem::LowLevel::InputEventPtr>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void UnityEngine::InputSystem::Users::InputUser::remove_onUnpairedDeviceUsed(::System::Action_2<::UnityEngine::InputSystem::InputControl*,::UnityEngine::InputSystem::LowLevel::InputEventPtr>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "remove_onUnpairedDeviceUsed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityEngine::InputSystem::InputControl*,::UnityEngine::InputSystem::LowLevel::InputEventPtr>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void UnityEngine::InputSystem::Users::InputUser::add_onPrefilterUnpairedDeviceActivity(::System::Func_3<::UnityEngine::InputSystem::InputDevice*,::UnityEngine::InputSystem::LowLevel::InputEventPtr,bool>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "add_onPrefilterUnpairedDeviceActivity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_3<::UnityEngine::InputSystem::InputDevice*,::UnityEngine::InputSystem::LowLevel::InputEventPtr,bool>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void UnityEngine::InputSystem::Users::InputUser::remove_onPrefilterUnpairedDeviceActivity(::System::Func_3<::UnityEngine::InputSystem::InputDevice*,::UnityEngine::InputSystem::LowLevel::InputEventPtr,bool>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "remove_onPrefilterUnpairedDeviceActivity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_3<::UnityEngine::InputSystem::InputDevice*,::UnityEngine::InputSystem::LowLevel::InputEventPtr,bool>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline int32_t UnityEngine::InputSystem::Users::InputUser::get_listenForUnpairedDeviceActivity()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "get_listenForUnpairedDeviceActivity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
inline void UnityEngine::InputSystem::Users::InputUser::set_listenForUnpairedDeviceActivity(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "set_listenForUnpairedDeviceActivity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline ::StringW UnityEngine::InputSystem::Users::InputUser::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::Users::InputUser::AssociateActionsWithUser(::UnityEngine::InputSystem::IInputActionCollection*  actions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "AssociateActionsWithUser",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::IInputActionCollection*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, actions);
}
inline ::UnityEngine::InputSystem::Users::__InputUser__ControlSchemeChangeSyntax UnityEngine::InputSystem::Users::InputUser::ActivateControlScheme(::StringW  schemeName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "ActivateControlScheme",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Users::__InputUser__ControlSchemeChangeSyntax, false>(*this, ___internal_method, schemeName);
}
inline bool UnityEngine::InputSystem::Users::InputUser::TryFindControlScheme(::StringW  schemeName, ByRef<::UnityEngine::InputSystem::InputControlScheme>  scheme)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "TryFindControlScheme",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::InputControlScheme>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, schemeName, scheme);
}
inline void UnityEngine::InputSystem::Users::InputUser::FindControlScheme(::StringW  schemeName, ByRef<::UnityEngine::InputSystem::InputControlScheme>  scheme)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "FindControlScheme",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::InputControlScheme>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, schemeName, scheme);
}
inline ::UnityEngine::InputSystem::Users::__InputUser__ControlSchemeChangeSyntax UnityEngine::InputSystem::Users::InputUser::ActivateControlScheme(::UnityEngine::InputSystem::InputControlScheme  scheme)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "ActivateControlScheme",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControlScheme>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Users::__InputUser__ControlSchemeChangeSyntax, false>(*this, ___internal_method, scheme);
}
inline void UnityEngine::InputSystem::Users::InputUser::ActivateControlSchemeInternal(int32_t  userIndex, ::UnityEngine::InputSystem::InputControlScheme  scheme)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "ActivateControlSchemeInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControlScheme>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, userIndex, scheme);
}
inline void UnityEngine::InputSystem::Users::InputUser::UnpairDevice(::UnityEngine::InputSystem::InputDevice*  device)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "UnpairDevice",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, device);
}
inline void UnityEngine::InputSystem::Users::InputUser::UnpairDevices()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "UnpairDevices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::Users::InputUser::RemoveLostDevicesForUser(int32_t  userIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "RemoveLostDevicesForUser",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, userIndex);
}
inline void UnityEngine::InputSystem::Users::InputUser::UnpairDevicesAndRemoveUser()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "UnpairDevicesAndRemoveUser",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputDevice*> UnityEngine::InputSystem::Users::InputUser::GetUnpairedInputDevices()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "GetUnpairedInputDevices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputDevice*>, false>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::InputSystem::Users::InputUser::GetUnpairedInputDevices(ByRef<::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputDevice*>>  list)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "GetUnpairedInputDevices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputDevice*>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, list);
}
inline ::System::Nullable_1<::UnityEngine::InputSystem::Users::InputUser> UnityEngine::InputSystem::Users::InputUser::FindUserPairedToDevice(::UnityEngine::InputSystem::InputDevice*  device)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "FindUserPairedToDevice",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::UnityEngine::InputSystem::Users::InputUser>, false>(nullptr, ___internal_method, device);
}
inline ::System::Nullable_1<::UnityEngine::InputSystem::Users::InputUser> UnityEngine::InputSystem::Users::InputUser::FindUserByAccount(::UnityEngine::InputSystem::Users::InputUserAccountHandle  platformUserAccountHandle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "FindUserByAccount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Users::InputUserAccountHandle>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::UnityEngine::InputSystem::Users::InputUser>, false>(nullptr, ___internal_method, platformUserAccountHandle);
}
inline ::UnityEngine::InputSystem::Users::InputUser UnityEngine::InputSystem::Users::InputUser::CreateUserWithoutPairedDevices()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "CreateUserWithoutPairedDevices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Users::InputUser, false>(nullptr, ___internal_method);
}
/// @param user: ::UnityEngine::InputSystem::Users::InputUser (default: {})
/// @param options: ::UnityEngine::InputSystem::Users::InputUserPairingOptions (default: static_cast<int32_t>(0x0))
inline ::UnityEngine::InputSystem::Users::InputUser UnityEngine::InputSystem::Users::InputUser::PerformPairingWithDevice(::UnityEngine::InputSystem::InputDevice*  device, ::UnityEngine::InputSystem::Users::InputUser  user, ::UnityEngine::InputSystem::Users::InputUserPairingOptions  options)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "PerformPairingWithDevice",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Users::InputUser>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Users::InputUserPairingOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Users::InputUser, false>(nullptr, ___internal_method, device, user, options);
}
inline bool UnityEngine::InputSystem::Users::InputUser::InitiateUserAccountSelection(int32_t  userIndex, ::UnityEngine::InputSystem::InputDevice*  device, ::UnityEngine::InputSystem::Users::InputUserPairingOptions  options)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "InitiateUserAccountSelection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Users::InputUserPairingOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, userIndex, device, options);
}
inline bool UnityEngine::InputSystem::Users::InputUser::Equals(::UnityEngine::InputSystem::Users::InputUser  other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Users::InputUser>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, other);
}
inline bool UnityEngine::InputSystem::Users::InputUser::Equals(::System::Object*  obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, obj);
}
inline int32_t UnityEngine::InputSystem::Users::InputUser::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline bool UnityEngine::InputSystem::Users::InputUser::op_Equality(::UnityEngine::InputSystem::Users::InputUser  left, ::UnityEngine::InputSystem::Users::InputUser  right)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "op_Equality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Users::InputUser>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Users::InputUser>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, left, right);
}
inline bool UnityEngine::InputSystem::Users::InputUser::op_Inequality(::UnityEngine::InputSystem::Users::InputUser  left, ::UnityEngine::InputSystem::Users::InputUser  right)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "op_Inequality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Users::InputUser>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Users::InputUser>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, left, right);
}
inline int32_t UnityEngine::InputSystem::Users::InputUser::AddUser()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "AddUser",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
inline void UnityEngine::InputSystem::Users::InputUser::RemoveUser(int32_t  userIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "RemoveUser",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, userIndex);
}
inline void UnityEngine::InputSystem::Users::InputUser::Notify(int32_t  userIndex, ::UnityEngine::InputSystem::Users::InputUserChange  change, ::UnityEngine::InputSystem::InputDevice*  device)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "Notify",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Users::InputUserChange>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, userIndex, change, device);
}
inline int32_t UnityEngine::InputSystem::Users::InputUser::TryFindUserIndex(uint32_t  userId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "TryFindUserIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, userId);
}
inline int32_t UnityEngine::InputSystem::Users::InputUser::TryFindUserIndex(::UnityEngine::InputSystem::Users::InputUserAccountHandle  platformHandle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "TryFindUserIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Users::InputUserAccountHandle>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, platformHandle);
}
inline int32_t UnityEngine::InputSystem::Users::InputUser::TryFindUserIndex(::UnityEngine::InputSystem::InputDevice*  device)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "TryFindUserIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, device);
}
/// @param asLostDevice: bool (default: false)
/// @param dontUpdateControlScheme: bool (default: false)
inline void UnityEngine::InputSystem::Users::InputUser::AddDeviceToUser(int32_t  userIndex, ::UnityEngine::InputSystem::InputDevice*  device, bool  asLostDevice, bool  dontUpdateControlScheme)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "AddDeviceToUser",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, userIndex, device, asLostDevice, dontUpdateControlScheme);
}
/// @param asLostDevice: bool (default: false)
inline void UnityEngine::InputSystem::Users::InputUser::RemoveDeviceFromUser(int32_t  userIndex, ::UnityEngine::InputSystem::InputDevice*  device, bool  asLostDevice)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "RemoveDeviceFromUser",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, userIndex, device, asLostDevice);
}
/// @param autoPairMissing: bool (default: false)
inline void UnityEngine::InputSystem::Users::InputUser::UpdateControlSchemeMatch(int32_t  userIndex, bool  autoPairMissing)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "UpdateControlSchemeMatch",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, userIndex, autoPairMissing);
}
inline int64_t UnityEngine::InputSystem::Users::InputUser::UpdatePlatformUserAccount(int32_t  userIndex, ::UnityEngine::InputSystem::InputDevice*  device)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "UpdatePlatformUserAccount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(nullptr, ___internal_method, userIndex, device);
}
inline int64_t UnityEngine::InputSystem::Users::InputUser::QueryPairedPlatformUserAccount(::UnityEngine::InputSystem::InputDevice*  device, ByRef<::System::Nullable_1<::UnityEngine::InputSystem::Users::InputUserAccountHandle>>  platformAccountHandle, ByRef<::StringW>  platformAccountName, ByRef<::StringW>  platformAccountId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "QueryPairedPlatformUserAccount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Nullable_1<::UnityEngine::InputSystem::Users::InputUserAccountHandle>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(nullptr, ___internal_method, device, platformAccountHandle, platformAccountName, platformAccountId);
}
inline bool UnityEngine::InputSystem::Users::InputUser::InitiateUserAccountSelectionAtPlatformLevel(::UnityEngine::InputSystem::InputDevice*  device)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "InitiateUserAccountSelectionAtPlatformLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, device);
}
inline void UnityEngine::InputSystem::Users::InputUser::OnActionChange(::System::Object*  obj, ::UnityEngine::InputSystem::InputActionChange  change)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "OnActionChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionChange>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, obj, change);
}
inline void UnityEngine::InputSystem::Users::InputUser::OnDeviceChange(::UnityEngine::InputSystem::InputDevice*  device, ::UnityEngine::InputSystem::InputDeviceChange  change)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "OnDeviceChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDeviceChange>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, device, change);
}
/// @param startIndex: int32_t (default: static_cast<int32_t>(0x0))
inline int32_t UnityEngine::InputSystem::Users::InputUser::FindLostDevice(::UnityEngine::InputSystem::InputDevice*  device, int32_t  startIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "FindLostDevice",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, device, startIndex);
}
inline void UnityEngine::InputSystem::Users::InputUser::OnEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr  eventPtr, ::UnityEngine::InputSystem::InputDevice*  device)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "OnEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, eventPtr, device);
}
inline ::UnityEngine::InputSystem::Utilities::ISavedState* UnityEngine::InputSystem::Users::InputUser::SaveAndResetState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "SaveAndResetState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::ISavedState*, false>(nullptr, ___internal_method);
}
inline void UnityEngine::InputSystem::Users::InputUser::HookIntoActionChange()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "HookIntoActionChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void UnityEngine::InputSystem::Users::InputUser::UnhookFromActionChange()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "UnhookFromActionChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void UnityEngine::InputSystem::Users::InputUser::HookIntoDeviceChange()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "HookIntoDeviceChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void UnityEngine::InputSystem::Users::InputUser::UnhookFromDeviceChange()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "UnhookFromDeviceChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void UnityEngine::InputSystem::Users::InputUser::HookIntoEvents()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "HookIntoEvents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void UnityEngine::InputSystem::Users::InputUser::UnhookFromDeviceStateChange()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "UnhookFromDeviceStateChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void UnityEngine::InputSystem::Users::InputUser::DisposeAndResetGlobalState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "DisposeAndResetGlobalState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void UnityEngine::InputSystem::Users::InputUser::ResetGlobals()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                            "ResetGlobals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_Id", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::Users::InputUser::InputUser(uint32_t  m_Id) noexcept : ::bs_hook::ValueTypeWrapper<0x4>() {this->m_Id = m_Id;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
