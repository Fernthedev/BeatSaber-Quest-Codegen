#pragma once
#include "HMUI/zzzz__ViewController_impl.hpp"
#include "GlobalNamespace/zzzz__PrivacyPolicyViewController_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
#include "HMUI/zzzz__TextPageScrollView_def.hpp"
#include "GlobalNamespace/zzzz__LocalizedTextAsset_def.hpp"
#include "GlobalNamespace/zzzz__PrivacyPolicyViewController_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
constexpr void GlobalNamespace::__PrivacyPolicyViewController__ButtonType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__PrivacyPolicyViewController__ButtonType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__PrivacyPolicyViewController__ButtonType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__PrivacyPolicyViewController__ButtonType::__PrivacyPolicyViewController__ButtonType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__PrivacyPolicyViewController__ButtonType  GlobalNamespace::__PrivacyPolicyViewController__ButtonType::Ok{static_cast<int32_t>(0x0)};
//  Writing Method size for method: ::GlobalNamespace::PrivacyPolicyViewController.add_didFinishEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PrivacyPolicyViewController::*)(::System::Action_1<::GlobalNamespace::__PrivacyPolicyViewController__ButtonType>*)>(&::GlobalNamespace::PrivacyPolicyViewController::add_didFinishEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22d573c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PrivacyPolicyViewController*>::get(),
                            "add_didFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::__PrivacyPolicyViewController__ButtonType>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PrivacyPolicyViewController.remove_didFinishEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PrivacyPolicyViewController::*)(::System::Action_1<::GlobalNamespace::__PrivacyPolicyViewController__ButtonType>*)>(&::GlobalNamespace::PrivacyPolicyViewController::remove_didFinishEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22d57ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PrivacyPolicyViewController*>::get(),
                            "remove_didFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::__PrivacyPolicyViewController__ButtonType>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PrivacyPolicyViewController.DidActivate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PrivacyPolicyViewController::*)(bool, bool, bool)>(&::GlobalNamespace::PrivacyPolicyViewController::DidActivate)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x22d589c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PrivacyPolicyViewController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PrivacyPolicyViewController*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PrivacyPolicyViewController.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PrivacyPolicyViewController::*)(bool, bool)>(&::GlobalNamespace::PrivacyPolicyViewController::Init)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x22d5a78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PrivacyPolicyViewController*>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PrivacyPolicyViewController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PrivacyPolicyViewController::*)()>(&::GlobalNamespace::PrivacyPolicyViewController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22d5a8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PrivacyPolicyViewController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PrivacyPolicyViewController._DidActivate_b__11_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PrivacyPolicyViewController::*)()>(&::GlobalNamespace::PrivacyPolicyViewController::_DidActivate_b__11_0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x22d5a94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PrivacyPolicyViewController*>::get(),
                            "<DidActivate>b__11_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PrivacyPolicyViewController._DidActivate_b__11_1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PrivacyPolicyViewController::*)()>(&::GlobalNamespace::PrivacyPolicyViewController::_DidActivate_b__11_1)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x22d5ab4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PrivacyPolicyViewController*>::get(),
                            "<DidActivate>b__11_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::PrivacyPolicyViewController::__set__okButton(::UnityEngine::UI::Button*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::Button*, 0x70>(this, std::forward<::UnityEngine::UI::Button*>(value));
}
constexpr ::UnityEngine::UI::Button* GlobalNamespace::PrivacyPolicyViewController::__get__okButton()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Button*, 0x70>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> GlobalNamespace::PrivacyPolicyViewController::__get__okButton() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Button*, 0x70>(this);
}
constexpr void GlobalNamespace::PrivacyPolicyViewController::__set__iAcceptButton(::UnityEngine::UI::Button*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::Button*, 0x78>(this, std::forward<::UnityEngine::UI::Button*>(value));
}
constexpr ::UnityEngine::UI::Button* GlobalNamespace::PrivacyPolicyViewController::__get__iAcceptButton()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Button*, 0x78>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> GlobalNamespace::PrivacyPolicyViewController::__get__iAcceptButton() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Button*, 0x78>(this);
}
constexpr void GlobalNamespace::PrivacyPolicyViewController::__set__textPageScrollView(::HMUI::TextPageScrollView*  value)  {
::cordl_internals::setInstanceField<::HMUI::TextPageScrollView*, 0x80>(this, std::forward<::HMUI::TextPageScrollView*>(value));
}
constexpr ::HMUI::TextPageScrollView* GlobalNamespace::PrivacyPolicyViewController::__get__textPageScrollView()  {
return ::cordl_internals::getInstanceField<::HMUI::TextPageScrollView*, 0x80>(this);
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::TextPageScrollView*> GlobalNamespace::PrivacyPolicyViewController::__get__textPageScrollView() const {
return ::cordl_internals::getInstanceField<::HMUI::TextPageScrollView*, 0x80>(this);
}
constexpr void GlobalNamespace::PrivacyPolicyViewController::__set__privacyPolicyLocalizedTextAsset(::GlobalNamespace::LocalizedTextAsset*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::LocalizedTextAsset*, 0x88>(this, std::forward<::GlobalNamespace::LocalizedTextAsset*>(value));
}
constexpr ::GlobalNamespace::LocalizedTextAsset* GlobalNamespace::PrivacyPolicyViewController::__get__privacyPolicyLocalizedTextAsset()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::LocalizedTextAsset*, 0x88>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LocalizedTextAsset*> GlobalNamespace::PrivacyPolicyViewController::__get__privacyPolicyLocalizedTextAsset() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::LocalizedTextAsset*, 0x88>(this);
}
constexpr void GlobalNamespace::PrivacyPolicyViewController::__set__updateNoticeLocalizationKey(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x90>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::PrivacyPolicyViewController::__get__updateNoticeLocalizationKey()  {
return ::cordl_internals::getInstanceField<::StringW, 0x90>(this);
}
constexpr ::StringW const& GlobalNamespace::PrivacyPolicyViewController::__get__updateNoticeLocalizationKey() const {
return ::cordl_internals::getInstanceField<::StringW, 0x90>(this);
}
constexpr void GlobalNamespace::PrivacyPolicyViewController::__set_didFinishEvent(::System::Action_1<::GlobalNamespace::__PrivacyPolicyViewController__ButtonType>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<::GlobalNamespace::__PrivacyPolicyViewController__ButtonType>*, 0x98>(this, std::forward<::System::Action_1<::GlobalNamespace::__PrivacyPolicyViewController__ButtonType>*>(value));
}
constexpr ::System::Action_1<::GlobalNamespace::__PrivacyPolicyViewController__ButtonType>* GlobalNamespace::PrivacyPolicyViewController::__get_didFinishEvent()  {
return ::cordl_internals::getInstanceField<::System::Action_1<::GlobalNamespace::__PrivacyPolicyViewController__ButtonType>*, 0x98>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::__PrivacyPolicyViewController__ButtonType>*> GlobalNamespace::PrivacyPolicyViewController::__get_didFinishEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::GlobalNamespace::__PrivacyPolicyViewController__ButtonType>*, 0x98>(this);
}
constexpr void GlobalNamespace::PrivacyPolicyViewController::__set__showUpdate(bool  value)  {
::cordl_internals::setInstanceField<bool, 0xa0>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::PrivacyPolicyViewController::__get__showUpdate()  {
return ::cordl_internals::getInstanceField<bool, 0xa0>(this);
}
constexpr bool const& GlobalNamespace::PrivacyPolicyViewController::__get__showUpdate() const {
return ::cordl_internals::getInstanceField<bool, 0xa0>(this);
}
constexpr void GlobalNamespace::PrivacyPolicyViewController::__set__showIAcceptPrompt(bool  value)  {
::cordl_internals::setInstanceField<bool, 0xa1>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::PrivacyPolicyViewController::__get__showIAcceptPrompt()  {
return ::cordl_internals::getInstanceField<bool, 0xa1>(this);
}
constexpr bool const& GlobalNamespace::PrivacyPolicyViewController::__get__showIAcceptPrompt() const {
return ::cordl_internals::getInstanceField<bool, 0xa1>(this);
}
inline void GlobalNamespace::PrivacyPolicyViewController::add_didFinishEvent(::System::Action_1<::GlobalNamespace::__PrivacyPolicyViewController__ButtonType>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PrivacyPolicyViewController*>::get(),
                            "add_didFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::__PrivacyPolicyViewController__ButtonType>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::PrivacyPolicyViewController::remove_didFinishEvent(::System::Action_1<::GlobalNamespace::__PrivacyPolicyViewController__ButtonType>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PrivacyPolicyViewController*>::get(),
                            "remove_didFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::__PrivacyPolicyViewController__ButtonType>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::PrivacyPolicyViewController::DidActivate(bool  firstActivation, bool  addedToHierarchy, bool  screenSystemEnabling)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PrivacyPolicyViewController*>::get(),
                            "DidActivate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void GlobalNamespace::PrivacyPolicyViewController::Init(bool  showUpdate, bool  showIAcceptPrompt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PrivacyPolicyViewController*>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, showUpdate, showIAcceptPrompt);
}
inline ::GlobalNamespace::PrivacyPolicyViewController* GlobalNamespace::PrivacyPolicyViewController::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::PrivacyPolicyViewController*>());
}
inline void GlobalNamespace::PrivacyPolicyViewController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PrivacyPolicyViewController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::PrivacyPolicyViewController::_DidActivate_b__11_0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PrivacyPolicyViewController*>::get(),
                            "<DidActivate>b__11_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::PrivacyPolicyViewController::_DidActivate_b__11_1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PrivacyPolicyViewController*>::get(),
                            "<DidActivate>b__11_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
