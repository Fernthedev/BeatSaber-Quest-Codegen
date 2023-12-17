#pragma once
#include "HMUI/zzzz__FlowCoordinator_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__HealthWarningFlowCoordinator_def.hpp"
#include "GlobalNamespace/zzzz__SelectRegionViewController_def.hpp"
#include "GlobalNamespace/zzzz__PlayerDataModel_def.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
#include "GlobalNamespace/zzzz__ExplicitContentWarningViewController_def.hpp"
#include "GlobalNamespace/zzzz__PrivacyPolicyViewController_def.hpp"
#include "GlobalNamespace/zzzz__MainSettingsModelSO_def.hpp"
#include "GlobalNamespace/zzzz__AppInitScenesTransitionSetupDataContainerSO_def.hpp"
#include "GlobalNamespace/zzzz__HealthWarningFlowCoordinator_def.hpp"
#include "GlobalNamespace/zzzz__SelectLanguageViewController_def.hpp"
#include "GlobalNamespace/zzzz__EulaViewController_def.hpp"
#include "GlobalNamespace/zzzz__GameScenesManager_def.hpp"
#include "GlobalNamespace/zzzz__ISaveData_def.hpp"
#include "GlobalNamespace/zzzz__HealthWarningViewController_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "GlobalNamespace/zzzz__FadeInOutController_def.hpp"
#include "GlobalNamespace/zzzz__ScenesTransitionSetupDataSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__HealthWarningFlowCoordinator__InitData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__HealthWarningFlowCoordinator__InitData::*)(::GlobalNamespace::ScenesTransitionSetupDataSO*)>(&::GlobalNamespace::__HealthWarningFlowCoordinator__InitData::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2289c80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__HealthWarningFlowCoordinator__InitData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ScenesTransitionSetupDataSO*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__HealthWarningFlowCoordinator__InitData::__set_nextScenesTransitionSetupData(::GlobalNamespace::ScenesTransitionSetupDataSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::ScenesTransitionSetupDataSO*, 0x10>(this, std::forward<::GlobalNamespace::ScenesTransitionSetupDataSO*>(value));
}
constexpr ::GlobalNamespace::ScenesTransitionSetupDataSO* GlobalNamespace::__HealthWarningFlowCoordinator__InitData::__get_nextScenesTransitionSetupData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ScenesTransitionSetupDataSO*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ScenesTransitionSetupDataSO*> GlobalNamespace::__HealthWarningFlowCoordinator__InitData::__get_nextScenesTransitionSetupData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ScenesTransitionSetupDataSO*, 0x10>(this);
}
inline ::GlobalNamespace::__HealthWarningFlowCoordinator__InitData* GlobalNamespace::__HealthWarningFlowCoordinator__InitData::New_ctor(::GlobalNamespace::ScenesTransitionSetupDataSO*  nextScenesTransitionSetupData)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__HealthWarningFlowCoordinator__InitData*>(nextScenesTransitionSetupData));
}
inline void GlobalNamespace::__HealthWarningFlowCoordinator__InitData::_ctor(::GlobalNamespace::ScenesTransitionSetupDataSO*  nextScenesTransitionSetupData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__HealthWarningFlowCoordinator__InitData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ScenesTransitionSetupDataSO*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, nextScenesTransitionSetupData);
}
//  Writing Method size for method: ::GlobalNamespace::HealthWarningFlowCoordinator.DidActivate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HealthWarningFlowCoordinator::*)(bool, bool, bool)>(&::GlobalNamespace::HealthWarningFlowCoordinator::DidActivate)> {
  constexpr static std::size_t size = 0x4c0;
  constexpr static std::size_t addrs = 0x2289010;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningFlowCoordinator*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningFlowCoordinator*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HealthWarningFlowCoordinator.DidDeactivate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HealthWarningFlowCoordinator::*)(bool, bool)>(&::GlobalNamespace::HealthWarningFlowCoordinator::DidDeactivate)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x2289520;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningFlowCoordinator*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningFlowCoordinator*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HealthWarningFlowCoordinator.TopViewControllerWillChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HealthWarningFlowCoordinator::*)(::HMUI::ViewController*, ::HMUI::ViewController*, ::HMUI::__ViewController__AnimationType)>(&::GlobalNamespace::HealthWarningFlowCoordinator::TopViewControllerWillChange)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x22897d0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningFlowCoordinator*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningFlowCoordinator*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HealthWarningFlowCoordinator.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HealthWarningFlowCoordinator::*)()>(&::GlobalNamespace::HealthWarningFlowCoordinator::Update)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2289854;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningFlowCoordinator*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HealthWarningFlowCoordinator.HandleSelectLanguageViewControllerDidChangeLanguage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HealthWarningFlowCoordinator::*)()>(&::GlobalNamespace::HealthWarningFlowCoordinator::HandleSelectLanguageViewControllerDidChangeLanguage)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2289970;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningFlowCoordinator*>::get(),
                            "HandleSelectLanguageViewControllerDidChangeLanguage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HealthWarningFlowCoordinator.HandleSelectLanguageViewControllerDidPressContinueButton
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HealthWarningFlowCoordinator::*)()>(&::GlobalNamespace::HealthWarningFlowCoordinator::HandleSelectLanguageViewControllerDidPressContinueButton)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x22899f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningFlowCoordinator*>::get(),
                            "HandleSelectLanguageViewControllerDidPressContinueButton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HealthWarningFlowCoordinator.HandleSelectRegionViewControllerDidPressContinueButton
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HealthWarningFlowCoordinator::*)(::GlobalNamespace::__SelectRegionViewController__Region)>(&::GlobalNamespace::HealthWarningFlowCoordinator::HandleSelectRegionViewControllerDidPressContinueButton)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2289a40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningFlowCoordinator*>::get(),
                            "HandleSelectRegionViewControllerDidPressContinueButton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__SelectRegionViewController__Region>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HealthWarningFlowCoordinator.HandleEulaViewControllerDidFinish
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HealthWarningFlowCoordinator::*)(::GlobalNamespace::__EulaViewController__ButtonType)>(&::GlobalNamespace::HealthWarningFlowCoordinator::HandleEulaViewControllerDidFinish)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2289b64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningFlowCoordinator*>::get(),
                            "HandleEulaViewControllerDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__EulaViewController__ButtonType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HealthWarningFlowCoordinator.HandlePrivacyPolicyViewControllerDidFinish
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HealthWarningFlowCoordinator::*)(::GlobalNamespace::__PrivacyPolicyViewController__ButtonType)>(&::GlobalNamespace::HealthWarningFlowCoordinator::HandlePrivacyPolicyViewControllerDidFinish)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2289be0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningFlowCoordinator*>::get(),
                            "HandlePrivacyPolicyViewControllerDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PrivacyPolicyViewController__ButtonType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HealthWarningFlowCoordinator.HandleHealthWarningViewControllerDidFinish
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HealthWarningFlowCoordinator::*)()>(&::GlobalNamespace::HealthWarningFlowCoordinator::HandleHealthWarningViewControllerDidFinish)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x2289880;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningFlowCoordinator*>::get(),
                            "HandleHealthWarningViewControllerDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HealthWarningFlowCoordinator.HandleExplicitContentWarningViewControllerDidFinish
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HealthWarningFlowCoordinator::*)()>(&::GlobalNamespace::HealthWarningFlowCoordinator::HandleExplicitContentWarningViewControllerDidFinish)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2289c74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningFlowCoordinator*>::get(),
                            "HandleExplicitContentWarningViewControllerDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HealthWarningFlowCoordinator.ResolveMainViewController
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HMUI::ViewController* (::GlobalNamespace::HealthWarningFlowCoordinator::*)()>(&::GlobalNamespace::HealthWarningFlowCoordinator::ResolveMainViewController)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x22894d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningFlowCoordinator*>::get(),
                            "ResolveMainViewController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HealthWarningFlowCoordinator.ResolvePlayerAgreementsViewController
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HMUI::ViewController* (::GlobalNamespace::HealthWarningFlowCoordinator::*)()>(&::GlobalNamespace::HealthWarningFlowCoordinator::ResolvePlayerAgreementsViewController)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2289a70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningFlowCoordinator*>::get(),
                            "ResolvePlayerAgreementsViewController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HealthWarningFlowCoordinator.GoToNextScene
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HealthWarningFlowCoordinator::*)()>(&::GlobalNamespace::HealthWarningFlowCoordinator::GoToNextScene)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2289c38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningFlowCoordinator*>::get(),
                            "GoToNextScene",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HealthWarningFlowCoordinator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HealthWarningFlowCoordinator::*)()>(&::GlobalNamespace::HealthWarningFlowCoordinator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2289c78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningFlowCoordinator*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::HealthWarningFlowCoordinator::__set__mainSettingsModel(::GlobalNamespace::MainSettingsModelSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MainSettingsModelSO*, 0xa8>(this, std::forward<::GlobalNamespace::MainSettingsModelSO*>(value));
}
constexpr ::GlobalNamespace::MainSettingsModelSO* GlobalNamespace::HealthWarningFlowCoordinator::__get__mainSettingsModel()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MainSettingsModelSO*, 0xa8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MainSettingsModelSO*> GlobalNamespace::HealthWarningFlowCoordinator::__get__mainSettingsModel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MainSettingsModelSO*, 0xa8>(this);
}
constexpr void GlobalNamespace::HealthWarningFlowCoordinator::__set__appInitScenesTransitionSetupDataContainer(::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO*, 0xb0>(this, std::forward<::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO*>(value));
}
constexpr ::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO* GlobalNamespace::HealthWarningFlowCoordinator::__get__appInitScenesTransitionSetupDataContainer()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO*, 0xb0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO*> GlobalNamespace::HealthWarningFlowCoordinator::__get__appInitScenesTransitionSetupDataContainer() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO*, 0xb0>(this);
}
constexpr void GlobalNamespace::HealthWarningFlowCoordinator::__set__selectLanguageViewController(::GlobalNamespace::SelectLanguageViewController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::SelectLanguageViewController*, 0xb8>(this, std::forward<::GlobalNamespace::SelectLanguageViewController*>(value));
}
constexpr ::GlobalNamespace::SelectLanguageViewController* GlobalNamespace::HealthWarningFlowCoordinator::__get__selectLanguageViewController()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SelectLanguageViewController*, 0xb8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SelectLanguageViewController*> GlobalNamespace::HealthWarningFlowCoordinator::__get__selectLanguageViewController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SelectLanguageViewController*, 0xb8>(this);
}
constexpr void GlobalNamespace::HealthWarningFlowCoordinator::__set__selectRegionViewController(::GlobalNamespace::SelectRegionViewController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::SelectRegionViewController*, 0xc0>(this, std::forward<::GlobalNamespace::SelectRegionViewController*>(value));
}
constexpr ::GlobalNamespace::SelectRegionViewController* GlobalNamespace::HealthWarningFlowCoordinator::__get__selectRegionViewController()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SelectRegionViewController*, 0xc0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SelectRegionViewController*> GlobalNamespace::HealthWarningFlowCoordinator::__get__selectRegionViewController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SelectRegionViewController*, 0xc0>(this);
}
constexpr void GlobalNamespace::HealthWarningFlowCoordinator::__set__eulaViewController(::GlobalNamespace::EulaViewController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::EulaViewController*, 0xc8>(this, std::forward<::GlobalNamespace::EulaViewController*>(value));
}
constexpr ::GlobalNamespace::EulaViewController* GlobalNamespace::HealthWarningFlowCoordinator::__get__eulaViewController()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::EulaViewController*, 0xc8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EulaViewController*> GlobalNamespace::HealthWarningFlowCoordinator::__get__eulaViewController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::EulaViewController*, 0xc8>(this);
}
constexpr void GlobalNamespace::HealthWarningFlowCoordinator::__set__privacyPolicyViewController(::GlobalNamespace::PrivacyPolicyViewController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::PrivacyPolicyViewController*, 0xd0>(this, std::forward<::GlobalNamespace::PrivacyPolicyViewController*>(value));
}
constexpr ::GlobalNamespace::PrivacyPolicyViewController* GlobalNamespace::HealthWarningFlowCoordinator::__get__privacyPolicyViewController()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PrivacyPolicyViewController*, 0xd0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PrivacyPolicyViewController*> GlobalNamespace::HealthWarningFlowCoordinator::__get__privacyPolicyViewController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PrivacyPolicyViewController*, 0xd0>(this);
}
constexpr void GlobalNamespace::HealthWarningFlowCoordinator::__set__healthWarningViewController(::GlobalNamespace::HealthWarningViewController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::HealthWarningViewController*, 0xd8>(this, std::forward<::GlobalNamespace::HealthWarningViewController*>(value));
}
constexpr ::GlobalNamespace::HealthWarningViewController* GlobalNamespace::HealthWarningFlowCoordinator::__get__healthWarningViewController()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::HealthWarningViewController*, 0xd8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::HealthWarningViewController*> GlobalNamespace::HealthWarningFlowCoordinator::__get__healthWarningViewController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::HealthWarningViewController*, 0xd8>(this);
}
constexpr void GlobalNamespace::HealthWarningFlowCoordinator::__set__explicitContentWarningViewController(::GlobalNamespace::ExplicitContentWarningViewController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::ExplicitContentWarningViewController*, 0xe0>(this, std::forward<::GlobalNamespace::ExplicitContentWarningViewController*>(value));
}
constexpr ::GlobalNamespace::ExplicitContentWarningViewController* GlobalNamespace::HealthWarningFlowCoordinator::__get__explicitContentWarningViewController()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ExplicitContentWarningViewController*, 0xe0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ExplicitContentWarningViewController*> GlobalNamespace::HealthWarningFlowCoordinator::__get__explicitContentWarningViewController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ExplicitContentWarningViewController*, 0xe0>(this);
}
constexpr void GlobalNamespace::HealthWarningFlowCoordinator::__set__playerDataModel(::GlobalNamespace::PlayerDataModel*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::PlayerDataModel*, 0xe8>(this, std::forward<::GlobalNamespace::PlayerDataModel*>(value));
}
constexpr ::GlobalNamespace::PlayerDataModel* GlobalNamespace::HealthWarningFlowCoordinator::__get__playerDataModel()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PlayerDataModel*, 0xe8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerDataModel*> GlobalNamespace::HealthWarningFlowCoordinator::__get__playerDataModel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PlayerDataModel*, 0xe8>(this);
}
constexpr void GlobalNamespace::HealthWarningFlowCoordinator::__set__fadeInOut(::GlobalNamespace::FadeInOutController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::FadeInOutController*, 0xf0>(this, std::forward<::GlobalNamespace::FadeInOutController*>(value));
}
constexpr ::GlobalNamespace::FadeInOutController* GlobalNamespace::HealthWarningFlowCoordinator::__get__fadeInOut()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::FadeInOutController*, 0xf0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FadeInOutController*> GlobalNamespace::HealthWarningFlowCoordinator::__get__fadeInOut() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::FadeInOutController*, 0xf0>(this);
}
constexpr void GlobalNamespace::HealthWarningFlowCoordinator::__set__gameScenesManager(::GlobalNamespace::GameScenesManager*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::GameScenesManager*, 0xf8>(this, std::forward<::GlobalNamespace::GameScenesManager*>(value));
}
constexpr ::GlobalNamespace::GameScenesManager* GlobalNamespace::HealthWarningFlowCoordinator::__get__gameScenesManager()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameScenesManager*, 0xf8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameScenesManager*> GlobalNamespace::HealthWarningFlowCoordinator::__get__gameScenesManager() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameScenesManager*, 0xf8>(this);
}
constexpr void GlobalNamespace::HealthWarningFlowCoordinator::__set__initData(::GlobalNamespace::__HealthWarningFlowCoordinator__InitData*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__HealthWarningFlowCoordinator__InitData*, 0x100>(this, std::forward<::GlobalNamespace::__HealthWarningFlowCoordinator__InitData*>(value));
}
constexpr ::GlobalNamespace::__HealthWarningFlowCoordinator__InitData* GlobalNamespace::HealthWarningFlowCoordinator::__get__initData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__HealthWarningFlowCoordinator__InitData*, 0x100>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__HealthWarningFlowCoordinator__InitData*> GlobalNamespace::HealthWarningFlowCoordinator::__get__initData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__HealthWarningFlowCoordinator__InitData*, 0x100>(this);
}
constexpr void GlobalNamespace::HealthWarningFlowCoordinator::__set__saveData(::GlobalNamespace::ISaveData*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::ISaveData*, 0x108>(this, std::forward<::GlobalNamespace::ISaveData*>(value));
}
constexpr ::GlobalNamespace::ISaveData* GlobalNamespace::HealthWarningFlowCoordinator::__get__saveData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ISaveData*, 0x108>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ISaveData*> GlobalNamespace::HealthWarningFlowCoordinator::__get__saveData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ISaveData*, 0x108>(this);
}
constexpr void GlobalNamespace::HealthWarningFlowCoordinator::__set__viewControllerTitles(::System::Collections::Generic::Dictionary_2<::HMUI::ViewController*,::StringW>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<::HMUI::ViewController*,::StringW>*, 0x110>(this, std::forward<::System::Collections::Generic::Dictionary_2<::HMUI::ViewController*,::StringW>*>(value));
}
constexpr ::System::Collections::Generic::Dictionary_2<::HMUI::ViewController*,::StringW>* GlobalNamespace::HealthWarningFlowCoordinator::__get__viewControllerTitles()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::HMUI::ViewController*,::StringW>*, 0x110>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::HMUI::ViewController*,::StringW>*> GlobalNamespace::HealthWarningFlowCoordinator::__get__viewControllerTitles() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::HMUI::ViewController*,::StringW>*, 0x110>(this);
}
constexpr void GlobalNamespace::HealthWarningFlowCoordinator::__set__selectedRegion(::GlobalNamespace::__SelectRegionViewController__Region  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__SelectRegionViewController__Region, 0x118>(this, std::forward<::GlobalNamespace::__SelectRegionViewController__Region>(value));
}
constexpr ::GlobalNamespace::__SelectRegionViewController__Region& GlobalNamespace::HealthWarningFlowCoordinator::__get__selectedRegion()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__SelectRegionViewController__Region, 0x118>(this);
}
constexpr ::GlobalNamespace::__SelectRegionViewController__Region const& GlobalNamespace::HealthWarningFlowCoordinator::__get__selectedRegion() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__SelectRegionViewController__Region, 0x118>(this);
}
inline void GlobalNamespace::HealthWarningFlowCoordinator::DidActivate(bool  firstActivation, bool  addedToHierarchy, bool  screenSystemEnabling)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningFlowCoordinator*>::get(),
                            "DidActivate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void GlobalNamespace::HealthWarningFlowCoordinator::DidDeactivate(bool  removedFromHierarchy, bool  screenSystemDisabling)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningFlowCoordinator*>::get(),
                            "DidDeactivate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, removedFromHierarchy, screenSystemDisabling);
}
inline void GlobalNamespace::HealthWarningFlowCoordinator::TopViewControllerWillChange(::HMUI::ViewController*  oldViewController, ::HMUI::ViewController*  newViewController, ::HMUI::__ViewController__AnimationType  animationType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningFlowCoordinator*>::get(),
                            "TopViewControllerWillChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__ViewController__AnimationType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, oldViewController, newViewController, animationType);
}
inline void GlobalNamespace::HealthWarningFlowCoordinator::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningFlowCoordinator*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::HealthWarningFlowCoordinator::HandleSelectLanguageViewControllerDidChangeLanguage()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningFlowCoordinator*>::get(),
                            "HandleSelectLanguageViewControllerDidChangeLanguage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::HealthWarningFlowCoordinator::HandleSelectLanguageViewControllerDidPressContinueButton()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningFlowCoordinator*>::get(),
                            "HandleSelectLanguageViewControllerDidPressContinueButton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::HealthWarningFlowCoordinator::HandleSelectRegionViewControllerDidPressContinueButton(::GlobalNamespace::__SelectRegionViewController__Region  region)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningFlowCoordinator*>::get(),
                            "HandleSelectRegionViewControllerDidPressContinueButton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__SelectRegionViewController__Region>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, region);
}
inline void GlobalNamespace::HealthWarningFlowCoordinator::HandleEulaViewControllerDidFinish(::GlobalNamespace::__EulaViewController__ButtonType  buttonType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningFlowCoordinator*>::get(),
                            "HandleEulaViewControllerDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__EulaViewController__ButtonType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, buttonType);
}
inline void GlobalNamespace::HealthWarningFlowCoordinator::HandlePrivacyPolicyViewControllerDidFinish(::GlobalNamespace::__PrivacyPolicyViewController__ButtonType  buttonType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningFlowCoordinator*>::get(),
                            "HandlePrivacyPolicyViewControllerDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PrivacyPolicyViewController__ButtonType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, buttonType);
}
inline void GlobalNamespace::HealthWarningFlowCoordinator::HandleHealthWarningViewControllerDidFinish()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningFlowCoordinator*>::get(),
                            "HandleHealthWarningViewControllerDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::HealthWarningFlowCoordinator::HandleExplicitContentWarningViewControllerDidFinish()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningFlowCoordinator*>::get(),
                            "HandleExplicitContentWarningViewControllerDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::HMUI::ViewController* GlobalNamespace::HealthWarningFlowCoordinator::ResolveMainViewController()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningFlowCoordinator*>::get(),
                            "ResolveMainViewController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::HMUI::ViewController*, false>(*this, ___internal_method);
}
inline ::HMUI::ViewController* GlobalNamespace::HealthWarningFlowCoordinator::ResolvePlayerAgreementsViewController()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningFlowCoordinator*>::get(),
                            "ResolvePlayerAgreementsViewController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::HMUI::ViewController*, false>(*this, ___internal_method);
}
inline void GlobalNamespace::HealthWarningFlowCoordinator::GoToNextScene()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningFlowCoordinator*>::get(),
                            "GoToNextScene",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::HealthWarningFlowCoordinator* GlobalNamespace::HealthWarningFlowCoordinator::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::HealthWarningFlowCoordinator*>());
}
inline void GlobalNamespace::HealthWarningFlowCoordinator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningFlowCoordinator*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
