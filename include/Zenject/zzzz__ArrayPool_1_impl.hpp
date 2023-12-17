#pragma once
#include "Zenject/zzzz__StaticMemoryPoolBaseBase_1_impl.hpp"
#include "Zenject/zzzz__ArrayPool_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void Zenject::ArrayPool_1<T>::__set__length(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x24>(this, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t& Zenject::ArrayPool_1<T>::__get__length()  {
return ::cordl_internals::getInstanceField<int32_t, 0x24>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t const& Zenject::ArrayPool_1<T>::__get__length() const {
return ::cordl_internals::getInstanceField<int32_t, 0x24>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void Zenject::ArrayPool_1<T>::setStaticF__pools(::System::Collections::Generic::Dictionary_2<int32_t,::Zenject::ArrayPool_1<T>*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::Zenject::ArrayPool_1<T>*>*, "_pools", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ArrayPool_1<T>*>::get>(std::forward<::System::Collections::Generic::Dictionary_2<int32_t,::Zenject::ArrayPool_1<T>*>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Collections::Generic::Dictionary_2<int32_t,::Zenject::ArrayPool_1<T>*>* Zenject::ArrayPool_1<T>::getStaticF__pools()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::Zenject::ArrayPool_1<T>*>*, "_pools", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ArrayPool_1<T>*>::get>();
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::Zenject::ArrayPool_1<T>* Zenject::ArrayPool_1<T>::New_ctor(int32_t  length)  {
return THROW_UNLESS(::il2cpp_utils::New<::Zenject::ArrayPool_1<T>*>(length));
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void Zenject::ArrayPool_1<T>::_ctor(int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ArrayPool_1<T>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, length);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void Zenject::ArrayPool_1<T>::OnDespawned(::ArrayW<T,::Array<T>*>  arr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ArrayPool_1<T>*>::get(),
                            "OnDespawned",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T,::Array<T>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, arr);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::ArrayW<T,::Array<T>*> Zenject::ArrayPool_1<T>::Spawn()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ArrayPool_1<T>*>::get(),
                            "Spawn",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T,::Array<T>*>, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::ArrayW<T,::Array<T>*> Zenject::ArrayPool_1<T>::Alloc()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ArrayPool_1<T>*>::get(),
                            "Alloc",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T,::Array<T>*>, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::Zenject::ArrayPool_1<T>* Zenject::ArrayPool_1<T>::GetPool(int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ArrayPool_1<T>*>::get(),
                            "GetPool",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Zenject::ArrayPool_1<T>*, false>(nullptr, ___internal_method, length);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
