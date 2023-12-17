#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__AsyncCache_2_def.hpp"
#include "System/Collections/Concurrent/zzzz__ConcurrentDictionary_2_def.hpp"
#include "GlobalNamespace/zzzz__AsyncCache_2_def.hpp"
#include "System/zzzz__Lazy_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void GlobalNamespace::__AsyncCache_2____c__DisplayClass4_0<TKey,TValue>::__set_toAdd(TKey  value)  {
::cordl_internals::setInstanceField<TKey, 0x10>(this, std::forward<TKey>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr TKey& GlobalNamespace::__AsyncCache_2____c__DisplayClass4_0<TKey,TValue>::__get_toAdd()  {
return ::cordl_internals::getInstanceField<TKey, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr TKey const& GlobalNamespace::__AsyncCache_2____c__DisplayClass4_0<TKey,TValue>::__get_toAdd() const {
return ::cordl_internals::getInstanceField<TKey, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void GlobalNamespace::__AsyncCache_2____c__DisplayClass4_0<TKey,TValue>::__set___4__this(::GlobalNamespace::AsyncCache_2<TKey,TValue>*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::AsyncCache_2<TKey,TValue>*, 0x18>(this, std::forward<::GlobalNamespace::AsyncCache_2<TKey,TValue>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::GlobalNamespace::AsyncCache_2<TKey,TValue>* GlobalNamespace::__AsyncCache_2____c__DisplayClass4_0<TKey,TValue>::__get___4__this()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::AsyncCache_2<TKey,TValue>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AsyncCache_2<TKey,TValue>*> GlobalNamespace::__AsyncCache_2____c__DisplayClass4_0<TKey,TValue>::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::AsyncCache_2<TKey,TValue>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline ::GlobalNamespace::__AsyncCache_2____c__DisplayClass4_0<TKey,TValue>* GlobalNamespace::__AsyncCache_2____c__DisplayClass4_0<TKey,TValue>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__AsyncCache_2____c__DisplayClass4_0<TKey,TValue>*>());
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline void GlobalNamespace::__AsyncCache_2____c__DisplayClass4_0<TKey,TValue>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AsyncCache_2____c__DisplayClass4_0<TKey,TValue>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline ::System::Threading::Tasks::Task_1<TValue>* GlobalNamespace::__AsyncCache_2____c__DisplayClass4_0<TKey,TValue>::_get_Item_b__1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AsyncCache_2____c__DisplayClass4_0<TKey,TValue>*>::get(),
                            "<get_Item>b__1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<TValue>*, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void GlobalNamespace::AsyncCache_2<TKey,TValue>::__set__valueFactory(::System::Func_2<TKey,::System::Threading::Tasks::Task_1<TValue>*>*  value)  {
::cordl_internals::setInstanceField<::System::Func_2<TKey,::System::Threading::Tasks::Task_1<TValue>*>*, 0x10>(this, std::forward<::System::Func_2<TKey,::System::Threading::Tasks::Task_1<TValue>*>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::System::Func_2<TKey,::System::Threading::Tasks::Task_1<TValue>*>* GlobalNamespace::AsyncCache_2<TKey,TValue>::__get__valueFactory()  {
return ::cordl_internals::getInstanceField<::System::Func_2<TKey,::System::Threading::Tasks::Task_1<TValue>*>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TKey,::System::Threading::Tasks::Task_1<TValue>*>*> GlobalNamespace::AsyncCache_2<TKey,TValue>::__get__valueFactory() const {
return ::cordl_internals::getInstanceField<::System::Func_2<TKey,::System::Threading::Tasks::Task_1<TValue>*>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void GlobalNamespace::AsyncCache_2<TKey,TValue>::__set__map(::System::Collections::Concurrent::ConcurrentDictionary_2<TKey,::System::Lazy_1<::System::Threading::Tasks::Task_1<TValue>*>*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey,::System::Lazy_1<::System::Threading::Tasks::Task_1<TValue>*>*>*, 0x18>(this, std::forward<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey,::System::Lazy_1<::System::Threading::Tasks::Task_1<TValue>*>*>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::System::Collections::Concurrent::ConcurrentDictionary_2<TKey,::System::Lazy_1<::System::Threading::Tasks::Task_1<TValue>*>*>* GlobalNamespace::AsyncCache_2<TKey,TValue>::__get__map()  {
return ::cordl_internals::getInstanceField<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey,::System::Lazy_1<::System::Threading::Tasks::Task_1<TValue>*>*>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey,::System::Lazy_1<::System::Threading::Tasks::Task_1<TValue>*>*>*> GlobalNamespace::AsyncCache_2<TKey,TValue>::__get__map() const {
return ::cordl_internals::getInstanceField<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey,::System::Lazy_1<::System::Threading::Tasks::Task_1<TValue>*>*>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline ::GlobalNamespace::AsyncCache_2<TKey,TValue>* GlobalNamespace::AsyncCache_2<TKey,TValue>::New_ctor(::System::Func_2<TKey,::System::Threading::Tasks::Task_1<TValue>*>*  valueFactory)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::AsyncCache_2<TKey,TValue>*>(valueFactory));
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline void GlobalNamespace::AsyncCache_2<TKey,TValue>::_ctor(::System::Func_2<TKey,::System::Threading::Tasks::Task_1<TValue>*>*  valueFactory)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AsyncCache_2<TKey,TValue>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TKey,::System::Threading::Tasks::Task_1<TValue>*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, valueFactory);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline ::System::Threading::Tasks::Task_1<TValue>* GlobalNamespace::AsyncCache_2<TKey,TValue>::get_Item(TKey  key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AsyncCache_2<TKey,TValue>*>::get(),
                            "get_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<TValue>*, false>(*this, ___internal_method, key);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline void GlobalNamespace::AsyncCache_2<TKey,TValue>::RemoveKey(TKey  key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AsyncCache_2<TKey,TValue>*>::get(),
                            "RemoveKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline ::System::Lazy_1<::System::Threading::Tasks::Task_1<TValue>*>* GlobalNamespace::AsyncCache_2<TKey,TValue>::_get_Item_b__4_0(TKey  toAdd)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AsyncCache_2<TKey,TValue>*>::get(),
                            "<get_Item>b__4_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Lazy_1<::System::Threading::Tasks::Task_1<TValue>*>*, false>(*this, ___internal_method, toAdd);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
