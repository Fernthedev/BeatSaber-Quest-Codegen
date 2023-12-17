#pragma once
#include "UnityEngine/UIElements/zzzz__EventBase_impl.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__ObjectPool_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
template<::il2cpp_utils::il2cpp_reference_type T>
inline void UnityEngine::UIElements::EventBase_1<T>::setStaticF_s_TypeId(int64_t  value)  {
::cordl_internals::setStaticField<int64_t, "s_TypeId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase_1<T>*>::get>(std::forward<int64_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline int64_t UnityEngine::UIElements::EventBase_1<T>::getStaticF_s_TypeId()  {
return ::cordl_internals::getStaticField<int64_t, "s_TypeId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase_1<T>*>::get>();
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void UnityEngine::UIElements::EventBase_1<T>::setStaticF_s_Pool(::UnityEngine::UIElements::ObjectPool_1<T>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::UIElements::ObjectPool_1<T>*, "s_Pool", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase_1<T>*>::get>(std::forward<::UnityEngine::UIElements::ObjectPool_1<T>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::UnityEngine::UIElements::ObjectPool_1<T>* UnityEngine::UIElements::EventBase_1<T>::getStaticF_s_Pool()  {
return ::cordl_internals::getStaticField<::UnityEngine::UIElements::ObjectPool_1<T>*, "s_Pool", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase_1<T>*>::get>();
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void UnityEngine::UIElements::EventBase_1<T>::__set_m_RefCount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x78>(this, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t& UnityEngine::UIElements::EventBase_1<T>::__get_m_RefCount()  {
return ::cordl_internals::getInstanceField<int32_t, 0x78>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t const& UnityEngine::UIElements::EventBase_1<T>::__get_m_RefCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x78>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::UnityEngine::UIElements::EventBase_1<T>* UnityEngine::UIElements::EventBase_1<T>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::EventBase_1<T>*>());
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void UnityEngine::UIElements::EventBase_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase_1<T>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline int64_t UnityEngine::UIElements::EventBase_1<T>::TypeId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase_1<T>*>::get(),
                            "TypeId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(nullptr, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void UnityEngine::UIElements::EventBase_1<T>::Init()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase_1<T>*>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline T UnityEngine::UIElements::EventBase_1<T>::GetPooled()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase_1<T>*>::get(),
                            "GetPooled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline T UnityEngine::UIElements::EventBase_1<T>::GetPooled(::UnityEngine::UIElements::EventBase*  e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase_1<T>*>::get(),
                            "GetPooled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method, e);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void UnityEngine::UIElements::EventBase_1<T>::ReleasePooled(T  evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase_1<T>*>::get(),
                            "ReleasePooled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, evt);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void UnityEngine::UIElements::EventBase_1<T>::Acquire()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase_1<T>*>::get(),
                            "Acquire",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void UnityEngine::UIElements::EventBase_1<T>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase_1<T>*>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline int64_t UnityEngine::UIElements::EventBase_1<T>::get_eventTypeId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase_1<T>*>::get(),
                            "get_eventTypeId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
