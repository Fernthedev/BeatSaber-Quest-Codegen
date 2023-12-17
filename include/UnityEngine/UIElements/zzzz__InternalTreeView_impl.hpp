#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_impl.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_impl.hpp"
#include "UnityEngine/UIElements/zzzz__InternalTreeView_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__MouseUpEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__CustomStyleResolvedEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__InternalTreeView_def.hpp"
#include "UnityEngine/UIElements/zzzz__KeyDownEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__AlternatingRowBackground_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__ChangeEvent_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__ScrollView_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__SelectionType_def.hpp"
#include "UnityEngine/UIElements/zzzz__ITreeViewItem_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__ListView_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__CreationContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__IUxmlAttributes_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlIntAttributeDescription_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlEnumAttributeDescription_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlBoolAttributeDescription_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::__InternalTreeView__UxmlTraits.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__InternalTreeView__UxmlTraits::*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::IUxmlAttributes*, ::UnityEngine::UIElements::CreationContext)>(&::UnityEngine::UIElements::__InternalTreeView__UxmlTraits::Init)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x2e82b9c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__InternalTreeView__UxmlTraits*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__InternalTreeView__UxmlTraits*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__InternalTreeView__UxmlTraits._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__InternalTreeView__UxmlTraits::*)()>(&::UnityEngine::UIElements::__InternalTreeView__UxmlTraits::_ctor)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x2e82dfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__InternalTreeView__UxmlTraits*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::UIElements::__InternalTreeView__UxmlTraits::__set_m_ItemHeight(::UnityEngine::UIElements::UxmlIntAttributeDescription*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::UxmlIntAttributeDescription*, 0x70>(this, std::forward<::UnityEngine::UIElements::UxmlIntAttributeDescription*>(value));
}
constexpr ::UnityEngine::UIElements::UxmlIntAttributeDescription* UnityEngine::UIElements::__InternalTreeView__UxmlTraits::__get_m_ItemHeight()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::UxmlIntAttributeDescription*, 0x70>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlIntAttributeDescription*> UnityEngine::UIElements::__InternalTreeView__UxmlTraits::__get_m_ItemHeight() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::UxmlIntAttributeDescription*, 0x70>(this);
}
constexpr void UnityEngine::UIElements::__InternalTreeView__UxmlTraits::__set_m_ShowBorder(::UnityEngine::UIElements::UxmlBoolAttributeDescription*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::UxmlBoolAttributeDescription*, 0x78>(this, std::forward<::UnityEngine::UIElements::UxmlBoolAttributeDescription*>(value));
}
constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription* UnityEngine::UIElements::__InternalTreeView__UxmlTraits::__get_m_ShowBorder()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::UxmlBoolAttributeDescription*, 0x78>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlBoolAttributeDescription*> UnityEngine::UIElements::__InternalTreeView__UxmlTraits::__get_m_ShowBorder() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::UxmlBoolAttributeDescription*, 0x78>(this);
}
constexpr void UnityEngine::UIElements::__InternalTreeView__UxmlTraits::__set_m_SelectionType(::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::SelectionType>*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::SelectionType>*, 0x80>(this, std::forward<::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::SelectionType>*>(value));
}
constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::SelectionType>* UnityEngine::UIElements::__InternalTreeView__UxmlTraits::__get_m_SelectionType()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::SelectionType>*, 0x80>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::SelectionType>*> UnityEngine::UIElements::__InternalTreeView__UxmlTraits::__get_m_SelectionType() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::SelectionType>*, 0x80>(this);
}
constexpr void UnityEngine::UIElements::__InternalTreeView__UxmlTraits::__set_m_ShowAlternatingRowBackgrounds(::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::AlternatingRowBackground>*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::AlternatingRowBackground>*, 0x88>(this, std::forward<::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::AlternatingRowBackground>*>(value));
}
constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::AlternatingRowBackground>* UnityEngine::UIElements::__InternalTreeView__UxmlTraits::__get_m_ShowAlternatingRowBackgrounds()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::AlternatingRowBackground>*, 0x88>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::AlternatingRowBackground>*> UnityEngine::UIElements::__InternalTreeView__UxmlTraits::__get_m_ShowAlternatingRowBackgrounds() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::AlternatingRowBackground>*, 0x88>(this);
}
inline void UnityEngine::UIElements::__InternalTreeView__UxmlTraits::Init(::UnityEngine::UIElements::VisualElement*  ve, ::UnityEngine::UIElements::IUxmlAttributes*  bag, ::UnityEngine::UIElements::CreationContext  cc)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__InternalTreeView__UxmlTraits*>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IUxmlAttributes*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::CreationContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, ve, bag, cc);
}
inline ::UnityEngine::UIElements::__InternalTreeView__UxmlTraits* UnityEngine::UIElements::__InternalTreeView__UxmlTraits::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::__InternalTreeView__UxmlTraits*>());
}
inline void UnityEngine::UIElements::__InternalTreeView__UxmlTraits::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__InternalTreeView__UxmlTraits*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::UnityEngine::UIElements::InternalTreeView.get_unbindItem
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Action_2<::UnityEngine::UIElements::VisualElement*,::UnityEngine::UIElements::ITreeViewItem*>* (::UnityEngine::UIElements::InternalTreeView::*)()>(&::UnityEngine::UIElements::InternalTreeView::get_unbindItem)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e7f8f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InternalTreeView*>::get(),
                            "get_unbindItem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InternalTreeView.set_itemHeight
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InternalTreeView::*)(int32_t)>(&::UnityEngine::UIElements::InternalTreeView::set_itemHeight)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2e7f8f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InternalTreeView*>::get(),
                            "set_itemHeight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InternalTreeView.set_showBorder
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InternalTreeView::*)(bool)>(&::UnityEngine::UIElements::InternalTreeView::set_showBorder)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2e7f918;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InternalTreeView*>::get(),
                            "set_showBorder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InternalTreeView.set_selectionType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InternalTreeView::*)(::UnityEngine::UIElements::SelectionType)>(&::UnityEngine::UIElements::InternalTreeView::set_selectionType)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2e7f938;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InternalTreeView*>::get(),
                            "set_selectionType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::SelectionType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InternalTreeView.set_showAlternatingRowBackgrounds
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InternalTreeView::*)(::UnityEngine::UIElements::AlternatingRowBackground)>(&::UnityEngine::UIElements::InternalTreeView::set_showAlternatingRowBackgrounds)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2e7f954;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InternalTreeView*>::get(),
                            "set_showAlternatingRowBackgrounds",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::AlternatingRowBackground>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InternalTreeView._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InternalTreeView::*)()>(&::UnityEngine::UIElements::InternalTreeView::_ctor)> {
  constexpr static std::size_t size = 0x554;
  constexpr static std::size_t addrs = 0x2e7f970;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InternalTreeView*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InternalTreeView.RefreshItems
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InternalTreeView::*)()>(&::UnityEngine::UIElements::InternalTreeView::RefreshItems)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2e7fec4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InternalTreeView*>::get(),
                            "RefreshItems",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InternalTreeView.Rebuild
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InternalTreeView::*)()>(&::UnityEngine::UIElements::InternalTreeView::Rebuild)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2e7ff8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InternalTreeView*>::get(),
                            "Rebuild",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InternalTreeView.OnViewDataReady
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InternalTreeView::*)()>(&::UnityEngine::UIElements::InternalTreeView::OnViewDataReady)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2e7ffb0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InternalTreeView*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InternalTreeView*>::get(),
                                  92
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InternalTreeView.GetAllItems
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::ITreeViewItem*>* (*)(::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::ITreeViewItem*>*)>(&::UnityEngine::UIElements::InternalTreeView::GetAllItems)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2e7ffec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InternalTreeView*>::get(),
                            "GetAllItems",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::ITreeViewItem*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InternalTreeView.OnKeyDown
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InternalTreeView::*)(::UnityEngine::UIElements::KeyDownEvent*)>(&::UnityEngine::UIElements::InternalTreeView::OnKeyDown)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2e80094;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InternalTreeView*>::get(),
                            "OnKeyDown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::KeyDownEvent*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InternalTreeView.ListViewRefresh
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InternalTreeView::*)()>(&::UnityEngine::UIElements::InternalTreeView::ListViewRefresh)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2e7ff70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InternalTreeView*>::get(),
                            "ListViewRefresh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InternalTreeView.OnItemsChosen
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InternalTreeView::*)(::System::Collections::Generic::IEnumerable_1<::System::Object*>*)>(&::UnityEngine::UIElements::InternalTreeView::OnItemsChosen)> {
  constexpr static std::size_t size = 0x420;
  constexpr static std::size_t addrs = 0x2e80740;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InternalTreeView*>::get(),
                            "OnItemsChosen",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InternalTreeView.OnSelectionChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InternalTreeView::*)(::System::Collections::Generic::IEnumerable_1<::System::Object*>*)>(&::UnityEngine::UIElements::InternalTreeView::OnSelectionChange)> {
  constexpr static std::size_t size = 0x454;
  constexpr static std::size_t addrs = 0x2e80b60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InternalTreeView*>::get(),
                            "OnSelectionChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InternalTreeView.OnTreeViewMouseUp
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InternalTreeView::*)(::UnityEngine::UIElements::MouseUpEvent*)>(&::UnityEngine::UIElements::InternalTreeView::OnTreeViewMouseUp)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2e80fb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InternalTreeView*>::get(),
                            "OnTreeViewMouseUp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::MouseUpEvent*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InternalTreeView.OnItemMouseUp
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InternalTreeView::*)(::UnityEngine::UIElements::MouseUpEvent*)>(&::UnityEngine::UIElements::InternalTreeView::OnItemMouseUp)> {
  constexpr static std::size_t size = 0x7fc;
  constexpr static std::size_t addrs = 0x2e80fec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InternalTreeView*>::get(),
                            "OnItemMouseUp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::MouseUpEvent*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InternalTreeView.MakeTreeItem
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::VisualElement* (::UnityEngine::UIElements::InternalTreeView::*)()>(&::UnityEngine::UIElements::InternalTreeView::MakeTreeItem)> {
  constexpr static std::size_t size = 0x4e0;
  constexpr static std::size_t addrs = 0x2e817e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InternalTreeView*>::get(),
                            "MakeTreeItem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InternalTreeView.UnbindTreeItem
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InternalTreeView::*)(::UnityEngine::UIElements::VisualElement*, int32_t)>(&::UnityEngine::UIElements::InternalTreeView::UnbindTreeItem)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x2e81cc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InternalTreeView*>::get(),
                            "UnbindTreeItem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InternalTreeView.BindTreeItem
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InternalTreeView::*)(::UnityEngine::UIElements::VisualElement*, int32_t)>(&::UnityEngine::UIElements::InternalTreeView::BindTreeItem)> {
  constexpr static std::size_t size = 0x35c;
  constexpr static std::size_t addrs = 0x2e81de4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InternalTreeView*>::get(),
                            "BindTreeItem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InternalTreeView.GetItemId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UIElements::InternalTreeView::*)(int32_t)>(&::UnityEngine::UIElements::InternalTreeView::GetItemId)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2e82140;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InternalTreeView*>::get(),
                            "GetItemId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InternalTreeView.IsExpandedByIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::InternalTreeView::*)(int32_t)>(&::UnityEngine::UIElements::InternalTreeView::IsExpandedByIndex)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2e80150;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InternalTreeView*>::get(),
                            "IsExpandedByIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InternalTreeView.CollapseItemByIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InternalTreeView::*)(int32_t)>(&::UnityEngine::UIElements::InternalTreeView::CollapseItemByIndex)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x2e804f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InternalTreeView*>::get(),
                            "CollapseItemByIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InternalTreeView.ExpandItemByIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InternalTreeView::*)(int32_t)>(&::UnityEngine::UIElements::InternalTreeView::ExpandItemByIndex)> {
  constexpr static std::size_t size = 0x308;
  constexpr static std::size_t addrs = 0x2e801ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InternalTreeView*>::get(),
                            "ExpandItemByIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InternalTreeView.ToggleExpandedState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InternalTreeView::*)(::UnityEngine::UIElements::ChangeEvent_1<bool>*)>(&::UnityEngine::UIElements::InternalTreeView::ToggleExpandedState)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x2e82774;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InternalTreeView*>::get(),
                            "ToggleExpandedState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ChangeEvent_1<bool>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InternalTreeView.CreateWrappers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InternalTreeView::*)(::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::ITreeViewItem*>*, int32_t, ByRef<::System::Collections::Generic::List_1<::UnityEngine::UIElements::__InternalTreeView__TreeViewItemWrapper>*>)>(&::UnityEngine::UIElements::InternalTreeView::CreateWrappers)> {
  constexpr static std::size_t size = 0x520;
  constexpr static std::size_t addrs = 0x2e82254;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InternalTreeView*>::get(),
                            "CreateWrappers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::ITreeViewItem*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::List_1<::UnityEngine::UIElements::__InternalTreeView__TreeViewItemWrapper>*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InternalTreeView.RegenerateWrappers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InternalTreeView::*)()>(&::UnityEngine::UIElements::InternalTreeView::RegenerateWrappers)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2e7fee8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InternalTreeView*>::get(),
                            "RegenerateWrappers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InternalTreeView.OnCustomStyleResolved
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InternalTreeView::*)(::UnityEngine::UIElements::CustomStyleResolvedEvent*)>(&::UnityEngine::UIElements::InternalTreeView::OnCustomStyleResolved)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x2e828f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InternalTreeView*>::get(),
                            "OnCustomStyleResolved",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::CustomStyleResolvedEvent*>::get()}
                        )));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::InternalTreeView::setStaticF_s_ListViewName(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "s_ListViewName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InternalTreeView*>::get>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::InternalTreeView::getStaticF_s_ListViewName()  {
return ::cordl_internals::getStaticField<::StringW, "s_ListViewName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InternalTreeView*>::get>();
}
inline void UnityEngine::UIElements::InternalTreeView::setStaticF_s_ItemName(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "s_ItemName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InternalTreeView*>::get>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::InternalTreeView::getStaticF_s_ItemName()  {
return ::cordl_internals::getStaticField<::StringW, "s_ItemName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InternalTreeView*>::get>();
}
inline void UnityEngine::UIElements::InternalTreeView::setStaticF_s_ItemToggleName(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "s_ItemToggleName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InternalTreeView*>::get>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::InternalTreeView::getStaticF_s_ItemToggleName()  {
return ::cordl_internals::getStaticField<::StringW, "s_ItemToggleName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InternalTreeView*>::get>();
}
inline void UnityEngine::UIElements::InternalTreeView::setStaticF_s_ItemIndentsContainerName(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "s_ItemIndentsContainerName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InternalTreeView*>::get>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::InternalTreeView::getStaticF_s_ItemIndentsContainerName()  {
return ::cordl_internals::getStaticField<::StringW, "s_ItemIndentsContainerName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InternalTreeView*>::get>();
}
inline void UnityEngine::UIElements::InternalTreeView::setStaticF_s_ItemIndentName(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "s_ItemIndentName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InternalTreeView*>::get>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::InternalTreeView::getStaticF_s_ItemIndentName()  {
return ::cordl_internals::getStaticField<::StringW, "s_ItemIndentName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InternalTreeView*>::get>();
}
inline void UnityEngine::UIElements::InternalTreeView::setStaticF_s_ItemContentContainerName(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "s_ItemContentContainerName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InternalTreeView*>::get>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::InternalTreeView::getStaticF_s_ItemContentContainerName()  {
return ::cordl_internals::getStaticField<::StringW, "s_ItemContentContainerName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InternalTreeView*>::get>();
}
constexpr void UnityEngine::UIElements::InternalTreeView::__set_m_MakeItem(::System::Func_1<::UnityEngine::UIElements::VisualElement*>*  value)  {
::cordl_internals::setInstanceField<::System::Func_1<::UnityEngine::UIElements::VisualElement*>*, 0x3b0>(this, std::forward<::System::Func_1<::UnityEngine::UIElements::VisualElement*>*>(value));
}
constexpr ::System::Func_1<::UnityEngine::UIElements::VisualElement*>* UnityEngine::UIElements::InternalTreeView::__get_m_MakeItem()  {
return ::cordl_internals::getInstanceField<::System::Func_1<::UnityEngine::UIElements::VisualElement*>*, 0x3b0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Func_1<::UnityEngine::UIElements::VisualElement*>*> UnityEngine::UIElements::InternalTreeView::__get_m_MakeItem() const {
return ::cordl_internals::getInstanceField<::System::Func_1<::UnityEngine::UIElements::VisualElement*>*, 0x3b0>(this);
}
constexpr void UnityEngine::UIElements::InternalTreeView::__set_onItemsChosen(::System::Action_1<::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::ITreeViewItem*>*>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::ITreeViewItem*>*>*, 0x3b8>(this, std::forward<::System::Action_1<::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::ITreeViewItem*>*>*>(value));
}
constexpr ::System::Action_1<::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::ITreeViewItem*>*>* UnityEngine::UIElements::InternalTreeView::__get_onItemsChosen()  {
return ::cordl_internals::getInstanceField<::System::Action_1<::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::ITreeViewItem*>*>*, 0x3b8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::ITreeViewItem*>*>*> UnityEngine::UIElements::InternalTreeView::__get_onItemsChosen() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::ITreeViewItem*>*>*, 0x3b8>(this);
}
constexpr void UnityEngine::UIElements::InternalTreeView::__set_onSelectionChange(::System::Action_1<::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::ITreeViewItem*>*>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::ITreeViewItem*>*>*, 0x3c0>(this, std::forward<::System::Action_1<::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::ITreeViewItem*>*>*>(value));
}
constexpr ::System::Action_1<::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::ITreeViewItem*>*>* UnityEngine::UIElements::InternalTreeView::__get_onSelectionChange()  {
return ::cordl_internals::getInstanceField<::System::Action_1<::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::ITreeViewItem*>*>*, 0x3c0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::ITreeViewItem*>*>*> UnityEngine::UIElements::InternalTreeView::__get_onSelectionChange() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::ITreeViewItem*>*>*, 0x3c0>(this);
}
constexpr void UnityEngine::UIElements::InternalTreeView::__set_m_SelectedItems(::System::Collections::Generic::List_1<::UnityEngine::UIElements::ITreeViewItem*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::UnityEngine::UIElements::ITreeViewItem*>*, 0x3c8>(this, std::forward<::System::Collections::Generic::List_1<::UnityEngine::UIElements::ITreeViewItem*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::ITreeViewItem*>* UnityEngine::UIElements::InternalTreeView::__get_m_SelectedItems()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::UnityEngine::UIElements::ITreeViewItem*>*, 0x3c8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::ITreeViewItem*>*> UnityEngine::UIElements::InternalTreeView::__get_m_SelectedItems() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::UnityEngine::UIElements::ITreeViewItem*>*, 0x3c8>(this);
}
constexpr void UnityEngine::UIElements::InternalTreeView::__set_m_BindItem(::System::Action_2<::UnityEngine::UIElements::VisualElement*,::UnityEngine::UIElements::ITreeViewItem*>*  value)  {
::cordl_internals::setInstanceField<::System::Action_2<::UnityEngine::UIElements::VisualElement*,::UnityEngine::UIElements::ITreeViewItem*>*, 0x3d0>(this, std::forward<::System::Action_2<::UnityEngine::UIElements::VisualElement*,::UnityEngine::UIElements::ITreeViewItem*>*>(value));
}
constexpr ::System::Action_2<::UnityEngine::UIElements::VisualElement*,::UnityEngine::UIElements::ITreeViewItem*>* UnityEngine::UIElements::InternalTreeView::__get_m_BindItem()  {
return ::cordl_internals::getInstanceField<::System::Action_2<::UnityEngine::UIElements::VisualElement*,::UnityEngine::UIElements::ITreeViewItem*>*, 0x3d0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::UnityEngine::UIElements::VisualElement*,::UnityEngine::UIElements::ITreeViewItem*>*> UnityEngine::UIElements::InternalTreeView::__get_m_BindItem() const {
return ::cordl_internals::getInstanceField<::System::Action_2<::UnityEngine::UIElements::VisualElement*,::UnityEngine::UIElements::ITreeViewItem*>*, 0x3d0>(this);
}
constexpr void UnityEngine::UIElements::InternalTreeView::__set__unbindItem_k__BackingField(::System::Action_2<::UnityEngine::UIElements::VisualElement*,::UnityEngine::UIElements::ITreeViewItem*>*  value)  {
::cordl_internals::setInstanceField<::System::Action_2<::UnityEngine::UIElements::VisualElement*,::UnityEngine::UIElements::ITreeViewItem*>*, 0x3d8>(this, std::forward<::System::Action_2<::UnityEngine::UIElements::VisualElement*,::UnityEngine::UIElements::ITreeViewItem*>*>(value));
}
constexpr ::System::Action_2<::UnityEngine::UIElements::VisualElement*,::UnityEngine::UIElements::ITreeViewItem*>* UnityEngine::UIElements::InternalTreeView::__get__unbindItem_k__BackingField()  {
return ::cordl_internals::getInstanceField<::System::Action_2<::UnityEngine::UIElements::VisualElement*,::UnityEngine::UIElements::ITreeViewItem*>*, 0x3d8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::UnityEngine::UIElements::VisualElement*,::UnityEngine::UIElements::ITreeViewItem*>*> UnityEngine::UIElements::InternalTreeView::__get__unbindItem_k__BackingField() const {
return ::cordl_internals::getInstanceField<::System::Action_2<::UnityEngine::UIElements::VisualElement*,::UnityEngine::UIElements::ITreeViewItem*>*, 0x3d8>(this);
}
constexpr void UnityEngine::UIElements::InternalTreeView::__set_m_RootItems(::System::Collections::Generic::IList_1<::UnityEngine::UIElements::ITreeViewItem*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IList_1<::UnityEngine::UIElements::ITreeViewItem*>*, 0x3e0>(this, std::forward<::System::Collections::Generic::IList_1<::UnityEngine::UIElements::ITreeViewItem*>*>(value));
}
constexpr ::System::Collections::Generic::IList_1<::UnityEngine::UIElements::ITreeViewItem*>* UnityEngine::UIElements::InternalTreeView::__get_m_RootItems()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IList_1<::UnityEngine::UIElements::ITreeViewItem*>*, 0x3e0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IList_1<::UnityEngine::UIElements::ITreeViewItem*>*> UnityEngine::UIElements::InternalTreeView::__get_m_RootItems() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IList_1<::UnityEngine::UIElements::ITreeViewItem*>*, 0x3e0>(this);
}
constexpr void UnityEngine::UIElements::InternalTreeView::__set_m_ExpandedItemIds(::System::Collections::Generic::List_1<int32_t>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<int32_t>*, 0x3e8>(this, std::forward<::System::Collections::Generic::List_1<int32_t>*>(value));
}
constexpr ::System::Collections::Generic::List_1<int32_t>* UnityEngine::UIElements::InternalTreeView::__get_m_ExpandedItemIds()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<int32_t>*, 0x3e8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<int32_t>*> UnityEngine::UIElements::InternalTreeView::__get_m_ExpandedItemIds() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<int32_t>*, 0x3e8>(this);
}
constexpr void UnityEngine::UIElements::InternalTreeView::__set_m_ItemWrappers(::System::Collections::Generic::List_1<::UnityEngine::UIElements::__InternalTreeView__TreeViewItemWrapper>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::UnityEngine::UIElements::__InternalTreeView__TreeViewItemWrapper>*, 0x3f0>(this, std::forward<::System::Collections::Generic::List_1<::UnityEngine::UIElements::__InternalTreeView__TreeViewItemWrapper>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::__InternalTreeView__TreeViewItemWrapper>* UnityEngine::UIElements::InternalTreeView::__get_m_ItemWrappers()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::UnityEngine::UIElements::__InternalTreeView__TreeViewItemWrapper>*, 0x3f0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::__InternalTreeView__TreeViewItemWrapper>*> UnityEngine::UIElements::InternalTreeView::__get_m_ItemWrappers() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::UnityEngine::UIElements::__InternalTreeView__TreeViewItemWrapper>*, 0x3f0>(this);
}
constexpr void UnityEngine::UIElements::InternalTreeView::__set_m_ListView(::UnityEngine::UIElements::ListView*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::ListView*, 0x3f8>(this, std::forward<::UnityEngine::UIElements::ListView*>(value));
}
constexpr ::UnityEngine::UIElements::ListView* UnityEngine::UIElements::InternalTreeView::__get_m_ListView()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::ListView*, 0x3f8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::ListView*> UnityEngine::UIElements::InternalTreeView::__get_m_ListView() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::ListView*, 0x3f8>(this);
}
constexpr void UnityEngine::UIElements::InternalTreeView::__set_m_ScrollView(::UnityEngine::UIElements::ScrollView*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::ScrollView*, 0x400>(this, std::forward<::UnityEngine::UIElements::ScrollView*>(value));
}
constexpr ::UnityEngine::UIElements::ScrollView* UnityEngine::UIElements::InternalTreeView::__get_m_ScrollView()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::ScrollView*, 0x400>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::ScrollView*> UnityEngine::UIElements::InternalTreeView::__get_m_ScrollView() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::ScrollView*, 0x400>(this);
}
inline ::System::Action_2<::UnityEngine::UIElements::VisualElement*,::UnityEngine::UIElements::ITreeViewItem*>* UnityEngine::UIElements::InternalTreeView::get_unbindItem()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InternalTreeView*>::get(),
                            "get_unbindItem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Action_2<::UnityEngine::UIElements::VisualElement*,::UnityEngine::UIElements::ITreeViewItem*>*, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::InternalTreeView::set_itemHeight(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InternalTreeView*>::get(),
                            "set_itemHeight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void UnityEngine::UIElements::InternalTreeView::set_showBorder(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InternalTreeView*>::get(),
                            "set_showBorder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void UnityEngine::UIElements::InternalTreeView::set_selectionType(::UnityEngine::UIElements::SelectionType  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InternalTreeView*>::get(),
                            "set_selectionType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::SelectionType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void UnityEngine::UIElements::InternalTreeView::set_showAlternatingRowBackgrounds(::UnityEngine::UIElements::AlternatingRowBackground  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InternalTreeView*>::get(),
                            "set_showAlternatingRowBackgrounds",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::AlternatingRowBackground>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::InternalTreeView* UnityEngine::UIElements::InternalTreeView::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::InternalTreeView*>());
}
inline void UnityEngine::UIElements::InternalTreeView::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InternalTreeView*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::InternalTreeView::RefreshItems()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InternalTreeView*>::get(),
                            "RefreshItems",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::InternalTreeView::Rebuild()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InternalTreeView*>::get(),
                            "Rebuild",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::InternalTreeView::OnViewDataReady()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InternalTreeView*>::get(),
                            "OnViewDataReady",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::ITreeViewItem*>* UnityEngine::UIElements::InternalTreeView::GetAllItems(::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::ITreeViewItem*>*  rootItems)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InternalTreeView*>::get(),
                            "GetAllItems",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::ITreeViewItem*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::ITreeViewItem*>*, false>(nullptr, ___internal_method, rootItems);
}
inline void UnityEngine::UIElements::InternalTreeView::OnKeyDown(::UnityEngine::UIElements::KeyDownEvent*  evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InternalTreeView*>::get(),
                            "OnKeyDown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::KeyDownEvent*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::InternalTreeView::ListViewRefresh()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InternalTreeView*>::get(),
                            "ListViewRefresh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::InternalTreeView::OnItemsChosen(::System::Collections::Generic::IEnumerable_1<::System::Object*>*  chosenItems)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InternalTreeView*>::get(),
                            "OnItemsChosen",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, chosenItems);
}
inline void UnityEngine::UIElements::InternalTreeView::OnSelectionChange(::System::Collections::Generic::IEnumerable_1<::System::Object*>*  selectedListItems)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InternalTreeView*>::get(),
                            "OnSelectionChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, selectedListItems);
}
inline void UnityEngine::UIElements::InternalTreeView::OnTreeViewMouseUp(::UnityEngine::UIElements::MouseUpEvent*  evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InternalTreeView*>::get(),
                            "OnTreeViewMouseUp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::MouseUpEvent*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::InternalTreeView::OnItemMouseUp(::UnityEngine::UIElements::MouseUpEvent*  evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InternalTreeView*>::get(),
                            "OnItemMouseUp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::MouseUpEvent*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, evt);
}
inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::InternalTreeView::MakeTreeItem()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InternalTreeView*>::get(),
                            "MakeTreeItem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::InternalTreeView::UnbindTreeItem(::UnityEngine::UIElements::VisualElement*  element, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InternalTreeView*>::get(),
                            "UnbindTreeItem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, element, index);
}
inline void UnityEngine::UIElements::InternalTreeView::BindTreeItem(::UnityEngine::UIElements::VisualElement*  element, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InternalTreeView*>::get(),
                            "BindTreeItem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, element, index);
}
inline int32_t UnityEngine::UIElements::InternalTreeView::GetItemId(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InternalTreeView*>::get(),
                            "GetItemId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, index);
}
inline bool UnityEngine::UIElements::InternalTreeView::IsExpandedByIndex(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InternalTreeView*>::get(),
                            "IsExpandedByIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, index);
}
inline void UnityEngine::UIElements::InternalTreeView::CollapseItemByIndex(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InternalTreeView*>::get(),
                            "CollapseItemByIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, index);
}
inline void UnityEngine::UIElements::InternalTreeView::ExpandItemByIndex(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InternalTreeView*>::get(),
                            "ExpandItemByIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, index);
}
inline void UnityEngine::UIElements::InternalTreeView::ToggleExpandedState(::UnityEngine::UIElements::ChangeEvent_1<bool>*  evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InternalTreeView*>::get(),
                            "ToggleExpandedState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ChangeEvent_1<bool>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::InternalTreeView::CreateWrappers(::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::ITreeViewItem*>*  treeViewItems, int32_t  depth, ByRef<::System::Collections::Generic::List_1<::UnityEngine::UIElements::__InternalTreeView__TreeViewItemWrapper>*>  wrappers)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InternalTreeView*>::get(),
                            "CreateWrappers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::ITreeViewItem*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::List_1<::UnityEngine::UIElements::__InternalTreeView__TreeViewItemWrapper>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, treeViewItems, depth, wrappers);
}
inline void UnityEngine::UIElements::InternalTreeView::RegenerateWrappers()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InternalTreeView*>::get(),
                            "RegenerateWrappers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::InternalTreeView::OnCustomStyleResolved(::UnityEngine::UIElements::CustomStyleResolvedEvent*  e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InternalTreeView*>::get(),
                            "OnCustomStyleResolved",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::CustomStyleResolvedEvent*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, e);
}
//  Writing Method size for method: ::UnityEngine::UIElements::__InternalTreeView__UxmlFactory._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__InternalTreeView__UxmlFactory::*)()>(&::UnityEngine::UIElements::__InternalTreeView__UxmlFactory::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2e82b54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__InternalTreeView__UxmlFactory*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
inline ::UnityEngine::UIElements::__InternalTreeView__UxmlFactory* UnityEngine::UIElements::__InternalTreeView__UxmlFactory::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::__InternalTreeView__UxmlFactory*>());
}
inline void UnityEngine::UIElements::__InternalTreeView__UxmlFactory::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__InternalTreeView__UxmlFactory*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::UnityEngine::UIElements::__InternalTreeView__TreeViewItemWrapper.get_id
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UIElements::__InternalTreeView__TreeViewItemWrapper::*)()>(&::UnityEngine::UIElements::__InternalTreeView__TreeViewItemWrapper::get_id)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2e821b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__InternalTreeView__TreeViewItemWrapper>::get(),
                            "get_id",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::UIElements::__InternalTreeView__TreeViewItemWrapper::__set_depth(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::UIElements::__InternalTreeView__TreeViewItemWrapper::__get_depth()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::UIElements::__InternalTreeView__TreeViewItemWrapper::__get_depth() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::UIElements::__InternalTreeView__TreeViewItemWrapper::__set_item(::UnityEngine::UIElements::ITreeViewItem*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::ITreeViewItem*, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::UIElements::ITreeViewItem*>(value));
}
constexpr ::UnityEngine::UIElements::ITreeViewItem* UnityEngine::UIElements::__InternalTreeView__TreeViewItemWrapper::__get_item()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::ITreeViewItem*, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::ITreeViewItem*> UnityEngine::UIElements::__InternalTreeView__TreeViewItemWrapper::__get_item() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::ITreeViewItem*, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline int32_t UnityEngine::UIElements::__InternalTreeView__TreeViewItemWrapper::get_id()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__InternalTreeView__TreeViewItemWrapper>::get(),
                            "get_id",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "depth", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "item", ty: "::UnityEngine::UIElements::ITreeViewItem*", modifiers: "", def_value: Some("csnull") }]
