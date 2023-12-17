#pragma once
#include "HMUI/zzzz__TableCell_impl.hpp"
#include "GlobalNamespace/zzzz__PackLevelListHeaderTableCell_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "HMUI/zzzz__SelectableCell_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PackLevelListHeaderTableCell.set_text
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PackLevelListHeaderTableCell::*)(::StringW)>(&::GlobalNamespace::PackLevelListHeaderTableCell::set_text)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x227c2ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackLevelListHeaderTableCell*>::get(),
                            "set_text",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackLevelListHeaderTableCell.get_text
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::PackLevelListHeaderTableCell::*)()>(&::GlobalNamespace::PackLevelListHeaderTableCell::get_text)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x227c310;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackLevelListHeaderTableCell*>::get(),
                            "get_text",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackLevelListHeaderTableCell.SelectionDidChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PackLevelListHeaderTableCell::*)(::HMUI::__SelectableCell__TransitionType)>(&::GlobalNamespace::PackLevelListHeaderTableCell::SelectionDidChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x227c334;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackLevelListHeaderTableCell*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackLevelListHeaderTableCell*>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackLevelListHeaderTableCell.HighlightDidChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PackLevelListHeaderTableCell::*)(::HMUI::__SelectableCell__TransitionType)>(&::GlobalNamespace::PackLevelListHeaderTableCell::HighlightDidChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x227c3c0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackLevelListHeaderTableCell*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackLevelListHeaderTableCell*>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackLevelListHeaderTableCell.RefreshVisuals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PackLevelListHeaderTableCell::*)()>(&::GlobalNamespace::PackLevelListHeaderTableCell::RefreshVisuals)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x227c338;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackLevelListHeaderTableCell*>::get(),
                            "RefreshVisuals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackLevelListHeaderTableCell._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PackLevelListHeaderTableCell::*)()>(&::GlobalNamespace::PackLevelListHeaderTableCell::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x227c3c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackLevelListHeaderTableCell*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::PackLevelListHeaderTableCell::__set__selectedHighlightElementsColor(::UnityEngine::Color  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color, 0x58>(this, std::forward<::UnityEngine::Color>(value));
}
constexpr ::UnityEngine::Color& GlobalNamespace::PackLevelListHeaderTableCell::__get__selectedHighlightElementsColor()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x58>(this);
}
constexpr ::UnityEngine::Color const& GlobalNamespace::PackLevelListHeaderTableCell::__get__selectedHighlightElementsColor() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x58>(this);
}
constexpr void GlobalNamespace::PackLevelListHeaderTableCell::__set__text(::TMPro::TextMeshProUGUI*  value)  {
::cordl_internals::setInstanceField<::TMPro::TextMeshProUGUI*, 0x68>(this, std::forward<::TMPro::TextMeshProUGUI*>(value));
}
constexpr ::TMPro::TextMeshProUGUI* GlobalNamespace::PackLevelListHeaderTableCell::__get__text()  {
return ::cordl_internals::getInstanceField<::TMPro::TextMeshProUGUI*, 0x68>(this);
}
constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> GlobalNamespace::PackLevelListHeaderTableCell::__get__text() const {
return ::cordl_internals::getInstanceField<::TMPro::TextMeshProUGUI*, 0x68>(this);
}
constexpr void GlobalNamespace::PackLevelListHeaderTableCell::__set__bgImage(::UnityEngine::UI::Image*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::Image*, 0x70>(this, std::forward<::UnityEngine::UI::Image*>(value));
}
constexpr ::UnityEngine::UI::Image* GlobalNamespace::PackLevelListHeaderTableCell::__get__bgImage()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Image*, 0x70>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Image*> GlobalNamespace::PackLevelListHeaderTableCell::__get__bgImage() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Image*, 0x70>(this);
}
constexpr void GlobalNamespace::PackLevelListHeaderTableCell::__set__highlightImage(::UnityEngine::UI::Image*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::Image*, 0x78>(this, std::forward<::UnityEngine::UI::Image*>(value));
}
constexpr ::UnityEngine::UI::Image* GlobalNamespace::PackLevelListHeaderTableCell::__get__highlightImage()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Image*, 0x78>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Image*> GlobalNamespace::PackLevelListHeaderTableCell::__get__highlightImage() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Image*, 0x78>(this);
}
constexpr void GlobalNamespace::PackLevelListHeaderTableCell::__set__arrowImage(::UnityEngine::UI::Image*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::Image*, 0x80>(this, std::forward<::UnityEngine::UI::Image*>(value));
}
constexpr ::UnityEngine::UI::Image* GlobalNamespace::PackLevelListHeaderTableCell::__get__arrowImage()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Image*, 0x80>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Image*> GlobalNamespace::PackLevelListHeaderTableCell::__get__arrowImage() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Image*, 0x80>(this);
}
constexpr void GlobalNamespace::PackLevelListHeaderTableCell::__set__cancellationTokenSource(::System::Threading::CancellationTokenSource*  value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationTokenSource*, 0x88>(this, std::forward<::System::Threading::CancellationTokenSource*>(value));
}
constexpr ::System::Threading::CancellationTokenSource* GlobalNamespace::PackLevelListHeaderTableCell::__get__cancellationTokenSource()  {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationTokenSource*, 0x88>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::CancellationTokenSource*> GlobalNamespace::PackLevelListHeaderTableCell::__get__cancellationTokenSource() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationTokenSource*, 0x88>(this);
}
inline void GlobalNamespace::PackLevelListHeaderTableCell::set_text(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackLevelListHeaderTableCell*>::get(),
                            "set_text",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::PackLevelListHeaderTableCell::get_text()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackLevelListHeaderTableCell*>::get(),
                            "get_text",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline void GlobalNamespace::PackLevelListHeaderTableCell::SelectionDidChange(::HMUI::__SelectableCell__TransitionType  transitionType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackLevelListHeaderTableCell*>::get(),
                            "SelectionDidChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__SelectableCell__TransitionType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, transitionType);
}
inline void GlobalNamespace::PackLevelListHeaderTableCell::HighlightDidChange(::HMUI::__SelectableCell__TransitionType  transitionType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackLevelListHeaderTableCell*>::get(),
                            "HighlightDidChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__SelectableCell__TransitionType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, transitionType);
}
inline void GlobalNamespace::PackLevelListHeaderTableCell::RefreshVisuals()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackLevelListHeaderTableCell*>::get(),
                            "RefreshVisuals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::PackLevelListHeaderTableCell* GlobalNamespace::PackLevelListHeaderTableCell::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::PackLevelListHeaderTableCell*>());
}
inline void GlobalNamespace::PackLevelListHeaderTableCell::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackLevelListHeaderTableCell*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
