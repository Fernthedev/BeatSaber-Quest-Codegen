#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__PoolWrapperFactory_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__IMemoryPool_1_def.hpp"
#include "Zenject/zzzz__IFactory_def.hpp"
#include "Zenject/zzzz__IFactory_1_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
/// @brief Convert operator to "::Zenject::IFactory_1<T>"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr  Zenject::PoolWrapperFactory_1<T>::operator ::Zenject::IFactory_1<T>*() noexcept {
return static_cast<::Zenject::IFactory_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Zenject::IFactory"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr  Zenject::PoolWrapperFactory_1<T>::operator ::Zenject::IFactory*() noexcept {
return static_cast<::Zenject::IFactory*>(static_cast<void*>(this));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void Zenject::PoolWrapperFactory_1<T>::__set__pool(::Zenject::IMemoryPool_1<T>*  value)  {
::cordl_internals::setInstanceField<::Zenject::IMemoryPool_1<T>*, 0x10>(this, std::forward<::Zenject::IMemoryPool_1<T>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::Zenject::IMemoryPool_1<T>* Zenject::PoolWrapperFactory_1<T>::__get__pool()  {
return ::cordl_internals::getInstanceField<::Zenject::IMemoryPool_1<T>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::Zenject::IMemoryPool_1<T>*> Zenject::PoolWrapperFactory_1<T>::__get__pool() const {
return ::cordl_internals::getInstanceField<::Zenject::IMemoryPool_1<T>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::Zenject::PoolWrapperFactory_1<T>* Zenject::PoolWrapperFactory_1<T>::New_ctor(::Zenject::IMemoryPool_1<T>*  pool)  {
return THROW_UNLESS(::il2cpp_utils::New<::Zenject::PoolWrapperFactory_1<T>*>(pool));
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void Zenject::PoolWrapperFactory_1<T>::_ctor(::Zenject::IMemoryPool_1<T>*  pool)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PoolWrapperFactory_1<T>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::IMemoryPool_1<T>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, pool);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline T Zenject::PoolWrapperFactory_1<T>::Create()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PoolWrapperFactory_1<T>*>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Object* Zenject::PoolWrapperFactory_1<T>::__zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PoolWrapperFactory_1<T>*>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::Zenject::InjectTypeInfo* Zenject::PoolWrapperFactory_1<T>::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PoolWrapperFactory_1<T>*>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
