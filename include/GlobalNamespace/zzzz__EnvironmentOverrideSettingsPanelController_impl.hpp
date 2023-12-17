#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__EnvironmentOverrideSettingsPanelController_def.hpp"
#include "GlobalNamespace/zzzz__OverrideEnvironmentSettings_def.hpp"
#include "HMUI/zzzz__DropdownWithTableView_def.hpp"
#include "UnityEngine/UI/zzzz__Toggle_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentOverrideSettingsPanelController_def.hpp"
#include "GlobalNamespace/zzzz__IRefreshable_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentsListSO_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "HMUI/zzzz__PanelAnimationSO_def.hpp"
#include "GlobalNamespace/zzzz__IAnalyticsModel_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentTypeSO_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentInfoSO_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "HMUI/zzzz__SimpleTextDropdown_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__EnvironmentOverrideSettingsPanelController__Elements.get_environmentInfos
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::EnvironmentInfoSO*>* (::GlobalNamespace::__EnvironmentOverrideSettingsPanelController__Elements::*)()>(&::GlobalNamespace::__EnvironmentOverrideSettingsPanelController__Elements::get_environmentInfos)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2284348;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EnvironmentOverrideSettingsPanelController__Elements*>::get(),
                            "get_environmentInfos",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__EnvironmentOverrideSettingsPanelController__Elements.set_environmentInfos
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__EnvironmentOverrideSettingsPanelController__Elements::*)(::System::Collections::Generic::List_1<::GlobalNamespace::EnvironmentInfoSO*>*)>(&::GlobalNamespace::__EnvironmentOverrideSettingsPanelController__Elements::set_environmentInfos)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2284350;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EnvironmentOverrideSettingsPanelController__Elements*>::get(),
                            "set_environmentInfos",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::EnvironmentInfoSO*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__EnvironmentOverrideSettingsPanelController__Elements._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__EnvironmentOverrideSettingsPanelController__Elements::*)()>(&::GlobalNamespace::__EnvironmentOverrideSettingsPanelController__Elements::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2284358;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EnvironmentOverrideSettingsPanelController__Elements*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__EnvironmentOverrideSettingsPanelController__Elements::__set_label(::TMPro::TextMeshProUGUI*  value)  {
::cordl_internals::setInstanceField<::TMPro::TextMeshProUGUI*, 0x10>(this, std::forward<::TMPro::TextMeshProUGUI*>(value));
}
constexpr ::TMPro::TextMeshProUGUI* GlobalNamespace::__EnvironmentOverrideSettingsPanelController__Elements::__get_label()  {
return ::cordl_internals::getInstanceField<::TMPro::TextMeshProUGUI*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> GlobalNamespace::__EnvironmentOverrideSettingsPanelController__Elements::__get_label() const {
return ::cordl_internals::getInstanceField<::TMPro::TextMeshProUGUI*, 0x10>(this);
}
constexpr void GlobalNamespace::__EnvironmentOverrideSettingsPanelController__Elements::__set_simpleTextDropdown(::HMUI::SimpleTextDropdown*  value)  {
::cordl_internals::setInstanceField<::HMUI::SimpleTextDropdown*, 0x18>(this, std::forward<::HMUI::SimpleTextDropdown*>(value));
}
constexpr ::HMUI::SimpleTextDropdown* GlobalNamespace::__EnvironmentOverrideSettingsPanelController__Elements::__get_simpleTextDropdown()  {
return ::cordl_internals::getInstanceField<::HMUI::SimpleTextDropdown*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::SimpleTextDropdown*> GlobalNamespace::__EnvironmentOverrideSettingsPanelController__Elements::__get_simpleTextDropdown() const {
return ::cordl_internals::getInstanceField<::HMUI::SimpleTextDropdown*, 0x18>(this);
}
constexpr void GlobalNamespace::__EnvironmentOverrideSettingsPanelController__Elements::__set_environmentType(::GlobalNamespace::EnvironmentTypeSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::EnvironmentTypeSO*, 0x20>(this, std::forward<::GlobalNamespace::EnvironmentTypeSO*>(value));
}
constexpr ::GlobalNamespace::EnvironmentTypeSO* GlobalNamespace::__EnvironmentOverrideSettingsPanelController__Elements::__get_environmentType()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::EnvironmentTypeSO*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnvironmentTypeSO*> GlobalNamespace::__EnvironmentOverrideSettingsPanelController__Elements::__get_environmentType() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::EnvironmentTypeSO*, 0x20>(this);
}
constexpr void GlobalNamespace::__EnvironmentOverrideSettingsPanelController__Elements::__set__environmentInfos_k__BackingField(::System::Collections::Generic::List_1<::GlobalNamespace::EnvironmentInfoSO*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::EnvironmentInfoSO*>*, 0x28>(this, std::forward<::System::Collections::Generic::List_1<::GlobalNamespace::EnvironmentInfoSO*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::EnvironmentInfoSO*>* GlobalNamespace::__EnvironmentOverrideSettingsPanelController__Elements::__get__environmentInfos_k__BackingField()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::EnvironmentInfoSO*>*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::EnvironmentInfoSO*>*> GlobalNamespace::__EnvironmentOverrideSettingsPanelController__Elements::__get__environmentInfos_k__BackingField() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::EnvironmentInfoSO*>*, 0x28>(this);
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::EnvironmentInfoSO*>* GlobalNamespace::__EnvironmentOverrideSettingsPanelController__Elements::get_environmentInfos()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EnvironmentOverrideSettingsPanelController__Elements*>::get(),
                            "get_environmentInfos",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::EnvironmentInfoSO*>*, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__EnvironmentOverrideSettingsPanelController__Elements::set_environmentInfos(::System::Collections::Generic::List_1<::GlobalNamespace::EnvironmentInfoSO*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EnvironmentOverrideSettingsPanelController__Elements*>::get(),
                            "set_environmentInfos",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::EnvironmentInfoSO*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::GlobalNamespace::__EnvironmentOverrideSettingsPanelController__Elements* GlobalNamespace::__EnvironmentOverrideSettingsPanelController__Elements::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__EnvironmentOverrideSettingsPanelController__Elements*>());
}
inline void GlobalNamespace::__EnvironmentOverrideSettingsPanelController__Elements::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EnvironmentOverrideSettingsPanelController__Elements*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::__EnvironmentOverrideSettingsPanelController____c._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__EnvironmentOverrideSettingsPanelController____c::*)()>(&::GlobalNamespace::__EnvironmentOverrideSettingsPanelController____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22843c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EnvironmentOverrideSettingsPanelController____c*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__EnvironmentOverrideSettingsPanelController____c._SetData_b__12_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__EnvironmentOverrideSettingsPanelController____c::*)(::GlobalNamespace::EnvironmentInfoSO*)>(&::GlobalNamespace::__EnvironmentOverrideSettingsPanelController____c::_SetData_b__12_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x22843cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EnvironmentOverrideSettingsPanelController____c*>::get(),
                            "<SetData>b__12_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentInfoSO*>::get()}
                        )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__EnvironmentOverrideSettingsPanelController____c::setStaticF___9(::GlobalNamespace::__EnvironmentOverrideSettingsPanelController____c*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::__EnvironmentOverrideSettingsPanelController____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EnvironmentOverrideSettingsPanelController____c*>::get>(std::forward<::GlobalNamespace::__EnvironmentOverrideSettingsPanelController____c*>(value));
}
inline ::GlobalNamespace::__EnvironmentOverrideSettingsPanelController____c* GlobalNamespace::__EnvironmentOverrideSettingsPanelController____c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::__EnvironmentOverrideSettingsPanelController____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EnvironmentOverrideSettingsPanelController____c*>::get>();
}
inline void GlobalNamespace::__EnvironmentOverrideSettingsPanelController____c::setStaticF___9__12_0(::System::Func_2<::GlobalNamespace::EnvironmentInfoSO*,::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::GlobalNamespace::EnvironmentInfoSO*,::StringW>*, "<>9__12_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EnvironmentOverrideSettingsPanelController____c*>::get>(std::forward<::System::Func_2<::GlobalNamespace::EnvironmentInfoSO*,::StringW>*>(value));
}
inline ::System::Func_2<::GlobalNamespace::EnvironmentInfoSO*,::StringW>* GlobalNamespace::__EnvironmentOverrideSettingsPanelController____c::getStaticF___9__12_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::GlobalNamespace::EnvironmentInfoSO*,::StringW>*, "<>9__12_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EnvironmentOverrideSettingsPanelController____c*>::get>();
}
inline ::GlobalNamespace::__EnvironmentOverrideSettingsPanelController____c* GlobalNamespace::__EnvironmentOverrideSettingsPanelController____c::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__EnvironmentOverrideSettingsPanelController____c*>());
}
inline void GlobalNamespace::__EnvironmentOverrideSettingsPanelController____c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EnvironmentOverrideSettingsPanelController____c*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::StringW GlobalNamespace::__EnvironmentOverrideSettingsPanelController____c::_SetData_b__12_0(::GlobalNamespace::EnvironmentInfoSO*  x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EnvironmentOverrideSettingsPanelController____c*>::get(),
                            "<SetData>b__12_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentInfoSO*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method, x);
}
//  Writing Method size for method: ::GlobalNamespace::EnvironmentOverrideSettingsPanelController.get_overrideEnvironmentSettings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OverrideEnvironmentSettings* (::GlobalNamespace::EnvironmentOverrideSettingsPanelController::*)()>(&::GlobalNamespace::EnvironmentOverrideSettingsPanelController::get_overrideEnvironmentSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22838bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentOverrideSettingsPanelController*>::get(),
                            "get_overrideEnvironmentSettings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentOverrideSettingsPanelController.SetData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EnvironmentOverrideSettingsPanelController::*)(::GlobalNamespace::OverrideEnvironmentSettings*)>(&::GlobalNamespace::EnvironmentOverrideSettingsPanelController::SetData)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x22838c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentOverrideSettingsPanelController*>::get(),
                            "SetData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OverrideEnvironmentSettings*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentOverrideSettingsPanelController.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EnvironmentOverrideSettingsPanelController::*)()>(&::GlobalNamespace::EnvironmentOverrideSettingsPanelController::OnDestroy)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x2283b74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentOverrideSettingsPanelController*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentOverrideSettingsPanelController.Refresh
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EnvironmentOverrideSettingsPanelController::*)()>(&::GlobalNamespace::EnvironmentOverrideSettingsPanelController::Refresh)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x2283d10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentOverrideSettingsPanelController*>::get(),
                            "Refresh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentOverrideSettingsPanelController.HandleDropDownDidSelectCellWithIdx
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EnvironmentOverrideSettingsPanelController::*)(::HMUI::DropdownWithTableView*, int32_t)>(&::GlobalNamespace::EnvironmentOverrideSettingsPanelController::HandleDropDownDidSelectCellWithIdx)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x2283e64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentOverrideSettingsPanelController*>::get(),
                            "HandleDropDownDidSelectCellWithIdx",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::DropdownWithTableView*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentOverrideSettingsPanelController.HandleOverrideEnvironmentsToggleValueChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EnvironmentOverrideSettingsPanelController::*)(bool)>(&::GlobalNamespace::EnvironmentOverrideSettingsPanelController::HandleOverrideEnvironmentsToggleValueChanged)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x22840f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentOverrideSettingsPanelController*>::get(),
                            "HandleOverrideEnvironmentsToggleValueChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentOverrideSettingsPanelController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EnvironmentOverrideSettingsPanelController::*)()>(&::GlobalNamespace::EnvironmentOverrideSettingsPanelController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2284320;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentOverrideSettingsPanelController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentOverrideSettingsPanelController._HandleOverrideEnvironmentsToggleValueChanged_b__16_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EnvironmentOverrideSettingsPanelController::*)()>(&::GlobalNamespace::EnvironmentOverrideSettingsPanelController::_HandleOverrideEnvironmentsToggleValueChanged_b__16_0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2284328;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentOverrideSettingsPanelController*>::get(),
                            "<HandleOverrideEnvironmentsToggleValueChanged>b__16_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IRefreshable"