constexpr ::UnityEngine::UIElements::__InternalTreeView__TreeViewItemWrapper::__InternalTreeView__TreeViewItemWrapper(int32_t  depth, ::UnityEngine::UIElements::ITreeViewItem*  item) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->depth = depth;
this->item = item;
}
//  Writing Method size for method: ::UnityEngine::UIElements::__InternalTreeView___GetAllItems_d__64._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__InternalTreeView___GetAllItems_d__64::*)(int32_t)>(&::UnityEngine::UIElements::__InternalTreeView___GetAllItems_d__64::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2e80050;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__InternalTreeView___GetAllItems_d__64*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__InternalTreeView___GetAllItems_d__64.System_IDisposable_Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__InternalTreeView___GetAllItems_d__64::*)()>(&::UnityEngine::UIElements::__InternalTreeView___GetAllItems_d__64::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2e83008;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__InternalTreeView___GetAllItems_d__64*>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__InternalTreeView___GetAllItems_d__64.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::__InternalTreeView___GetAllItems_d__64::*)()>(&::UnityEngine::UIElements::__InternalTreeView___GetAllItems_d__64::MoveNext)> {
  constexpr static std::size_t size = 0x3f8;
  constexpr static std::size_t addrs = 0x2e8300c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__InternalTreeView___GetAllItems_d__64*>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__InternalTreeView___GetAllItems_d__64.System_Collections_Generic_IEnumerator_UnityEngine_UIElements_ITreeViewItem__get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::ITreeViewItem* (::UnityEngine::UIElements::__InternalTreeView___GetAllItems_d__64::*)()>(&::UnityEngine::UIElements::__InternalTreeView___GetAllItems_d__64::System_Collections_Generic_IEnumerator_UnityEngine_UIElements_ITreeViewItem__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e83404;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__InternalTreeView___GetAllItems_d__64*>::get(),
                            "System.Collections.Generic.IEnumerator<UnityEngine.UIElements.ITreeViewItem>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__InternalTreeView___GetAllItems_d__64.System_Collections_IEnumerator_Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__InternalTreeView___GetAllItems_d__64::*)()>(&::UnityEngine::UIElements::__InternalTreeView___GetAllItems_d__64::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2e8340c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__InternalTreeView___GetAllItems_d__64*>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__InternalTreeView___GetAllItems_d__64.System_Collections_IEnumerator_get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::UnityEngine::UIElements::__InternalTreeView___GetAllItems_d__64::*)()>(&::UnityEngine::UIElements::__InternalTreeView___GetAllItems_d__64::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e8344c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__InternalTreeView___GetAllItems_d__64*>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__InternalTreeView___GetAllItems_d__64.System_Collections_Generic_IEnumerable_UnityEngine_UIElements_ITreeViewItem__GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::ITreeViewItem*>* (::UnityEngine::UIElements::__InternalTreeView___GetAllItems_d__64::*)()>(&::UnityEngine::UIElements::__InternalTreeView___GetAllItems_d__64::System_Collections_Generic_IEnumerable_UnityEngine_UIElements_ITreeViewItem__GetEnumerator)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2e83454;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__InternalTreeView___GetAllItems_d__64*>::get(),
                            "System.Collections.Generic.IEnumerable<UnityEngine.UIElements.ITreeViewItem>.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__InternalTreeView___GetAllItems_d__64.System_Collections_IEnumerable_GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::UnityEngine::UIElements::__InternalTreeView___GetAllItems_d__64::*)()>(&::UnityEngine::UIElements::__InternalTreeView___GetAllItems_d__64::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2e834f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__InternalTreeView___GetAllItems_d__64*>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::ITreeViewItem*>"
constexpr  UnityEngine::UIElements::__InternalTreeView___GetAllItems_d__64::operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::ITreeViewItem*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::ITreeViewItem*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  UnityEngine::UIElements::__InternalTreeView___GetAllItems_d__64::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::ITreeViewItem*>"
constexpr  UnityEngine::UIElements::__InternalTreeView___GetAllItems_d__64::operator ::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::ITreeViewItem*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::ITreeViewItem*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  UnityEngine::UIElements::__InternalTreeView___GetAllItems_d__64::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  UnityEngine::UIElements::__InternalTreeView___GetAllItems_d__64::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr void UnityEngine::UIElements::__InternalTreeView___GetAllItems_d__64::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::UIElements::__InternalTreeView___GetAllItems_d__64::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr int32_t const& UnityEngine::UIElements::__InternalTreeView___GetAllItems_d__64::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr void UnityEngine::UIElements::__InternalTreeView___GetAllItems_d__64::__set___2__current(::UnityEngine::UIElements::ITreeViewItem*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::ITreeViewItem*, 0x18>(this, std::forward<::UnityEngine::UIElements::ITreeViewItem*>(value));
}
constexpr ::UnityEngine::UIElements::ITreeViewItem* UnityEngine::UIElements::__InternalTreeView___GetAllItems_d__64::__get___2__current()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::ITreeViewItem*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::ITreeViewItem*> UnityEngine::UIElements::__InternalTreeView___GetAllItems_d__64::__get___2__current() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::ITreeViewItem*, 0x18>(this);
}
constexpr void UnityEngine::UIElements::__InternalTreeView___GetAllItems_d__64::__set___l__initialThreadId(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::UIElements::__InternalTreeView___GetAllItems_d__64::__get___l__initialThreadId()  {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
constexpr int32_t const& UnityEngine::UIElements::__InternalTreeView___GetAllItems_d__64::__get___l__initialThreadId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
constexpr void UnityEngine::UIElements::__InternalTreeView___GetAllItems_d__64::__set_rootItems(::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::ITreeViewItem*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::ITreeViewItem*>*, 0x28>(this, std::forward<::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::ITreeViewItem*>*>(value));
}
constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::ITreeViewItem*>* UnityEngine::UIElements::__InternalTreeView___GetAllItems_d__64::__get_rootItems()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::ITreeViewItem*>*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::ITreeViewItem*>*> UnityEngine::UIElements::__InternalTreeView___GetAllItems_d__64::__get_rootItems() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::ITreeViewItem*>*, 0x28>(this);
}
constexpr void UnityEngine::UIElements::__InternalTreeView___GetAllItems_d__64::__set___3__rootItems(::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::ITreeViewItem*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::ITreeViewItem*>*, 0x30>(this, std::forward<::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::ITreeViewItem*>*>(value));
}
constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::ITreeViewItem*>* UnityEngine::UIElements::__InternalTreeView___GetAllItems_d__64::__get___3__rootItems()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::ITreeViewItem*>*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::ITreeViewItem*>*> UnityEngine::UIElements::__InternalTreeView___GetAllItems_d__64::__get___3__rootItems() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::ITreeViewItem*>*, 0x30>(this);
}
constexpr void UnityEngine::UIElements::__InternalTreeView___GetAllItems_d__64::__set__iteratorStack_5__1(::System::Collections::Generic::Stack_1<::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::ITreeViewItem*>*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Stack_1<::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::ITreeViewItem*>*>*, 0x38>(this, std::forward<::System::Collections::Generic::Stack_1<::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::ITreeViewItem*>*>*>(value));
}
constexpr ::System::Collections::Generic::Stack_1<::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::ITreeViewItem*>*>* UnityEngine::UIElements::__InternalTreeView___GetAllItems_d__64::__get__iteratorStack_5__1()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Stack_1<::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::ITreeViewItem*>*>*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Stack_1<::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::ITreeViewItem*>*>*> UnityEngine::UIElements::__InternalTreeView___GetAllItems_d__64::__get__iteratorStack_5__1() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Stack_1<::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::ITreeViewItem*>*>*, 0x38>(this);
}
constexpr void UnityEngine::UIElements::__InternalTreeView___GetAllItems_d__64::__set__currentIterator_5__2(::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::ITreeViewItem*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::ITreeViewItem*>*, 0x40>(this, std::forward<::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::ITreeViewItem*>*>(value));
}
constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::ITreeViewItem*>* UnityEngine::UIElements::__InternalTreeView___GetAllItems_d__64::__get__currentIterator_5__2()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::ITreeViewItem*>*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::ITreeViewItem*>*> UnityEngine::UIElements::__InternalTreeView___GetAllItems_d__64::__get__currentIterator_5__2() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::ITreeViewItem*>*, 0x40>(this);
}
constexpr void UnityEngine::UIElements::__InternalTreeView___GetAllItems_d__64::__set__hasNext_5__3(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x48>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::UIElements::__InternalTreeView___GetAllItems_d__64::__get__hasNext_5__3()  {
return ::cordl_internals::getInstanceField<bool, 0x48>(this);
}
constexpr bool const& UnityEngine::UIElements::__InternalTreeView___GetAllItems_d__64::__get__hasNext_5__3() const {
return ::cordl_internals::getInstanceField<bool, 0x48>(this);
}
constexpr void UnityEngine::UIElements::__InternalTreeView___GetAllItems_d__64::__set__currentItem_5__4(::UnityEngine::UIElements::ITreeViewItem*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::ITreeViewItem*, 0x50>(this, std::forward<::UnityEngine::UIElements::ITreeViewItem*>(value));
}
constexpr ::UnityEngine::UIElements::ITreeViewItem* UnityEngine::UIElements::__InternalTreeView___GetAllItems_d__64::__get__currentItem_5__4()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::ITreeViewItem*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::ITreeViewItem*> UnityEngine::UIElements::__InternalTreeView___GetAllItems_d__64::__get__currentItem_5__4() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::ITreeViewItem*, 0x50>(this);
}
inline ::UnityEngine::UIElements::__InternalTreeView___GetAllItems_d__64* UnityEngine::UIElements::__InternalTreeView___GetAllItems_d__64::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::__InternalTreeView___GetAllItems_d__64*>(__1__state));
}
inline void UnityEngine::UIElements::__InternalTreeView___GetAllItems_d__64::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__InternalTreeView___GetAllItems_d__64*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, __1__state);
}
inline void UnityEngine::UIElements::__InternalTreeView___GetAllItems_d__64::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__InternalTreeView___GetAllItems_d__64*>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool UnityEngine::UIElements::__InternalTreeView___GetAllItems_d__64::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__InternalTreeView___GetAllItems_d__64*>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::UnityEngine::UIElements::ITreeViewItem* UnityEngine::UIElements::__InternalTreeView___GetAllItems_d__64::System_Collections_Generic_IEnumerator_UnityEngine_UIElements_ITreeViewItem__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__InternalTreeView___GetAllItems_d__64*>::get(),
                            "System.Collections.Generic.IEnumerator<UnityEngine.UIElements.ITreeViewItem>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::ITreeViewItem*, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::__InternalTreeView___GetAllItems_d__64::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__InternalTreeView___GetAllItems_d__64*>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::Object* UnityEngine::UIElements::__InternalTreeView___GetAllItems_d__64::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__InternalTreeView___GetAllItems_d__64*>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::ITreeViewItem*>* UnityEngine::UIElements::__InternalTreeView___GetAllItems_d__64::System_Collections_Generic_IEnumerable_UnityEngine_UIElements_ITreeViewItem__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__InternalTreeView___GetAllItems_d__64*>::get(),
                            "System.Collections.Generic.IEnumerable<UnityEngine.UIElements.ITreeViewItem>.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::ITreeViewItem*>*, false>(*this, ___internal_method);
}
inline ::System::Collections::IEnumerator* UnityEngine::UIElements::__InternalTreeView___GetAllItems_d__64::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__InternalTreeView___GetAllItems_d__64*>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
