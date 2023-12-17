#pragma once
#include "HMUI/zzzz__ViewController_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MissionLevelModifiersViewController_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiersModelSO_def.hpp"
#include "GlobalNamespace/zzzz__MissionLevelModifiersViewController_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiers_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifierInfoListItemsList_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifierParamsSO_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifierInfoListItem_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__MissionLevelModifiersViewController____c__DisplayClass7_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MissionLevelModifiersViewController____c__DisplayClass7_0::*)()>(&::GlobalNamespace::__MissionLevelModifiersViewController____c__DisplayClass7_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22ca4dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MissionLevelModifiersViewController____c__DisplayClass7_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MissionLevelModifiersViewController____c__DisplayClass7_0._RefreshContent_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MissionLevelModifiersViewController____c__DisplayClass7_0::*)(int32_t, ::GlobalNamespace::GameplayModifierInfoListItem*)>(&::GlobalNamespace::__MissionLevelModifiersViewController____c__DisplayClass7_0::_RefreshContent_b__0)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x22ca4ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MissionLevelModifiersViewController____c__DisplayClass7_0*>::get(),
                            "<RefreshContent>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifierInfoListItem*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__MissionLevelModifiersViewController____c__DisplayClass7_0::__set_modifierParamsList(::System::Collections::Generic::List_1<::GlobalNamespace::GameplayModifierParamsSO*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::GameplayModifierParamsSO*>*, 0x10>(this, std::forward<::System::Collections::Generic::List_1<::GlobalNamespace::GameplayModifierParamsSO*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GameplayModifierParamsSO*>* GlobalNamespace::__MissionLevelModifiersViewController____c__DisplayClass7_0::__get_modifierParamsList()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::GameplayModifierParamsSO*>*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::GameplayModifierParamsSO*>*> GlobalNamespace::__MissionLevelModifiersViewController____c__DisplayClass7_0::__get_modifierParamsList() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::GameplayModifierParamsSO*>*, 0x10>(this);
}
inline ::GlobalNamespace::__MissionLevelModifiersViewController____c__DisplayClass7_0* GlobalNamespace::__MissionLevelModifiersViewController____c__DisplayClass7_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__MissionLevelModifiersViewController____c__DisplayClass7_0*>());
}
inline void GlobalNamespace::__MissionLevelModifiersViewController____c__DisplayClass7_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MissionLevelModifiersViewController____c__DisplayClass7_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__MissionLevelModifiersViewController____c__DisplayClass7_0::_RefreshContent_b__0(int32_t  idx, ::GlobalNamespace::GameplayModifierInfoListItem*  gameplayModifierInfoListItem)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MissionLevelModifiersViewController____c__DisplayClass7_0*>::get(),
                            "<RefreshContent>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifierInfoListItem*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, idx, gameplayModifierInfoListItem);
}
//  Writing Method size for method: ::GlobalNamespace::MissionLevelModifiersViewController.Setup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionLevelModifiersViewController::*)(::GlobalNamespace::GameplayModifiers*)>(&::GlobalNamespace::MissionLevelModifiersViewController::Setup)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x22ca31c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelModifiersViewController*>::get(),
                            "Setup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiers*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionLevelModifiersViewController.DidActivate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionLevelModifiersViewController::*)(bool, bool, bool)>(&::GlobalNamespace::MissionLevelModifiersViewController::DidActivate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x22ca4d8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelModifiersViewController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelModifiersViewController*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionLevelModifiersViewController.RefreshContent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionLevelModifiersViewController::*)()>(&::GlobalNamespace::MissionLevelModifiersViewController::RefreshContent)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x22ca348;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelModifiersViewController*>::get(),
                            "RefreshContent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionLevelModifiersViewController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionLevelModifiersViewController::*)()>(&::GlobalNamespace::MissionLevelModifiersViewController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22ca4e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelModifiersViewController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::MissionLevelModifiersViewController::__set__gameplayModifiersModel(::GlobalNamespace::GameplayModifiersModelSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::GameplayModifiersModelSO*, 0x70>(this, std::forward<::GlobalNamespace::GameplayModifiersModelSO*>(value));
}
constexpr ::GlobalNamespace::GameplayModifiersModelSO* GlobalNamespace::MissionLevelModifiersViewController::__get__gameplayModifiersModel()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameplayModifiersModelSO*, 0x70>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayModifiersModelSO*> GlobalNamespace::MissionLevelModifiersViewController::__get__gameplayModifiersModel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameplayModifiersModelSO*, 0x70>(this);
}
constexpr void GlobalNamespace::MissionLevelModifiersViewController::__set__gameplayModifierInfoListItemsList(::GlobalNamespace::GameplayModifierInfoListItemsList*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::GameplayModifierInfoListItemsList*, 0x78>(this, std::forward<::GlobalNamespace::GameplayModifierInfoListItemsList*>(value));
}
constexpr ::GlobalNamespace::GameplayModifierInfoListItemsList* GlobalNamespace::MissionLevelModifiersViewController::__get__gameplayModifierInfoListItemsList()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameplayModifierInfoListItemsList*, 0x78>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayModifierInfoListItemsList*> GlobalNamespace::MissionLevelModifiersViewController::__get__gameplayModifierInfoListItemsList() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameplayModifierInfoListItemsList*, 0x78>(this);
}
constexpr void GlobalNamespace::MissionLevelModifiersViewController::__set__modifiersPanel(::UnityEngine::GameObject*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::GameObject*, 0x80>(this, std::forward<::UnityEngine::GameObject*>(value));
}
constexpr ::UnityEngine::GameObject* GlobalNamespace::MissionLevelModifiersViewController::__get__modifiersPanel()  {
return ::cordl_internals::getInstanceField<::UnityEngine::GameObject*, 0x80>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> GlobalNamespace::MissionLevelModifiersViewController::__get__modifiersPanel() const {
return ::cordl_internals::getInstanceField<::UnityEngine::GameObject*, 0x80>(this);
}
constexpr void GlobalNamespace::MissionLevelModifiersViewController::__set__titleText(::TMPro::TextMeshProUGUI*  value)  {
::cordl_internals::setInstanceField<::TMPro::TextMeshProUGUI*, 0x88>(this, std::forward<::TMPro::TextMeshProUGUI*>(value));
}
constexpr ::TMPro::TextMeshProUGUI* GlobalNamespace::MissionLevelModifiersViewController::__get__titleText()  {
return ::cordl_internals::getInstanceField<::TMPro::TextMeshProUGUI*, 0x88>(this);
}
constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> GlobalNamespace::MissionLevelModifiersViewController::__get__titleText() const {
return ::cordl_internals::getInstanceField<::TMPro::TextMeshProUGUI*, 0x88>(this);
}
constexpr void GlobalNamespace::MissionLevelModifiersViewController::__set__gameplayModifiers(::GlobalNamespace::GameplayModifiers*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::GameplayModifiers*, 0x90>(this, std::forward<::GlobalNamespace::GameplayModifiers*>(value));
}
constexpr ::GlobalNamespace::GameplayModifiers* GlobalNamespace::MissionLevelModifiersViewController::__get__gameplayModifiers()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameplayModifiers*, 0x90>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayModifiers*> GlobalNamespace::MissionLevelModifiersViewController::__get__gameplayModifiers() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameplayModifiers*, 0x90>(this);
}
inline void GlobalNamespace::MissionLevelModifiersViewController::Setup(::GlobalNamespace::GameplayModifiers*  gameplayModifiers)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelModifiersViewController*>::get(),
                            "Setup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiers*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, gameplayModifiers);
}
inline void GlobalNamespace::MissionLevelModifiersViewController::DidActivate(bool  firstActivation, bool  addedToHierarchy, bool  screenSystemEnabling)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelModifiersViewController*>::get(),
                            "DidActivate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void GlobalNamespace::MissionLevelModifiersViewController::RefreshContent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelModifiersViewController*>::get(),
                            "RefreshContent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::MissionLevelModifiersViewController* GlobalNamespace::MissionLevelModifiersViewController::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MissionLevelModifiersViewController*>());
}
inline void GlobalNamespace::MissionLevelModifiersViewController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelModifiersViewController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
