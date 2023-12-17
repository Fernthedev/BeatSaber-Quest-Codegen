#pragma once
#include "GlobalNamespace/zzzz__ISortedListItemProcessor_1_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedListNode_1_def.hpp"
template<typename T>
inline void GlobalNamespace::ISortedListItemProcessor_1<T>::ProcessInsertedData(::System::Collections::Generic::LinkedListNode_1<T>*  insertedNode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ISortedListItemProcessor_1<T>*>::get(),
                            "ProcessInsertedData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::LinkedListNode_1<T>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, insertedNode);
}
template<typename T>
inline void GlobalNamespace::ISortedListItemProcessor_1<T>::ProcessBeforeDeleteData(::System::Collections::Generic::LinkedListNode_1<T>*  nodeToDelete)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ISortedListItemProcessor_1<T>*>::get(),
                            "ProcessBeforeDeleteData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::LinkedListNode_1<T>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, nodeToDelete);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
