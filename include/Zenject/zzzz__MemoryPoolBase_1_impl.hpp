#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__MemoryPoolBase_1_def.hpp"
#include "Zenject/zzzz__IMemoryPool_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Zenject/zzzz__IValidatable_def.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
#include "Zenject/zzzz__IFactory_1_def.hpp"
#include "Zenject/zzzz__MemoryPoolSettings_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
/// @brief Convert operator to "::Zenject::IValidatable"
template<::il2cpp_utils::il2cpp_reference_type TContract>
constexpr  Zenject::MemoryPoolBase_1<TContract>::operator ::Zenject::IValidatable*() noexcept {
return static_cast<::Zenject::IValidatable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Zenject::IMemoryPool"
template<::il2cpp_utils::il2cpp_reference_type TContract>
constexpr  Zenject::MemoryPoolBase_1<TContract>::operator ::Zenject::IMemoryPool*() noexcept {
return static_cast<::Zenject::IMemoryPool*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template<::il2cpp_utils::il2cpp_reference_type TContract>
constexpr  Zenject::MemoryPoolBase_1<TContract>::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
template<::il2cpp_utils::il2cpp_reference_type TContract>
constexpr void Zenject::MemoryPoolBase_1<TContract>::__set__inactiveItems(::System::Collections::Generic::Stack_1<TContract>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Stack_1<TContract>*, 0x10>(this, std::forward<::System::Collections::Generic::Stack_1<TContract>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TContract>
constexpr ::System::Collections::Generic::Stack_1<TContract>* Zenject::MemoryPoolBase_1<TContract>::__get__inactiveItems()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Stack_1<TContract>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TContract>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Stack_1<TContract>*> Zenject::MemoryPoolBase_1<TContract>::__get__inactiveItems() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Stack_1<TContract>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TContract>
constexpr void Zenject::MemoryPoolBase_1<TContract>::__set__factory(::Zenject::IFactory_1<TContract>*  value)  {
::cordl_internals::setInstanceField<::Zenject::IFactory_1<TContract>*, 0x18>(this, std::forward<::Zenject::IFactory_1<TContract>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TContract>
constexpr ::Zenject::IFactory_1<TContract>* Zenject::MemoryPoolBase_1<TContract>::__get__factory()  {
return ::cordl_internals::getInstanceField<::Zenject::IFactory_1<TContract>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TContract>
constexpr ::cordl_internals::to_const_pointer<::Zenject::IFactory_1<TContract>*> Zenject::MemoryPoolBase_1<TContract>::__get__factory() const {
return ::cordl_internals::getInstanceField<::Zenject::IFactory_1<TContract>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TContract>
constexpr void Zenject::MemoryPoolBase_1<TContract>::__set__settings(::Zenject::MemoryPoolSettings*  value)  {
::cordl_internals::setInstanceField<::Zenject::MemoryPoolSettings*, 0x20>(this, std::forward<::Zenject::MemoryPoolSettings*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TContract>
constexpr ::Zenject::MemoryPoolSettings* Zenject::MemoryPoolBase_1<TContract>::__get__settings()  {
return ::cordl_internals::getInstanceField<::Zenject::MemoryPoolSettings*, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TContract>
constexpr ::cordl_internals::to_const_pointer<::Zenject::MemoryPoolSettings*> Zenject::MemoryPoolBase_1<TContract>::__get__settings() const {
return ::cordl_internals::getInstanceField<::Zenject::MemoryPoolSettings*, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TContract>
constexpr void Zenject::MemoryPoolBase_1<TContract>::__set__container(::Zenject::DiContainer*  value)  {
::cordl_internals::setInstanceField<::Zenject::DiContainer*, 0x28>(this, std::forward<::Zenject::DiContainer*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TContract>
constexpr ::Zenject::DiContainer* Zenject::MemoryPoolBase_1<TContract>::__get__container()  {
return ::cordl_internals::getInstanceField<::Zenject::DiContainer*, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TContract>
constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> Zenject::MemoryPoolBase_1<TContract>::__get__container() const {
return ::cordl_internals::getInstanceField<::Zenject::DiContainer*, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TContract>
constexpr void Zenject::MemoryPoolBase_1<TContract>::__set__activeCount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x30>(this, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TContract>
constexpr int32_t& Zenject::MemoryPoolBase_1<TContract>::__get__activeCount()  {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TContract>
constexpr int32_t const& Zenject::MemoryPoolBase_1<TContract>::__get__activeCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TContract>
inline void Zenject::MemoryPoolBase_1<TContract>::Construct(::Zenject::IFactory_1<TContract>*  factory, ::Zenject::DiContainer*  container, ::Zenject::MemoryPoolSettings*  settings)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MemoryPoolBase_1<TContract>*>::get(),
                            "Construct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::IFactory_1<TContract>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::MemoryPoolSettings*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, factory, container, settings);
}
template<::il2cpp_utils::il2cpp_reference_type TContract>
inline ::Zenject::DiContainer* Zenject::MemoryPoolBase_1<TContract>::get_Container()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MemoryPoolBase_1<TContract>*>::get(),
                            "get_Container",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Zenject::DiContainer*, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TContract>
inline ::System::Collections::Generic::IEnumerable_1<TContract>* Zenject::MemoryPoolBase_1<TContract>::get_InactiveItems()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MemoryPoolBase_1<TContract>*>::get(),
                            "get_InactiveItems",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<TContract>*, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TContract>
inline int32_t Zenject::MemoryPoolBase_1<TContract>::get_NumTotal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MemoryPoolBase_1<TContract>*>::get(),
                            "get_NumTotal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TContract>
inline int32_t Zenject::MemoryPoolBase_1<TContract>::get_NumInactive()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MemoryPoolBase_1<TContract>*>::get(),
                            "get_NumInactive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TContract>
inline int32_t Zenject::MemoryPoolBase_1<TContract>::get_NumActive()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MemoryPoolBase_1<TContract>*>::get(),
                            "get_NumActive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TContract>
inline ::System::Type* Zenject::MemoryPoolBase_1<TContract>::get_ItemType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MemoryPoolBase_1<TContract>*>::get(),
                            "get_ItemType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TContract>
inline void Zenject::MemoryPoolBase_1<TContract>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MemoryPoolBase_1<TContract>*>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TContract>
inline void Zenject::MemoryPoolBase_1<TContract>::Zenject_IMemoryPool_Despawn(::System::Object*  item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MemoryPoolBase_1<TContract>*>::get(),
                            "Zenject.IMemoryPool.Despawn",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, item);
}
template<::il2cpp_utils::il2cpp_reference_type TContract>
inline void Zenject::MemoryPoolBase_1<TContract>::Despawn(TContract  item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MemoryPoolBase_1<TContract>*>::get(),
                            "Despawn",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TContract>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, item);
}
template<::il2cpp_utils::il2cpp_reference_type TContract>
inline TContract Zenject::MemoryPoolBase_1<TContract>::AllocNew()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MemoryPoolBase_1<TContract>*>::get(),
                            "AllocNew",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TContract, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TContract>
inline void Zenject::MemoryPoolBase_1<TContract>::Zenject_IValidatable_Validate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MemoryPoolBase_1<TContract>*>::get(),
                            "Zenject.IValidatable.Validate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TContract>
inline void Zenject::MemoryPoolBase_1<TContract>::Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MemoryPoolBase_1<TContract>*>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TContract>
inline void Zenject::MemoryPoolBase_1<TContract>::ShrinkBy(int32_t  numToRemove)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MemoryPoolBase_1<TContract>*>::get(),
                            "ShrinkBy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, numToRemove);
}
template<::il2cpp_utils::il2cpp_reference_type TContract>
inline void Zenject::MemoryPoolBase_1<TContract>::ExpandBy(int32_t  numToAdd)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MemoryPoolBase_1<TContract>*>::get(),
                            "ExpandBy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, numToAdd);
}
template<::il2cpp_utils::il2cpp_reference_type TContract>
inline TContract Zenject::MemoryPoolBase_1<TContract>::GetInternal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MemoryPoolBase_1<TContract>*>::get(),
                            "GetInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TContract, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TContract>
inline void Zenject::MemoryPoolBase_1<TContract>::Resize(int32_t  desiredPoolSize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MemoryPoolBase_1<TContract>*>::get(),
                            "Resize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, desiredPoolSize);
}
template<::il2cpp_utils::il2cpp_reference_type TContract>
inline void Zenject::MemoryPoolBase_1<TContract>::ExpandPool()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MemoryPoolBase_1<TContract>*>::get(),
                            "ExpandPool",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TContract>
inline void Zenject::MemoryPoolBase_1<TContract>::OnDespawned(TContract  item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MemoryPoolBase_1<TContract>*>::get(),
                            "OnDespawned",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TContract>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, item);
}
template<::il2cpp_utils::il2cpp_reference_type TContract>
inline void Zenject::MemoryPoolBase_1<TContract>::OnSpawned(TContract  item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MemoryPoolBase_1<TContract>*>::get(),
                            "OnSpawned",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TContract>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, item);
}
template<::il2cpp_utils::il2cpp_reference_type TContract>
inline void Zenject::MemoryPoolBase_1<TContract>::OnCreated(TContract  item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MemoryPoolBase_1<TContract>*>::get(),
                            "OnCreated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TContract>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, item);
}
template<::il2cpp_utils::il2cpp_reference_type TContract>
inline void Zenject::MemoryPoolBase_1<TContract>::OnDestroyed(TContract  item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MemoryPoolBase_1<TContract>*>::get(),
                            "OnDestroyed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TContract>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, item);
}
template<::il2cpp_utils::il2cpp_reference_type TContract>
inline ::Zenject::MemoryPoolBase_1<TContract>* Zenject::MemoryPoolBase_1<TContract>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::Zenject::MemoryPoolBase_1<TContract>*>());
}
template<::il2cpp_utils::il2cpp_reference_type TContract>
inline void Zenject::MemoryPoolBase_1<TContract>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MemoryPoolBase_1<TContract>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TContract>
inline ::System::Object* Zenject::MemoryPoolBase_1<TContract>::__zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MemoryPoolBase_1<TContract>*>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
template<::il2cpp_utils::il2cpp_reference_type TContract>
inline void Zenject::MemoryPoolBase_1<TContract>::__zenInjectMethod0(::System::Object*  P_0, ::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_1)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MemoryPoolBase_1<TContract>*>::get(),
                            "__zenInjectMethod0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, P_0, P_1);
}
template<::il2cpp_utils::il2cpp_reference_type TContract>
inline ::Zenject::InjectTypeInfo* Zenject::MemoryPoolBase_1<TContract>::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MemoryPoolBase_1<TContract>*>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
