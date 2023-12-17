#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__SortedList_2_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedListNode_1_def.hpp"
#include "GlobalNamespace/zzzz__ISortedList_1_def.hpp"
#include "GlobalNamespace/zzzz__ISortedListItemProcessor_1_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedList_1_def.hpp"
/// @brief Convert operator to "::GlobalNamespace::ISortedList_1<TBase>"
template<::il2cpp_utils::il2cpp_reference_type T,::il2cpp_utils::il2cpp_reference_type TBase>
constexpr  GlobalNamespace::SortedList_2<T,TBase>::operator ::GlobalNamespace::ISortedList_1<TBase>*() noexcept {
return static_cast<::GlobalNamespace::ISortedList_1<TBase>*>(static_cast<void*>(this));
}
template<::il2cpp_utils::il2cpp_reference_type T,::il2cpp_utils::il2cpp_reference_type TBase>
constexpr void GlobalNamespace::SortedList_2<T,TBase>::__set__items(::System::Collections::Generic::LinkedList_1<TBase>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::LinkedList_1<TBase>*, 0x10>(this, std::forward<::System::Collections::Generic::LinkedList_1<TBase>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T,::il2cpp_utils::il2cpp_reference_type TBase>
constexpr ::System::Collections::Generic::LinkedList_1<TBase>* GlobalNamespace::SortedList_2<T,TBase>::__get__items()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::LinkedList_1<TBase>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T,::il2cpp_utils::il2cpp_reference_type TBase>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::LinkedList_1<TBase>*> GlobalNamespace::SortedList_2<T,TBase>::__get__items() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::LinkedList_1<TBase>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T,::il2cpp_utils::il2cpp_reference_type TBase>
constexpr void GlobalNamespace::SortedList_2<T,TBase>::__set__sortedListDataProcessor(::GlobalNamespace::ISortedListItemProcessor_1<TBase>*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::ISortedListItemProcessor_1<TBase>*, 0x18>(this, std::forward<::GlobalNamespace::ISortedListItemProcessor_1<TBase>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T,::il2cpp_utils::il2cpp_reference_type TBase>
constexpr ::GlobalNamespace::ISortedListItemProcessor_1<TBase>* GlobalNamespace::SortedList_2<T,TBase>::__get__sortedListDataProcessor()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ISortedListItemProcessor_1<TBase>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T,::il2cpp_utils::il2cpp_reference_type TBase>
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ISortedListItemProcessor_1<TBase>*> GlobalNamespace::SortedList_2<T,TBase>::__get__sortedListDataProcessor() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ISortedListItemProcessor_1<TBase>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T,::il2cpp_utils::il2cpp_reference_type TBase>
constexpr void GlobalNamespace::SortedList_2<T,TBase>::__set__lastUsedNode(::System::Collections::Generic::LinkedListNode_1<TBase>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::LinkedListNode_1<TBase>*, 0x20>(this, std::forward<::System::Collections::Generic::LinkedListNode_1<TBase>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T,::il2cpp_utils::il2cpp_reference_type TBase>
constexpr ::System::Collections::Generic::LinkedListNode_1<TBase>* GlobalNamespace::SortedList_2<T,TBase>::__get__lastUsedNode()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::LinkedListNode_1<TBase>*, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T,::il2cpp_utils::il2cpp_reference_type TBase>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::LinkedListNode_1<TBase>*> GlobalNamespace::SortedList_2<T,TBase>::__get__lastUsedNode() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::LinkedListNode_1<TBase>*, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T,::il2cpp_utils::il2cpp_reference_type TBase>
inline int32_t GlobalNamespace::SortedList_2<T,TBase>::get_count()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SortedList_2<T,TBase>*>::get(),
                            "get_count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T,::il2cpp_utils::il2cpp_reference_type TBase>
inline ::System::Collections::Generic::LinkedList_1<TBase>* GlobalNamespace::SortedList_2<T,TBase>::get_items()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SortedList_2<T,TBase>*>::get(),
                            "get_items",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::LinkedList_1<TBase>*, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T,::il2cpp_utils::il2cpp_reference_type TBase>
inline ::GlobalNamespace::SortedList_2<T,TBase>* GlobalNamespace::SortedList_2<T,TBase>::New_ctor(::GlobalNamespace::ISortedListItemProcessor_1<TBase>*  sortedListDataProcessor)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::SortedList_2<T,TBase>*>(sortedListDataProcessor));
}
template<::il2cpp_utils::il2cpp_reference_type T,::il2cpp_utils::il2cpp_reference_type TBase>
inline void GlobalNamespace::SortedList_2<T,TBase>::_ctor(::GlobalNamespace::ISortedListItemProcessor_1<TBase>*  sortedListDataProcessor)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SortedList_2<T,TBase>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ISortedListItemProcessor_1<TBase>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, sortedListDataProcessor);
}
template<::il2cpp_utils::il2cpp_reference_type T,::il2cpp_utils::il2cpp_reference_type TBase>
inline ::System::Collections::Generic::LinkedListNode_1<TBase>* GlobalNamespace::SortedList_2<T,TBase>::Insert(TBase  newItem)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SortedList_2<T,TBase>*>::get(),
                            "Insert",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TBase>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::LinkedListNode_1<TBase>*, false>(*this, ___internal_method, newItem);
}
template<::il2cpp_utils::il2cpp_reference_type T,::il2cpp_utils::il2cpp_reference_type TBase>
inline void GlobalNamespace::SortedList_2<T,TBase>::Insert(::System::Collections::Generic::LinkedListNode_1<TBase>*  newNode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SortedList_2<T,TBase>*>::get(),
                            "Insert",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::LinkedListNode_1<TBase>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, newNode);
}
template<::il2cpp_utils::il2cpp_reference_type T,::il2cpp_utils::il2cpp_reference_type TBase>
inline void GlobalNamespace::SortedList_2<T,TBase>::Remove(::System::Collections::Generic::LinkedListNode_1<TBase>*  node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SortedList_2<T,TBase>*>::get(),
                            "Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::LinkedListNode_1<TBase>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, node);
}
template<::il2cpp_utils::il2cpp_reference_type T,::il2cpp_utils::il2cpp_reference_type TBase>
inline void GlobalNamespace::SortedList_2<T,TBase>::TouchLastUsedNode(::System::Collections::Generic::LinkedListNode_1<TBase>*  node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SortedList_2<T,TBase>*>::get(),
                            "TouchLastUsedNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::LinkedListNode_1<TBase>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, node);
}
template<::il2cpp_utils::il2cpp_reference_type T,::il2cpp_utils::il2cpp_reference_type TBase>
inline void GlobalNamespace::SortedList_2<T,TBase>::InsertInternal(::System::Collections::Generic::LinkedListNode_1<TBase>*  newItem)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SortedList_2<T,TBase>*>::get(),
                            "InsertInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::LinkedListNode_1<TBase>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, newItem);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
