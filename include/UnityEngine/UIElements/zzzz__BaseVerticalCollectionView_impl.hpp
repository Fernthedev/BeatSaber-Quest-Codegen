#pragma once
#include "UnityEngine/UIElements/zzzz__BindableElement_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BaseVerticalCollectionView_def.hpp"
#include "UnityEngine/UIElements/zzzz__DetachFromPanelEvent_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/UIElements/zzzz__KeyboardNavigationOperation_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__GeometryChangedEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseVerticalCollectionView_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__PointerCancelEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__ICollectionDragAndDropController_def.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_def.hpp"
#include "UnityEngine/UIElements/zzzz__CollectionVirtualizationController_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__ListViewDragger_def.hpp"
#include "UnityEngine/UIElements/zzzz__AttachToPanelEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__PointerUpEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__IPointerEvent_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__ScrollView_def.hpp"
#include "UnityEngine/UIElements/zzzz__CollectionViewController_def.hpp"
#include "UnityEngine/UIElements/zzzz__KeyboardNavigationManipulator_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__CustomStyleProperty_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__PointerMoveEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__PointerDownEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__SelectionType_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__ReusableCollectionItem_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/UIElements/zzzz__CustomStyleResolvedEvent_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "UnityEngine/UIElements/zzzz__AlternatingRowBackground_def.hpp"
#include "UnityEngine/UIElements/zzzz__CollectionVirtualizationMethod_def.hpp"
constexpr void UnityEngine::UIElements::__BaseVerticalCollectionView____c__DisplayClass164_0::__set___4__this(::UnityEngine::UIElements::BaseVerticalCollectionView*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::BaseVerticalCollectionView*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::UIElements::BaseVerticalCollectionView*>(value));
}
constexpr ::UnityEngine::UIElements::BaseVerticalCollectionView* UnityEngine::UIElements::__BaseVerticalCollectionView____c__DisplayClass164_0::__get___4__this()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::BaseVerticalCollectionView*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::BaseVerticalCollectionView*> UnityEngine::UIElements::__BaseVerticalCollectionView____c__DisplayClass164_0::__get___4__this() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::BaseVerticalCollectionView*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::UIElements::__BaseVerticalCollectionView____c__DisplayClass164_0::__set_shiftKey(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<bool>(value));
}
constexpr bool& UnityEngine::UIElements::__BaseVerticalCollectionView____c__DisplayClass164_0::__get_shiftKey()  {
return ::cordl_internals::getInstanceField<bool, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr bool const& UnityEngine::UIElements::__BaseVerticalCollectionView____c__DisplayClass164_0::__get_shiftKey() const {
return ::cordl_internals::getInstanceField<bool, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "__4__this", ty: "::UnityEngine::UIElements::BaseVerticalCollectionView*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "shiftKey", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::__BaseVerticalCollectionView____c__DisplayClass164_0::__BaseVerticalCollectionView____c__DisplayClass164_0(::UnityEngine::UIElements::BaseVerticalCollectionView*  __4__this, bool  shiftKey) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->__4__this = __4__this;
this->shiftKey = shiftKey;
}
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.add_onItemsChosen
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)(::System::Action_1<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>*)>(&::UnityEngine::UIElements::BaseVerticalCollectionView::add_onItemsChosen)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2e3f9e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "add_onItemsChosen",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.remove_onItemsChosen
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)(::System::Action_1<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>*)>(&::UnityEngine::UIElements::BaseVerticalCollectionView::remove_onItemsChosen)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2e3fa9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "remove_onItemsChosen",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.add_onSelectionChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)(::System::Action_1<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>*)>(&::UnityEngine::UIElements::BaseVerticalCollectionView::add_onSelectionChange)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2e3fb50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "add_onSelectionChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.remove_onSelectionChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)(::System::Action_1<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>*)>(&::UnityEngine::UIElements::BaseVerticalCollectionView::remove_onSelectionChange)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2e3fc04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "remove_onSelectionChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.get_getItemId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Func_2<int32_t,int32_t>* (::UnityEngine::UIElements::BaseVerticalCollectionView::*)()>(&::UnityEngine::UIElements::BaseVerticalCollectionView::get_getItemId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e3fcb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "get_getItemId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.set_getItemId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)(::System::Func_2<int32_t,int32_t>*)>(&::UnityEngine::UIElements::BaseVerticalCollectionView::set_getItemId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e3fcc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "set_getItemId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<int32_t,int32_t>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.get_itemsSource
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IList* (::UnityEngine::UIElements::BaseVerticalCollectionView::*)()>(&::UnityEngine::UIElements::BaseVerticalCollectionView::get_itemsSource)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2e3fd34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "get_itemsSource",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.set_itemsSource
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)(::System::Collections::IList*)>(&::UnityEngine::UIElements::BaseVerticalCollectionView::set_itemsSource)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2e3fd4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "set_itemsSource",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.get_sourceIncludesArraySize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::BaseVerticalCollectionView::*)()>(&::UnityEngine::UIElements::BaseVerticalCollectionView::get_sourceIncludesArraySize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e3fdc8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                                  100
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.get_makeItem
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Func_1<::UnityEngine::UIElements::VisualElement*>* (::UnityEngine::UIElements::BaseVerticalCollectionView::*)()>(&::UnityEngine::UIElements::BaseVerticalCollectionView::get_makeItem)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e3fdd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "get_makeItem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.set_makeItem
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)(::System::Func_1<::UnityEngine::UIElements::VisualElement*>*)>(&::UnityEngine::UIElements::BaseVerticalCollectionView::set_makeItem)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e3fdd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "set_makeItem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<::UnityEngine::UIElements::VisualElement*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.get_bindItem
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Action_2<::UnityEngine::UIElements::VisualElement*,int32_t>* (::UnityEngine::UIElements::BaseVerticalCollectionView::*)()>(&::UnityEngine::UIElements::BaseVerticalCollectionView::get_bindItem)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e3fe4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "get_bindItem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.set_bindItem
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)(::System::Action_2<::UnityEngine::UIElements::VisualElement*,int32_t>*)>(&::UnityEngine::UIElements::BaseVerticalCollectionView::set_bindItem)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e3fe54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "set_bindItem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityEngine::UIElements::VisualElement*,int32_t>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.get_unbindItem
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Action_2<::UnityEngine::UIElements::VisualElement*,int32_t>* (::UnityEngine::UIElements::BaseVerticalCollectionView::*)()>(&::UnityEngine::UIElements::BaseVerticalCollectionView::get_unbindItem)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e3fe5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "get_unbindItem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.set_unbindItem
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)(::System::Action_2<::UnityEngine::UIElements::VisualElement*,int32_t>*)>(&::UnityEngine::UIElements::BaseVerticalCollectionView::set_unbindItem)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e3fe64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "set_unbindItem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityEngine::UIElements::VisualElement*,int32_t>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.get_destroyItem
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Action_1<::UnityEngine::UIElements::VisualElement*>* (::UnityEngine::UIElements::BaseVerticalCollectionView::*)()>(&::UnityEngine::UIElements::BaseVerticalCollectionView::get_destroyItem)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e3fe6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "get_destroyItem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.set_destroyItem
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)(::System::Action_1<::UnityEngine::UIElements::VisualElement*>*)>(&::UnityEngine::UIElements::BaseVerticalCollectionView::set_destroyItem)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e3fe74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "set_destroyItem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::UIElements::VisualElement*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.get_contentContainer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::VisualElement* (::UnityEngine::UIElements::BaseVerticalCollectionView::*)()>(&::UnityEngine::UIElements::BaseVerticalCollectionView::get_contentContainer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e3fe7c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                                  95
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.get_selectionType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::SelectionType (::UnityEngine::UIElements::BaseVerticalCollectionView::*)()>(&::UnityEngine::UIElements::BaseVerticalCollectionView::get_selectionType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e3fe84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "get_selectionType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.set_selectionType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)(::UnityEngine::UIElements::SelectionType)>(&::UnityEngine::UIElements::BaseVerticalCollectionView::set_selectionType)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2e3fe8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "set_selectionType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::SelectionType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.get_selectedIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UIElements::BaseVerticalCollectionView::*)()>(&::UnityEngine::UIElements::BaseVerticalCollectionView::get_selectedIndex)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2e4004c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "get_selectedIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.set_selectedIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)(int32_t)>(&::UnityEngine::UIElements::BaseVerticalCollectionView::set_selectedIndex)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2e400c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "set_selectedIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.get_selectedIndices
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<int32_t>* (::UnityEngine::UIElements::BaseVerticalCollectionView::*)()>(&::UnityEngine::UIElements::BaseVerticalCollectionView::get_selectedIndices)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e400c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "get_selectedIndices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.get_activeItems
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::ReusableCollectionItem*>* (::UnityEngine::UIElements::BaseVerticalCollectionView::*)()>(&::UnityEngine::UIElements::BaseVerticalCollectionView::get_activeItems)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2e400cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "get_activeItems",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.get_scrollView
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::ScrollView* (::UnityEngine::UIElements::BaseVerticalCollectionView::*)()>(&::UnityEngine::UIElements::BaseVerticalCollectionView::get_scrollView)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e40144;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "get_scrollView",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.get_dragger
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::ListViewDragger* (::UnityEngine::UIElements::BaseVerticalCollectionView::*)()>(&::UnityEngine::UIElements::BaseVerticalCollectionView::get_dragger)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e4014c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "get_dragger",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.get_viewController
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::CollectionViewController* (::UnityEngine::UIElements::BaseVerticalCollectionView::*)()>(&::UnityEngine::UIElements::BaseVerticalCollectionView::get_viewController)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e40154;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "get_viewController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.get_virtualizationController
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::CollectionVirtualizationController* (::UnityEngine::UIElements::BaseVerticalCollectionView::*)()>(&::UnityEngine::UIElements::BaseVerticalCollectionView::get_virtualizationController)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2e4015c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "get_virtualizationController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.ResolveItemHeight
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UIElements::BaseVerticalCollectionView::*)(float_t)>(&::UnityEngine::UIElements::BaseVerticalCollectionView::ResolveItemHeight)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2e401bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "ResolveItemHeight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.set_showBorder
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)(bool)>(&::UnityEngine::UIElements::BaseVerticalCollectionView::set_showBorder)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2e40274;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "set_showBorder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.get_reorderable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::BaseVerticalCollectionView::*)()>(&::UnityEngine::UIElements::BaseVerticalCollectionView::get_reorderable)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x2e402f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "get_reorderable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.set_reorderable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)(bool)>(&::UnityEngine::UIElements::BaseVerticalCollectionView::set_reorderable)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x2e403e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "set_reorderable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.set_horizontalScrollingEnabled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)(bool)>(&::UnityEngine::UIElements::BaseVerticalCollectionView::set_horizontalScrollingEnabled)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2e405a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "set_horizontalScrollingEnabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.get_showAlternatingRowBackgrounds
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::AlternatingRowBackground (::UnityEngine::UIElements::BaseVerticalCollectionView::*)()>(&::UnityEngine::UIElements::BaseVerticalCollectionView::get_showAlternatingRowBackgrounds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e405ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "get_showAlternatingRowBackgrounds",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.set_showAlternatingRowBackgrounds
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)(::UnityEngine::UIElements::AlternatingRowBackground)>(&::UnityEngine::UIElements::BaseVerticalCollectionView::set_showAlternatingRowBackgrounds)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2e405f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "set_showAlternatingRowBackgrounds",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::AlternatingRowBackground>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.get_virtualizationMethod
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::CollectionVirtualizationMethod (::UnityEngine::UIElements::BaseVerticalCollectionView::*)()>(&::UnityEngine::UIElements::BaseVerticalCollectionView::get_virtualizationMethod)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e4060c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "get_virtualizationMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.set_virtualizationMethod
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)(::UnityEngine::UIElements::CollectionVirtualizationMethod)>(&::UnityEngine::UIElements::BaseVerticalCollectionView::set_virtualizationMethod)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2e40614;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "set_virtualizationMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::CollectionVirtualizationMethod>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.get_fixedItemHeight
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UIElements::BaseVerticalCollectionView::*)()>(&::UnityEngine::UIElements::BaseVerticalCollectionView::get_fixedItemHeight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e40650;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "get_fixedItemHeight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.set_fixedItemHeight
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)(float_t)>(&::UnityEngine::UIElements::BaseVerticalCollectionView::set_fixedItemHeight)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x2e40658;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "set_fixedItemHeight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.get_lastHeight
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UIElements::BaseVerticalCollectionView::*)()>(&::UnityEngine::UIElements::BaseVerticalCollectionView::get_lastHeight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e40754;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "get_lastHeight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.CreateVirtualizationController
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)()>(&::UnityEngine::UIElements::BaseVerticalCollectionView::CreateVirtualizationController)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2e4075c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                                  101
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.GetOrCreateVirtualizationController
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::CollectionVirtualizationController* (::UnityEngine::UIElements::BaseVerticalCollectionView::*)()>(&::UnityEngine::UIElements::BaseVerticalCollectionView::GetOrCreateVirtualizationController)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2e4018c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "GetOrCreateVirtualizationController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.GetOrCreateViewController
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::CollectionViewController* (::UnityEngine::UIElements::BaseVerticalCollectionView::*)()>(&::UnityEngine::UIElements::BaseVerticalCollectionView::GetOrCreateViewController)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2e3fd98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "GetOrCreateViewController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.CreateViewController
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)()>(&::UnityEngine::UIElements::BaseVerticalCollectionView::CreateViewController)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2e407a4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                                  102
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.SetViewController
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)(::UnityEngine::UIElements::CollectionViewController*)>(&::UnityEngine::UIElements::BaseVerticalCollectionView::SetViewController)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2e40808;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "SetViewController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::CollectionViewController*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.CreateDragger
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::ListViewDragger* (::UnityEngine::UIElements::BaseVerticalCollectionView::*)()>(&::UnityEngine::UIElements::BaseVerticalCollectionView::CreateDragger)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2e40898;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                                  103
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.InitializeDragAndDropController
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)()>(&::UnityEngine::UIElements::BaseVerticalCollectionView::InitializeDragAndDropController)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2e4052c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "InitializeDragAndDropController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.CreateDragAndDropController
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::ICollectionDragAndDropController* (::UnityEngine::UIElements::BaseVerticalCollectionView::*)()>(&::UnityEngine::UIElements::BaseVerticalCollectionView::CreateDragAndDropController)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                                  104
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)()>(&::UnityEngine::UIElements::BaseVerticalCollectionView::_ctor)> {
  constexpr static std::size_t size = 0x5a0;
  constexpr static std::size_t addrs = 0x2e408fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.HasValidDataAndBindings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::BaseVerticalCollectionView::*)()>(&::UnityEngine::UIElements::BaseVerticalCollectionView::HasValidDataAndBindings)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2e40e9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "HasValidDataAndBindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.OnItemIndexChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)(int32_t, int32_t)>(&::UnityEngine::UIElements::BaseVerticalCollectionView::OnItemIndexChanged)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x2e40ed4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "OnItemIndexChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.OnItemsSourceChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)()>(&::UnityEngine::UIElements::BaseVerticalCollectionView::OnItemsSourceChanged)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2e410b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "OnItemsSourceChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.RefreshItems
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)()>(&::UnityEngine::UIElements::BaseVerticalCollectionView::RefreshItems)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2e3fcc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "RefreshItems",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.Rebuild
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)()>(&::UnityEngine::UIElements::BaseVerticalCollectionView::Rebuild)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2e3fde0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "Rebuild",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.RefreshSelection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)()>(&::UnityEngine::UIElements::BaseVerticalCollectionView::RefreshSelection)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x2e41130;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "RefreshSelection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.PostRefresh
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)()>(&::UnityEngine::UIElements::BaseVerticalCollectionView::PostRefresh)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x2e413c8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                                  105
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.ScrollToItem
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)(int32_t)>(&::UnityEngine::UIElements::BaseVerticalCollectionView::ScrollToItem)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2e41594;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "ScrollToItem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.OnScroll
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)(::UnityEngine::Vector2)>(&::UnityEngine::UIElements::BaseVerticalCollectionView::OnScroll)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2e41620;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "OnScroll",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.Resize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)(::UnityEngine::Vector2, int32_t)>(&::UnityEngine::UIElements::BaseVerticalCollectionView::Resize)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2e414f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "Resize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.OnAttachToPanel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)(::UnityEngine::UIElements::AttachToPanelEvent*)>(&::UnityEngine::UIElements::BaseVerticalCollectionView::OnAttachToPanel)> {
  constexpr static std::size_t size = 0x35c;
  constexpr static std::size_t addrs = 0x2e416b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "OnAttachToPanel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::AttachToPanelEvent*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.OnDetachFromPanel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)(::UnityEngine::UIElements::DetachFromPanelEvent*)>(&::UnityEngine::UIElements::BaseVerticalCollectionView::OnDetachFromPanel)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x2e41a10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "OnDetachFromPanel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::DetachFromPanelEvent*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.Apply
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::BaseVerticalCollectionView::*)(::UnityEngine::UIElements::KeyboardNavigationOperation, bool)>(&::UnityEngine::UIElements::BaseVerticalCollectionView::Apply)> {
  constexpr static std::size_t size = 0x3b4;
  constexpr static std::size_t addrs = 0x2e41cd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "Apply",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::KeyboardNavigationOperation>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.Apply
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)(::UnityEngine::UIElements::KeyboardNavigationOperation, ::UnityEngine::UIElements::EventBase*)>(&::UnityEngine::UIElements::BaseVerticalCollectionView::Apply)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x2e427a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "Apply",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::KeyboardNavigationOperation>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.OnPointerMove
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)(::UnityEngine::UIElements::PointerMoveEvent*)>(&::UnityEngine::UIElements::BaseVerticalCollectionView::OnPointerMove)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2e428b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "OnPointerMove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::PointerMoveEvent*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.OnPointerDown
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)(::UnityEngine::UIElements::PointerDownEvent*)>(&::UnityEngine::UIElements::BaseVerticalCollectionView::OnPointerDown)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2e43324;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "OnPointerDown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::PointerDownEvent*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.OnPointerCancel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)(::UnityEngine::UIElements::PointerCancelEvent*)>(&::UnityEngine::UIElements::BaseVerticalCollectionView::OnPointerCancel)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2e433e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "OnPointerCancel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::PointerCancelEvent*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.OnPointerUp
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)(::UnityEngine::UIElements::PointerUpEvent*)>(&::UnityEngine::UIElements::BaseVerticalCollectionView::OnPointerUp)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2e4346c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "OnPointerUp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::PointerUpEvent*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.ProcessPointerDown
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)(::UnityEngine::UIElements::IPointerEvent*)>(&::UnityEngine::UIElements::BaseVerticalCollectionView::ProcessPointerDown)> {
  constexpr static std::size_t size = 0x3f8;
  constexpr static std::size_t addrs = 0x2e42f2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "ProcessPointerDown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IPointerEvent*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.ProcessPointerUp
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)(::UnityEngine::UIElements::IPointerEvent*)>(&::UnityEngine::UIElements::BaseVerticalCollectionView::ProcessPointerUp)> {
  constexpr static std::size_t size = 0x5f4;
  constexpr static std::size_t addrs = 0x2e42938;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "ProcessPointerUp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IPointerEvent*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.DoSelect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)(::UnityEngine::Vector2, int32_t, bool, bool)>(&::UnityEngine::UIElements::BaseVerticalCollectionView::DoSelect)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x2e43528;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "DoSelect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.DoRangeSelection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)(int32_t)>(&::UnityEngine::UIElements::BaseVerticalCollectionView::DoRangeSelection)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x2e438a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "DoRangeSelection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.ProcessSingleClick
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)(int32_t)>(&::UnityEngine::UIElements::BaseVerticalCollectionView::ProcessSingleClick)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2e437c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "ProcessSingleClick",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.SelectAll
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)()>(&::UnityEngine::UIElements::BaseVerticalCollectionView::SelectAll)> {
  constexpr static std::size_t size = 0x5e4;
  constexpr static std::size_t addrs = 0x2e4208c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "SelectAll",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.AddToSelection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)(int32_t)>(&::UnityEngine::UIElements::BaseVerticalCollectionView::AddToSelection)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2e43828;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "AddToSelection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.AddToSelection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)(::System::Collections::Generic::IList_1<int32_t>*)>(&::UnityEngine::UIElements::BaseVerticalCollectionView::AddToSelection)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0x2e43d9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "AddToSelection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<int32_t>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.AddToSelectionWithoutValidation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)(int32_t)>(&::UnityEngine::UIElements::BaseVerticalCollectionView::AddToSelectionWithoutValidation)> {
  constexpr static std::size_t size = 0x4e0;
  constexpr static std::size_t addrs = 0x2e441a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "AddToSelectionWithoutValidation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.RemoveFromSelection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)(int32_t)>(&::UnityEngine::UIElements::BaseVerticalCollectionView::RemoveFromSelection)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2e437c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "RemoveFromSelection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.RemoveFromSelectionWithoutValidation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)(int32_t)>(&::UnityEngine::UIElements::BaseVerticalCollectionView::RemoveFromSelectionWithoutValidation)> {
  constexpr static std::size_t size = 0x40c;
  constexpr static std::size_t addrs = 0x2e44688;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "RemoveFromSelectionWithoutValidation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.SetSelection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)(int32_t)>(&::UnityEngine::UIElements::BaseVerticalCollectionView::SetSelection)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2e3ffc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "SetSelection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.SetSelection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)(::System::Collections::Generic::IEnumerable_1<int32_t>*)>(&::UnityEngine::UIElements::BaseVerticalCollectionView::SetSelection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e44a94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "SetSelection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<int32_t>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.SetSelectionWithoutNotify
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)(::System::Collections::Generic::IEnumerable_1<int32_t>*)>(&::UnityEngine::UIElements::BaseVerticalCollectionView::SetSelectionWithoutNotify)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e44dd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "SetSelectionWithoutNotify",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<int32_t>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.SetSelectionInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)(::System::Collections::Generic::IEnumerable_1<int32_t>*, bool)>(&::UnityEngine::UIElements::BaseVerticalCollectionView::SetSelectionInternal)> {
  constexpr static std::size_t size = 0x33c;
  constexpr static std::size_t addrs = 0x2e44a9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "SetSelectionInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<int32_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.NotifyOfSelectionChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)()>(&::UnityEngine::UIElements::BaseVerticalCollectionView::NotifyOfSelectionChange)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2e4412c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "NotifyOfSelectionChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.ClearSelection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)()>(&::UnityEngine::UIElements::BaseVerticalCollectionView::ClearSelection)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2e3ff30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "ClearSelection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.ClearSelectionWithoutValidation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)()>(&::UnityEngine::UIElements::BaseVerticalCollectionView::ClearSelectionWithoutValidation)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x2e43a3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "ClearSelectionWithoutValidation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.OnViewDataReady
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)()>(&::UnityEngine::UIElements::BaseVerticalCollectionView::OnViewDataReady)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2e44de0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                                  92
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.ExecuteDefaultAction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)(::UnityEngine::UIElements::EventBase*)>(&::UnityEngine::UIElements::BaseVerticalCollectionView::ExecuteDefaultAction)> {
  constexpr static std::size_t size = 0x378;
  constexpr static std::size_t addrs = 0x2e44e14;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.OnSizeChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)(::UnityEngine::UIElements::GeometryChangedEvent*)>(&::UnityEngine::UIElements::BaseVerticalCollectionView::OnSizeChanged)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x2e45194;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "OnSizeChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::GeometryChangedEvent*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.OnCustomStyleResolved
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)(::UnityEngine::UIElements::CustomStyleResolvedEvent*)>(&::UnityEngine::UIElements::BaseVerticalCollectionView::OnCustomStyleResolved)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x2e4534c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "OnCustomStyleResolved",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::CustomStyleResolvedEvent*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)()>(&::UnityEngine::UIElements::BaseVerticalCollectionView::UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2e45538;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)()>(&::UnityEngine::UIElements::BaseVerticalCollectionView::UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2e4553c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView.__ctor_b__143_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)(float_t)>(&::UnityEngine::UIElements::BaseVerticalCollectionView::__ctor_b__143_0)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2e457ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "<.ctor>b__143_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVerticalCollectionView._Apply_g__HandleSelectionAndScroll_164_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseVerticalCollectionView::*)(int32_t, ByRef<::UnityEngine::UIElements::__BaseVerticalCollectionView____c__DisplayClass164_0>)>(&::UnityEngine::UIElements::BaseVerticalCollectionView::_Apply_g__HandleSelectionAndScroll_164_0)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x2e42670;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "<Apply>g__HandleSelectionAndScroll|164_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::__BaseVerticalCollectionView____c__DisplayClass164_0>>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr  UnityEngine::UIElements::BaseVerticalCollectionView::operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept {
return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
constexpr void UnityEngine::UIElements::BaseVerticalCollectionView::__set_onItemsChosen(::System::Action_1<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>*, 0x3c0>(this, std::forward<::System::Action_1<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>*>(value));
}
constexpr ::System::Action_1<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>* UnityEngine::UIElements::BaseVerticalCollectionView::__get_onItemsChosen()  {
return ::cordl_internals::getInstanceField<::System::Action_1<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>*, 0x3c0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>*> UnityEngine::UIElements::BaseVerticalCollectionView::__get_onItemsChosen() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>*, 0x3c0>(this);
}
constexpr void UnityEngine::UIElements::BaseVerticalCollectionView::__set_onSelectionChange(::System::Action_1<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>*, 0x3c8>(this, std::forward<::System::Action_1<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>*>(value));
}
constexpr ::System::Action_1<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>* UnityEngine::UIElements::BaseVerticalCollectionView::__get_onSelectionChange()  {
return ::cordl_internals::getInstanceField<::System::Action_1<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>*, 0x3c8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>*> UnityEngine::UIElements::BaseVerticalCollectionView::__get_onSelectionChange() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>*, 0x3c8>(this);
}
constexpr void UnityEngine::UIElements::BaseVerticalCollectionView::__set_onSelectedIndicesChange(::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>*, 0x3d0>(this, std::forward<::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>*>(value));
}
constexpr ::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>* UnityEngine::UIElements::BaseVerticalCollectionView::__get_onSelectedIndicesChange()  {
return ::cordl_internals::getInstanceField<::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>*, 0x3d0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>*> UnityEngine::UIElements::BaseVerticalCollectionView::__get_onSelectedIndicesChange() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>*, 0x3d0>(this);
}
constexpr void UnityEngine::UIElements::BaseVerticalCollectionView::__set_itemIndexChanged(::System::Action_2<int32_t,int32_t>*  value)  {
::cordl_internals::setInstanceField<::System::Action_2<int32_t,int32_t>*, 0x3d8>(this, std::forward<::System::Action_2<int32_t,int32_t>*>(value));
}
constexpr ::System::Action_2<int32_t,int32_t>* UnityEngine::UIElements::BaseVerticalCollectionView::__get_itemIndexChanged()  {
return ::cordl_internals::getInstanceField<::System::Action_2<int32_t,int32_t>*, 0x3d8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<int32_t,int32_t>*> UnityEngine::UIElements::BaseVerticalCollectionView::__get_itemIndexChanged() const {
return ::cordl_internals::getInstanceField<::System::Action_2<int32_t,int32_t>*, 0x3d8>(this);
}
constexpr void UnityEngine::UIElements::BaseVerticalCollectionView::__set_itemsSourceChanged(::System::Action*  value)  {
::cordl_internals::setInstanceField<::System::Action*, 0x3e0>(this, std::forward<::System::Action*>(value));
}
constexpr ::System::Action* UnityEngine::UIElements::BaseVerticalCollectionView::__get_itemsSourceChanged()  {
return ::cordl_internals::getInstanceField<::System::Action*, 0x3e0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> UnityEngine::UIElements::BaseVerticalCollectionView::__get_itemsSourceChanged() const {
return ::cordl_internals::getInstanceField<::System::Action*, 0x3e0>(this);
}
constexpr void UnityEngine::UIElements::BaseVerticalCollectionView::__set_m_GetItemId(::System::Func_2<int32_t,int32_t>*  value)  {
::cordl_internals::setInstanceField<::System::Func_2<int32_t,int32_t>*, 0x3e8>(this, std::forward<::System::Func_2<int32_t,int32_t>*>(value));
}
constexpr ::System::Func_2<int32_t,int32_t>* UnityEngine::UIElements::BaseVerticalCollectionView::__get_m_GetItemId()  {
return ::cordl_internals::getInstanceField<::System::Func_2<int32_t,int32_t>*, 0x3e8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<int32_t,int32_t>*> UnityEngine::UIElements::BaseVerticalCollectionView::__get_m_GetItemId() const {
return ::cordl_internals::getInstanceField<::System::Func_2<int32_t,int32_t>*, 0x3e8>(this);
}
constexpr void UnityEngine::UIElements::BaseVerticalCollectionView::__set_m_MakeItem(::System::Func_1<::UnityEngine::UIElements::VisualElement*>*  value)  {
::cordl_internals::setInstanceField<::System::Func_1<::UnityEngine::UIElements::VisualElement*>*, 0x3f0>(this, std::forward<::System::Func_1<::UnityEngine::UIElements::VisualElement*>*>(value));
}
constexpr ::System::Func_1<::UnityEngine::UIElements::VisualElement*>* UnityEngine::UIElements::BaseVerticalCollectionView::__get_m_MakeItem()  {
return ::cordl_internals::getInstanceField<::System::Func_1<::UnityEngine::UIElements::VisualElement*>*, 0x3f0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Func_1<::UnityEngine::UIElements::VisualElement*>*> UnityEngine::UIElements::BaseVerticalCollectionView::__get_m_MakeItem() const {
return ::cordl_internals::getInstanceField<::System::Func_1<::UnityEngine::UIElements::VisualElement*>*, 0x3f0>(this);
}
constexpr void UnityEngine::UIElements::BaseVerticalCollectionView::__set_m_BindItem(::System::Action_2<::UnityEngine::UIElements::VisualElement*,int32_t>*  value)  {
::cordl_internals::setInstanceField<::System::Action_2<::UnityEngine::UIElements::VisualElement*,int32_t>*, 0x3f8>(this, std::forward<::System::Action_2<::UnityEngine::UIElements::VisualElement*,int32_t>*>(value));
}
constexpr ::System::Action_2<::UnityEngine::UIElements::VisualElement*,int32_t>* UnityEngine::UIElements::BaseVerticalCollectionView::__get_m_BindItem()  {
return ::cordl_internals::getInstanceField<::System::Action_2<::UnityEngine::UIElements::VisualElement*,int32_t>*, 0x3f8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::UnityEngine::UIElements::VisualElement*,int32_t>*> UnityEngine::UIElements::BaseVerticalCollectionView::__get_m_BindItem() const {
return ::cordl_internals::getInstanceField<::System::Action_2<::UnityEngine::UIElements::VisualElement*,int32_t>*, 0x3f8>(this);
}
constexpr void UnityEngine::UIElements::BaseVerticalCollectionView::__set__unbindItem_k__BackingField(::System::Action_2<::UnityEngine::UIElements::VisualElement*,int32_t>*  value)  {
::cordl_internals::setInstanceField<::System::Action_2<::UnityEngine::UIElements::VisualElement*,int32_t>*, 0x400>(this, std::forward<::System::Action_2<::UnityEngine::UIElements::VisualElement*,int32_t>*>(value));
}
constexpr ::System::Action_2<::UnityEngine::UIElements::VisualElement*,int32_t>* UnityEngine::UIElements::BaseVerticalCollectionView::__get__unbindItem_k__BackingField()  {
return ::cordl_internals::getInstanceField<::System::Action_2<::UnityEngine::UIElements::VisualElement*,int32_t>*, 0x400>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::UnityEngine::UIElements::VisualElement*,int32_t>*> UnityEngine::UIElements::BaseVerticalCollectionView::__get__unbindItem_k__BackingField() const {
return ::cordl_internals::getInstanceField<::System::Action_2<::UnityEngine::UIElements::VisualElement*,int32_t>*, 0x400>(this);
}
constexpr void UnityEngine::UIElements::BaseVerticalCollectionView::__set__destroyItem_k__BackingField(::System::Action_1<::UnityEngine::UIElements::VisualElement*>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<::UnityEngine::UIElements::VisualElement*>*, 0x408>(this, std::forward<::System::Action_1<::UnityEngine::UIElements::VisualElement*>*>(value));
}
constexpr ::System::Action_1<::UnityEngine::UIElements::VisualElement*>* UnityEngine::UIElements::BaseVerticalCollectionView::__get__destroyItem_k__BackingField()  {
return ::cordl_internals::getInstanceField<::System::Action_1<::UnityEngine::UIElements::VisualElement*>*, 0x408>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::UIElements::VisualElement*>*> UnityEngine::UIElements::BaseVerticalCollectionView::__get__destroyItem_k__BackingField() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::UnityEngine::UIElements::VisualElement*>*, 0x408>(this);
}
constexpr void UnityEngine::UIElements::BaseVerticalCollectionView::__set_m_SelectionType(::UnityEngine::UIElements::SelectionType  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::SelectionType, 0x410>(this, std::forward<::UnityEngine::UIElements::SelectionType>(value));
}
constexpr ::UnityEngine::UIElements::SelectionType& UnityEngine::UIElements::BaseVerticalCollectionView::__get_m_SelectionType()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::SelectionType, 0x410>(this);
}
constexpr ::UnityEngine::UIElements::SelectionType const& UnityEngine::UIElements::BaseVerticalCollectionView::__get_m_SelectionType() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::SelectionType, 0x410>(this);
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::setStaticF_k_EmptyItems(::System::Collections::Generic::List_1<::UnityEngine::UIElements::ReusableCollectionItem*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityEngine::UIElements::ReusableCollectionItem*>*, "k_EmptyItems", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get>(std::forward<::System::Collections::Generic::List_1<::UnityEngine::UIElements::ReusableCollectionItem*>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::ReusableCollectionItem*>* UnityEngine::UIElements::BaseVerticalCollectionView::getStaticF_k_EmptyItems()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityEngine::UIElements::ReusableCollectionItem*>*, "k_EmptyItems", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get>();
}
constexpr void UnityEngine::UIElements::BaseVerticalCollectionView::__set_m_HorizontalScrollingEnabled(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x414>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::UIElements::BaseVerticalCollectionView::__get_m_HorizontalScrollingEnabled()  {
return ::cordl_internals::getInstanceField<bool, 0x414>(this);
}
constexpr bool const& UnityEngine::UIElements::BaseVerticalCollectionView::__get_m_HorizontalScrollingEnabled() const {
return ::cordl_internals::getInstanceField<bool, 0x414>(this);
}
constexpr void UnityEngine::UIElements::BaseVerticalCollectionView::__set_m_ShowAlternatingRowBackgrounds(::UnityEngine::UIElements::AlternatingRowBackground  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::AlternatingRowBackground, 0x418>(this, std::forward<::UnityEngine::UIElements::AlternatingRowBackground>(value));
}
constexpr ::UnityEngine::UIElements::AlternatingRowBackground& UnityEngine::UIElements::BaseVerticalCollectionView::__get_m_ShowAlternatingRowBackgrounds()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::AlternatingRowBackground, 0x418>(this);
}
constexpr ::UnityEngine::UIElements::AlternatingRowBackground const& UnityEngine::UIElements::BaseVerticalCollectionView::__get_m_ShowAlternatingRowBackgrounds() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::AlternatingRowBackground, 0x418>(this);
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::setStaticF_s_DefaultItemHeight(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_DefaultItemHeight", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::UIElements::BaseVerticalCollectionView::getStaticF_s_DefaultItemHeight()  {
return ::cordl_internals::getStaticField<int32_t, "s_DefaultItemHeight", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get>();
}
constexpr void UnityEngine::UIElements::BaseVerticalCollectionView::__set_m_FixedItemHeight(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x41c>(this, std::forward<float_t>(value));
}
constexpr float_t& UnityEngine::UIElements::BaseVerticalCollectionView::__get_m_FixedItemHeight()  {
return ::cordl_internals::getInstanceField<float_t, 0x41c>(this);
}
constexpr float_t const& UnityEngine::UIElements::BaseVerticalCollectionView::__get_m_FixedItemHeight() const {
return ::cordl_internals::getInstanceField<float_t, 0x41c>(this);
}
constexpr void UnityEngine::UIElements::BaseVerticalCollectionView::__set_m_ItemHeightIsInline(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x420>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::UIElements::BaseVerticalCollectionView::__get_m_ItemHeightIsInline()  {
return ::cordl_internals::getInstanceField<bool, 0x420>(this);
}
constexpr bool const& UnityEngine::UIElements::BaseVerticalCollectionView::__get_m_ItemHeightIsInline() const {
return ::cordl_internals::getInstanceField<bool, 0x420>(this);
}
constexpr void UnityEngine::UIElements::BaseVerticalCollectionView::__set_m_VirtualizationMethod(::UnityEngine::UIElements::CollectionVirtualizationMethod  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::CollectionVirtualizationMethod, 0x424>(this, std::forward<::UnityEngine::UIElements::CollectionVirtualizationMethod>(value));
}
constexpr ::UnityEngine::UIElements::CollectionVirtualizationMethod& UnityEngine::UIElements::BaseVerticalCollectionView::__get_m_VirtualizationMethod()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::CollectionVirtualizationMethod, 0x424>(this);
}
constexpr ::UnityEngine::UIElements::CollectionVirtualizationMethod const& UnityEngine::UIElements::BaseVerticalCollectionView::__get_m_VirtualizationMethod() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::CollectionVirtualizationMethod, 0x424>(this);
}
constexpr void UnityEngine::UIElements::BaseVerticalCollectionView::__set_m_ScrollView(::UnityEngine::UIElements::ScrollView*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::ScrollView*, 0x428>(this, std::forward<::UnityEngine::UIElements::ScrollView*>(value));
}
constexpr ::UnityEngine::UIElements::ScrollView* UnityEngine::UIElements::BaseVerticalCollectionView::__get_m_ScrollView()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::ScrollView*, 0x428>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::ScrollView*> UnityEngine::UIElements::BaseVerticalCollectionView::__get_m_ScrollView() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::ScrollView*, 0x428>(this);
}
constexpr void UnityEngine::UIElements::BaseVerticalCollectionView::__set_m_ViewController(::UnityEngine::UIElements::CollectionViewController*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::CollectionViewController*, 0x430>(this, std::forward<::UnityEngine::UIElements::CollectionViewController*>(value));
}
constexpr ::UnityEngine::UIElements::CollectionViewController* UnityEngine::UIElements::BaseVerticalCollectionView::__get_m_ViewController()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::CollectionViewController*, 0x430>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::CollectionViewController*> UnityEngine::UIElements::BaseVerticalCollectionView::__get_m_ViewController() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::CollectionViewController*, 0x430>(this);
}
constexpr void UnityEngine::UIElements::BaseVerticalCollectionView::__set_m_VirtualizationController(::UnityEngine::UIElements::CollectionVirtualizationController*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::CollectionVirtualizationController*, 0x438>(this, std::forward<::UnityEngine::UIElements::CollectionVirtualizationController*>(value));
}
constexpr ::UnityEngine::UIElements::CollectionVirtualizationController* UnityEngine::UIElements::BaseVerticalCollectionView::__get_m_VirtualizationController()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::CollectionVirtualizationController*, 0x438>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::CollectionVirtualizationController*> UnityEngine::UIElements::BaseVerticalCollectionView::__get_m_VirtualizationController() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::CollectionVirtualizationController*, 0x438>(this);
}
constexpr void UnityEngine::UIElements::BaseVerticalCollectionView::__set_m_NavigationManipulator(::UnityEngine::UIElements::KeyboardNavigationManipulator*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::KeyboardNavigationManipulator*, 0x440>(this, std::forward<::UnityEngine::UIElements::KeyboardNavigationManipulator*>(value));
}
constexpr ::UnityEngine::UIElements::KeyboardNavigationManipulator* UnityEngine::UIElements::BaseVerticalCollectionView::__get_m_NavigationManipulator()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::KeyboardNavigationManipulator*, 0x440>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::KeyboardNavigationManipulator*> UnityEngine::UIElements::BaseVerticalCollectionView::__get_m_NavigationManipulator() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::KeyboardNavigationManipulator*, 0x440>(this);
}
constexpr void UnityEngine::UIElements::BaseVerticalCollectionView::__set_m_ScrollOffset(::UnityEngine::Vector2  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector2, 0x448>(this, std::forward<::UnityEngine::Vector2>(value));
}
constexpr ::UnityEngine::Vector2& UnityEngine::UIElements::BaseVerticalCollectionView::__get_m_ScrollOffset()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x448>(this);
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::UIElements::BaseVerticalCollectionView::__get_m_ScrollOffset() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x448>(this);
}
constexpr void UnityEngine::UIElements::BaseVerticalCollectionView::__set_m_SelectedIds(::System::Collections::Generic::List_1<int32_t>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<int32_t>*, 0x450>(this, std::forward<::System::Collections::Generic::List_1<int32_t>*>(value));
}
constexpr ::System::Collections::Generic::List_1<int32_t>* UnityEngine::UIElements::BaseVerticalCollectionView::__get_m_SelectedIds()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<int32_t>*, 0x450>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<int32_t>*> UnityEngine::UIElements::BaseVerticalCollectionView::__get_m_SelectedIds() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<int32_t>*, 0x450>(this);
}
constexpr void UnityEngine::UIElements::BaseVerticalCollectionView::__set_m_SelectedIndices(::System::Collections::Generic::List_1<int32_t>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<int32_t>*, 0x458>(this, std::forward<::System::Collections::Generic::List_1<int32_t>*>(value));
}
constexpr ::System::Collections::Generic::List_1<int32_t>* UnityEngine::UIElements::BaseVerticalCollectionView::__get_m_SelectedIndices()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<int32_t>*, 0x458>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<int32_t>*> UnityEngine::UIElements::BaseVerticalCollectionView::__get_m_SelectedIndices() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<int32_t>*, 0x458>(this);
}
constexpr void UnityEngine::UIElements::BaseVerticalCollectionView::__set_m_SelectedItems(::System::Collections::Generic::List_1<::System::Object*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::System::Object*>*, 0x460>(this, std::forward<::System::Collections::Generic::List_1<::System::Object*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::System::Object*>* UnityEngine::UIElements::BaseVerticalCollectionView::__get_m_SelectedItems()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::System::Object*>*, 0x460>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Object*>*> UnityEngine::UIElements::BaseVerticalCollectionView::__get_m_SelectedItems() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::System::Object*>*, 0x460>(this);
}
constexpr void UnityEngine::UIElements::BaseVerticalCollectionView::__set_m_LastHeight(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x468>(this, std::forward<float_t>(value));
}
constexpr float_t& UnityEngine::UIElements::BaseVerticalCollectionView::__get_m_LastHeight()  {
return ::cordl_internals::getInstanceField<float_t, 0x468>(this);
}
constexpr float_t const& UnityEngine::UIElements::BaseVerticalCollectionView::__get_m_LastHeight() const {
return ::cordl_internals::getInstanceField<float_t, 0x468>(this);
}
constexpr void UnityEngine::UIElements::BaseVerticalCollectionView::__set_m_IsRangeSelectionDirectionUp(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x46c>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::UIElements::BaseVerticalCollectionView::__get_m_IsRangeSelectionDirectionUp()  {
return ::cordl_internals::getInstanceField<bool, 0x46c>(this);
}
constexpr bool const& UnityEngine::UIElements::BaseVerticalCollectionView::__get_m_IsRangeSelectionDirectionUp() const {
return ::cordl_internals::getInstanceField<bool, 0x46c>(this);
}
constexpr void UnityEngine::UIElements::BaseVerticalCollectionView::__set_m_Dragger(::UnityEngine::UIElements::ListViewDragger*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::ListViewDragger*, 0x470>(this, std::forward<::UnityEngine::UIElements::ListViewDragger*>(value));
}
constexpr ::UnityEngine::UIElements::ListViewDragger* UnityEngine::UIElements::BaseVerticalCollectionView::__get_m_Dragger()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::ListViewDragger*, 0x470>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::ListViewDragger*> UnityEngine::UIElements::BaseVerticalCollectionView::__get_m_Dragger() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::ListViewDragger*, 0x470>(this);
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::setStaticF_s_ItemHeightProperty(::UnityEngine::UIElements::CustomStyleProperty_1<int32_t>  value)  {
::cordl_internals::setStaticField<::UnityEngine::UIElements::CustomStyleProperty_1<int32_t>, "s_ItemHeightProperty", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get>(std::forward<::UnityEngine::UIElements::CustomStyleProperty_1<int32_t>>(value));
}
inline ::UnityEngine::UIElements::CustomStyleProperty_1<int32_t> UnityEngine::UIElements::BaseVerticalCollectionView::getStaticF_s_ItemHeightProperty()  {
return ::cordl_internals::getStaticField<::UnityEngine::UIElements::CustomStyleProperty_1<int32_t>, "s_ItemHeightProperty", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get>();
}
constexpr void UnityEngine::UIElements::BaseVerticalCollectionView::__set_m_ItemIndexChangedCallback(::System::Action_2<int32_t,int32_t>*  value)  {
::cordl_internals::setInstanceField<::System::Action_2<int32_t,int32_t>*, 0x478>(this, std::forward<::System::Action_2<int32_t,int32_t>*>(value));
}
constexpr ::System::Action_2<int32_t,int32_t>* UnityEngine::UIElements::BaseVerticalCollectionView::__get_m_ItemIndexChangedCallback()  {
return ::cordl_internals::getInstanceField<::System::Action_2<int32_t,int32_t>*, 0x478>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<int32_t,int32_t>*> UnityEngine::UIElements::BaseVerticalCollectionView::__get_m_ItemIndexChangedCallback() const {
return ::cordl_internals::getInstanceField<::System::Action_2<int32_t,int32_t>*, 0x478>(this);
}
constexpr void UnityEngine::UIElements::BaseVerticalCollectionView::__set_m_ItemsSourceChangedCallback(::System::Action*  value)  {
::cordl_internals::setInstanceField<::System::Action*, 0x480>(this, std::forward<::System::Action*>(value));
}
constexpr ::System::Action* UnityEngine::UIElements::BaseVerticalCollectionView::__get_m_ItemsSourceChangedCallback()  {
return ::cordl_internals::getInstanceField<::System::Action*, 0x480>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> UnityEngine::UIElements::BaseVerticalCollectionView::__get_m_ItemsSourceChangedCallback() const {
return ::cordl_internals::getInstanceField<::System::Action*, 0x480>(this);
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::setStaticF_ussClassName(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "ussClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::BaseVerticalCollectionView::getStaticF_ussClassName()  {
return ::cordl_internals::getStaticField<::StringW, "ussClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get>();
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::setStaticF_borderUssClassName(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "borderUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::BaseVerticalCollectionView::getStaticF_borderUssClassName()  {
return ::cordl_internals::getStaticField<::StringW, "borderUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get>();
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::setStaticF_itemUssClassName(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "itemUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::BaseVerticalCollectionView::getStaticF_itemUssClassName()  {
return ::cordl_internals::getStaticField<::StringW, "itemUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get>();
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::setStaticF_dragHoverBarUssClassName(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "dragHoverBarUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::BaseVerticalCollectionView::getStaticF_dragHoverBarUssClassName()  {
return ::cordl_internals::getStaticField<::StringW, "dragHoverBarUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get>();
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::setStaticF_itemDragHoverUssClassName(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "itemDragHoverUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::BaseVerticalCollectionView::getStaticF_itemDragHoverUssClassName()  {
return ::cordl_internals::getStaticField<::StringW, "itemDragHoverUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get>();
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::setStaticF_itemSelectedVariantUssClassName(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "itemSelectedVariantUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::BaseVerticalCollectionView::getStaticF_itemSelectedVariantUssClassName()  {
return ::cordl_internals::getStaticField<::StringW, "itemSelectedVariantUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get>();
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::setStaticF_itemAlternativeBackgroundUssClassName(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "itemAlternativeBackgroundUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::BaseVerticalCollectionView::getStaticF_itemAlternativeBackgroundUssClassName()  {
return ::cordl_internals::getStaticField<::StringW, "itemAlternativeBackgroundUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get>();
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::setStaticF_listScrollViewUssClassName(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "listScrollViewUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::BaseVerticalCollectionView::getStaticF_listScrollViewUssClassName()  {
return ::cordl_internals::getStaticField<::StringW, "listScrollViewUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get>();
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::setStaticF_backgroundFillUssClassName(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "backgroundFillUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::BaseVerticalCollectionView::getStaticF_backgroundFillUssClassName()  {
return ::cordl_internals::getStaticField<::StringW, "backgroundFillUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get>();
}
constexpr void UnityEngine::UIElements::BaseVerticalCollectionView::__set_m_TouchDownPosition(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x488>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& UnityEngine::UIElements::BaseVerticalCollectionView::__get_m_TouchDownPosition()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x488>(this);
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::UIElements::BaseVerticalCollectionView::__get_m_TouchDownPosition() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x488>(this);
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::add_onItemsChosen(::System::Action_1<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "add_onItemsChosen",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::remove_onItemsChosen(::System::Action_1<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "remove_onItemsChosen",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::add_onSelectionChange(::System::Action_1<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "add_onSelectionChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::remove_onSelectionChange(::System::Action_1<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "remove_onSelectionChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::System::Func_2<int32_t,int32_t>* UnityEngine::UIElements::BaseVerticalCollectionView::get_getItemId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "get_getItemId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Func_2<int32_t,int32_t>*, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::set_getItemId(::System::Func_2<int32_t,int32_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "set_getItemId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<int32_t,int32_t>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::System::Collections::IList* UnityEngine::UIElements::BaseVerticalCollectionView::get_itemsSource()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "get_itemsSource",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IList*, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::set_itemsSource(::System::Collections::IList*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "set_itemsSource",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::BaseVerticalCollectionView::get_sourceIncludesArraySize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "get_sourceIncludesArraySize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::System::Func_1<::UnityEngine::UIElements::VisualElement*>* UnityEngine::UIElements::BaseVerticalCollectionView::get_makeItem()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "get_makeItem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Func_1<::UnityEngine::UIElements::VisualElement*>*, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::set_makeItem(::System::Func_1<::UnityEngine::UIElements::VisualElement*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "set_makeItem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<::UnityEngine::UIElements::VisualElement*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::System::Action_2<::UnityEngine::UIElements::VisualElement*,int32_t>* UnityEngine::UIElements::BaseVerticalCollectionView::get_bindItem()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "get_bindItem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Action_2<::UnityEngine::UIElements::VisualElement*,int32_t>*, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::set_bindItem(::System::Action_2<::UnityEngine::UIElements::VisualElement*,int32_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "set_bindItem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityEngine::UIElements::VisualElement*,int32_t>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::System::Action_2<::UnityEngine::UIElements::VisualElement*,int32_t>* UnityEngine::UIElements::BaseVerticalCollectionView::get_unbindItem()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "get_unbindItem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Action_2<::UnityEngine::UIElements::VisualElement*,int32_t>*, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::set_unbindItem(::System::Action_2<::UnityEngine::UIElements::VisualElement*,int32_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "set_unbindItem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityEngine::UIElements::VisualElement*,int32_t>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::System::Action_1<::UnityEngine::UIElements::VisualElement*>* UnityEngine::UIElements::BaseVerticalCollectionView::get_destroyItem()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "get_destroyItem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Action_1<::UnityEngine::UIElements::VisualElement*>*, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::set_destroyItem(::System::Action_1<::UnityEngine::UIElements::VisualElement*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "set_destroyItem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::UIElements::VisualElement*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::BaseVerticalCollectionView::get_contentContainer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "get_contentContainer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*, false>(*this, ___internal_method);
}
inline ::UnityEngine::UIElements::SelectionType UnityEngine::UIElements::BaseVerticalCollectionView::get_selectionType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "get_selectionType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::SelectionType, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::set_selectionType(::UnityEngine::UIElements::SelectionType  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "set_selectionType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::SelectionType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline int32_t UnityEngine::UIElements::BaseVerticalCollectionView::get_selectedIndex()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "get_selectedIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::set_selectedIndex(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "set_selectedIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::System::Collections::Generic::IEnumerable_1<int32_t>* UnityEngine::UIElements::BaseVerticalCollectionView::get_selectedIndices()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "get_selectedIndices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<int32_t>*, false>(*this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::ReusableCollectionItem*>* UnityEngine::UIElements::BaseVerticalCollectionView::get_activeItems()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "get_activeItems",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::ReusableCollectionItem*>*, false>(*this, ___internal_method);
}
inline ::UnityEngine::UIElements::ScrollView* UnityEngine::UIElements::BaseVerticalCollectionView::get_scrollView()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "get_scrollView",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::ScrollView*, false>(*this, ___internal_method);
}
inline ::UnityEngine::UIElements::ListViewDragger* UnityEngine::UIElements::BaseVerticalCollectionView::get_dragger()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "get_dragger",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::ListViewDragger*, false>(*this, ___internal_method);
}
inline ::UnityEngine::UIElements::CollectionViewController* UnityEngine::UIElements::BaseVerticalCollectionView::get_viewController()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "get_viewController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::CollectionViewController*, false>(*this, ___internal_method);
}
inline ::UnityEngine::UIElements::CollectionVirtualizationController* UnityEngine::UIElements::BaseVerticalCollectionView::get_virtualizationController()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "get_virtualizationController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::CollectionVirtualizationController*, false>(*this, ___internal_method);
}
/// @param height: float_t (default: -1.0)
inline float_t UnityEngine::UIElements::BaseVerticalCollectionView::ResolveItemHeight(float_t  height)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "ResolveItemHeight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method, height);
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::set_showBorder(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "set_showBorder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::BaseVerticalCollectionView::get_reorderable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "get_reorderable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::set_reorderable(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "set_reorderable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::set_horizontalScrollingEnabled(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "set_horizontalScrollingEnabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::AlternatingRowBackground UnityEngine::UIElements::BaseVerticalCollectionView::get_showAlternatingRowBackgrounds()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "get_showAlternatingRowBackgrounds",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::AlternatingRowBackground, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::set_showAlternatingRowBackgrounds(::UnityEngine::UIElements::AlternatingRowBackground  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "set_showAlternatingRowBackgrounds",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::AlternatingRowBackground>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::CollectionVirtualizationMethod UnityEngine::UIElements::BaseVerticalCollectionView::get_virtualizationMethod()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "get_virtualizationMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::CollectionVirtualizationMethod, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::set_virtualizationMethod(::UnityEngine::UIElements::CollectionVirtualizationMethod  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "set_virtualizationMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::CollectionVirtualizationMethod>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline float_t UnityEngine::UIElements::BaseVerticalCollectionView::get_fixedItemHeight()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "get_fixedItemHeight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::set_fixedItemHeight(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "set_fixedItemHeight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline float_t UnityEngine::UIElements::BaseVerticalCollectionView::get_lastHeight()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "get_lastHeight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::CreateVirtualizationController()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "CreateVirtualizationController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::UnityEngine::UIElements::CollectionVirtualizationController* UnityEngine::UIElements::BaseVerticalCollectionView::GetOrCreateVirtualizationController()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "GetOrCreateVirtualizationController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::CollectionVirtualizationController*, false>(*this, ___internal_method);
}
template<typename T>
inline void UnityEngine::UIElements::BaseVerticalCollectionView::CreateVirtualizationController()  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                        "CreateVirtualizationController",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::UnityEngine::UIElements::CollectionViewController* UnityEngine::UIElements::BaseVerticalCollectionView::GetOrCreateViewController()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "GetOrCreateViewController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::CollectionViewController*, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::CreateViewController()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "CreateViewController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::SetViewController(::UnityEngine::UIElements::CollectionViewController*  controller)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "SetViewController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::CollectionViewController*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, controller);
}
inline ::UnityEngine::UIElements::ListViewDragger* UnityEngine::UIElements::BaseVerticalCollectionView::CreateDragger()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "CreateDragger",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::ListViewDragger*, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::InitializeDragAndDropController()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "InitializeDragAndDropController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::UnityEngine::UIElements::ICollectionDragAndDropController* UnityEngine::UIElements::BaseVerticalCollectionView::CreateDragAndDropController()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "CreateDragAndDropController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::ICollectionDragAndDropController*, false>(*this, ___internal_method);
}
inline ::UnityEngine::UIElements::BaseVerticalCollectionView* UnityEngine::UIElements::BaseVerticalCollectionView::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::BaseVerticalCollectionView*>());
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool UnityEngine::UIElements::BaseVerticalCollectionView::HasValidDataAndBindings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "HasValidDataAndBindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::OnItemIndexChanged(int32_t  srcIndex, int32_t  dstIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "OnItemIndexChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, srcIndex, dstIndex);
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::OnItemsSourceChanged()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "OnItemsSourceChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::RefreshItems()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "RefreshItems",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::Rebuild()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "Rebuild",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::RefreshSelection()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "RefreshSelection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::PostRefresh()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "PostRefresh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::ScrollToItem(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "ScrollToItem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, index);
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::OnScroll(::UnityEngine::Vector2  offset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "OnScroll",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, offset);
}
/// @param layoutPass: int32_t (default: static_cast<int32_t>(0xffffffff))
inline void UnityEngine::UIElements::BaseVerticalCollectionView::Resize(::UnityEngine::Vector2  size, int32_t  layoutPass)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "Resize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, size, layoutPass);
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::OnAttachToPanel(::UnityEngine::UIElements::AttachToPanelEvent*  evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "OnAttachToPanel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::AttachToPanelEvent*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::OnDetachFromPanel(::UnityEngine::UIElements::DetachFromPanelEvent*  evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "OnDetachFromPanel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::DetachFromPanelEvent*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, evt);
}
inline bool UnityEngine::UIElements::BaseVerticalCollectionView::Apply(::UnityEngine::UIElements::KeyboardNavigationOperation  op, bool  shiftKey)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "Apply",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::KeyboardNavigationOperation>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, op, shiftKey);
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::Apply(::UnityEngine::UIElements::KeyboardNavigationOperation  op, ::UnityEngine::UIElements::EventBase*  sourceEvent)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "Apply",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::KeyboardNavigationOperation>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, op, sourceEvent);
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::OnPointerMove(::UnityEngine::UIElements::PointerMoveEvent*  evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "OnPointerMove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::PointerMoveEvent*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::OnPointerDown(::UnityEngine::UIElements::PointerDownEvent*  evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "OnPointerDown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::PointerDownEvent*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::OnPointerCancel(::UnityEngine::UIElements::PointerCancelEvent*  evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "OnPointerCancel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::PointerCancelEvent*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::OnPointerUp(::UnityEngine::UIElements::PointerUpEvent*  evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "OnPointerUp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::PointerUpEvent*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::ProcessPointerDown(::UnityEngine::UIElements::IPointerEvent*  evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "ProcessPointerDown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IPointerEvent*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::ProcessPointerUp(::UnityEngine::UIElements::IPointerEvent*  evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "ProcessPointerUp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IPointerEvent*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::DoSelect(::UnityEngine::Vector2  localPosition, int32_t  clickCount, bool  actionKey, bool  shiftKey)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "DoSelect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, localPosition, clickCount, actionKey, shiftKey);
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::DoRangeSelection(int32_t  rangeSelectionFinalIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "DoRangeSelection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, rangeSelectionFinalIndex);
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::ProcessSingleClick(int32_t  clickedIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "ProcessSingleClick",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, clickedIndex);
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::SelectAll()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "SelectAll",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::AddToSelection(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "AddToSelection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, index);
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::AddToSelection(::System::Collections::Generic::IList_1<int32_t>*  indexes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "AddToSelection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<int32_t>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, indexes);
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::AddToSelectionWithoutValidation(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "AddToSelectionWithoutValidation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, index);
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::RemoveFromSelection(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "RemoveFromSelection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, index);
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::RemoveFromSelectionWithoutValidation(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "RemoveFromSelectionWithoutValidation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, index);
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::SetSelection(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "SetSelection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, index);
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::SetSelection(::System::Collections::Generic::IEnumerable_1<int32_t>*  indices)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "SetSelection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<int32_t>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, indices);
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::SetSelectionWithoutNotify(::System::Collections::Generic::IEnumerable_1<int32_t>*  indices)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "SetSelectionWithoutNotify",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<int32_t>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, indices);
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::SetSelectionInternal(::System::Collections::Generic::IEnumerable_1<int32_t>*  indices, bool  sendNotification)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "SetSelectionInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<int32_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, indices, sendNotification);
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::NotifyOfSelectionChange()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "NotifyOfSelectionChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::ClearSelection()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "ClearSelection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::ClearSelectionWithoutValidation()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "ClearSelectionWithoutValidation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::OnViewDataReady()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "OnViewDataReady",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::ExecuteDefaultAction(::UnityEngine::UIElements::EventBase*  evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "ExecuteDefaultAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::OnSizeChanged(::UnityEngine::UIElements::GeometryChangedEvent*  evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "OnSizeChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::GeometryChangedEvent*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::OnCustomStyleResolved(::UnityEngine::UIElements::CustomStyleResolvedEvent*  e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "OnCustomStyleResolved",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::CustomStyleResolvedEvent*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, e);
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::__ctor_b__143_0(float_t  v)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "<.ctor>b__143_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, v);
}
inline void UnityEngine::UIElements::BaseVerticalCollectionView::_Apply_g__HandleSelectionAndScroll_164_0(int32_t  index, ByRef<::UnityEngine::UIElements::__BaseVerticalCollectionView____c__DisplayClass164_0>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get(),
                            "<Apply>g__HandleSelectionAndScroll|164_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::__BaseVerticalCollectionView____c__DisplayClass164_0>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, index, _cordl_fixed_empty_name_whitespace);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
