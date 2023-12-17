#pragma once
#include "HMUI/zzzz__TableCell_impl.hpp"
#include "GlobalNamespace/zzzz__FileBrowserTableCell_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
#include "HMUI/zzzz__SelectableCell_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FileBrowserTableCell.set_text
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FileBrowserTableCell::*)(::StringW)>(&::GlobalNamespace::FileBrowserTableCell::set_text)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x22843e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileBrowserTableCell*>::get(),
                            "set_text",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FileBrowserTableCell.get_text
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::FileBrowserTableCell::*)()>(&::GlobalNamespace::FileBrowserTableCell::get_text)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2284408;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileBrowserTableCell*>::get(),
                            "get_text",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FileBrowserTableCell.SelectionDidChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FileBrowserTableCell::*)(::HMUI::__SelectableCell__TransitionType)>(&::GlobalNamespace::FileBrowserTableCell::SelectionDidChange)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x228442c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileBrowserTableCell*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileBrowserTableCell*>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FileBrowserTableCell.HighlightDidChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FileBrowserTableCell::*)(::HMUI::__SelectableCell__TransitionType)>(&::GlobalNamespace::FileBrowserTableCell::HighlightDidChange)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x22844d0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileBrowserTableCell*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileBrowserTableCell*>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FileBrowserTableCell._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FileBrowserTableCell::*)()>(&::GlobalNamespace::FileBrowserTableCell::_ctor)> {
  constexpr static std::size_t size = 0x1008;
  constexpr static std::size_t addrs = 0x2284510;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileBrowserTableCell*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::FileBrowserTableCell::__set__text(::TMPro::TextMeshProUGUI*  value)  {
::cordl_internals::setInstanceField<::TMPro::TextMeshProUGUI*, 0x58>(this, std::forward<::TMPro::TextMeshProUGUI*>(value));
}
constexpr ::TMPro::TextMeshProUGUI* GlobalNamespace::FileBrowserTableCell::__get__text()  {
return ::cordl_internals::getInstanceField<::TMPro::TextMeshProUGUI*, 0x58>(this);
}
constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> GlobalNamespace::FileBrowserTableCell::__get__text() const {
return ::cordl_internals::getInstanceField<::TMPro::TextMeshProUGUI*, 0x58>(this);
}
constexpr void GlobalNamespace::FileBrowserTableCell::__set__bgImage(::UnityEngine::UI::Image*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::Image*, 0x60>(this, std::forward<::UnityEngine::UI::Image*>(value));
}
constexpr ::UnityEngine::UI::Image* GlobalNamespace::FileBrowserTableCell::__get__bgImage()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Image*, 0x60>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Image*> GlobalNamespace::FileBrowserTableCell::__get__bgImage() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Image*, 0x60>(this);
}
constexpr void GlobalNamespace::FileBrowserTableCell::__set__highlightImage(::UnityEngine::UI::Image*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::Image*, 0x68>(this, std::forward<::UnityEngine::UI::Image*>(value));
}
constexpr ::UnityEngine::UI::Image* GlobalNamespace::FileBrowserTableCell::__get__highlightImage()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Image*, 0x68>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Image*> GlobalNamespace::FileBrowserTableCell::__get__highlightImage() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Image*, 0x68>(this);
}
inline void GlobalNamespace::FileBrowserTableCell::set_text(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileBrowserTableCell*>::get(),
                            "set_text",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::FileBrowserTableCell::get_text()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileBrowserTableCell*>::get(),
                            "get_text",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline void GlobalNamespace::FileBrowserTableCell::SelectionDidChange(::HMUI::__SelectableCell__TransitionType  transitionType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileBrowserTableCell*>::get(),
                            "SelectionDidChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__SelectableCell__TransitionType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, transitionType);
}
inline void GlobalNamespace::FileBrowserTableCell::HighlightDidChange(::HMUI::__SelectableCell__TransitionType  transitionType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileBrowserTableCell*>::get(),
                            "HighlightDidChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__SelectableCell__TransitionType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, transitionType);
}
inline ::GlobalNamespace::FileBrowserTableCell* GlobalNamespace::FileBrowserTableCell::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::FileBrowserTableCell*>());
}
inline void GlobalNamespace::FileBrowserTableCell::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileBrowserTableCell*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
