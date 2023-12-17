#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__DelegateList_1_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedList_1_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedListNode_1_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__SceneInstance_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/ResourceManagement/Diagnostics/zzzz__DiagnosticEvent_def.hpp"
template<::il2cpp_utils::il2cpp_reference_type TObject_cordlgen_0>
constexpr void GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_0>>::__set_m_acquireFunc(::System::Func_2<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_0>>*,::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_0>>*>*>*  value)  {
::cordl_internals::setInstanceField<::System::Func_2<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_0>>*,::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_0>>*>*>*, 0x10>(this, std::forward<::System::Func_2<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_0>>*,::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_0>>*>*>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TObject_cordlgen_0>
constexpr ::System::Func_2<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_0>>*,::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_0>>*>*>* GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_0>>::__get_m_acquireFunc()  {
return ::cordl_internals::getInstanceField<::System::Func_2<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_0>>*,::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_0>>*>*>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TObject_cordlgen_0>
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_0>>*,::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_0>>*>*>*> GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_0>>::__get_m_acquireFunc() const {
return ::cordl_internals::getInstanceField<::System::Func_2<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_0>>*,::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_0>>*>*>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TObject_cordlgen_0>
constexpr void GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_0>>::__set_m_releaseFunc(::System::Action_1<::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_0>>*>*>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_0>>*>*>*, 0x18>(this, std::forward<::System::Action_1<::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_0>>*>*>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TObject_cordlgen_0>
constexpr ::System::Action_1<::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_0>>*>*>* GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_0>>::__get_m_releaseFunc()  {
return ::cordl_internals::getInstanceField<::System::Action_1<::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_0>>*>*>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TObject_cordlgen_0>
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_0>>*>*>*> GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_0>>::__get_m_releaseFunc() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_0>>*>*>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TObject_cordlgen_0>
constexpr void GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_0>>::__set_m_callbacks(::System::Collections::Generic::LinkedList_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_0>>*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::LinkedList_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_0>>*>*, 0x20>(this, std::forward<::System::Collections::Generic::LinkedList_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_0>>*>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TObject_cordlgen_0>
constexpr ::System::Collections::Generic::LinkedList_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_0>>*>* GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_0>>::__get_m_callbacks()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::LinkedList_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_0>>*>*, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TObject_cordlgen_0>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::LinkedList_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_0>>*>*> GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_0>>::__get_m_callbacks() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::LinkedList_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_0>>*>*, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TObject_cordlgen_0>
constexpr void GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_0>>::__set_m_invoking(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x28>(this, std::forward<bool>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TObject_cordlgen_0>
constexpr bool& GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_0>>::__get_m_invoking()  {
return ::cordl_internals::getInstanceField<bool, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TObject_cordlgen_0>
constexpr bool const& GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_0>>::__get_m_invoking() const {
return ::cordl_internals::getInstanceField<bool, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TObject_cordlgen_0>
inline ::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_0>>* GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_0>>::New_ctor(::System::Func_2<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_0>>*,::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_0>>*>*>*  acquireFunc, ::System::Action_1<::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_0>>*>*>*  releaseFunc)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_0>>*>(acquireFunc, releaseFunc));
}
template<::il2cpp_utils::il2cpp_reference_type TObject_cordlgen_0>
inline void GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_0>>::_ctor(::System::Func_2<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_0>>*,::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_0>>*>*>*  acquireFunc, ::System::Action_1<::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_0>>*>*>*  releaseFunc)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_0>>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_0>>*,::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_0>>*>*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_0>>*>*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, acquireFunc, releaseFunc);
}
template<::il2cpp_utils::il2cpp_reference_type TObject_cordlgen_0>
inline int32_t GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_0>>::get_Count()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_0>>*>::get(),
                            "get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TObject_cordlgen_0>
inline void GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_0>>::Add(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_0>>*  action)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_0>>*>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_0>>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, action);
}
template<::il2cpp_utils::il2cpp_reference_type TObject_cordlgen_0>
inline void GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_0>>::Remove(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_0>>*  action)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_0>>*>::get(),
                            "Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_0>>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, action);
}
template<::il2cpp_utils::il2cpp_reference_type TObject_cordlgen_0>
inline void GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_0>>::Invoke(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_0>  res)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_0>>*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_0>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, res);
}
template<::il2cpp_utils::il2cpp_reference_type TObject_cordlgen_0>
inline void GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_0>>::Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_0>>*>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TObject_cordlgen_0>
inline ::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_0>>* GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_0>>::CreateWithGlobalCache()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_0>>*>::get(),
                            "CreateWithGlobalCache",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject_cordlgen_0>>*, false>(nullptr, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>::*)(::System::Func_2<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>*,::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>*>*>*, ::System::Action_1<::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>*>*>*)>(&::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>*,::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>*>*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>*>*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>.get_Count
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>::*)()>(&::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>::get_Count)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>*>::get(),
                            "get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>.Add
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>::*)(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>*)>(&::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>::Add)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>*>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>.Remove
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>::*)(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>*)>(&::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>::Remove)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>*>::get(),
                            "Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>::*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>)>(&::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>::Invoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>.Clear
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>::*)()>(&::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>::Clear)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>*>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>.CreateWithGlobalCache
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>* (*)()>(&::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>::CreateWithGlobalCache)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>*>::get(),
                            "CreateWithGlobalCache",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>::__set_m_acquireFunc(::System::Func_2<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>*,::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>*>*>*  value)  {
::cordl_internals::setInstanceField<::System::Func_2<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>*,::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>*>*>*, 0x10>(this, std::forward<::System::Func_2<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>*,::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>*>*>*>(value));
}
constexpr ::System::Func_2<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>*,::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>*>*>* GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>::__get_m_acquireFunc()  {
return ::cordl_internals::getInstanceField<::System::Func_2<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>*,::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>*>*>*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>*,::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>*>*>*> GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>::__get_m_acquireFunc() const {
return ::cordl_internals::getInstanceField<::System::Func_2<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>*,::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>*>*>*, 0x10>(this);
}
constexpr void GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>::__set_m_releaseFunc(::System::Action_1<::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>*>*>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>*>*>*, 0x18>(this, std::forward<::System::Action_1<::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>*>*>*>(value));
}
constexpr ::System::Action_1<::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>*>*>* GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>::__get_m_releaseFunc()  {
return ::cordl_internals::getInstanceField<::System::Action_1<::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>*>*>*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>*>*>*> GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>::__get_m_releaseFunc() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>*>*>*, 0x18>(this);
}
constexpr void GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>::__set_m_callbacks(::System::Collections::Generic::LinkedList_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::LinkedList_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>*>*, 0x20>(this, std::forward<::System::Collections::Generic::LinkedList_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>*>*>(value));
}
constexpr ::System::Collections::Generic::LinkedList_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>*>* GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>::__get_m_callbacks()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::LinkedList_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>*>*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::LinkedList_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>*>*> GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>::__get_m_callbacks() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::LinkedList_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>*>*, 0x20>(this);
}
constexpr void GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>::__set_m_invoking(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x28>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>::__get_m_invoking()  {
return ::cordl_internals::getInstanceField<bool, 0x28>(this);
}
constexpr bool const& GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>::__get_m_invoking() const {
return ::cordl_internals::getInstanceField<bool, 0x28>(this);
}
inline ::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>* GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>::New_ctor(::System::Func_2<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>*,::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>*>*>*  acquireFunc, ::System::Action_1<::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>*>*>*  releaseFunc)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>*>(acquireFunc, releaseFunc));
}
inline void GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>::_ctor(::System::Func_2<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>*,::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>*>*>*  acquireFunc, ::System::Action_1<::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>*>*>*  releaseFunc)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>*,::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>*>*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>*>*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, acquireFunc, releaseFunc);
}
inline int32_t GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>::get_Count()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>*>::get(),
                            "get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline void GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>::Add(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>*  action)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>*>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, action);
}
inline void GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>::Remove(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>*  action)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>*>::get(),
                            "Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, action);
}
inline void GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>::Invoke(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>  res)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, res);
}
inline void GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>::Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>*>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>* GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>::CreateWithGlobalCache()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>*>::get(),
                            "CreateWithGlobalCache",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>*, false>(nullptr, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::*)(::System::Func_2<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>*,::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>*>*>*, ::System::Action_1<::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>*>*>*)>(&::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>*,::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>*>*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>*>*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>.get_Count
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::*)()>(&::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get_Count)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>*>::get(),
                            "get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>.Add
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::*)(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>*)>(&::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::Add)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>*>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>.Remove
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::*)(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>*)>(&::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::Remove)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>*>::get(),
                            "Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>)>(&::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::Invoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>.Clear
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::*)()>(&::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::Clear)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>*>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>.CreateWithGlobalCache
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>* (*)()>(&::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::CreateWithGlobalCache)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>*>::get(),
                            "CreateWithGlobalCache",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::__set_m_acquireFunc(::System::Func_2<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>*,::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>*>*>*  value)  {
::cordl_internals::setInstanceField<::System::Func_2<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>*,::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>*>*>*, 0x10>(this, std::forward<::System::Func_2<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>*,::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>*>*>*>(value));
}
constexpr ::System::Func_2<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>*,::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>*>*>* GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::__get_m_acquireFunc()  {
return ::cordl_internals::getInstanceField<::System::Func_2<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>*,::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>*>*>*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>*,::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>*>*>*> GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::__get_m_acquireFunc() const {
return ::cordl_internals::getInstanceField<::System::Func_2<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>*,::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>*>*>*, 0x10>(this);
}
constexpr void GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::__set_m_releaseFunc(::System::Action_1<::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>*>*>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>*>*>*, 0x18>(this, std::forward<::System::Action_1<::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>*>*>*>(value));
}
constexpr ::System::Action_1<::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>*>*>* GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::__get_m_releaseFunc()  {
return ::cordl_internals::getInstanceField<::System::Action_1<::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>*>*>*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>*>*>*> GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::__get_m_releaseFunc() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>*>*>*, 0x18>(this);
}
constexpr void GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::__set_m_callbacks(::System::Collections::Generic::LinkedList_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::LinkedList_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>*>*, 0x20>(this, std::forward<::System::Collections::Generic::LinkedList_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>*>*>(value));
}
constexpr ::System::Collections::Generic::LinkedList_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>*>* GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::__get_m_callbacks()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::LinkedList_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>*>*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::LinkedList_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>*>*> GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::__get_m_callbacks() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::LinkedList_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>*>*, 0x20>(this);
}
constexpr void GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::__set_m_invoking(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x28>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::__get_m_invoking()  {
return ::cordl_internals::getInstanceField<bool, 0x28>(this);
}
constexpr bool const& GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::__get_m_invoking() const {
return ::cordl_internals::getInstanceField<bool, 0x28>(this);
}
inline ::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>* GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::New_ctor(::System::Func_2<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>*,::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>*>*>*  acquireFunc, ::System::Action_1<::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>*>*>*  releaseFunc)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>*>(acquireFunc, releaseFunc));
}
inline void GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::_ctor(::System::Func_2<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>*,::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>*>*>*  acquireFunc, ::System::Action_1<::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>*>*>*  releaseFunc)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>*,::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>*>*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>*>*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, acquireFunc, releaseFunc);
}
inline int32_t GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get_Count()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>*>::get(),
                            "get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline void GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::Add(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>*  action)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>*>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, action);
}
inline void GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::Remove(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>*  action)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>*>::get(),
                            "Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, action);
}
inline void GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::Invoke(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>  res)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, res);
}
inline void GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>*>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>* GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::CreateWithGlobalCache()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>*>::get(),
                            "CreateWithGlobalCache",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>*, false>(nullptr, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>::*)(::System::Func_2<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>*,::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>*>*>*, ::System::Action_1<::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>*>*>*)>(&::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>*,::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>*>*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>*>*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>.get_Count
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>::*)()>(&::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>::get_Count)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>*>::get(),
                            "get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>.Add
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>::*)(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>*)>(&::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>::Add)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>*>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>.Remove
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>::*)(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>*)>(&::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>::Remove)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>*>::get(),
                            "Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>::*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>)>(&::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>::Invoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>.Clear
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>::*)()>(&::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>::Clear)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>*>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>.CreateWithGlobalCache
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>* (*)()>(&::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>::CreateWithGlobalCache)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>*>::get(),
                            "CreateWithGlobalCache",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>::__set_m_acquireFunc(::System::Func_2<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>*,::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>*>*>*  value)  {
::cordl_internals::setInstanceField<::System::Func_2<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>*,::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>*>*>*, 0x10>(this, std::forward<::System::Func_2<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>*,::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>*>*>*>(value));
}
constexpr ::System::Func_2<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>*,::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>*>*>* GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>::__get_m_acquireFunc()  {
return ::cordl_internals::getInstanceField<::System::Func_2<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>*,::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>*>*>*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>*,::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>*>*>*> GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>::__get_m_acquireFunc() const {
return ::cordl_internals::getInstanceField<::System::Func_2<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>*,::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>*>*>*, 0x10>(this);
}
constexpr void GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>::__set_m_releaseFunc(::System::Action_1<::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>*>*>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>*>*>*, 0x18>(this, std::forward<::System::Action_1<::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>*>*>*>(value));
}
constexpr ::System::Action_1<::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>*>*>* GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>::__get_m_releaseFunc()  {
return ::cordl_internals::getInstanceField<::System::Action_1<::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>*>*>*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>*>*>*> GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>::__get_m_releaseFunc() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>*>*>*, 0x18>(this);
}
constexpr void GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>::__set_m_callbacks(::System::Collections::Generic::LinkedList_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::LinkedList_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>*>*, 0x20>(this, std::forward<::System::Collections::Generic::LinkedList_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>*>*>(value));
}
constexpr ::System::Collections::Generic::LinkedList_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>*>* GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>::__get_m_callbacks()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::LinkedList_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>*>*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::LinkedList_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>*>*> GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>::__get_m_callbacks() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::LinkedList_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>*>*, 0x20>(this);
}
constexpr void GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>::__set_m_invoking(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x28>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>::__get_m_invoking()  {
return ::cordl_internals::getInstanceField<bool, 0x28>(this);
}
constexpr bool const& GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>::__get_m_invoking() const {
return ::cordl_internals::getInstanceField<bool, 0x28>(this);
}
inline ::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>* GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>::New_ctor(::System::Func_2<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>*,::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>*>*>*  acquireFunc, ::System::Action_1<::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>*>*>*  releaseFunc)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>*>(acquireFunc, releaseFunc));
}
inline void GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>::_ctor(::System::Func_2<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>*,::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>*>*>*  acquireFunc, ::System::Action_1<::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>*>*>*  releaseFunc)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>*,::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>*>*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>*>*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, acquireFunc, releaseFunc);
}
inline int32_t GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>::get_Count()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>*>::get(),
                            "get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline void GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>::Add(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>*  action)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>*>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, action);
}
inline void GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>::Remove(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>*  action)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>*>::get(),
                            "Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, action);
}
inline void GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>::Invoke(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>  res)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, res);
}
inline void GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>::Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>*>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>* GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>::CreateWithGlobalCache()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>*>::get(),
                            "CreateWithGlobalCache",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>*, false>(nullptr, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::DelegateList_1<float_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DelegateList_1<float_t>::*)(::System::Func_2<::System::Action_1<float_t>*,::System::Collections::Generic::LinkedListNode_1<::System::Action_1<float_t>*>*>*, ::System::Action_1<::System::Collections::Generic::LinkedListNode_1<::System::Action_1<float_t>*>*>*)>(&::GlobalNamespace::DelegateList_1<float_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DelegateList_1<float_t>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::System::Action_1<float_t>*,::System::Collections::Generic::LinkedListNode_1<::System::Action_1<float_t>*>*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Collections::Generic::LinkedListNode_1<::System::Action_1<float_t>*>*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DelegateList_1<float_t>.get_Count
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::DelegateList_1<float_t>::*)()>(&::GlobalNamespace::DelegateList_1<float_t>::get_Count)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DelegateList_1<float_t>*>::get(),
                            "get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DelegateList_1<float_t>.Add
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DelegateList_1<float_t>::*)(::System::Action_1<float_t>*)>(&::GlobalNamespace::DelegateList_1<float_t>::Add)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DelegateList_1<float_t>*>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<float_t>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DelegateList_1<float_t>.Remove
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DelegateList_1<float_t>::*)(::System::Action_1<float_t>*)>(&::GlobalNamespace::DelegateList_1<float_t>::Remove)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DelegateList_1<float_t>*>::get(),
                            "Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<float_t>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DelegateList_1<float_t>.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DelegateList_1<float_t>::*)(float_t)>(&::GlobalNamespace::DelegateList_1<float_t>::Invoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DelegateList_1<float_t>*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DelegateList_1<float_t>.Clear
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DelegateList_1<float_t>::*)()>(&::GlobalNamespace::DelegateList_1<float_t>::Clear)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DelegateList_1<float_t>*>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DelegateList_1<float_t>.CreateWithGlobalCache
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::DelegateList_1<float_t>* (*)()>(&::GlobalNamespace::DelegateList_1<float_t>::CreateWithGlobalCache)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DelegateList_1<float_t>*>::get(),
                            "CreateWithGlobalCache",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::DelegateList_1<float_t>::__set_m_acquireFunc(::System::Func_2<::System::Action_1<float_t>*,::System::Collections::Generic::LinkedListNode_1<::System::Action_1<float_t>*>*>*  value)  {
::cordl_internals::setInstanceField<::System::Func_2<::System::Action_1<float_t>*,::System::Collections::Generic::LinkedListNode_1<::System::Action_1<float_t>*>*>*, 0x10>(this, std::forward<::System::Func_2<::System::Action_1<float_t>*,::System::Collections::Generic::LinkedListNode_1<::System::Action_1<float_t>*>*>*>(value));
}
constexpr ::System::Func_2<::System::Action_1<float_t>*,::System::Collections::Generic::LinkedListNode_1<::System::Action_1<float_t>*>*>* GlobalNamespace::DelegateList_1<float_t>::__get_m_acquireFunc()  {
return ::cordl_internals::getInstanceField<::System::Func_2<::System::Action_1<float_t>*,::System::Collections::Generic::LinkedListNode_1<::System::Action_1<float_t>*>*>*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::System::Action_1<float_t>*,::System::Collections::Generic::LinkedListNode_1<::System::Action_1<float_t>*>*>*> GlobalNamespace::DelegateList_1<float_t>::__get_m_acquireFunc() const {
return ::cordl_internals::getInstanceField<::System::Func_2<::System::Action_1<float_t>*,::System::Collections::Generic::LinkedListNode_1<::System::Action_1<float_t>*>*>*, 0x10>(this);
}
constexpr void GlobalNamespace::DelegateList_1<float_t>::__set_m_releaseFunc(::System::Action_1<::System::Collections::Generic::LinkedListNode_1<::System::Action_1<float_t>*>*>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<::System::Collections::Generic::LinkedListNode_1<::System::Action_1<float_t>*>*>*, 0x18>(this, std::forward<::System::Action_1<::System::Collections::Generic::LinkedListNode_1<::System::Action_1<float_t>*>*>*>(value));
}
constexpr ::System::Action_1<::System::Collections::Generic::LinkedListNode_1<::System::Action_1<float_t>*>*>* GlobalNamespace::DelegateList_1<float_t>::__get_m_releaseFunc()  {
return ::cordl_internals::getInstanceField<::System::Action_1<::System::Collections::Generic::LinkedListNode_1<::System::Action_1<float_t>*>*>*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::System::Collections::Generic::LinkedListNode_1<::System::Action_1<float_t>*>*>*> GlobalNamespace::DelegateList_1<float_t>::__get_m_releaseFunc() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::System::Collections::Generic::LinkedListNode_1<::System::Action_1<float_t>*>*>*, 0x18>(this);
}
constexpr void GlobalNamespace::DelegateList_1<float_t>::__set_m_callbacks(::System::Collections::Generic::LinkedList_1<::System::Action_1<float_t>*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::LinkedList_1<::System::Action_1<float_t>*>*, 0x20>(this, std::forward<::System::Collections::Generic::LinkedList_1<::System::Action_1<float_t>*>*>(value));
}
constexpr ::System::Collections::Generic::LinkedList_1<::System::Action_1<float_t>*>* GlobalNamespace::DelegateList_1<float_t>::__get_m_callbacks()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::LinkedList_1<::System::Action_1<float_t>*>*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::LinkedList_1<::System::Action_1<float_t>*>*> GlobalNamespace::DelegateList_1<float_t>::__get_m_callbacks() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::LinkedList_1<::System::Action_1<float_t>*>*, 0x20>(this);
}
constexpr void GlobalNamespace::DelegateList_1<float_t>::__set_m_invoking(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x28>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::DelegateList_1<float_t>::__get_m_invoking()  {
return ::cordl_internals::getInstanceField<bool, 0x28>(this);
}
constexpr bool const& GlobalNamespace::DelegateList_1<float_t>::__get_m_invoking() const {
return ::cordl_internals::getInstanceField<bool, 0x28>(this);
}
inline ::GlobalNamespace::DelegateList_1<float_t>* GlobalNamespace::DelegateList_1<float_t>::New_ctor(::System::Func_2<::System::Action_1<float_t>*,::System::Collections::Generic::LinkedListNode_1<::System::Action_1<float_t>*>*>*  acquireFunc, ::System::Action_1<::System::Collections::Generic::LinkedListNode_1<::System::Action_1<float_t>*>*>*  releaseFunc)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::DelegateList_1<float_t>*>(acquireFunc, releaseFunc));
}
inline void GlobalNamespace::DelegateList_1<float_t>::_ctor(::System::Func_2<::System::Action_1<float_t>*,::System::Collections::Generic::LinkedListNode_1<::System::Action_1<float_t>*>*>*  acquireFunc, ::System::Action_1<::System::Collections::Generic::LinkedListNode_1<::System::Action_1<float_t>*>*>*  releaseFunc)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DelegateList_1<float_t>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::System::Action_1<float_t>*,::System::Collections::Generic::LinkedListNode_1<::System::Action_1<float_t>*>*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Collections::Generic::LinkedListNode_1<::System::Action_1<float_t>*>*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, acquireFunc, releaseFunc);
}
inline int32_t GlobalNamespace::DelegateList_1<float_t>::get_Count()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DelegateList_1<float_t>*>::get(),
                            "get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline void GlobalNamespace::DelegateList_1<float_t>::Add(::System::Action_1<float_t>*  action)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DelegateList_1<float_t>*>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<float_t>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, action);
}
inline void GlobalNamespace::DelegateList_1<float_t>::Remove(::System::Action_1<float_t>*  action)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DelegateList_1<float_t>*>::get(),
                            "Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<float_t>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, action);
}
inline void GlobalNamespace::DelegateList_1<float_t>::Invoke(float_t  res)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DelegateList_1<float_t>*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, res);
}
inline void GlobalNamespace::DelegateList_1<float_t>::Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DelegateList_1<float_t>*>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::DelegateList_1<float_t>* GlobalNamespace::DelegateList_1<float_t>::CreateWithGlobalCache()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DelegateList_1<float_t>*>::get(),
                            "CreateWithGlobalCache",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::DelegateList_1<float_t>*, false>(nullptr, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>::*)(::System::Func_2<::System::Action_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*,::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*>*>*, ::System::Action_1<::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*>*>*)>(&::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::System::Action_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*,::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*>*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*>*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>.get_Count
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>::*)()>(&::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>::get_Count)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*>::get(),
                            "get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>.Add
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>::*)(::System::Action_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*)>(&::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>::Add)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>.Remove
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>::*)(::System::Action_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*)>(&::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>::Remove)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*>::get(),
                            "Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>::*)(::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent)>(&::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>::Invoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>.Clear
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>::*)()>(&::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>::Clear)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>.CreateWithGlobalCache
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>* (*)()>(&::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>::CreateWithGlobalCache)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*>::get(),
                            "CreateWithGlobalCache",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>::__set_m_acquireFunc(::System::Func_2<::System::Action_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*,::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*>*>*  value)  {
::cordl_internals::setInstanceField<::System::Func_2<::System::Action_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*,::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*>*>*, 0x10>(this, std::forward<::System::Func_2<::System::Action_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*,::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*>*>*>(value));
}
constexpr ::System::Func_2<::System::Action_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*,::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*>*>* GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>::__get_m_acquireFunc()  {
return ::cordl_internals::getInstanceField<::System::Func_2<::System::Action_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*,::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*>*>*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::System::Action_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*,::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*>*>*> GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>::__get_m_acquireFunc() const {
return ::cordl_internals::getInstanceField<::System::Func_2<::System::Action_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*,::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*>*>*, 0x10>(this);
}
constexpr void GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>::__set_m_releaseFunc(::System::Action_1<::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*>*>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*>*>*, 0x18>(this, std::forward<::System::Action_1<::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*>*>*>(value));
}
constexpr ::System::Action_1<::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*>*>* GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>::__get_m_releaseFunc()  {
return ::cordl_internals::getInstanceField<::System::Action_1<::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*>*>*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*>*>*> GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>::__get_m_releaseFunc() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*>*>*, 0x18>(this);
}
constexpr void GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>::__set_m_callbacks(::System::Collections::Generic::LinkedList_1<::System::Action_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::LinkedList_1<::System::Action_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*>*, 0x20>(this, std::forward<::System::Collections::Generic::LinkedList_1<::System::Action_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*>*>(value));
}
constexpr ::System::Collections::Generic::LinkedList_1<::System::Action_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*>* GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>::__get_m_callbacks()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::LinkedList_1<::System::Action_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*>*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::LinkedList_1<::System::Action_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*>*> GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>::__get_m_callbacks() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::LinkedList_1<::System::Action_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*>*, 0x20>(this);
}
constexpr void GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>::__set_m_invoking(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x28>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>::__get_m_invoking()  {
return ::cordl_internals::getInstanceField<bool, 0x28>(this);
}
constexpr bool const& GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>::__get_m_invoking() const {
return ::cordl_internals::getInstanceField<bool, 0x28>(this);
}
inline ::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>* GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>::New_ctor(::System::Func_2<::System::Action_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*,::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*>*>*  acquireFunc, ::System::Action_1<::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*>*>*  releaseFunc)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*>(acquireFunc, releaseFunc));
}
inline void GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>::_ctor(::System::Func_2<::System::Action_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*,::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*>*>*  acquireFunc, ::System::Action_1<::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*>*>*  releaseFunc)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::System::Action_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*,::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*>*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*>*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, acquireFunc, releaseFunc);
}
inline int32_t GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>::get_Count()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*>::get(),
                            "get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline void GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>::Add(::System::Action_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*  action)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, action);
}
inline void GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>::Remove(::System::Action_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*  action)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*>::get(),
                            "Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, action);
}
inline void GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>::Invoke(::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent  res)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, res);
}
inline void GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>::Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>* GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>::CreateWithGlobalCache()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*>::get(),
                            "CreateWithGlobalCache",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*, false>(nullptr, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::*)(::System::Func_2<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*,::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>*>*, ::System::Action_1<::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>*>*)>(&::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*,::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>.get_Count
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::*)()>(&::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::get_Count)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>::get(),
                            "get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>.Add
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::*)(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*)>(&::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::Add)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>.Remove
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::*)(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*)>(&::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::Remove)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>::get(),
                            "Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle)>(&::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::Invoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>.Clear
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::*)()>(&::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::Clear)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>.CreateWithGlobalCache
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* (*)()>(&::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::CreateWithGlobalCache)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>::get(),
                            "CreateWithGlobalCache",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::__set_m_acquireFunc(::System::Func_2<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*,::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>*>*  value)  {
::cordl_internals::setInstanceField<::System::Func_2<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*,::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>*>*, 0x10>(this, std::forward<::System::Func_2<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*,::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>*>*>(value));
}
constexpr ::System::Func_2<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*,::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>*>* GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::__get_m_acquireFunc()  {
return ::cordl_internals::getInstanceField<::System::Func_2<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*,::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>*>*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*,::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>*>*> GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::__get_m_acquireFunc() const {
return ::cordl_internals::getInstanceField<::System::Func_2<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*,::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>*>*, 0x10>(this);
}
constexpr void GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::__set_m_releaseFunc(::System::Action_1<::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>*>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>*>*, 0x18>(this, std::forward<::System::Action_1<::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>*>*>(value));
}
constexpr ::System::Action_1<::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>*>* GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::__get_m_releaseFunc()  {
return ::cordl_internals::getInstanceField<::System::Action_1<::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>*>*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>*>*> GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::__get_m_releaseFunc() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>*>*, 0x18>(this);
}
constexpr void GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::__set_m_callbacks(::System::Collections::Generic::LinkedList_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::LinkedList_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>*, 0x20>(this, std::forward<::System::Collections::Generic::LinkedList_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>*>(value));
}
constexpr ::System::Collections::Generic::LinkedList_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>* GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::__get_m_callbacks()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::LinkedList_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::LinkedList_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>*> GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::__get_m_callbacks() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::LinkedList_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>*, 0x20>(this);
}
constexpr void GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::__set_m_invoking(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x28>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::__get_m_invoking()  {
return ::cordl_internals::getInstanceField<bool, 0x28>(this);
}
constexpr bool const& GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::__get_m_invoking() const {
return ::cordl_internals::getInstanceField<bool, 0x28>(this);
}
inline ::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::New_ctor(::System::Func_2<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*,::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>*>*  acquireFunc, ::System::Action_1<::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>*>*  releaseFunc)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>(acquireFunc, releaseFunc));
}
inline void GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::_ctor(::System::Func_2<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*,::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>*>*  acquireFunc, ::System::Action_1<::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>*>*  releaseFunc)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*,::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, acquireFunc, releaseFunc);
}
inline int32_t GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::get_Count()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>::get(),
                            "get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline void GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::Add(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  action)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, action);
}
inline void GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::Remove(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  action)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>::get(),
                            "Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, action);
}
inline void GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::Invoke(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  res)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, res);
}
inline void GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::CreateWithGlobalCache()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>::get(),
                            "CreateWithGlobalCache",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*, false>(nullptr, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::DelegateList_1<T>::__set_m_acquireFunc(::System::Func_2<::System::Action_1<T>*,::System::Collections::Generic::LinkedListNode_1<::System::Action_1<T>*>*>*  value)  {
::cordl_internals::setInstanceField<::System::Func_2<::System::Action_1<T>*,::System::Collections::Generic::LinkedListNode_1<::System::Action_1<T>*>*>*, 0x10>(this, std::forward<::System::Func_2<::System::Action_1<T>*,::System::Collections::Generic::LinkedListNode_1<::System::Action_1<T>*>*>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Func_2<::System::Action_1<T>*,::System::Collections::Generic::LinkedListNode_1<::System::Action_1<T>*>*>* GlobalNamespace::DelegateList_1<T>::__get_m_acquireFunc()  {
return ::cordl_internals::getInstanceField<::System::Func_2<::System::Action_1<T>*,::System::Collections::Generic::LinkedListNode_1<::System::Action_1<T>*>*>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::System::Action_1<T>*,::System::Collections::Generic::LinkedListNode_1<::System::Action_1<T>*>*>*> GlobalNamespace::DelegateList_1<T>::__get_m_acquireFunc() const {
return ::cordl_internals::getInstanceField<::System::Func_2<::System::Action_1<T>*,::System::Collections::Generic::LinkedListNode_1<::System::Action_1<T>*>*>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::DelegateList_1<T>::__set_m_releaseFunc(::System::Action_1<::System::Collections::Generic::LinkedListNode_1<::System::Action_1<T>*>*>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<::System::Collections::Generic::LinkedListNode_1<::System::Action_1<T>*>*>*, 0x18>(this, std::forward<::System::Action_1<::System::Collections::Generic::LinkedListNode_1<::System::Action_1<T>*>*>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Action_1<::System::Collections::Generic::LinkedListNode_1<::System::Action_1<T>*>*>* GlobalNamespace::DelegateList_1<T>::__get_m_releaseFunc()  {
return ::cordl_internals::getInstanceField<::System::Action_1<::System::Collections::Generic::LinkedListNode_1<::System::Action_1<T>*>*>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::System::Collections::Generic::LinkedListNode_1<::System::Action_1<T>*>*>*> GlobalNamespace::DelegateList_1<T>::__get_m_releaseFunc() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::System::Collections::Generic::LinkedListNode_1<::System::Action_1<T>*>*>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::DelegateList_1<T>::__set_m_callbacks(::System::Collections::Generic::LinkedList_1<::System::Action_1<T>*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::LinkedList_1<::System::Action_1<T>*>*, 0x20>(this, std::forward<::System::Collections::Generic::LinkedList_1<::System::Action_1<T>*>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Collections::Generic::LinkedList_1<::System::Action_1<T>*>* GlobalNamespace::DelegateList_1<T>::__get_m_callbacks()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::LinkedList_1<::System::Action_1<T>*>*, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::LinkedList_1<::System::Action_1<T>*>*> GlobalNamespace::DelegateList_1<T>::__get_m_callbacks() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::LinkedList_1<::System::Action_1<T>*>*, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::DelegateList_1<T>::__set_m_invoking(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x28>(this, std::forward<bool>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr bool& GlobalNamespace::DelegateList_1<T>::__get_m_invoking()  {
return ::cordl_internals::getInstanceField<bool, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr bool const& GlobalNamespace::DelegateList_1<T>::__get_m_invoking() const {
return ::cordl_internals::getInstanceField<bool, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::GlobalNamespace::DelegateList_1<T>* GlobalNamespace::DelegateList_1<T>::New_ctor(::System::Func_2<::System::Action_1<T>*,::System::Collections::Generic::LinkedListNode_1<::System::Action_1<T>*>*>*  acquireFunc, ::System::Action_1<::System::Collections::Generic::LinkedListNode_1<::System::Action_1<T>*>*>*  releaseFunc)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::DelegateList_1<T>*>(acquireFunc, releaseFunc));
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void GlobalNamespace::DelegateList_1<T>::_ctor(::System::Func_2<::System::Action_1<T>*,::System::Collections::Generic::LinkedListNode_1<::System::Action_1<T>*>*>*  acquireFunc, ::System::Action_1<::System::Collections::Generic::LinkedListNode_1<::System::Action_1<T>*>*>*  releaseFunc)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DelegateList_1<T>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::System::Action_1<T>*,::System::Collections::Generic::LinkedListNode_1<::System::Action_1<T>*>*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Collections::Generic::LinkedListNode_1<::System::Action_1<T>*>*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, acquireFunc, releaseFunc);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline int32_t GlobalNamespace::DelegateList_1<T>::get_Count()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DelegateList_1<T>*>::get(),
                            "get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void GlobalNamespace::DelegateList_1<T>::Add(::System::Action_1<T>*  action)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DelegateList_1<T>*>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<T>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, action);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void GlobalNamespace::DelegateList_1<T>::Remove(::System::Action_1<T>*  action)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DelegateList_1<T>*>::get(),
                            "Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<T>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, action);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void GlobalNamespace::DelegateList_1<T>::Invoke(T  res)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DelegateList_1<T>*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, res);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void GlobalNamespace::DelegateList_1<T>::Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DelegateList_1<T>*>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::GlobalNamespace::DelegateList_1<T>* GlobalNamespace::DelegateList_1<T>::CreateWithGlobalCache()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DelegateList_1<T>*>::get(),
                            "CreateWithGlobalCache",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::DelegateList_1<T>*, false>(nullptr, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
