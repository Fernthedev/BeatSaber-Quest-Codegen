#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__PoolWrapperFactory_2_def.hpp"
#include "Zenject/zzzz__IMemoryPool_2_def.hpp"
#include "Zenject/zzzz__IFactory_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "Zenject/zzzz__IFactory_def.hpp"
/// @brief Convert operator to "::Zenject::IFactory_2<TParam1,TValue>"
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr  Zenject::PoolWrapperFactory_2<TParam1,TValue>::operator ::Zenject::IFactory_2<TParam1,TValue>*() noexcept {
return static_cast<::Zenject::IFactory_2<TParam1,TValue>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Zenject::IFactory"
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr  Zenject::PoolWrapperFactory_2<TParam1,TValue>::operator ::Zenject::IFactory*() noexcept {
return static_cast<::Zenject::IFactory*>(static_cast<void*>(this));
}
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void Zenject::PoolWrapperFactory_2<TParam1,TValue>::__set__pool(::Zenject::IMemoryPool_2<TParam1,TValue>*  value)  {
::cordl_internals::setInstanceField<::Zenject::IMemoryPool_2<TParam1,TValue>*, 0x10>(this, std::forward<::Zenject::IMemoryPool_2<TParam1,TValue>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::Zenject::IMemoryPool_2<TParam1,TValue>* Zenject::PoolWrapperFactory_2<TParam1,TValue>::__get__pool()  {
return ::cordl_internals::getInstanceField<::Zenject::IMemoryPool_2<TParam1,TValue>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::cordl_internals::to_const_pointer<::Zenject::IMemoryPool_2<TParam1,TValue>*> Zenject::PoolWrapperFactory_2<TParam1,TValue>::__get__pool() const {
return ::cordl_internals::getInstanceField<::Zenject::IMemoryPool_2<TParam1,TValue>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TValue>
inline ::Zenject::PoolWrapperFactory_2<TParam1,TValue>* Zenject::PoolWrapperFactory_2<TParam1,TValue>::New_ctor(::Zenject::IMemoryPool_2<TParam1,TValue>*  pool)  {
return THROW_UNLESS(::il2cpp_utils::New<::Zenject::PoolWrapperFactory_2<TParam1,TValue>*>(pool));
}
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TValue>
inline void Zenject::PoolWrapperFactory_2<TParam1,TValue>::_ctor(::Zenject::IMemoryPool_2<TParam1,TValue>*  pool)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PoolWrapperFactory_2<TParam1,TValue>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::IMemoryPool_2<TParam1,TValue>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, pool);
}
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TValue>
inline TValue Zenject::PoolWrapperFactory_2<TParam1,TValue>::Create(TParam1  arg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PoolWrapperFactory_2<TParam1,TValue>*>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam1>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(*this, ___internal_method, arg);
}
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TValue>
inline ::System::Object* Zenject::PoolWrapperFactory_2<TParam1,TValue>::__zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PoolWrapperFactory_2<TParam1,TValue>*>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TValue>
inline ::Zenject::InjectTypeInfo* Zenject::PoolWrapperFactory_2<TParam1,TValue>::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PoolWrapperFactory_2<TParam1,TValue>*>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
