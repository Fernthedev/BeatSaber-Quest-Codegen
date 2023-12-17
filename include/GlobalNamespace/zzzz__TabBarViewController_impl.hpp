#pragma once
#include "HMUI/zzzz__ViewController_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__TabBarViewController_def.hpp"
#include "HMUI/zzzz__TextSegmentedControl_def.hpp"
#include "HMUI/zzzz__SegmentedControl_def.hpp"
#include "UnityEngine/UI/zzzz__ContentSizeFitter_def.hpp"
#include "GlobalNamespace/zzzz__TabBarViewController_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__TabBarViewController__TabBarItem._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__TabBarViewController__TabBarItem::*)(::StringW, ::System::Action*)>(&::GlobalNamespace::__TabBarViewController__TabBarItem::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x22dc454;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TabBarViewController__TabBarItem*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__TabBarViewController__TabBarItem::__set_title(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::__TabBarViewController__TabBarItem::__get_title()  {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr ::StringW const& GlobalNamespace::__TabBarViewController__TabBarItem::__get_title() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr void GlobalNamespace::__TabBarViewController__TabBarItem::__set_action(::System::Action*  value)  {
::cordl_internals::setInstanceField<::System::Action*, 0x18>(this, std::forward<::System::Action*>(value));
}
constexpr ::System::Action* GlobalNamespace::__TabBarViewController__TabBarItem::__get_action()  {
return ::cordl_internals::getInstanceField<::System::Action*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> GlobalNamespace::__TabBarViewController__TabBarItem::__get_action() const {
return ::cordl_internals::getInstanceField<::System::Action*, 0x18>(this);
}
inline ::GlobalNamespace::__TabBarViewController__TabBarItem* GlobalNamespace::__TabBarViewController__TabBarItem::New_ctor(::StringW  title, ::System::Action*  action)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__TabBarViewController__TabBarItem*>(title, action));
}
inline void GlobalNamespace::__TabBarViewController__TabBarItem::_ctor(::StringW  title, ::System::Action*  action)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TabBarViewController__TabBarItem*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, title, action);
}
//  Writing Method size for method: ::GlobalNamespace::TabBarViewController.set_sizeToFit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TabBarViewController::*)(bool)>(&::GlobalNamespace::TabBarViewController::set_sizeToFit)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x22dc008;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TabBarViewController*>::get(),
                            "set_sizeToFit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TabBarViewController.get_sizeToFit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::TabBarViewController::*)()>(&::GlobalNamespace::TabBarViewController::get_sizeToFit)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x22dc028;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TabBarViewController*>::get(),
                            "get_sizeToFit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TabBarViewController.get_selectedCellNumber
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::TabBarViewController::*)()>(&::GlobalNamespace::TabBarViewController::get_selectedCellNumber)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x22dc044;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TabBarViewController*>::get(),
                            "get_selectedCellNumber",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TabBarViewController.Setup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TabBarViewController::*)(::ArrayW<::GlobalNamespace::__TabBarViewController__TabBarItem*,::Array<::GlobalNamespace::__TabBarViewController__TabBarItem*>*>)>(&::GlobalNamespace::TabBarViewController::Setup)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x22dc060;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TabBarViewController*>::get(),
                            "Setup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::__TabBarViewController__TabBarItem*,::Array<::GlobalNamespace::__TabBarViewController__TabBarItem*>*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TabBarViewController.SelectItem
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TabBarViewController::*)(int32_t)>(&::GlobalNamespace::TabBarViewController::SelectItem)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x22dc1ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TabBarViewController*>::get(),
                            "SelectItem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TabBarViewController.Clear
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TabBarViewController::*)()>(&::GlobalNamespace::TabBarViewController::Clear)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x22dc208;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TabBarViewController*>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TabBarViewController.DidActivate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TabBarViewController::*)(bool, bool, bool)>(&::GlobalNamespace::TabBarViewController::DidActivate)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x22dc25c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TabBarViewController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TabBarViewController*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TabBarViewController.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TabBarViewController::*)()>(&::GlobalNamespace::TabBarViewController::OnDestroy)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x22dc320;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TabBarViewController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TabBarViewController*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TabBarViewController.HandleDidSelectCell
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TabBarViewController::*)(::HMUI::SegmentedControl*, int32_t)>(&::GlobalNamespace::TabBarViewController::HandleDidSelectCell)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x22dc3fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TabBarViewController*>::get(),
                            "HandleDidSelectCell",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::SegmentedControl*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TabBarViewController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TabBarViewController::*)()>(&::GlobalNamespace::TabBarViewController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22dc44c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TabBarViewController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::TabBarViewController::__set__segmentedControll(::HMUI::TextSegmentedControl*  value)  {
::cordl_internals::setInstanceField<::HMUI::TextSegmentedControl*, 0x70>(this, std::forward<::HMUI::TextSegmentedControl*>(value));
}
constexpr ::HMUI::TextSegmentedControl* GlobalNamespace::TabBarViewController::__get__segmentedControll()  {
return ::cordl_internals::getInstanceField<::HMUI::TextSegmentedControl*, 0x70>(this);
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::TextSegmentedControl*> GlobalNamespace::TabBarViewController::__get__segmentedControll() const {
return ::cordl_internals::getInstanceField<::HMUI::TextSegmentedControl*, 0x70>(this);
}
constexpr void GlobalNamespace::TabBarViewController::__set__contentSizeFilter(::UnityEngine::UI::ContentSizeFitter*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::ContentSizeFitter*, 0x78>(this, std::forward<::UnityEngine::UI::ContentSizeFitter*>(value));
}
constexpr ::UnityEngine::UI::ContentSizeFitter* GlobalNamespace::TabBarViewController::__get__contentSizeFilter()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::ContentSizeFitter*, 0x78>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::ContentSizeFitter*> GlobalNamespace::TabBarViewController::__get__contentSizeFilter() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::ContentSizeFitter*, 0x78>(this);
}
constexpr void GlobalNamespace::TabBarViewController::__set__labels(::ArrayW<::StringW,::Array<::StringW>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x80>(this, std::forward<::ArrayW<::StringW,::Array<::StringW>*>>(value));
}
constexpr ::ArrayW<::StringW,::Array<::StringW>*>& GlobalNamespace::TabBarViewController::__get__labels()  {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x80>(this);
}
constexpr ::ArrayW<::StringW,::Array<::StringW>*> const& GlobalNamespace::TabBarViewController::__get__labels() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x80>(this);
}
constexpr void GlobalNamespace::TabBarViewController::__set__items(::ArrayW<::GlobalNamespace::__TabBarViewController__TabBarItem*,::Array<::GlobalNamespace::__TabBarViewController__TabBarItem*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::__TabBarViewController__TabBarItem*,::Array<::GlobalNamespace::__TabBarViewController__TabBarItem*>*>, 0x88>(this, std::forward<::ArrayW<::GlobalNamespace::__TabBarViewController__TabBarItem*,::Array<::GlobalNamespace::__TabBarViewController__TabBarItem*>*>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::__TabBarViewController__TabBarItem*,::Array<::GlobalNamespace::__TabBarViewController__TabBarItem*>*>& GlobalNamespace::TabBarViewController::__get__items()  {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::__TabBarViewController__TabBarItem*,::Array<::GlobalNamespace::__TabBarViewController__TabBarItem*>*>, 0x88>(this);
}
constexpr ::ArrayW<::GlobalNamespace::__TabBarViewController__TabBarItem*,::Array<::GlobalNamespace::__TabBarViewController__TabBarItem*>*> const& GlobalNamespace::TabBarViewController::__get__items() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::__TabBarViewController__TabBarItem*,::Array<::GlobalNamespace::__TabBarViewController__TabBarItem*>*>, 0x88>(this);
}
constexpr void GlobalNamespace::TabBarViewController::__set__shouldReloadData(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x90>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::TabBarViewController::__get__shouldReloadData()  {
return ::cordl_internals::getInstanceField<bool, 0x90>(this);
}
constexpr bool const& GlobalNamespace::TabBarViewController::__get__shouldReloadData() const {
return ::cordl_internals::getInstanceField<bool, 0x90>(this);
}
inline void GlobalNamespace::TabBarViewController::set_sizeToFit(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TabBarViewController*>::get(),
                            "set_sizeToFit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline bool GlobalNamespace::TabBarViewController::get_sizeToFit()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TabBarViewController*>::get(),
                            "get_sizeToFit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline int32_t GlobalNamespace::TabBarViewController::get_selectedCellNumber()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TabBarViewController*>::get(),
                            "get_selectedCellNumber",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline void GlobalNamespace::TabBarViewController::Setup(::ArrayW<::GlobalNamespace::__TabBarViewController__TabBarItem*,::Array<::GlobalNamespace::__TabBarViewController__TabBarItem*>*>  items)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TabBarViewController*>::get(),
                            "Setup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::__TabBarViewController__TabBarItem*,::Array<::GlobalNamespace::__TabBarViewController__TabBarItem*>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, items);
}
inline void GlobalNamespace::TabBarViewController::SelectItem(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TabBarViewController*>::get(),
                            "SelectItem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, index);
}
inline void GlobalNamespace::TabBarViewController::Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TabBarViewController*>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::TabBarViewController::DidActivate(bool  firstActivation, bool  addedToHierarchy, bool  screenSystemEnabling)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TabBarViewController*>::get(),
                            "DidActivate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void GlobalNamespace::TabBarViewController::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TabBarViewController*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::TabBarViewController::HandleDidSelectCell(::HMUI::SegmentedControl*  segmentedControl, int32_t  cellNumber)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TabBarViewController*>::get(),
                            "HandleDidSelectCell",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::SegmentedControl*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, segmentedControl, cellNumber);
}
inline ::GlobalNamespace::TabBarViewController* GlobalNamespace::TabBarViewController::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::TabBarViewController*>());
}
inline void GlobalNamespace::TabBarViewController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TabBarViewController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
