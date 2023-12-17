#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__ObjectListPool_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__ObjectPool_1_def.hpp"
template<::il2cpp_utils::il2cpp_reference_type T>
inline void UnityEngine::UIElements::ObjectListPool_1<T>::setStaticF_pool(::UnityEngine::UIElements::ObjectPool_1<::System::Collections::Generic::List_1<T>*>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::UIElements::ObjectPool_1<::System::Collections::Generic::List_1<T>*>*, "pool", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ObjectListPool_1<T>*>::get>(std::forward<::UnityEngine::UIElements::ObjectPool_1<::System::Collections::Generic::List_1<T>*>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::UnityEngine::UIElements::ObjectPool_1<::System::Collections::Generic::List_1<T>*>* UnityEngine::UIElements::ObjectListPool_1<T>::getStaticF_pool()  {
return ::cordl_internals::getStaticField<::UnityEngine::UIElements::ObjectPool_1<::System::Collections::Generic::List_1<T>*>*, "pool", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ObjectListPool_1<T>*>::get>();
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Collections::Generic::List_1<T>* UnityEngine::UIElements::ObjectListPool_1<T>::Get()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ObjectListPool_1<T>*>::get(),
                            "Get",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<T>*, false>(nullptr, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void UnityEngine::UIElements::ObjectListPool_1<T>::Release(::System::Collections::Generic::List_1<T>*  elements)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ObjectListPool_1<T>*>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<T>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, elements);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
