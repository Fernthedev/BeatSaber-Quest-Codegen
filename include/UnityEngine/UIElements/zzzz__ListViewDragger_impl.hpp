#pragma once
#include "UnityEngine/UIElements/zzzz__DragEventsProcessor_impl.hpp"
#include "UnityEngine/UIElements/zzzz__ListViewDragger_def.hpp"
#include "UnityEngine/UIElements/zzzz__DragVisualMode_def.hpp"
#include "UnityEngine/UIElements/zzzz__StartDragArgs_def.hpp"
#include "UnityEngine/UIElements/zzzz__ScrollView_def.hpp"
#include "UnityEngine/UIElements/zzzz__ListViewDragger_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/UIElements/zzzz__ReusableCollectionItem_def.hpp"
#include "UnityEngine/UIElements/zzzz__ListDragAndDropArgs_def.hpp"
#include "UnityEngine/UIElements/zzzz__ICollectionDragAndDropController_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseVerticalCollectionView_def.hpp"
#include "UnityEngine/UIElements/zzzz__GeometryChangedEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__DragAndDropPosition_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::__ListViewDragger__DragPosition.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::__ListViewDragger__DragPosition::*)(::UnityEngine::UIElements::__ListViewDragger__DragPosition)>(&::UnityEngine::UIElements::__ListViewDragger__DragPosition::Equals)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2e0b020;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__ListViewDragger__DragPosition>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__ListViewDragger__DragPosition>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__ListViewDragger__DragPosition.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::__ListViewDragger__DragPosition::*)(::System::Object*)>(&::UnityEngine::UIElements::__ListViewDragger__DragPosition::Equals)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2e0bbf0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__ListViewDragger__DragPosition>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__ListViewDragger__DragPosition>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__ListViewDragger__DragPosition.GetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UIElements::__ListViewDragger__DragPosition::*)()>(&::UnityEngine::UIElements::__ListViewDragger__DragPosition::GetHashCode)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2e0bc8c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__ListViewDragger__DragPosition>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__ListViewDragger__DragPosition>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::__ListViewDragger__DragPosition>"
constexpr  UnityEngine::UIElements::__ListViewDragger__DragPosition::operator ::System::IEquatable_1<::UnityEngine::UIElements::__ListViewDragger__DragPosition>*()  {
return static_cast<::System::IEquatable_1<::UnityEngine::UIElements::__ListViewDragger__DragPosition>*>(static_cast<void*>(::cordl_internals::Box(this)));
}
constexpr void UnityEngine::UIElements::__ListViewDragger__DragPosition::__set_insertAtIndex(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::UIElements::__ListViewDragger__DragPosition::__get_insertAtIndex()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::UIElements::__ListViewDragger__DragPosition::__get_insertAtIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::UIElements::__ListViewDragger__DragPosition::__set_recycledItem(::UnityEngine::UIElements::ReusableCollectionItem*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::ReusableCollectionItem*, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::UIElements::ReusableCollectionItem*>(value));
}
constexpr ::UnityEngine::UIElements::ReusableCollectionItem* UnityEngine::UIElements::__ListViewDragger__DragPosition::__get_recycledItem()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::ReusableCollectionItem*, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::ReusableCollectionItem*> UnityEngine::UIElements::__ListViewDragger__DragPosition::__get_recycledItem() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::ReusableCollectionItem*, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::UIElements::__ListViewDragger__DragPosition::__set_dragAndDropPosition(::UnityEngine::UIElements::DragAndDropPosition  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::DragAndDropPosition, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::UIElements::DragAndDropPosition>(value));
}
constexpr ::UnityEngine::UIElements::DragAndDropPosition& UnityEngine::UIElements::__ListViewDragger__DragPosition::__get_dragAndDropPosition()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::DragAndDropPosition, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::UnityEngine::UIElements::DragAndDropPosition const& UnityEngine::UIElements::__ListViewDragger__DragPosition::__get_dragAndDropPosition() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::DragAndDropPosition, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline bool UnityEngine::UIElements::__ListViewDragger__DragPosition::Equals(::UnityEngine::UIElements::__ListViewDragger__DragPosition  other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__ListViewDragger__DragPosition>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__ListViewDragger__DragPosition>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, other);
}
inline bool UnityEngine::UIElements::__ListViewDragger__DragPosition::Equals(::System::Object*  obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__ListViewDragger__DragPosition>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, obj);
}
inline int32_t UnityEngine::UIElements::__ListViewDragger__DragPosition::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__ListViewDragger__DragPosition>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "insertAtIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "recycledItem", ty: "::UnityEngine::UIElements::ReusableCollectionItem*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "dragAndDropPosition", ty: "::UnityEngine::UIElements::DragAndDropPosition", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::__ListViewDragger__DragPosition::__ListViewDragger__DragPosition(int32_t  insertAtIndex, ::UnityEngine::UIElements::ReusableCollectionItem*  recycledItem, ::UnityEngine::UIElements::DragAndDropPosition  dragAndDropPosition) noexcept : ::bs_hook::ValueTypeWrapper<0x18>() {this->insertAtIndex = insertAtIndex;
this->recycledItem = recycledItem;
this->dragAndDropPosition = dragAndDropPosition;
}
//  Writing Method size for method: ::UnityEngine::UIElements::ListViewDragger.get_targetListView
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::BaseVerticalCollectionView* (::UnityEngine::UIElements::ListViewDragger::*)()>(&::UnityEngine::UIElements::ListViewDragger::get_targetListView)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2e0998c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewDragger*>::get(),
                            "get_targetListView",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ListViewDragger.get_targetScrollView
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::ScrollView* (::UnityEngine::UIElements::ListViewDragger::*)()>(&::UnityEngine::UIElements::ListViewDragger::get_targetScrollView)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2e09a08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewDragger*>::get(),
                            "get_targetScrollView",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ListViewDragger.get_dragAndDropController
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::ICollectionDragAndDropController* (::UnityEngine::UIElements::ListViewDragger::*)()>(&::UnityEngine::UIElements::ListViewDragger::get_dragAndDropController)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e09a24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewDragger*>::get(),
                            "get_dragAndDropController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ListViewDragger.set_dragAndDropController
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ListViewDragger::*)(::UnityEngine::UIElements::ICollectionDragAndDropController*)>(&::UnityEngine::UIElements::ListViewDragger::set_dragAndDropController)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e09a2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewDragger*>::get(),
                            "set_dragAndDropController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ICollectionDragAndDropController*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ListViewDragger._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ListViewDragger::*)(::UnityEngine::UIElements::BaseVerticalCollectionView*)>(&::UnityEngine::UIElements::ListViewDragger::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2e09a34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewDragger*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ListViewDragger.CanStartDrag
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::ListViewDragger::*)(::UnityEngine::Vector3)>(&::UnityEngine::UIElements::ListViewDragger::CanStartDrag)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x2e09b74;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewDragger*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewDragger*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ListViewDragger.StartDrag
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StartDragArgs* (::UnityEngine::UIElements::ListViewDragger::*)(::UnityEngine::Vector3)>(&::UnityEngine::UIElements::ListViewDragger::StartDrag)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x2e0a148;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewDragger*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewDragger*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ListViewDragger.UpdateDrag
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::DragVisualMode (::UnityEngine::UIElements::ListViewDragger::*)(::UnityEngine::Vector3)>(&::UnityEngine::UIElements::ListViewDragger::UpdateDrag)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2e0a304;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewDragger*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewDragger*>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ListViewDragger.GetVisualMode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::DragVisualMode (::UnityEngine::UIElements::ListViewDragger::*)(::UnityEngine::Vector3, ByRef<::UnityEngine::UIElements::__ListViewDragger__DragPosition>)>(&::UnityEngine::UIElements::ListViewDragger::GetVisualMode)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x2e0a370;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewDragger*>::get(),
                            "GetVisualMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::__ListViewDragger__DragPosition>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ListViewDragger.OnDrop
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ListViewDragger::*)(::UnityEngine::Vector3)>(&::UnityEngine::UIElements::ListViewDragger::OnDrop)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x2e0ae40;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewDragger*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewDragger*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ListViewDragger.HandleDragAndScroll
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ListViewDragger::*)(::UnityEngine::Vector2)>(&::UnityEngine::UIElements::ListViewDragger::HandleDragAndScroll)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x2e0aab4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewDragger*>::get(),
                            "HandleDragAndScroll",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ListViewDragger.ApplyDragAndDropUI
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ListViewDragger::*)(::UnityEngine::UIElements::__ListViewDragger__DragPosition)>(&::UnityEngine::UIElements::ListViewDragger::ApplyDragAndDropUI)> {
  constexpr static std::size_t size = 0x5e0;
  constexpr static std::size_t addrs = 0x2e0a4d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewDragger*>::get(),
                            "ApplyDragAndDropUI",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__ListViewDragger__DragPosition>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ListViewDragger.TryGetDragPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::ListViewDragger::*)(::UnityEngine::Vector2, ByRef<::UnityEngine::UIElements::__ListViewDragger__DragPosition>)>(&::UnityEngine::UIElements::ListViewDragger::TryGetDragPosition)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x2e0b2b8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewDragger*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewDragger*>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ListViewDragger.MakeDragAndDropArgs
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::ListDragAndDropArgs (::UnityEngine::UIElements::ListViewDragger::*)(::UnityEngine::UIElements::__ListViewDragger__DragPosition)>(&::UnityEngine::UIElements::ListViewDragger::MakeDragAndDropArgs)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x2e0acf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewDragger*>::get(),
                            "MakeDragAndDropArgs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__ListViewDragger__DragPosition>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ListViewDragger.PlaceHoverBarAtElement
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ListViewDragger::*)(::UnityEngine::UIElements::VisualElement*)>(&::UnityEngine::UIElements::ListViewDragger::PlaceHoverBarAtElement)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2e0b1fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewDragger*>::get(),
                            "PlaceHoverBarAtElement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ListViewDragger.PlaceHoverBarAt
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ListViewDragger::*)(float_t)>(&::UnityEngine::UIElements::ListViewDragger::PlaceHoverBarAt)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x2e0b078;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewDragger*>::get(),
                            "PlaceHoverBarAt",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ListViewDragger.ClearDragAndDropUI
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ListViewDragger::*)()>(&::UnityEngine::UIElements::ListViewDragger::ClearDragAndDropUI)> {
  constexpr static std::size_t size = 0x410;
  constexpr static std::size_t addrs = 0x2e0b6d8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewDragger*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewDragger*>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ListViewDragger.GetRecycledItem
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::ReusableCollectionItem* (::UnityEngine::UIElements::ListViewDragger::*)(::UnityEngine::Vector3)>(&::UnityEngine::UIElements::ListViewDragger::GetRecycledItem)> {
  constexpr static std::size_t size = 0x398;
  constexpr static std::size_t addrs = 0x2e09db0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewDragger*>::get(),
                            "GetRecycledItem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ListViewDragger._ApplyDragAndDropUI_b__22_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ListViewDragger::*)(::UnityEngine::UIElements::GeometryChangedEvent*)>(&::UnityEngine::UIElements::ListViewDragger::_ApplyDragAndDropUI_b__22_0)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x2e0bae8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewDragger*>::get(),
                            "<ApplyDragAndDropUI>b__22_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::GeometryChangedEvent*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::UIElements::ListViewDragger::__set_m_LastDragPosition(::UnityEngine::UIElements::__ListViewDragger__DragPosition  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::__ListViewDragger__DragPosition, 0x38>(this, std::forward<::UnityEngine::UIElements::__ListViewDragger__DragPosition>(value));
}
constexpr ::UnityEngine::UIElements::__ListViewDragger__DragPosition& UnityEngine::UIElements::ListViewDragger::__get_m_LastDragPosition()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::__ListViewDragger__DragPosition, 0x38>(this);
}
constexpr ::UnityEngine::UIElements::__ListViewDragger__DragPosition const& UnityEngine::UIElements::ListViewDragger::__get_m_LastDragPosition() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::__ListViewDragger__DragPosition, 0x38>(this);
}
constexpr void UnityEngine::UIElements::ListViewDragger::__set_m_DragHoverBar(::UnityEngine::UIElements::VisualElement*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::VisualElement*, 0x50>(this, std::forward<::UnityEngine::UIElements::VisualElement*>(value));
}
constexpr ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::ListViewDragger::__get_m_DragHoverBar()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::VisualElement*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> UnityEngine::UIElements::ListViewDragger::__get_m_DragHoverBar() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::VisualElement*, 0x50>(this);
}
constexpr void UnityEngine::UIElements::ListViewDragger::__set__dragAndDropController_k__BackingField(::UnityEngine::UIElements::ICollectionDragAndDropController*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::ICollectionDragAndDropController*, 0x58>(this, std::forward<::UnityEngine::UIElements::ICollectionDragAndDropController*>(value));
}
constexpr ::UnityEngine::UIElements::ICollectionDragAndDropController* UnityEngine::UIElements::ListViewDragger::__get__dragAndDropController_k__BackingField()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::ICollectionDragAndDropController*, 0x58>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::ICollectionDragAndDropController*> UnityEngine::UIElements::ListViewDragger::__get__dragAndDropController_k__BackingField() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::ICollectionDragAndDropController*, 0x58>(this);
}
inline ::UnityEngine::UIElements::BaseVerticalCollectionView* UnityEngine::UIElements::ListViewDragger::get_targetListView()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewDragger*>::get(),
                            "get_targetListView",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::BaseVerticalCollectionView*, false>(*this, ___internal_method);
}
inline ::UnityEngine::UIElements::ScrollView* UnityEngine::UIElements::ListViewDragger::get_targetScrollView()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewDragger*>::get(),
                            "get_targetScrollView",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::ScrollView*, false>(*this, ___internal_method);
}
inline ::UnityEngine::UIElements::ICollectionDragAndDropController* UnityEngine::UIElements::ListViewDragger::get_dragAndDropController()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewDragger*>::get(),
                            "get_dragAndDropController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::ICollectionDragAndDropController*, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::ListViewDragger::set_dragAndDropController(::UnityEngine::UIElements::ICollectionDragAndDropController*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewDragger*>::get(),
                            "set_dragAndDropController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ICollectionDragAndDropController*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::ListViewDragger* UnityEngine::UIElements::ListViewDragger::New_ctor(::UnityEngine::UIElements::BaseVerticalCollectionView*  listView)  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::ListViewDragger*>(listView));
}
inline void UnityEngine::UIElements::ListViewDragger::_ctor(::UnityEngine::UIElements::BaseVerticalCollectionView*  listView)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewDragger*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, listView);
}
inline bool UnityEngine::UIElements::ListViewDragger::CanStartDrag(::UnityEngine::Vector3  pointerPosition)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewDragger*>::get(),
                            "CanStartDrag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, pointerPosition);
}
inline ::UnityEngine::UIElements::StartDragArgs* UnityEngine::UIElements::ListViewDragger::StartDrag(::UnityEngine::Vector3  pointerPosition)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewDragger*>::get(),
                            "StartDrag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StartDragArgs*, false>(*this, ___internal_method, pointerPosition);
}
inline ::UnityEngine::UIElements::DragVisualMode UnityEngine::UIElements::ListViewDragger::UpdateDrag(::UnityEngine::Vector3  pointerPosition)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewDragger*>::get(),
                            "UpdateDrag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::DragVisualMode, false>(*this, ___internal_method, pointerPosition);
}
inline ::UnityEngine::UIElements::DragVisualMode UnityEngine::UIElements::ListViewDragger::GetVisualMode(::UnityEngine::Vector3  pointerPosition, ByRef<::UnityEngine::UIElements::__ListViewDragger__DragPosition>  dragPosition)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewDragger*>::get(),
                            "GetVisualMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::__ListViewDragger__DragPosition>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::DragVisualMode, false>(*this, ___internal_method, pointerPosition, dragPosition);
}
inline void UnityEngine::UIElements::ListViewDragger::OnDrop(::UnityEngine::Vector3  pointerPosition)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewDragger*>::get(),
                            "OnDrop",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, pointerPosition);
}
inline void UnityEngine::UIElements::ListViewDragger::HandleDragAndScroll(::UnityEngine::Vector2  pointerPosition)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewDragger*>::get(),
                            "HandleDragAndScroll",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, pointerPosition);
}
inline void UnityEngine::UIElements::ListViewDragger::ApplyDragAndDropUI(::UnityEngine::UIElements::__ListViewDragger__DragPosition  dragPosition)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewDragger*>::get(),
                            "ApplyDragAndDropUI",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__ListViewDragger__DragPosition>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, dragPosition);
}
inline bool UnityEngine::UIElements::ListViewDragger::TryGetDragPosition(::UnityEngine::Vector2  pointerPosition, ByRef<::UnityEngine::UIElements::__ListViewDragger__DragPosition>  dragPosition)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewDragger*>::get(),
                            "TryGetDragPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::__ListViewDragger__DragPosition>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, pointerPosition, dragPosition);
}
inline ::UnityEngine::UIElements::ListDragAndDropArgs UnityEngine::UIElements::ListViewDragger::MakeDragAndDropArgs(::UnityEngine::UIElements::__ListViewDragger__DragPosition  dragPosition)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewDragger*>::get(),
                            "MakeDragAndDropArgs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__ListViewDragger__DragPosition>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::ListDragAndDropArgs, false>(*this, ___internal_method, dragPosition);
}
inline void UnityEngine::UIElements::ListViewDragger::PlaceHoverBarAtElement(::UnityEngine::UIElements::VisualElement*  element)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewDragger*>::get(),
                            "PlaceHoverBarAtElement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, element);
}
inline void UnityEngine::UIElements::ListViewDragger::PlaceHoverBarAt(float_t  top)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewDragger*>::get(),
                            "PlaceHoverBarAt",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, top);
}
inline void UnityEngine::UIElements::ListViewDragger::ClearDragAndDropUI()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewDragger*>::get(),
                            "ClearDragAndDropUI",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::UnityEngine::UIElements::ReusableCollectionItem* UnityEngine::UIElements::ListViewDragger::GetRecycledItem(::UnityEngine::Vector3  pointerPosition)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewDragger*>::get(),
                            "GetRecycledItem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::ReusableCollectionItem*, false>(*this, ___internal_method, pointerPosition);
}
inline void UnityEngine::UIElements::ListViewDragger::_ApplyDragAndDropUI_b__22_0(::UnityEngine::UIElements::GeometryChangedEvent*  e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewDragger*>::get(),
                            "<ApplyDragAndDropUI>b__22_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::GeometryChangedEvent*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, e);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
