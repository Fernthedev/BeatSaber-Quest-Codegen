#pragma once
#include "HMUI/zzzz__TableCell_impl.hpp"
#include "GlobalNamespace/zzzz__LevelPackHeaderTableCell_def.hpp"
#include "HMUI/zzzz__SelectableCell_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LevelPackHeaderTableCell.SetData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelPackHeaderTableCell::*)(::StringW)>(&::GlobalNamespace::LevelPackHeaderTableCell::SetData)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x227bdb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelPackHeaderTableCell*>::get(),
                            "SetData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelPackHeaderTableCell.SelectionDidChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelPackHeaderTableCell::*)(::HMUI::__SelectableCell__TransitionType)>(&::GlobalNamespace::LevelPackHeaderTableCell::SelectionDidChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x227bddc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelPackHeaderTableCell*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelPackHeaderTableCell*>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelPackHeaderTableCell.HighlightDidChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelPackHeaderTableCell::*)(::HMUI::__SelectableCell__TransitionType)>(&::GlobalNamespace::LevelPackHeaderTableCell::HighlightDidChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x227be7c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelPackHeaderTableCell*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelPackHeaderTableCell*>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelPackHeaderTableCell.RefreshVisuals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelPackHeaderTableCell::*)()>(&::GlobalNamespace::LevelPackHeaderTableCell::RefreshVisuals)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x227bde0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelPackHeaderTableCell*>::get(),
                            "RefreshVisuals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelPackHeaderTableCell._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelPackHeaderTableCell::*)()>(&::GlobalNamespace::LevelPackHeaderTableCell::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x227be80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelPackHeaderTableCell*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::LevelPackHeaderTableCell::__set__nameText(::TMPro::TextMeshProUGUI*  value)  {
::cordl_internals::setInstanceField<::TMPro::TextMeshProUGUI*, 0x58>(this, std::forward<::TMPro::TextMeshProUGUI*>(value));
}
constexpr ::TMPro::TextMeshProUGUI* GlobalNamespace::LevelPackHeaderTableCell::__get__nameText()  {
return ::cordl_internals::getInstanceField<::TMPro::TextMeshProUGUI*, 0x58>(this);
}
constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> GlobalNamespace::LevelPackHeaderTableCell::__get__nameText() const {
return ::cordl_internals::getInstanceField<::TMPro::TextMeshProUGUI*, 0x58>(this);
}
constexpr void GlobalNamespace::LevelPackHeaderTableCell::__set__backgroundImage(::UnityEngine::UI::Image*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::Image*, 0x60>(this, std::forward<::UnityEngine::UI::Image*>(value));
}
constexpr ::UnityEngine::UI::Image* GlobalNamespace::LevelPackHeaderTableCell::__get__backgroundImage()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Image*, 0x60>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Image*> GlobalNamespace::LevelPackHeaderTableCell::__get__backgroundImage() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Image*, 0x60>(this);
}
constexpr void GlobalNamespace::LevelPackHeaderTableCell::__set__highlightBackgroundColor(::UnityEngine::Color  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color, 0x68>(this, std::forward<::UnityEngine::Color>(value));
}
constexpr ::UnityEngine::Color& GlobalNamespace::LevelPackHeaderTableCell::__get__highlightBackgroundColor()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x68>(this);
}
constexpr ::UnityEngine::Color const& GlobalNamespace::LevelPackHeaderTableCell::__get__highlightBackgroundColor() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x68>(this);
}
constexpr void GlobalNamespace::LevelPackHeaderTableCell::__set__selectedBackgroundColor(::UnityEngine::Color  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color, 0x78>(this, std::forward<::UnityEngine::Color>(value));
}
constexpr ::UnityEngine::Color& GlobalNamespace::LevelPackHeaderTableCell::__get__selectedBackgroundColor()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x78>(this);
}
constexpr ::UnityEngine::Color const& GlobalNamespace::LevelPackHeaderTableCell::__get__selectedBackgroundColor() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x78>(this);
}
constexpr void GlobalNamespace::LevelPackHeaderTableCell::__set__selectedAndHighlightedBackgroundColor(::UnityEngine::Color  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color, 0x88>(this, std::forward<::UnityEngine::Color>(value));
}
constexpr ::UnityEngine::Color& GlobalNamespace::LevelPackHeaderTableCell::__get__selectedAndHighlightedBackgroundColor()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x88>(this);
}
constexpr ::UnityEngine::Color const& GlobalNamespace::LevelPackHeaderTableCell::__get__selectedAndHighlightedBackgroundColor() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x88>(this);
}
inline void GlobalNamespace::LevelPackHeaderTableCell::SetData(::StringW  headerText)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelPackHeaderTableCell*>::get(),
                            "SetData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, headerText);
}
inline void GlobalNamespace::LevelPackHeaderTableCell::SelectionDidChange(::HMUI::__SelectableCell__TransitionType  transitionType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelPackHeaderTableCell*>::get(),
                            "SelectionDidChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__SelectableCell__TransitionType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, transitionType);
}
inline void GlobalNamespace::LevelPackHeaderTableCell::HighlightDidChange(::HMUI::__SelectableCell__TransitionType  transitionType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelPackHeaderTableCell*>::get(),
                            "HighlightDidChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__SelectableCell__TransitionType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, transitionType);
}
inline void GlobalNamespace::LevelPackHeaderTableCell::RefreshVisuals()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelPackHeaderTableCell*>::get(),
                            "RefreshVisuals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::LevelPackHeaderTableCell* GlobalNamespace::LevelPackHeaderTableCell::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::LevelPackHeaderTableCell*>());
}
inline void GlobalNamespace::LevelPackHeaderTableCell::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelPackHeaderTableCell*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
