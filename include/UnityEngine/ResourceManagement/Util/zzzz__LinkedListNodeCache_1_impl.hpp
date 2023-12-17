#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__LinkedListNodeCache_1_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedListNode_1_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedList_1_def.hpp"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1<T>::__set_m_NodesCreated(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t& UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1<T>::__get_m_NodesCreated()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t const& UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1<T>::__get_m_NodesCreated() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1<T>::__set_m_NodeCache(::System::Collections::Generic::LinkedList_1<T>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::LinkedList_1<T>*, 0x18>(this, std::forward<::System::Collections::Generic::LinkedList_1<T>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Collections::Generic::LinkedList_1<T>* UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1<T>::__get_m_NodeCache()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::LinkedList_1<T>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::LinkedList_1<T>*> UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1<T>::__get_m_NodeCache() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::LinkedList_1<T>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Collections::Generic::LinkedListNode_1<T>* UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1<T>::Acquire(T  val)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1<T>*>::get(),
                            "Acquire",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::LinkedListNode_1<T>*, false>(*this, ___internal_method, val);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1<T>::Release(::System::Collections::Generic::LinkedListNode_1<T>*  node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1<T>*>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::LinkedListNode_1<T>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, node);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline int32_t UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1<T>::get_CreatedNodeCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1<T>*>::get(),
                            "get_CreatedNodeCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline int32_t UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1<T>::get_CachedNodeCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1<T>*>::get(),
                            "get_CachedNodeCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1<T>* UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1<T>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1<T>*>());
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1<T>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
