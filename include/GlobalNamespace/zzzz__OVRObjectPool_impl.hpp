#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__OVRObjectPool_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRObjectPool_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_def.hpp"
template<typename T>
inline T GlobalNamespace::OVRObjectPool::Get()  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRObjectPool*>::get(),
                        "Get",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method);
}
template<typename T>
inline ::System::Collections::Generic::List_1<T>* GlobalNamespace::OVRObjectPool::List()  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRObjectPool*>::get(),
                        "List",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<T>*, false>(nullptr, ___internal_method);
}
template<typename TKey,typename TValue>
inline ::System::Collections::Generic::Dictionary_2<TKey,TValue>* GlobalNamespace::OVRObjectPool::Dictionary()  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRObjectPool*>::get(),
                        "Dictionary",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()},
                        ::std::vector<const Il2CppType*>{}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<TKey,TValue>*, false>(nullptr, ___internal_method);
}
template<typename T>
inline ::System::Collections::Generic::HashSet_1<T>* GlobalNamespace::OVRObjectPool::HashSet()  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRObjectPool*>::get(),
                        "HashSet",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::HashSet_1<T>*, false>(nullptr, ___internal_method);
}
template<typename T>
inline ::System::Collections::Generic::Stack_1<T>* GlobalNamespace::OVRObjectPool::Stack()  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRObjectPool*>::get(),
                        "Stack",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Stack_1<T>*, false>(nullptr, ___internal_method);
}
template<typename T>
inline ::System::Collections::Generic::Queue_1<T>* GlobalNamespace::OVRObjectPool::Queue()  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRObjectPool*>::get(),
                        "Queue",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Queue_1<T>*, false>(nullptr, ___internal_method);
}
template<typename T>
inline void GlobalNamespace::OVRObjectPool::Return(T  obj)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRObjectPool*>::get(),
                        "Return",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, obj);
}
template<typename T>
inline void GlobalNamespace::OVRObjectPool::Return(::System::Collections::Generic::HashSet_1<T>*  set)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRObjectPool*>::get(),
                        "Return",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::HashSet_1<T>*>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, set);
}
template<typename T>
inline void GlobalNamespace::OVRObjectPool::Return(::System::Collections::Generic::Stack_1<T>*  stack)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRObjectPool*>::get(),
                        "Return",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Stack_1<T>*>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, stack);
}
template<typename T>
inline void GlobalNamespace::OVRObjectPool::Return(::System::Collections::Generic::Queue_1<T>*  queue)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRObjectPool*>::get(),
                        "Return",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Queue_1<T>*>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, queue);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void GlobalNamespace::__OVRObjectPool__Storage_1<T>::setStaticF_HashSet(::System::Collections::Generic::HashSet_1<T>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::HashSet_1<T>*, "HashSet", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRObjectPool__Storage_1<T>*>::get>(std::forward<::System::Collections::Generic::HashSet_1<T>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Collections::Generic::HashSet_1<T>* GlobalNamespace::__OVRObjectPool__Storage_1<T>::getStaticF_HashSet()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::HashSet_1<T>*, "HashSet", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRObjectPool__Storage_1<T>*>::get>();
}
//  Writing Method size for method: ::GlobalNamespace::__OVRObjectPool__ListScope_1<::GlobalNamespace::OVRAnchor>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRObjectPool__ListScope_1<::GlobalNamespace::OVRAnchor>::*)(ByRef<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>)>(&::GlobalNamespace::__OVRObjectPool__ListScope_1<::GlobalNamespace::OVRAnchor>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRObjectPool__ListScope_1<::GlobalNamespace::OVRAnchor>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRObjectPool__ListScope_1<::GlobalNamespace::OVRAnchor>.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRObjectPool__ListScope_1<::GlobalNamespace::OVRAnchor>::*)()>(&::GlobalNamespace::__OVRObjectPool__ListScope_1<::GlobalNamespace::OVRAnchor>::Dispose)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRObjectPool__ListScope_1<::GlobalNamespace::OVRAnchor>>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::__OVRObjectPool__ListScope_1<::GlobalNamespace::OVRAnchor>::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::cordl_internals::Box(this)));
}
constexpr void GlobalNamespace::__OVRObjectPool__ListScope_1<::GlobalNamespace::OVRAnchor>::__set__list(::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* GlobalNamespace::__OVRObjectPool__ListScope_1<::GlobalNamespace::OVRAnchor>::__get__list()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*> GlobalNamespace::__OVRObjectPool__ListScope_1<::GlobalNamespace::OVRAnchor>::__get__list() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void GlobalNamespace::__OVRObjectPool__ListScope_1<::GlobalNamespace::OVRAnchor>::_ctor(ByRef<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>  list)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRObjectPool__ListScope_1<::GlobalNamespace::OVRAnchor>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, list);
}
inline void GlobalNamespace::__OVRObjectPool__ListScope_1<::GlobalNamespace::OVRAnchor>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRObjectPool__ListScope_1<::GlobalNamespace::OVRAnchor>>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_list", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*", modifiers: "", def_value: Some("csnull") }]
constexpr ::GlobalNamespace::__OVRObjectPool__ListScope_1<::GlobalNamespace::OVRAnchor>::__OVRObjectPool__ListScope_1(::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*  _list) noexcept : ::bs_hook::ValueTypeWrapper<0x8>() {this->_list = _list;
}
//  Writing Method size for method: ::GlobalNamespace::__OVRObjectPool__ListScope_1<::System::Guid>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRObjectPool__ListScope_1<::System::Guid>::*)(ByRef<::System::Collections::Generic::List_1<::System::Guid>*>)>(&::GlobalNamespace::__OVRObjectPool__ListScope_1<::System::Guid>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRObjectPool__ListScope_1<::System::Guid>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::List_1<::System::Guid>*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRObjectPool__ListScope_1<::System::Guid>.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRObjectPool__ListScope_1<::System::Guid>::*)()>(&::GlobalNamespace::__OVRObjectPool__ListScope_1<::System::Guid>::Dispose)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRObjectPool__ListScope_1<::System::Guid>>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::__OVRObjectPool__ListScope_1<::System::Guid>::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::cordl_internals::Box(this)));
}
constexpr void GlobalNamespace::__OVRObjectPool__ListScope_1<::System::Guid>::__set__list(::System::Collections::Generic::List_1<::System::Guid>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::System::Guid>*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Collections::Generic::List_1<::System::Guid>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::System::Guid>* GlobalNamespace::__OVRObjectPool__ListScope_1<::System::Guid>::__get__list()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::System::Guid>*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Guid>*> GlobalNamespace::__OVRObjectPool__ListScope_1<::System::Guid>::__get__list() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::System::Guid>*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void GlobalNamespace::__OVRObjectPool__ListScope_1<::System::Guid>::_ctor(ByRef<::System::Collections::Generic::List_1<::System::Guid>*>  list)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRObjectPool__ListScope_1<::System::Guid>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::List_1<::System::Guid>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, list);
}
inline void GlobalNamespace::__OVRObjectPool__ListScope_1<::System::Guid>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRObjectPool__ListScope_1<::System::Guid>>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_list", ty: "::System::Collections::Generic::List_1<::System::Guid>*", modifiers: "", def_value: Some("csnull") }]
constexpr ::GlobalNamespace::__OVRObjectPool__ListScope_1<::System::Guid>::__OVRObjectPool__ListScope_1(::System::Collections::Generic::List_1<::System::Guid>*  _list) noexcept : ::bs_hook::ValueTypeWrapper<0x8>() {this->_list = _list;
}
/// @brief Convert operator to "::System::IDisposable"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr  GlobalNamespace::__OVRObjectPool__ListScope_1<T>::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::cordl_internals::Box(this)));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::__OVRObjectPool__ListScope_1<T>::__set__list(::System::Collections::Generic::List_1<T>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<T>*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Collections::Generic::List_1<T>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Collections::Generic::List_1<T>* GlobalNamespace::__OVRObjectPool__ListScope_1<T>::__get__list()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<T>*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<T>*> GlobalNamespace::__OVRObjectPool__ListScope_1<T>::__get__list() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<T>*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void GlobalNamespace::__OVRObjectPool__ListScope_1<T>::_ctor(ByRef<::System::Collections::Generic::List_1<T>*>  list)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRObjectPool__ListScope_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::List_1<T>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, list);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void GlobalNamespace::__OVRObjectPool__ListScope_1<T>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRObjectPool__ListScope_1<T>>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_list", ty: "::System::Collections::Generic::List_1<T>*", modifiers: "", def_value: Some("csnull") }]
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::GlobalNamespace::__OVRObjectPool__ListScope_1<T>::__OVRObjectPool__ListScope_1(::System::Collections::Generic::List_1<T>*  _list) noexcept : ::bs_hook::ValueTypeWrapper<0x8>() {this->_list = _list;
}
/// @brief Convert operator to "::System::IDisposable"
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr  GlobalNamespace::__OVRObjectPool__DictionaryScope_2<TKey,TValue>::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::cordl_internals::Box(this)));
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void GlobalNamespace::__OVRObjectPool__DictionaryScope_2<TKey,TValue>::__set__dictionary(::System::Collections::Generic::Dictionary_2<TKey,TValue>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<TKey,TValue>*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Collections::Generic::Dictionary_2<TKey,TValue>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::System::Collections::Generic::Dictionary_2<TKey,TValue>* GlobalNamespace::__OVRObjectPool__DictionaryScope_2<TKey,TValue>::__get__dictionary()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<TKey,TValue>*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<TKey,TValue>*> GlobalNamespace::__OVRObjectPool__DictionaryScope_2<TKey,TValue>::__get__dictionary() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<TKey,TValue>*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline void GlobalNamespace::__OVRObjectPool__DictionaryScope_2<TKey,TValue>::_ctor(ByRef<::System::Collections::Generic::Dictionary_2<TKey,TValue>*>  dictionary)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRObjectPool__DictionaryScope_2<TKey,TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::Dictionary_2<TKey,TValue>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, dictionary);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline void GlobalNamespace::__OVRObjectPool__DictionaryScope_2<TKey,TValue>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRObjectPool__DictionaryScope_2<TKey,TValue>>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_dictionary", ty: "::System::Collections::Generic::Dictionary_2<TKey,TValue>*", modifiers: "", def_value: Some("csnull") }]
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::GlobalNamespace::__OVRObjectPool__DictionaryScope_2<TKey,TValue>::__OVRObjectPool__DictionaryScope_2(::System::Collections::Generic::Dictionary_2<TKey,TValue>*  _dictionary) noexcept : ::bs_hook::ValueTypeWrapper<0x8>() {this->_dictionary = _dictionary;
}
//  Writing Method size for method: ::GlobalNamespace::__OVRObjectPool__HashSetScope_1<::System::Guid>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRObjectPool__HashSetScope_1<::System::Guid>::*)(ByRef<::System::Collections::Generic::HashSet_1<::System::Guid>*>)>(&::GlobalNamespace::__OVRObjectPool__HashSetScope_1<::System::Guid>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRObjectPool__HashSetScope_1<::System::Guid>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::HashSet_1<::System::Guid>*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRObjectPool__HashSetScope_1<::System::Guid>.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRObjectPool__HashSetScope_1<::System::Guid>::*)()>(&::GlobalNamespace::__OVRObjectPool__HashSetScope_1<::System::Guid>::Dispose)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRObjectPool__HashSetScope_1<::System::Guid>>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::__OVRObjectPool__HashSetScope_1<::System::Guid>::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::cordl_internals::Box(this)));
}
constexpr void GlobalNamespace::__OVRObjectPool__HashSetScope_1<::System::Guid>::__set__set(::System::Collections::Generic::HashSet_1<::System::Guid>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::HashSet_1<::System::Guid>*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Collections::Generic::HashSet_1<::System::Guid>*>(value));
}
constexpr ::System::Collections::Generic::HashSet_1<::System::Guid>* GlobalNamespace::__OVRObjectPool__HashSetScope_1<::System::Guid>::__get__set()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::HashSet_1<::System::Guid>*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::System::Guid>*> GlobalNamespace::__OVRObjectPool__HashSetScope_1<::System::Guid>::__get__set() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::HashSet_1<::System::Guid>*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void GlobalNamespace::__OVRObjectPool__HashSetScope_1<::System::Guid>::_ctor(ByRef<::System::Collections::Generic::HashSet_1<::System::Guid>*>  set)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRObjectPool__HashSetScope_1<::System::Guid>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::HashSet_1<::System::Guid>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, set);
}
inline void GlobalNamespace::__OVRObjectPool__HashSetScope_1<::System::Guid>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRObjectPool__HashSetScope_1<::System::Guid>>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_set", ty: "::System::Collections::Generic::HashSet_1<::System::Guid>*", modifiers: "", def_value: Some("csnull") }]
constexpr ::GlobalNamespace::__OVRObjectPool__HashSetScope_1<::System::Guid>::__OVRObjectPool__HashSetScope_1(::System::Collections::Generic::HashSet_1<::System::Guid>*  _set) noexcept : ::bs_hook::ValueTypeWrapper<0x8>() {this->_set = _set;
}
/// @brief Convert operator to "::System::IDisposable"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr  GlobalNamespace::__OVRObjectPool__HashSetScope_1<T>::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::cordl_internals::Box(this)));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::__OVRObjectPool__HashSetScope_1<T>::__set__set(::System::Collections::Generic::HashSet_1<T>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::HashSet_1<T>*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Collections::Generic::HashSet_1<T>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Collections::Generic::HashSet_1<T>* GlobalNamespace::__OVRObjectPool__HashSetScope_1<T>::__get__set()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::HashSet_1<T>*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<T>*> GlobalNamespace::__OVRObjectPool__HashSetScope_1<T>::__get__set() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::HashSet_1<T>*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void GlobalNamespace::__OVRObjectPool__HashSetScope_1<T>::_ctor(ByRef<::System::Collections::Generic::HashSet_1<T>*>  set)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRObjectPool__HashSetScope_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::HashSet_1<T>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, set);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void GlobalNamespace::__OVRObjectPool__HashSetScope_1<T>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRObjectPool__HashSetScope_1<T>>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_set", ty: "::System::Collections::Generic::HashSet_1<T>*", modifiers: "", def_value: Some("csnull") }]
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::GlobalNamespace::__OVRObjectPool__HashSetScope_1<T>::__OVRObjectPool__HashSetScope_1(::System::Collections::Generic::HashSet_1<T>*  _set) noexcept : ::bs_hook::ValueTypeWrapper<0x8>() {this->_set = _set;
}
/// @brief Convert operator to "::System::IDisposable"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr  GlobalNamespace::__OVRObjectPool__StackScope_1<T>::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::cordl_internals::Box(this)));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::__OVRObjectPool__StackScope_1<T>::__set__stack(::System::Collections::Generic::Stack_1<T>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Stack_1<T>*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Collections::Generic::Stack_1<T>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Collections::Generic::Stack_1<T>* GlobalNamespace::__OVRObjectPool__StackScope_1<T>::__get__stack()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Stack_1<T>*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Stack_1<T>*> GlobalNamespace::__OVRObjectPool__StackScope_1<T>::__get__stack() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Stack_1<T>*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void GlobalNamespace::__OVRObjectPool__StackScope_1<T>::_ctor(ByRef<::System::Collections::Generic::Stack_1<T>*>  stack)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRObjectPool__StackScope_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::Stack_1<T>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, stack);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void GlobalNamespace::__OVRObjectPool__StackScope_1<T>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRObjectPool__StackScope_1<T>>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_stack", ty: "::System::Collections::Generic::Stack_1<T>*", modifiers: "", def_value: Some("csnull") }]
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::GlobalNamespace::__OVRObjectPool__StackScope_1<T>::__OVRObjectPool__StackScope_1(::System::Collections::Generic::Stack_1<T>*  _stack) noexcept : ::bs_hook::ValueTypeWrapper<0x8>() {this->_stack = _stack;
}
/// @brief Convert operator to "::System::IDisposable"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr  GlobalNamespace::__OVRObjectPool__QueueScope_1<T>::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::cordl_internals::Box(this)));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::__OVRObjectPool__QueueScope_1<T>::__set__queue(::System::Collections::Generic::Queue_1<T>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Queue_1<T>*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Collections::Generic::Queue_1<T>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Collections::Generic::Queue_1<T>* GlobalNamespace::__OVRObjectPool__QueueScope_1<T>::__get__queue()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Queue_1<T>*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Queue_1<T>*> GlobalNamespace::__OVRObjectPool__QueueScope_1<T>::__get__queue() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Queue_1<T>*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void GlobalNamespace::__OVRObjectPool__QueueScope_1<T>::_ctor(ByRef<::System::Collections::Generic::Queue_1<T>*>  queue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRObjectPool__QueueScope_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::Queue_1<T>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, queue);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void GlobalNamespace::__OVRObjectPool__QueueScope_1<T>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRObjectPool__QueueScope_1<T>>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_queue", ty: "::System::Collections::Generic::Queue_1<T>*", modifiers: "", def_value: Some("csnull") }]
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::GlobalNamespace::__OVRObjectPool__QueueScope_1<T>::__OVRObjectPool__QueueScope_1(::System::Collections::Generic::Queue_1<T>*  _queue) noexcept : ::bs_hook::ValueTypeWrapper<0x8>() {this->_queue = _queue;
}
/// @brief Convert operator to "::System::IDisposable"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr  GlobalNamespace::__OVRObjectPool__ItemScope_1<T>::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::cordl_internals::Box(this)));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::__OVRObjectPool__ItemScope_1<T>::__set__item(T  value)  {
::cordl_internals::setInstanceField<T, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<T>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr T& GlobalNamespace::__OVRObjectPool__ItemScope_1<T>::__get__item()  {
return ::cordl_internals::getInstanceField<T, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr T const& GlobalNamespace::__OVRObjectPool__ItemScope_1<T>::__get__item() const {
return ::cordl_internals::getInstanceField<T, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void GlobalNamespace::__OVRObjectPool__ItemScope_1<T>::_ctor(ByRef<T>  item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRObjectPool__ItemScope_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, item);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void GlobalNamespace::__OVRObjectPool__ItemScope_1<T>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRObjectPool__ItemScope_1<T>>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_item", ty: "T", modifiers: "", def_value: Some("csnull") }]
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::GlobalNamespace::__OVRObjectPool__ItemScope_1<T>::__OVRObjectPool__ItemScope_1(T  _item) noexcept : ::bs_hook::ValueTypeWrapper<0x8>() {this->_item = _item;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
