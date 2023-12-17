#pragma once
#include "HMUI/zzzz__ViewController_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MissionHelpViewController_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "GlobalNamespace/zzzz__MissionHelpViewController_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
#include "GlobalNamespace/zzzz__MissionHelpSO_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__MissionHelpViewController__MissionHelpGameObjectPair._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MissionHelpViewController__MissionHelpGameObjectPair::*)()>(&::GlobalNamespace::__MissionHelpViewController__MissionHelpGameObjectPair::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22c9c4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MissionHelpViewController__MissionHelpGameObjectPair*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__MissionHelpViewController__MissionHelpGameObjectPair::__set_missionHelp(::GlobalNamespace::MissionHelpSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MissionHelpSO*, 0x10>(this, std::forward<::GlobalNamespace::MissionHelpSO*>(value));
}
constexpr ::GlobalNamespace::MissionHelpSO* GlobalNamespace::__MissionHelpViewController__MissionHelpGameObjectPair::__get_missionHelp()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MissionHelpSO*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionHelpSO*> GlobalNamespace::__MissionHelpViewController__MissionHelpGameObjectPair::__get_missionHelp() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MissionHelpSO*, 0x10>(this);
}
constexpr void GlobalNamespace::__MissionHelpViewController__MissionHelpGameObjectPair::__set_gameObject(::UnityEngine::GameObject*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::GameObject*, 0x18>(this, std::forward<::UnityEngine::GameObject*>(value));
}
constexpr ::UnityEngine::GameObject* GlobalNamespace::__MissionHelpViewController__MissionHelpGameObjectPair::__get_gameObject()  {
return ::cordl_internals::getInstanceField<::UnityEngine::GameObject*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> GlobalNamespace::__MissionHelpViewController__MissionHelpGameObjectPair::__get_gameObject() const {
return ::cordl_internals::getInstanceField<::UnityEngine::GameObject*, 0x18>(this);
}
inline ::GlobalNamespace::__MissionHelpViewController__MissionHelpGameObjectPair* GlobalNamespace::__MissionHelpViewController__MissionHelpGameObjectPair::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__MissionHelpViewController__MissionHelpGameObjectPair*>());
}
inline void GlobalNamespace::__MissionHelpViewController__MissionHelpGameObjectPair::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MissionHelpViewController__MissionHelpGameObjectPair*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::MissionHelpViewController.add_didFinishEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionHelpViewController::*)(::System::Action_1<::GlobalNamespace::MissionHelpViewController*>*)>(&::GlobalNamespace::MissionHelpViewController::add_didFinishEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22c991c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionHelpViewController*>::get(),
                            "add_didFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::MissionHelpViewController*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionHelpViewController.remove_didFinishEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionHelpViewController::*)(::System::Action_1<::GlobalNamespace::MissionHelpViewController*>*)>(&::GlobalNamespace::MissionHelpViewController::remove_didFinishEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22c99cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionHelpViewController*>::get(),
                            "remove_didFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::MissionHelpViewController*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionHelpViewController.Setup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionHelpViewController::*)(::GlobalNamespace::MissionHelpSO*)>(&::GlobalNamespace::MissionHelpViewController::Setup)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x22c9a7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionHelpViewController*>::get(),
                            "Setup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MissionHelpSO*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionHelpViewController.DidActivate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionHelpViewController::*)(bool, bool, bool)>(&::GlobalNamespace::MissionHelpViewController::DidActivate)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x22c9b78;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionHelpViewController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionHelpViewController*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionHelpViewController.RefreshContent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionHelpViewController::*)()>(&::GlobalNamespace::MissionHelpViewController::RefreshContent)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x22c9aa8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionHelpViewController*>::get(),
                            "RefreshContent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionHelpViewController.OkButtonPressed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionHelpViewController::*)()>(&::GlobalNamespace::MissionHelpViewController::OkButtonPressed)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x22c9c24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionHelpViewController*>::get(),
                            "OkButtonPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionHelpViewController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionHelpViewController::*)()>(&::GlobalNamespace::MissionHelpViewController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22c9c44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionHelpViewController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::MissionHelpViewController::__set__okButton(::UnityEngine::UI::Button*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::Button*, 0x70>(this, std::forward<::UnityEngine::UI::Button*>(value));
}
constexpr ::UnityEngine::UI::Button* GlobalNamespace::MissionHelpViewController::__get__okButton()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Button*, 0x70>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> GlobalNamespace::MissionHelpViewController::__get__okButton() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Button*, 0x70>(this);
}
constexpr void GlobalNamespace::MissionHelpViewController::__set__missionHelpGameObjectPairs(::ArrayW<::GlobalNamespace::__MissionHelpViewController__MissionHelpGameObjectPair*,::Array<::GlobalNamespace::__MissionHelpViewController__MissionHelpGameObjectPair*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::__MissionHelpViewController__MissionHelpGameObjectPair*,::Array<::GlobalNamespace::__MissionHelpViewController__MissionHelpGameObjectPair*>*>, 0x78>(this, std::forward<::ArrayW<::GlobalNamespace::__MissionHelpViewController__MissionHelpGameObjectPair*,::Array<::GlobalNamespace::__MissionHelpViewController__MissionHelpGameObjectPair*>*>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::__MissionHelpViewController__MissionHelpGameObjectPair*,::Array<::GlobalNamespace::__MissionHelpViewController__MissionHelpGameObjectPair*>*>& GlobalNamespace::MissionHelpViewController::__get__missionHelpGameObjectPairs()  {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::__MissionHelpViewController__MissionHelpGameObjectPair*,::Array<::GlobalNamespace::__MissionHelpViewController__MissionHelpGameObjectPair*>*>, 0x78>(this);
}
constexpr ::ArrayW<::GlobalNamespace::__MissionHelpViewController__MissionHelpGameObjectPair*,::Array<::GlobalNamespace::__MissionHelpViewController__MissionHelpGameObjectPair*>*> const& GlobalNamespace::MissionHelpViewController::__get__missionHelpGameObjectPairs() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::__MissionHelpViewController__MissionHelpGameObjectPair*,::Array<::GlobalNamespace::__MissionHelpViewController__MissionHelpGameObjectPair*>*>, 0x78>(this);
}
constexpr void GlobalNamespace::MissionHelpViewController::__set_didFinishEvent(::System::Action_1<::GlobalNamespace::MissionHelpViewController*>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<::GlobalNamespace::MissionHelpViewController*>*, 0x80>(this, std::forward<::System::Action_1<::GlobalNamespace::MissionHelpViewController*>*>(value));
}
constexpr ::System::Action_1<::GlobalNamespace::MissionHelpViewController*>* GlobalNamespace::MissionHelpViewController::__get_didFinishEvent()  {
return ::cordl_internals::getInstanceField<::System::Action_1<::GlobalNamespace::MissionHelpViewController*>*, 0x80>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::MissionHelpViewController*>*> GlobalNamespace::MissionHelpViewController::__get_didFinishEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::GlobalNamespace::MissionHelpViewController*>*, 0x80>(this);
}
constexpr void GlobalNamespace::MissionHelpViewController::__set__missionHelp(::GlobalNamespace::MissionHelpSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MissionHelpSO*, 0x88>(this, std::forward<::GlobalNamespace::MissionHelpSO*>(value));
}
constexpr ::GlobalNamespace::MissionHelpSO* GlobalNamespace::MissionHelpViewController::__get__missionHelp()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MissionHelpSO*, 0x88>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionHelpSO*> GlobalNamespace::MissionHelpViewController::__get__missionHelp() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MissionHelpSO*, 0x88>(this);
}
inline void GlobalNamespace::MissionHelpViewController::add_didFinishEvent(::System::Action_1<::GlobalNamespace::MissionHelpViewController*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionHelpViewController*>::get(),
                            "add_didFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::MissionHelpViewController*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::MissionHelpViewController::remove_didFinishEvent(::System::Action_1<::GlobalNamespace::MissionHelpViewController*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionHelpViewController*>::get(),
                            "remove_didFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::MissionHelpViewController*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::MissionHelpViewController::Setup(::GlobalNamespace::MissionHelpSO*  missionHelp)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionHelpViewController*>::get(),
                            "Setup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MissionHelpSO*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, missionHelp);
}
inline void GlobalNamespace::MissionHelpViewController::DidActivate(bool  firstActivation, bool  addedToHierarchy, bool  screenSystemEnabling)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionHelpViewController*>::get(),
                            "DidActivate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void GlobalNamespace::MissionHelpViewController::RefreshContent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionHelpViewController*>::get(),
                            "RefreshContent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::MissionHelpViewController::OkButtonPressed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionHelpViewController*>::get(),
                            "OkButtonPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::MissionHelpViewController* GlobalNamespace::MissionHelpViewController::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MissionHelpViewController*>());
}
inline void GlobalNamespace::MissionHelpViewController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionHelpViewController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
