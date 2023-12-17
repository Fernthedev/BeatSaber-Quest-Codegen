#pragma once
#include "HMUI/zzzz__ViewController_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__SelectRegionViewController_def.hpp"
#include "HMUI/zzzz__SimpleTextDropdown_def.hpp"
#include "HMUI/zzzz__DropdownWithTableView_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "GlobalNamespace/zzzz__SelectRegionViewController_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
constexpr void GlobalNamespace::__SelectRegionViewController__Region::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__SelectRegionViewController__Region::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__SelectRegionViewController__Region::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__SelectRegionViewController__Region::__SelectRegionViewController__Region(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__SelectRegionViewController__Region  GlobalNamespace::__SelectRegionViewController__Region::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__SelectRegionViewController__Region  GlobalNamespace::__SelectRegionViewController__Region::NorthAndSouthAmerica{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::__SelectRegionViewController__Region  GlobalNamespace::__SelectRegionViewController__Region::Europe{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::__SelectRegionViewController__Region  GlobalNamespace::__SelectRegionViewController__Region::SouthKorea{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::__SelectRegionViewController__Region  GlobalNamespace::__SelectRegionViewController__Region::Japan{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::__SelectRegionViewController__Region  GlobalNamespace::__SelectRegionViewController__Region::Other{static_cast<int32_t>(0x5)};
//  Writing Method size for method: ::GlobalNamespace::__SelectRegionViewController__RegionToLocalizationKeyPair._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SelectRegionViewController__RegionToLocalizationKeyPair::*)(::GlobalNamespace::__SelectRegionViewController__Region, ::StringW)>(&::GlobalNamespace::__SelectRegionViewController__RegionToLocalizationKeyPair::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x22da268;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SelectRegionViewController__RegionToLocalizationKeyPair>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__SelectRegionViewController__Region>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__SelectRegionViewController__RegionToLocalizationKeyPair::__set_region(::GlobalNamespace::__SelectRegionViewController__Region  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__SelectRegionViewController__Region, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::__SelectRegionViewController__Region>(value));
}
constexpr ::GlobalNamespace::__SelectRegionViewController__Region& GlobalNamespace::__SelectRegionViewController__RegionToLocalizationKeyPair::__get_region()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__SelectRegionViewController__Region, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::GlobalNamespace::__SelectRegionViewController__Region const& GlobalNamespace::__SelectRegionViewController__RegionToLocalizationKeyPair::__get_region() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__SelectRegionViewController__Region, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__SelectRegionViewController__RegionToLocalizationKeyPair::__set_localizationKey(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::__SelectRegionViewController__RegionToLocalizationKeyPair::__get_localizationKey()  {
return ::cordl_internals::getInstanceField<::StringW, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::StringW const& GlobalNamespace::__SelectRegionViewController__RegionToLocalizationKeyPair::__get_localizationKey() const {
return ::cordl_internals::getInstanceField<::StringW, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void GlobalNamespace::__SelectRegionViewController__RegionToLocalizationKeyPair::_ctor(::GlobalNamespace::__SelectRegionViewController__Region  region, ::StringW  localizationKey)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SelectRegionViewController__RegionToLocalizationKeyPair>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__SelectRegionViewController__Region>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, region, localizationKey);
}
// Ctor Parameters [CppParam { name: "region", ty: "::GlobalNamespace::__SelectRegionViewController__Region", modifiers: "", def_value: Some("{}") }, CppParam { name: "localizationKey", ty: "::StringW", modifiers: "", def_value: Some("csnull") }]
constexpr ::GlobalNamespace::__SelectRegionViewController__RegionToLocalizationKeyPair::__SelectRegionViewController__RegionToLocalizationKeyPair(::GlobalNamespace::__SelectRegionViewController__Region  region, ::StringW  localizationKey) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->region = region;
this->localizationKey = localizationKey;
}
//  Writing Method size for method: ::GlobalNamespace::__SelectRegionViewController____c._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SelectRegionViewController____c::*)()>(&::GlobalNamespace::__SelectRegionViewController____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22da2d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SelectRegionViewController____c*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SelectRegionViewController____c._DidActivate_b__8_1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__SelectRegionViewController____c::*)(::GlobalNamespace::__SelectRegionViewController__RegionToLocalizationKeyPair)>(&::GlobalNamespace::__SelectRegionViewController____c::_DidActivate_b__8_1)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x22da2e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SelectRegionViewController____c*>::get(),
                            "<DidActivate>b__8_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__SelectRegionViewController__RegionToLocalizationKeyPair>::get()}
                        )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__SelectRegionViewController____c::setStaticF___9(::GlobalNamespace::__SelectRegionViewController____c*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::__SelectRegionViewController____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SelectRegionViewController____c*>::get>(std::forward<::GlobalNamespace::__SelectRegionViewController____c*>(value));
}
inline ::GlobalNamespace::__SelectRegionViewController____c* GlobalNamespace::__SelectRegionViewController____c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::__SelectRegionViewController____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SelectRegionViewController____c*>::get>();
}
inline void GlobalNamespace::__SelectRegionViewController____c::setStaticF___9__8_1(::System::Func_2<::GlobalNamespace::__SelectRegionViewController__RegionToLocalizationKeyPair,::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::GlobalNamespace::__SelectRegionViewController__RegionToLocalizationKeyPair,::StringW>*, "<>9__8_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SelectRegionViewController____c*>::get>(std::forward<::System::Func_2<::GlobalNamespace::__SelectRegionViewController__RegionToLocalizationKeyPair,::StringW>*>(value));
}
inline ::System::Func_2<::GlobalNamespace::__SelectRegionViewController__RegionToLocalizationKeyPair,::StringW>* GlobalNamespace::__SelectRegionViewController____c::getStaticF___9__8_1()  {
return ::cordl_internals::getStaticField<::System::Func_2<::GlobalNamespace::__SelectRegionViewController__RegionToLocalizationKeyPair,::StringW>*, "<>9__8_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SelectRegionViewController____c*>::get>();
}
inline ::GlobalNamespace::__SelectRegionViewController____c* GlobalNamespace::__SelectRegionViewController____c::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__SelectRegionViewController____c*>());
}
inline void GlobalNamespace::__SelectRegionViewController____c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SelectRegionViewController____c*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::StringW GlobalNamespace::__SelectRegionViewController____c::_DidActivate_b__8_1(::GlobalNamespace::__SelectRegionViewController__RegionToLocalizationKeyPair  p)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SelectRegionViewController____c*>::get(),
                            "<DidActivate>b__8_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__SelectRegionViewController__RegionToLocalizationKeyPair>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method, p);
}
//  Writing Method size for method: ::GlobalNamespace::SelectRegionViewController.add_didPressContinueButtonEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SelectRegionViewController::*)(::System::Action_1<::GlobalNamespace::__SelectRegionViewController__Region>*)>(&::GlobalNamespace::SelectRegionViewController::add_didPressContinueButtonEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22d9d54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectRegionViewController*>::get(),
                            "add_didPressContinueButtonEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::__SelectRegionViewController__Region>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectRegionViewController.remove_didPressContinueButtonEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SelectRegionViewController::*)(::System::Action_1<::GlobalNamespace::__SelectRegionViewController__Region>*)>(&::GlobalNamespace::SelectRegionViewController::remove_didPressContinueButtonEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22d9e04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectRegionViewController*>::get(),
                            "remove_didPressContinueButtonEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::__SelectRegionViewController__Region>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectRegionViewController.DidActivate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SelectRegionViewController::*)(bool, bool, bool)>(&::GlobalNamespace::SelectRegionViewController::DidActivate)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x22d9eb4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectRegionViewController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectRegionViewController*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectRegionViewController.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SelectRegionViewController::*)()>(&::GlobalNamespace::SelectRegionViewController::OnDestroy)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x22da0e4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectRegionViewController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectRegionViewController*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectRegionViewController.HandleRegionSelectionDropdownDidSelectCell
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SelectRegionViewController::*)(::HMUI::DropdownWithTableView*, int32_t)>(&::GlobalNamespace::SelectRegionViewController::HandleRegionSelectionDropdownDidSelectCell)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x22da1c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectRegionViewController*>::get(),
                            "HandleRegionSelectionDropdownDidSelectCell",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::DropdownWithTableView*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectRegionViewController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SelectRegionViewController::*)()>(&::GlobalNamespace::SelectRegionViewController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22da208;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectRegionViewController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectRegionViewController._DidActivate_b__8_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SelectRegionViewController::*)()>(&::GlobalNamespace::SelectRegionViewController::_DidActivate_b__8_0)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x22da210;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectRegionViewController*>::get(),
                            "<DidActivate>b__8_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::SelectRegionViewController::__set__continueButton(::UnityEngine::UI::Button*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::Button*, 0x70>(this, std::forward<::UnityEngine::UI::Button*>(value));
}
constexpr ::UnityEngine::UI::Button* GlobalNamespace::SelectRegionViewController::__get__continueButton()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Button*, 0x70>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> GlobalNamespace::SelectRegionViewController::__get__continueButton() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Button*, 0x70>(this);
}
constexpr void GlobalNamespace::SelectRegionViewController::__set__regionSelectionDropdown(::HMUI::SimpleTextDropdown*  value)  {
::cordl_internals::setInstanceField<::HMUI::SimpleTextDropdown*, 0x78>(this, std::forward<::HMUI::SimpleTextDropdown*>(value));
}
constexpr ::HMUI::SimpleTextDropdown* GlobalNamespace::SelectRegionViewController::__get__regionSelectionDropdown()  {
return ::cordl_internals::getInstanceField<::HMUI::SimpleTextDropdown*, 0x78>(this);
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::SimpleTextDropdown*> GlobalNamespace::SelectRegionViewController::__get__regionSelectionDropdown() const {
return ::cordl_internals::getInstanceField<::HMUI::SimpleTextDropdown*, 0x78>(this);
}
constexpr void GlobalNamespace::SelectRegionViewController::__set__regionLocalizationKeys(::ArrayW<::GlobalNamespace::__SelectRegionViewController__RegionToLocalizationKeyPair,::Array<::GlobalNamespace::__SelectRegionViewController__RegionToLocalizationKeyPair>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::__SelectRegionViewController__RegionToLocalizationKeyPair,::Array<::GlobalNamespace::__SelectRegionViewController__RegionToLocalizationKeyPair>*>, 0x80>(this, std::forward<::ArrayW<::GlobalNamespace::__SelectRegionViewController__RegionToLocalizationKeyPair,::Array<::GlobalNamespace::__SelectRegionViewController__RegionToLocalizationKeyPair>*>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::__SelectRegionViewController__RegionToLocalizationKeyPair,::Array<::GlobalNamespace::__SelectRegionViewController__RegionToLocalizationKeyPair>*>& GlobalNamespace::SelectRegionViewController::__get__regionLocalizationKeys()  {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::__SelectRegionViewController__RegionToLocalizationKeyPair,::Array<::GlobalNamespace::__SelectRegionViewController__RegionToLocalizationKeyPair>*>, 0x80>(this);
}
constexpr ::ArrayW<::GlobalNamespace::__SelectRegionViewController__RegionToLocalizationKeyPair,::Array<::GlobalNamespace::__SelectRegionViewController__RegionToLocalizationKeyPair>*> const& GlobalNamespace::SelectRegionViewController::__get__regionLocalizationKeys() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::__SelectRegionViewController__RegionToLocalizationKeyPair,::Array<::GlobalNamespace::__SelectRegionViewController__RegionToLocalizationKeyPair>*>, 0x80>(this);
}
constexpr void GlobalNamespace::SelectRegionViewController::__set_didPressContinueButtonEvent(::System::Action_1<::GlobalNamespace::__SelectRegionViewController__Region>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<::GlobalNamespace::__SelectRegionViewController__Region>*, 0x88>(this, std::forward<::System::Action_1<::GlobalNamespace::__SelectRegionViewController__Region>*>(value));
}
constexpr ::System::Action_1<::GlobalNamespace::__SelectRegionViewController__Region>* GlobalNamespace::SelectRegionViewController::__get_didPressContinueButtonEvent()  {
return ::cordl_internals::getInstanceField<::System::Action_1<::GlobalNamespace::__SelectRegionViewController__Region>*, 0x88>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::__SelectRegionViewController__Region>*> GlobalNamespace::SelectRegionViewController::__get_didPressContinueButtonEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::GlobalNamespace::__SelectRegionViewController__Region>*, 0x88>(this);
}
inline void GlobalNamespace::SelectRegionViewController::add_didPressContinueButtonEvent(::System::Action_1<::GlobalNamespace::__SelectRegionViewController__Region>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectRegionViewController*>::get(),
                            "add_didPressContinueButtonEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::__SelectRegionViewController__Region>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::SelectRegionViewController::remove_didPressContinueButtonEvent(::System::Action_1<::GlobalNamespace::__SelectRegionViewController__Region>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectRegionViewController*>::get(),
                            "remove_didPressContinueButtonEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::__SelectRegionViewController__Region>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::SelectRegionViewController::DidActivate(bool  firstActivation, bool  addedToHierarchy, bool  screenSystemEnabling)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectRegionViewController*>::get(),
                            "DidActivate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void GlobalNamespace::SelectRegionViewController::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectRegionViewController*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::SelectRegionViewController::HandleRegionSelectionDropdownDidSelectCell(::HMUI::DropdownWithTableView*  dropdown, int32_t  idx)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectRegionViewController*>::get(),
                            "HandleRegionSelectionDropdownDidSelectCell",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::DropdownWithTableView*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, dropdown, idx);
}
inline ::GlobalNamespace::SelectRegionViewController* GlobalNamespace::SelectRegionViewController::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::SelectRegionViewController*>());
}
inline void GlobalNamespace::SelectRegionViewController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectRegionViewController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::SelectRegionViewController::_DidActivate_b__8_0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectRegionViewController*>::get(),
                            "<DidActivate>b__8_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