constexpr  GlobalNamespace::EnvironmentOverrideSettingsPanelController::operator ::GlobalNamespace::IRefreshable*() noexcept {
return static_cast<::GlobalNamespace::IRefreshable*>(static_cast<void*>(this));
}
constexpr void GlobalNamespace::EnvironmentOverrideSettingsPanelController::__set__overrideEnvironmentsToggle(::UnityEngine::UI::Toggle*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::Toggle*, 0x18>(this, std::forward<::UnityEngine::UI::Toggle*>(value));
}
constexpr ::UnityEngine::UI::Toggle* GlobalNamespace::EnvironmentOverrideSettingsPanelController::__get__overrideEnvironmentsToggle()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Toggle*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Toggle*> GlobalNamespace::EnvironmentOverrideSettingsPanelController::__get__overrideEnvironmentsToggle() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Toggle*, 0x18>(this);
}
constexpr void GlobalNamespace::EnvironmentOverrideSettingsPanelController::__set__elementsGO(::UnityEngine::GameObject*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::GameObject*, 0x20>(this, std::forward<::UnityEngine::GameObject*>(value));
}
constexpr ::UnityEngine::GameObject* GlobalNamespace::EnvironmentOverrideSettingsPanelController::__get__elementsGO()  {
return ::cordl_internals::getInstanceField<::UnityEngine::GameObject*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> GlobalNamespace::EnvironmentOverrideSettingsPanelController::__get__elementsGO() const {
return ::cordl_internals::getInstanceField<::UnityEngine::GameObject*, 0x20>(this);
}
constexpr void GlobalNamespace::EnvironmentOverrideSettingsPanelController::__set__elements(::ArrayW<::GlobalNamespace::__EnvironmentOverrideSettingsPanelController__Elements*,::Array<::GlobalNamespace::__EnvironmentOverrideSettingsPanelController__Elements*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::__EnvironmentOverrideSettingsPanelController__Elements*,::Array<::GlobalNamespace::__EnvironmentOverrideSettingsPanelController__Elements*>*>, 0x28>(this, std::forward<::ArrayW<::GlobalNamespace::__EnvironmentOverrideSettingsPanelController__Elements*,::Array<::GlobalNamespace::__EnvironmentOverrideSettingsPanelController__Elements*>*>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::__EnvironmentOverrideSettingsPanelController__Elements*,::Array<::GlobalNamespace::__EnvironmentOverrideSettingsPanelController__Elements*>*>& GlobalNamespace::EnvironmentOverrideSettingsPanelController::__get__elements()  {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::__EnvironmentOverrideSettingsPanelController__Elements*,::Array<::GlobalNamespace::__EnvironmentOverrideSettingsPanelController__Elements*>*>, 0x28>(this);
}
constexpr ::ArrayW<::GlobalNamespace::__EnvironmentOverrideSettingsPanelController__Elements*,::Array<::GlobalNamespace::__EnvironmentOverrideSettingsPanelController__Elements*>*> const& GlobalNamespace::EnvironmentOverrideSettingsPanelController::__get__elements() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::__EnvironmentOverrideSettingsPanelController__Elements*,::Array<::GlobalNamespace::__EnvironmentOverrideSettingsPanelController__Elements*>*>, 0x28>(this);
}
constexpr void GlobalNamespace::EnvironmentOverrideSettingsPanelController::__set__presentPanelAnimation(::HMUI::PanelAnimationSO*  value)  {
::cordl_internals::setInstanceField<::HMUI::PanelAnimationSO*, 0x30>(this, std::forward<::HMUI::PanelAnimationSO*>(value));
}
constexpr ::HMUI::PanelAnimationSO* GlobalNamespace::EnvironmentOverrideSettingsPanelController::__get__presentPanelAnimation()  {
return ::cordl_internals::getInstanceField<::HMUI::PanelAnimationSO*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::PanelAnimationSO*> GlobalNamespace::EnvironmentOverrideSettingsPanelController::__get__presentPanelAnimation() const {
return ::cordl_internals::getInstanceField<::HMUI::PanelAnimationSO*, 0x30>(this);
}
constexpr void GlobalNamespace::EnvironmentOverrideSettingsPanelController::__set__dismissPanelAnimation(::HMUI::PanelAnimationSO*  value)  {
::cordl_internals::setInstanceField<::HMUI::PanelAnimationSO*, 0x38>(this, std::forward<::HMUI::PanelAnimationSO*>(value));
}
constexpr ::HMUI::PanelAnimationSO* GlobalNamespace::EnvironmentOverrideSettingsPanelController::__get__dismissPanelAnimation()  {
return ::cordl_internals::getInstanceField<::HMUI::PanelAnimationSO*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::PanelAnimationSO*> GlobalNamespace::EnvironmentOverrideSettingsPanelController::__get__dismissPanelAnimation() const {
return ::cordl_internals::getInstanceField<::HMUI::PanelAnimationSO*, 0x38>(this);
}
constexpr void GlobalNamespace::EnvironmentOverrideSettingsPanelController::__set__allEnvironments(::GlobalNamespace::EnvironmentsListSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::EnvironmentsListSO*, 0x40>(this, std::forward<::GlobalNamespace::EnvironmentsListSO*>(value));
}
constexpr ::GlobalNamespace::EnvironmentsListSO* GlobalNamespace::EnvironmentOverrideSettingsPanelController::__get__allEnvironments()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::EnvironmentsListSO*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnvironmentsListSO*> GlobalNamespace::EnvironmentOverrideSettingsPanelController::__get__allEnvironments() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::EnvironmentsListSO*, 0x40>(this);
}
constexpr void GlobalNamespace::EnvironmentOverrideSettingsPanelController::__set__analyticsModel(::GlobalNamespace::IAnalyticsModel*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IAnalyticsModel*, 0x48>(this, std::forward<::GlobalNamespace::IAnalyticsModel*>(value));
}
constexpr ::GlobalNamespace::IAnalyticsModel* GlobalNamespace::EnvironmentOverrideSettingsPanelController::__get__analyticsModel()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IAnalyticsModel*, 0x48>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAnalyticsModel*> GlobalNamespace::EnvironmentOverrideSettingsPanelController::__get__analyticsModel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IAnalyticsModel*, 0x48>(this);
}
constexpr void GlobalNamespace::EnvironmentOverrideSettingsPanelController::__set__overrideEnvironmentSettings(::GlobalNamespace::OverrideEnvironmentSettings*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::OverrideEnvironmentSettings*, 0x50>(this, std::forward<::GlobalNamespace::OverrideEnvironmentSettings*>(value));
}
constexpr ::GlobalNamespace::OverrideEnvironmentSettings* GlobalNamespace::EnvironmentOverrideSettingsPanelController::__get__overrideEnvironmentSettings()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OverrideEnvironmentSettings*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OverrideEnvironmentSettings*> GlobalNamespace::EnvironmentOverrideSettingsPanelController::__get__overrideEnvironmentSettings() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OverrideEnvironmentSettings*, 0x50>(this);
}
constexpr void GlobalNamespace::EnvironmentOverrideSettingsPanelController::__set__initialized(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x58>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::EnvironmentOverrideSettingsPanelController::__get__initialized()  {
return ::cordl_internals::getInstanceField<bool, 0x58>(this);
}
constexpr bool const& GlobalNamespace::EnvironmentOverrideSettingsPanelController::__get__initialized() const {
return ::cordl_internals::getInstanceField<bool, 0x58>(this);
}
inline ::GlobalNamespace::OverrideEnvironmentSettings* GlobalNamespace::EnvironmentOverrideSettingsPanelController::get_overrideEnvironmentSettings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentOverrideSettingsPanelController*>::get(),
                            "get_overrideEnvironmentSettings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OverrideEnvironmentSettings*, false>(*this, ___internal_method);
}
inline void GlobalNamespace::EnvironmentOverrideSettingsPanelController::SetData(::GlobalNamespace::OverrideEnvironmentSettings*  overrideEnvironmentSettings)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentOverrideSettingsPanelController*>::get(),
                            "SetData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OverrideEnvironmentSettings*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, overrideEnvironmentSettings);
}
inline void GlobalNamespace::EnvironmentOverrideSettingsPanelController::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentOverrideSettingsPanelController*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::EnvironmentOverrideSettingsPanelController::Refresh()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentOverrideSettingsPanelController*>::get(),
                            "Refresh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::EnvironmentOverrideSettingsPanelController::HandleDropDownDidSelectCellWithIdx(::HMUI::DropdownWithTableView*  dropDownWithTableView, int32_t  idx)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentOverrideSettingsPanelController*>::get(),
                            "HandleDropDownDidSelectCellWithIdx",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::DropdownWithTableView*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, dropDownWithTableView, idx);
}
inline void GlobalNamespace::EnvironmentOverrideSettingsPanelController::HandleOverrideEnvironmentsToggleValueChanged(bool  isOn)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentOverrideSettingsPanelController*>::get(),
                            "HandleOverrideEnvironmentsToggleValueChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, isOn);
}
inline ::GlobalNamespace::EnvironmentOverrideSettingsPanelController* GlobalNamespace::EnvironmentOverrideSettingsPanelController::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::EnvironmentOverrideSettingsPanelController*>());
}
inline void GlobalNamespace::EnvironmentOverrideSettingsPanelController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentOverrideSettingsPanelController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::EnvironmentOverrideSettingsPanelController::_HandleOverrideEnvironmentsToggleValueChanged_b__16_0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentOverrideSettingsPanelController*>::get(),
                            "<HandleOverrideEnvironmentsToggleValueChanged>b__16_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
