#pragma once
#include "UnityEngine/UIElements/zzzz__VerticalVirtualizationController_1_impl.hpp"
#include "UnityEngine/UIElements/zzzz__DynamicHeightVirtualizationController_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__IVisualElementScheduledItem_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__ReusableCollectionItem_def.hpp"
#include "UnityEngine/UIElements/zzzz__GeometryChangedEvent_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseVerticalCollectionView_def.hpp"
#include "System/zzzz__Predicate_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
template<::il2cpp_utils::il2cpp_reference_type T>
inline void UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::setStaticF_InitialAverageHeight(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "InitialAverageHeight", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>*>::get>(std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline int32_t UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::getStaticF_InitialAverageHeight()  {
return ::cordl_internals::getStaticField<int32_t, "InitialAverageHeight", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>*>::get>();
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__set_m_ItemHeightCache(::System::Collections::Generic::Dictionary_2<int32_t,float_t>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<int32_t,float_t>*, 0x60>(this, std::forward<::System::Collections::Generic::Dictionary_2<int32_t,float_t>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,float_t>* UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__get_m_ItemHeightCache()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<int32_t,float_t>*, 0x60>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t,float_t>*> UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__get_m_ItemHeightCache() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<int32_t,float_t>*, 0x60>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__set_m_WaitingCache(::System::Collections::Generic::HashSet_1<int32_t>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::HashSet_1<int32_t>*, 0x68>(this, std::forward<::System::Collections::Generic::HashSet_1<int32_t>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Collections::Generic::HashSet_1<int32_t>* UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__get_m_WaitingCache()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::HashSet_1<int32_t>*, 0x68>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<int32_t>*> UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__get_m_WaitingCache() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::HashSet_1<int32_t>*, 0x68>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__set_m_ForcedFirstVisibleItem(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x70>(this, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t& UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__get_m_ForcedFirstVisibleItem()  {
return ::cordl_internals::getInstanceField<int32_t, 0x70>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t const& UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__get_m_ForcedFirstVisibleItem() const {
return ::cordl_internals::getInstanceField<int32_t, 0x70>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__set_m_ForcedLastVisibleItem(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x74>(this, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t& UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__get_m_ForcedLastVisibleItem()  {
return ::cordl_internals::getInstanceField<int32_t, 0x74>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t const& UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__get_m_ForcedLastVisibleItem() const {
return ::cordl_internals::getInstanceField<int32_t, 0x74>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__set_m_StickToBottom(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x78>(this, std::forward<bool>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr bool& UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__get_m_StickToBottom()  {
return ::cordl_internals::getInstanceField<bool, 0x78>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr bool const& UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__get_m_StickToBottom() const {
return ::cordl_internals::getInstanceField<bool, 0x78>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__set_m_AverageHeight(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x7c>(this, std::forward<float_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr float_t& UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__get_m_AverageHeight()  {
return ::cordl_internals::getInstanceField<float_t, 0x7c>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr float_t const& UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__get_m_AverageHeight() const {
return ::cordl_internals::getInstanceField<float_t, 0x7c>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__set_m_AccumulatedHeight(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x80>(this, std::forward<float_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr float_t& UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__get_m_AccumulatedHeight()  {
return ::cordl_internals::getInstanceField<float_t, 0x80>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr float_t const& UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__get_m_AccumulatedHeight() const {
return ::cordl_internals::getInstanceField<float_t, 0x80>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__set_m_StoredPadding(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x84>(this, std::forward<float_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr float_t& UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__get_m_StoredPadding()  {
return ::cordl_internals::getInstanceField<float_t, 0x84>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr float_t const& UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__get_m_StoredPadding() const {
return ::cordl_internals::getInstanceField<float_t, 0x84>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__set_m_FillCallback(::System::Action*  value)  {
::cordl_internals::setInstanceField<::System::Action*, 0x88>(this, std::forward<::System::Action*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Action* UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__get_m_FillCallback()  {
return ::cordl_internals::getInstanceField<::System::Action*, 0x88>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::System::Action*> UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__get_m_FillCallback() const {
return ::cordl_internals::getInstanceField<::System::Action*, 0x88>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__set_m_GeometryChangedCallback(::System::Action_1<::UnityEngine::UIElements::ReusableCollectionItem*>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<::UnityEngine::UIElements::ReusableCollectionItem*>*, 0x90>(this, std::forward<::System::Action_1<::UnityEngine::UIElements::ReusableCollectionItem*>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Action_1<::UnityEngine::UIElements::ReusableCollectionItem*>* UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__get_m_GeometryChangedCallback()  {
return ::cordl_internals::getInstanceField<::System::Action_1<::UnityEngine::UIElements::ReusableCollectionItem*>*, 0x90>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::UIElements::ReusableCollectionItem*>*> UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__get_m_GeometryChangedCallback() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::UnityEngine::UIElements::ReusableCollectionItem*>*, 0x90>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__set_m_ScheduledItem(::UnityEngine::UIElements::IVisualElementScheduledItem*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::IVisualElementScheduledItem*, 0x98>(this, std::forward<::UnityEngine::UIElements::IVisualElementScheduledItem*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::UnityEngine::UIElements::IVisualElementScheduledItem* UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__get_m_ScheduledItem()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::IVisualElementScheduledItem*, 0x98>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::IVisualElementScheduledItem*> UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__get_m_ScheduledItem() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::IVisualElementScheduledItem*, 0x98>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__set_m_IndexOutOfBoundsPredicate(::System::Predicate_1<int32_t>*  value)  {
::cordl_internals::setInstanceField<::System::Predicate_1<int32_t>*, 0xa0>(this, std::forward<::System::Predicate_1<int32_t>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Predicate_1<int32_t>* UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__get_m_IndexOutOfBoundsPredicate()  {
return ::cordl_internals::getInstanceField<::System::Predicate_1<int32_t>*, 0xa0>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::System::Predicate_1<int32_t>*> UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__get_m_IndexOutOfBoundsPredicate() const {
return ::cordl_internals::getInstanceField<::System::Predicate_1<int32_t>*, 0xa0>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>* UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::New_ctor(::UnityEngine::UIElements::BaseVerticalCollectionView*  collectionView)  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>*>(collectionView));
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::_ctor(::UnityEngine::UIElements::BaseVerticalCollectionView*  collectionView)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, collectionView);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::Refresh(bool  rebuild)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>*>::get(),
                            "Refresh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, rebuild);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::ScrollToItem(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>*>::get(),
                            "ScrollToItem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, index);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::Resize(::UnityEngine::Vector2  size, int32_t  layoutPass)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>*>::get(),
                            "Resize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, size, layoutPass);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::OnScroll(::UnityEngine::Vector2  scrollOffset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>*>::get(),
                            "OnScroll",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, scrollOffset);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline bool UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::NeedsFill()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>*>::get(),
                            "NeedsFill",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::Fill()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>*>::get(),
                            "Fill",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline int32_t UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::GetIndexFromPosition(::UnityEngine::Vector2  position)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>*>::get(),
                            "GetIndexFromPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, position);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline float_t UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::GetItemHeight(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>*>::get(),
                            "GetItemHeight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method, index);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline int32_t UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::GetFirstVisibleItem(float_t  offset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>*>::get(),
                            "GetFirstVisibleItem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, offset);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::UpdateScrollViewContainer(int32_t  index, float_t  previousHeight, float_t  newHeight)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>*>::get(),
                            "UpdateScrollViewContainer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, index, previousHeight, newHeight);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::ApplyScrollViewUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>*>::get(),
                            "ApplyScrollViewUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::OnViewportGeometryChanged(::UnityEngine::UIElements::GeometryChangedEvent*  evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>*>::get(),
                            "OnViewportGeometryChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::GeometryChangedEvent*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, evt);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline float_t UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::GetContentHeight()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>*>::get(),
                            "GetContentHeight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline float_t UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::GetContentHeightForIndex(int32_t  lastIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>*>::get(),
                            "GetContentHeightForIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method, lastIndex);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::RegisterItemHeight(int32_t  index, float_t  height)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>*>::get(),
                            "RegisterItemHeight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, index, height);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::UnregisterItemHeight(int32_t  index, float_t  height)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>*>::get(),
                            "UnregisterItemHeight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, index, height);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::OnRecycledItemGeometryChanged(::UnityEngine::UIElements::ReusableCollectionItem*  item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>*>::get(),
                            "OnRecycledItemGeometryChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ReusableCollectionItem*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, item);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline T UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::GetOrMakeItem()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>*>::get(),
                            "GetOrMakeItem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::ReplaceActiveItem(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>*>::get(),
                            "ReplaceActiveItem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, index);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::ReleaseItem(int32_t  activeItemsIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>*>::get(),
                            "ReleaseItem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, activeItemsIndex);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline bool UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::IsIndexOutOfBounds(int32_t  i)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>*>::get(),
                            "IsIndexOutOfBounds",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, i);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__ctor_b__13_0(::UnityEngine::UIElements::VisualElement*  element)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>*>::get(),
                            "<.ctor>b__13_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, element);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
