#pragma once
#include "Zenject/zzzz__PoolableMemoryPoolProviderBase_1_impl.hpp"
#include "Zenject/zzzz__PoolableMemoryPoolProvider_8_def.hpp"
#include "Zenject/zzzz__IValidatable_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__InjectContext_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "Zenject/zzzz__TypeValuePair_def.hpp"
/// @brief Convert operator to "::Zenject::IValidatable"
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TParam2,::il2cpp_utils::il2cpp_reference_type TParam3,::il2cpp_utils::il2cpp_reference_type TParam4,::il2cpp_utils::il2cpp_reference_type TParam5,::il2cpp_utils::il2cpp_reference_type TParam6,::il2cpp_utils::il2cpp_reference_type TContract,::il2cpp_utils::il2cpp_reference_type TMemoryPool>
constexpr  Zenject::PoolableMemoryPoolProvider_8<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TContract,TMemoryPool>::operator ::Zenject::IValidatable*() noexcept {
return static_cast<::Zenject::IValidatable*>(static_cast<void*>(this));
}
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TParam2,::il2cpp_utils::il2cpp_reference_type TParam3,::il2cpp_utils::il2cpp_reference_type TParam4,::il2cpp_utils::il2cpp_reference_type TParam5,::il2cpp_utils::il2cpp_reference_type TParam6,::il2cpp_utils::il2cpp_reference_type TContract,::il2cpp_utils::il2cpp_reference_type TMemoryPool>
constexpr void Zenject::PoolableMemoryPoolProvider_8<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TContract,TMemoryPool>::__set__pool(TMemoryPool  value)  {
::cordl_internals::setInstanceField<TMemoryPool, 0x28>(this, std::forward<TMemoryPool>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TParam2,::il2cpp_utils::il2cpp_reference_type TParam3,::il2cpp_utils::il2cpp_reference_type TParam4,::il2cpp_utils::il2cpp_reference_type TParam5,::il2cpp_utils::il2cpp_reference_type TParam6,::il2cpp_utils::il2cpp_reference_type TContract,::il2cpp_utils::il2cpp_reference_type TMemoryPool>
constexpr TMemoryPool& Zenject::PoolableMemoryPoolProvider_8<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TContract,TMemoryPool>::__get__pool()  {
return ::cordl_internals::getInstanceField<TMemoryPool, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TParam2,::il2cpp_utils::il2cpp_reference_type TParam3,::il2cpp_utils::il2cpp_reference_type TParam4,::il2cpp_utils::il2cpp_reference_type TParam5,::il2cpp_utils::il2cpp_reference_type TParam6,::il2cpp_utils::il2cpp_reference_type TContract,::il2cpp_utils::il2cpp_reference_type TMemoryPool>
constexpr TMemoryPool const& Zenject::PoolableMemoryPoolProvider_8<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TContract,TMemoryPool>::__get__pool() const {
return ::cordl_internals::getInstanceField<TMemoryPool, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TParam2,::il2cpp_utils::il2cpp_reference_type TParam3,::il2cpp_utils::il2cpp_reference_type TParam4,::il2cpp_utils::il2cpp_reference_type TParam5,::il2cpp_utils::il2cpp_reference_type TParam6,::il2cpp_utils::il2cpp_reference_type TContract,::il2cpp_utils::il2cpp_reference_type TMemoryPool>
inline ::Zenject::PoolableMemoryPoolProvider_8<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TContract,TMemoryPool>* Zenject::PoolableMemoryPoolProvider_8<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TContract,TMemoryPool>::New_ctor(::Zenject::DiContainer*  container, ::System::Guid  poolId)  {
return THROW_UNLESS(::il2cpp_utils::New<::Zenject::PoolableMemoryPoolProvider_8<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TContract,TMemoryPool>*>(container, poolId));
}
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TParam2,::il2cpp_utils::il2cpp_reference_type TParam3,::il2cpp_utils::il2cpp_reference_type TParam4,::il2cpp_utils::il2cpp_reference_type TParam5,::il2cpp_utils::il2cpp_reference_type TParam6,::il2cpp_utils::il2cpp_reference_type TContract,::il2cpp_utils::il2cpp_reference_type TMemoryPool>
inline void Zenject::PoolableMemoryPoolProvider_8<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TContract,TMemoryPool>::_ctor(::Zenject::DiContainer*  container, ::System::Guid  poolId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PoolableMemoryPoolProvider_8<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TContract,TMemoryPool>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, container, poolId);
}
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TParam2,::il2cpp_utils::il2cpp_reference_type TParam3,::il2cpp_utils::il2cpp_reference_type TParam4,::il2cpp_utils::il2cpp_reference_type TParam5,::il2cpp_utils::il2cpp_reference_type TParam6,::il2cpp_utils::il2cpp_reference_type TContract,::il2cpp_utils::il2cpp_reference_type TMemoryPool>
inline void Zenject::PoolableMemoryPoolProvider_8<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TContract,TMemoryPool>::Validate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PoolableMemoryPoolProvider_8<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TContract,TMemoryPool>*>::get(),
                            "Validate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TParam2,::il2cpp_utils::il2cpp_reference_type TParam3,::il2cpp_utils::il2cpp_reference_type TParam4,::il2cpp_utils::il2cpp_reference_type TParam5,::il2cpp_utils::il2cpp_reference_type TParam6,::il2cpp_utils::il2cpp_reference_type TContract,::il2cpp_utils::il2cpp_reference_type TMemoryPool>
inline void Zenject::PoolableMemoryPoolProvider_8<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TContract,TMemoryPool>::GetAllInstancesWithInjectSplit(::Zenject::InjectContext*  context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*  args, ByRef<::System::Action*>  injectAction, ::System::Collections::Generic::List_1<::System::Object*>*  buffer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PoolableMemoryPoolProvider_8<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TContract,TMemoryPool>*>::get(),
                            "GetAllInstancesWithInjectSplit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Action*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Object*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, context, args, injectAction, buffer);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
