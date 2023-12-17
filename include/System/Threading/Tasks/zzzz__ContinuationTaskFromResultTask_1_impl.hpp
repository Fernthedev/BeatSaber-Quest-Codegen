#pragma once
#include "System/Threading/Tasks/zzzz__Task_impl.hpp"
#include "System/Threading/Tasks/zzzz__ContinuationTaskFromResultTask_1_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCreationOptions_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Threading/Tasks/zzzz__InternalTaskOptions_def.hpp"
#include "BGNet/Core/GameLift/zzzz__GetMultiplayerInstanceResponse_def.hpp"
#include "System/zzzz__Delegate_def.hpp"
#include "GlobalNamespace/zzzz__AuthenticationToken_def.hpp"
#include "GlobalNamespace/zzzz__GetAssetBundleFileResult_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerAvatarData_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerAvatarsData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelLoader_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelSO_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelsModel_def.hpp"
#include "GlobalNamespace/zzzz__ISonyCommerceHelper_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/Threading/Tasks/zzzz__VoidTaskResult_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "System/zzzz__ValueTuple_3_def.hpp"
#include "System/zzzz__ValueTuple_5_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__SceneInstance_def.hpp"
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0>
constexpr void System::Threading::Tasks::ContinuationTaskFromResultTask_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>::__set_m_antecedent(::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>*  value)  {
::cordl_internals::setInstanceField<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>*, 0x50>(this, std::forward<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0>
constexpr ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>* System::Threading::Tasks::ContinuationTaskFromResultTask_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>::__get_m_antecedent()  {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>*, 0x50>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0>
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>*> System::Threading::Tasks::ContinuationTaskFromResultTask_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>::__get_m_antecedent() const {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>*, 0x50>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0>
inline ::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>* System::Threading::Tasks::ContinuationTaskFromResultTask_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>::New_ctor(::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>*  antecedent, ::System::Delegate*  action, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>*>(antecedent, action, state, creationOptions, internalOptions));
}
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0>
inline void System::Threading::Tasks::ContinuationTaskFromResultTask_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>::_ctor(::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>*  antecedent, ::System::Delegate*  action, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Delegate*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::InternalTaskOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, antecedent, action, state, creationOptions, internalOptions);
}
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0>
inline void System::Threading::Tasks::ContinuationTaskFromResultTask_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>::InnerInvoke()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>*>::get(),
                            "InnerInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>::*)(::System::Threading::Tasks::Task_1<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>*, ::System::Delegate*, ::System::Object*, ::System::Threading::Tasks::TaskCreationOptions, ::System::Threading::Tasks::InternalTaskOptions)>(&::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Delegate*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::InternalTaskOptions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>.InnerInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>::*)()>(&::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>::InnerInvoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
constexpr void System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>::__set_m_antecedent(::System::Threading::Tasks::Task_1<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>*  value)  {
::cordl_internals::setInstanceField<::System::Threading::Tasks::Task_1<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>*, 0x50>(this, std::forward<::System::Threading::Tasks::Task_1<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>*>(value));
}
constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>* System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>::__get_m_antecedent()  {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::Task_1<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>*> System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>::__get_m_antecedent() const {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::Task_1<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>*, 0x50>(this);
}
inline ::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>* System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>::New_ctor(::System::Threading::Tasks::Task_1<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>*  antecedent, ::System::Delegate*  action, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>*>(antecedent, action, state, creationOptions, internalOptions));
}
inline void System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>::_ctor(::System::Threading::Tasks::Task_1<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>*  antecedent, ::System::Delegate*  action, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Delegate*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::InternalTaskOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, antecedent, action, state, creationOptions, internalOptions);
}
inline void System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>::InnerInvoke()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>*>::get(),
                            "InnerInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T2_cordlgen_1>
constexpr void System::Threading::Tasks::ContinuationTaskFromResultTask_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>::__set_m_antecedent(::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>*  value)  {
::cordl_internals::setInstanceField<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>*, 0x50>(this, std::forward<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T2_cordlgen_1>
constexpr ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>* System::Threading::Tasks::ContinuationTaskFromResultTask_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>::__get_m_antecedent()  {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>*, 0x50>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T2_cordlgen_1>
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>*> System::Threading::Tasks::ContinuationTaskFromResultTask_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>::__get_m_antecedent() const {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>*, 0x50>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T2_cordlgen_1>
inline ::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>* System::Threading::Tasks::ContinuationTaskFromResultTask_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>::New_ctor(::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>*  antecedent, ::System::Delegate*  action, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>*>(antecedent, action, state, creationOptions, internalOptions));
}
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T2_cordlgen_1>
inline void System::Threading::Tasks::ContinuationTaskFromResultTask_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>::_ctor(::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>*  antecedent, ::System::Delegate*  action, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Delegate*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::InternalTaskOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, antecedent, action, state, creationOptions, internalOptions);
}
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T2_cordlgen_1>
inline void System::Threading::Tasks::ContinuationTaskFromResultTask_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>::InnerInvoke()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>*>::get(),
                            "InnerInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::MultiplayerAvatarData>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::MultiplayerAvatarData>::*)(::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarData>*, ::System::Delegate*, ::System::Object*, ::System::Threading::Tasks::TaskCreationOptions, ::System::Threading::Tasks::InternalTaskOptions)>(&::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::MultiplayerAvatarData>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::MultiplayerAvatarData>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarData>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Delegate*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::InternalTaskOptions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::MultiplayerAvatarData>.InnerInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::MultiplayerAvatarData>::*)()>(&::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::MultiplayerAvatarData>::InnerInvoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::MultiplayerAvatarData>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::MultiplayerAvatarData>*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
constexpr void System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::MultiplayerAvatarData>::__set_m_antecedent(::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarData>*  value)  {
::cordl_internals::setInstanceField<::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarData>*, 0x50>(this, std::forward<::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarData>*>(value));
}
constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarData>* System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::MultiplayerAvatarData>::__get_m_antecedent()  {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarData>*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarData>*> System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::MultiplayerAvatarData>::__get_m_antecedent() const {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarData>*, 0x50>(this);
}
inline ::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::MultiplayerAvatarData>* System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::MultiplayerAvatarData>::New_ctor(::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarData>*  antecedent, ::System::Delegate*  action, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::MultiplayerAvatarData>*>(antecedent, action, state, creationOptions, internalOptions));
}
inline void System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::MultiplayerAvatarData>::_ctor(::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarData>*  antecedent, ::System::Delegate*  action, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::MultiplayerAvatarData>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarData>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Delegate*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::InternalTaskOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, antecedent, action, state, creationOptions, internalOptions);
}
inline void System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::MultiplayerAvatarData>::InnerInvoke()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::MultiplayerAvatarData>*>::get(),
                            "InnerInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T4_cordlgen_1,::il2cpp_utils::il2cpp_reference_type T5_cordlgen_2>
constexpr void System::Threading::Tasks::ContinuationTaskFromResultTask_1<::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>>::__set_m_antecedent(::System::Threading::Tasks::Task_1<::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>>*  value)  {
::cordl_internals::setInstanceField<::System::Threading::Tasks::Task_1<::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>>*, 0x50>(this, std::forward<::System::Threading::Tasks::Task_1<::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T4_cordlgen_1,::il2cpp_utils::il2cpp_reference_type T5_cordlgen_2>
constexpr ::System::Threading::Tasks::Task_1<::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>>* System::Threading::Tasks::ContinuationTaskFromResultTask_1<::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>>::__get_m_antecedent()  {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::Task_1<::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>>*, 0x50>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T4_cordlgen_1,::il2cpp_utils::il2cpp_reference_type T5_cordlgen_2>
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>>*> System::Threading::Tasks::ContinuationTaskFromResultTask_1<::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>>::__get_m_antecedent() const {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::Task_1<::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>>*, 0x50>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T4_cordlgen_1,::il2cpp_utils::il2cpp_reference_type T5_cordlgen_2>
inline ::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>>* System::Threading::Tasks::ContinuationTaskFromResultTask_1<::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>>::New_ctor(::System::Threading::Tasks::Task_1<::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>>*  antecedent, ::System::Delegate*  action, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>>*>(antecedent, action, state, creationOptions, internalOptions));
}
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T4_cordlgen_1,::il2cpp_utils::il2cpp_reference_type T5_cordlgen_2>
inline void System::Threading::Tasks::ContinuationTaskFromResultTask_1<::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>>::_ctor(::System::Threading::Tasks::Task_1<::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>>*  antecedent, ::System::Delegate*  action, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Delegate*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::InternalTaskOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, antecedent, action, state, creationOptions, internalOptions);
}
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T4_cordlgen_1,::il2cpp_utils::il2cpp_reference_type T5_cordlgen_2>
inline void System::Threading::Tasks::ContinuationTaskFromResultTask_1<::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>>::InnerInvoke()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::System::ValueTuple_5<T1_cordlgen_0,bool,bool,T4_cordlgen_1,T5_cordlgen_2>>*>::get(),
                            "InnerInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T2_cordlgen_1>
constexpr void System::Threading::Tasks::ContinuationTaskFromResultTask_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>>::__set_m_antecedent(::System::Threading::Tasks::Task_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>>*  value)  {
::cordl_internals::setInstanceField<::System::Threading::Tasks::Task_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>>*, 0x50>(this, std::forward<::System::Threading::Tasks::Task_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T2_cordlgen_1>
constexpr ::System::Threading::Tasks::Task_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>>* System::Threading::Tasks::ContinuationTaskFromResultTask_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>>::__get_m_antecedent()  {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::Task_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>>*, 0x50>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T2_cordlgen_1>
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>>*> System::Threading::Tasks::ContinuationTaskFromResultTask_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>>::__get_m_antecedent() const {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::Task_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>>*, 0x50>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T2_cordlgen_1>
inline ::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>>* System::Threading::Tasks::ContinuationTaskFromResultTask_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>>::New_ctor(::System::Threading::Tasks::Task_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>>*  antecedent, ::System::Delegate*  action, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>>*>(antecedent, action, state, creationOptions, internalOptions));
}
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T2_cordlgen_1>
inline void System::Threading::Tasks::ContinuationTaskFromResultTask_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>>::_ctor(::System::Threading::Tasks::Task_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>>*  antecedent, ::System::Delegate*  action, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Delegate*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::InternalTaskOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, antecedent, action, state, creationOptions, internalOptions);
}
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T2_cordlgen_1>
inline void System::Threading::Tasks::ContinuationTaskFromResultTask_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>>::InnerInvoke()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,int32_t>>*>::get(),
                            "InnerInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TAntecedentResult>
constexpr void System::Threading::Tasks::ContinuationTaskFromResultTask_1<TAntecedentResult>::__set_m_antecedent(::System::Threading::Tasks::Task_1<TAntecedentResult>*  value)  {
::cordl_internals::setInstanceField<::System::Threading::Tasks::Task_1<TAntecedentResult>*, 0x50>(this, std::forward<::System::Threading::Tasks::Task_1<TAntecedentResult>*>(value));
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TAntecedentResult>
constexpr ::System::Threading::Tasks::Task_1<TAntecedentResult>* System::Threading::Tasks::ContinuationTaskFromResultTask_1<TAntecedentResult>::__get_m_antecedent()  {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::Task_1<TAntecedentResult>*, 0x50>(this);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TAntecedentResult>
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<TAntecedentResult>*> System::Threading::Tasks::ContinuationTaskFromResultTask_1<TAntecedentResult>::__get_m_antecedent() const {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::Task_1<TAntecedentResult>*, 0x50>(this);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TAntecedentResult>
inline ::System::Threading::Tasks::ContinuationTaskFromResultTask_1<TAntecedentResult>* System::Threading::Tasks::ContinuationTaskFromResultTask_1<TAntecedentResult>::New_ctor(::System::Threading::Tasks::Task_1<TAntecedentResult>*  antecedent, ::System::Delegate*  action, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Threading::Tasks::ContinuationTaskFromResultTask_1<TAntecedentResult>*>(antecedent, action, state, creationOptions, internalOptions));
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TAntecedentResult>
inline void System::Threading::Tasks::ContinuationTaskFromResultTask_1<TAntecedentResult>::_ctor(::System::Threading::Tasks::Task_1<TAntecedentResult>*  antecedent, ::System::Delegate*  action, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ContinuationTaskFromResultTask_1<TAntecedentResult>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<TAntecedentResult>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Delegate*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::InternalTaskOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, antecedent, action, state, creationOptions, internalOptions);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TAntecedentResult>
inline void System::Threading::Tasks::ContinuationTaskFromResultTask_1<TAntecedentResult>::InnerInvoke()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ContinuationTaskFromResultTask_1<TAntecedentResult>*>::get(),
                            "InnerInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>::*)(::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>*, ::System::Delegate*, ::System::Object*, ::System::Threading::Tasks::TaskCreationOptions, ::System::Threading::Tasks::InternalTaskOptions)>(&::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Delegate*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::InternalTaskOptions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>.InnerInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>::*)()>(&::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>::InnerInvoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
constexpr void System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>::__set_m_antecedent(::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>*  value)  {
::cordl_internals::setInstanceField<::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>*, 0x50>(this, std::forward<::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>*>(value));
}
constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>* System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>::__get_m_antecedent()  {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>*> System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>::__get_m_antecedent() const {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>*, 0x50>(this);
}
inline ::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>* System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>::New_ctor(::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>*  antecedent, ::System::Delegate*  action, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>*>(antecedent, action, state, creationOptions, internalOptions));
}
inline void System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>::_ctor(::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>*  antecedent, ::System::Delegate*  action, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Delegate*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::InternalTaskOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, antecedent, action, state, creationOptions, internalOptions);
}
inline void System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>::InnerInvoke()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>*>::get(),
                            "InnerInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>::*)(::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>*, ::System::Delegate*, ::System::Object*, ::System::Threading::Tasks::TaskCreationOptions, ::System::Threading::Tasks::InternalTaskOptions)>(&::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Delegate*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::InternalTaskOptions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>.InnerInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>::*)()>(&::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>::InnerInvoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
constexpr void System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>::__set_m_antecedent(::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>*  value)  {
::cordl_internals::setInstanceField<::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>*, 0x50>(this, std::forward<::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>*>(value));
}
constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>* System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>::__get_m_antecedent()  {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>*> System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>::__get_m_antecedent() const {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>*, 0x50>(this);
}
inline ::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>* System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>::New_ctor(::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>*  antecedent, ::System::Delegate*  action, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>*>(antecedent, action, state, creationOptions, internalOptions));
}
inline void System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>::_ctor(::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>*  antecedent, ::System::Delegate*  action, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Delegate*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::InternalTaskOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, antecedent, action, state, creationOptions, internalOptions);
}
inline void System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>::InnerInvoke()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::__BeatmapLevelSO__GetBeatmapLevelDataResult>*>::get(),
                            "InnerInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>::*)(::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>*, ::System::Delegate*, ::System::Object*, ::System::Threading::Tasks::TaskCreationOptions, ::System::Threading::Tasks::InternalTaskOptions)>(&::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Delegate*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::InternalTaskOptions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>.InnerInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>::*)()>(&::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>::InnerInvoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
constexpr void System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>::__set_m_antecedent(::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>*  value)  {
::cordl_internals::setInstanceField<::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>*, 0x50>(this, std::forward<::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>*>(value));
}
constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>* System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>::__get_m_antecedent()  {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>*> System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>::__get_m_antecedent() const {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>*, 0x50>(this);
}
inline ::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>* System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>::New_ctor(::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>*  antecedent, ::System::Delegate*  action, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>*>(antecedent, action, state, creationOptions, internalOptions));
}
inline void System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>::_ctor(::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>*  antecedent, ::System::Delegate*  action, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Delegate*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::InternalTaskOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, antecedent, action, state, creationOptions, internalOptions);
}
inline void System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>::InnerInvoke()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>*>::get(),
                            "InnerInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::System::Threading::Tasks::VoidTaskResult>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::System::Threading::Tasks::VoidTaskResult>::*)(::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult>*, ::System::Delegate*, ::System::Object*, ::System::Threading::Tasks::TaskCreationOptions, ::System::Threading::Tasks::InternalTaskOptions)>(&::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::System::Threading::Tasks::VoidTaskResult>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::System::Threading::Tasks::VoidTaskResult>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Delegate*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::InternalTaskOptions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::System::Threading::Tasks::VoidTaskResult>.InnerInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::System::Threading::Tasks::VoidTaskResult>::*)()>(&::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::System::Threading::Tasks::VoidTaskResult>::InnerInvoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::System::Threading::Tasks::VoidTaskResult>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::System::Threading::Tasks::VoidTaskResult>*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
constexpr void System::Threading::Tasks::ContinuationTaskFromResultTask_1<::System::Threading::Tasks::VoidTaskResult>::__set_m_antecedent(::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult>*  value)  {
::cordl_internals::setInstanceField<::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult>*, 0x50>(this, std::forward<::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult>*>(value));
}
constexpr ::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult>* System::Threading::Tasks::ContinuationTaskFromResultTask_1<::System::Threading::Tasks::VoidTaskResult>::__get_m_antecedent()  {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult>*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult>*> System::Threading::Tasks::ContinuationTaskFromResultTask_1<::System::Threading::Tasks::VoidTaskResult>::__get_m_antecedent() const {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult>*, 0x50>(this);
}
inline ::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::System::Threading::Tasks::VoidTaskResult>* System::Threading::Tasks::ContinuationTaskFromResultTask_1<::System::Threading::Tasks::VoidTaskResult>::New_ctor(::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult>*  antecedent, ::System::Delegate*  action, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::System::Threading::Tasks::VoidTaskResult>*>(antecedent, action, state, creationOptions, internalOptions));
}
inline void System::Threading::Tasks::ContinuationTaskFromResultTask_1<::System::Threading::Tasks::VoidTaskResult>::_ctor(::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult>*  antecedent, ::System::Delegate*  action, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::System::Threading::Tasks::VoidTaskResult>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Delegate*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::InternalTaskOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, antecedent, action, state, creationOptions, internalOptions);
}
inline void System::Threading::Tasks::ContinuationTaskFromResultTask_1<::System::Threading::Tasks::VoidTaskResult>::InnerInvoke()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::System::Threading::Tasks::VoidTaskResult>*>::get(),
                            "InnerInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::MultiplayerAvatarsData>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::MultiplayerAvatarsData>::*)(::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarsData>*, ::System::Delegate*, ::System::Object*, ::System::Threading::Tasks::TaskCreationOptions, ::System::Threading::Tasks::InternalTaskOptions)>(&::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::MultiplayerAvatarsData>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::MultiplayerAvatarsData>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarsData>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Delegate*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::InternalTaskOptions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::MultiplayerAvatarsData>.InnerInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::MultiplayerAvatarsData>::*)()>(&::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::MultiplayerAvatarsData>::InnerInvoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::MultiplayerAvatarsData>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::MultiplayerAvatarsData>*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
constexpr void System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::MultiplayerAvatarsData>::__set_m_antecedent(::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarsData>*  value)  {
::cordl_internals::setInstanceField<::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarsData>*, 0x50>(this, std::forward<::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarsData>*>(value));
}
constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarsData>* System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::MultiplayerAvatarsData>::__get_m_antecedent()  {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarsData>*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarsData>*> System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::MultiplayerAvatarsData>::__get_m_antecedent() const {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarsData>*, 0x50>(this);
}
inline ::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::MultiplayerAvatarsData>* System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::MultiplayerAvatarsData>::New_ctor(::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarsData>*  antecedent, ::System::Delegate*  action, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::MultiplayerAvatarsData>*>(antecedent, action, state, creationOptions, internalOptions));
}
inline void System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::MultiplayerAvatarsData>::_ctor(::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarsData>*  antecedent, ::System::Delegate*  action, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::MultiplayerAvatarsData>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarsData>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Delegate*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::InternalTaskOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, antecedent, action, state, creationOptions, internalOptions);
}
inline void System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::MultiplayerAvatarsData>::InnerInvoke()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::MultiplayerAvatarsData>*>::get(),
                            "InnerInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::GetAssetBundleFileResult>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::GetAssetBundleFileResult>::*)(::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult>*, ::System::Delegate*, ::System::Object*, ::System::Threading::Tasks::TaskCreationOptions, ::System::Threading::Tasks::InternalTaskOptions)>(&::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::GetAssetBundleFileResult>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::GetAssetBundleFileResult>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Delegate*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::InternalTaskOptions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::GetAssetBundleFileResult>.InnerInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::GetAssetBundleFileResult>::*)()>(&::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::GetAssetBundleFileResult>::InnerInvoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::GetAssetBundleFileResult>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::GetAssetBundleFileResult>*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
constexpr void System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::GetAssetBundleFileResult>::__set_m_antecedent(::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult>*  value)  {
::cordl_internals::setInstanceField<::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult>*, 0x50>(this, std::forward<::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult>*>(value));
}
constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult>* System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::GetAssetBundleFileResult>::__get_m_antecedent()  {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult>*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult>*> System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::GetAssetBundleFileResult>::__get_m_antecedent() const {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult>*, 0x50>(this);
}
inline ::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::GetAssetBundleFileResult>* System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::GetAssetBundleFileResult>::New_ctor(::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult>*  antecedent, ::System::Delegate*  action, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::GetAssetBundleFileResult>*>(antecedent, action, state, creationOptions, internalOptions));
}
inline void System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::GetAssetBundleFileResult>::_ctor(::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult>*  antecedent, ::System::Delegate*  action, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::GetAssetBundleFileResult>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Delegate*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::InternalTaskOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, antecedent, action, state, creationOptions, internalOptions);
}
inline void System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::GetAssetBundleFileResult>::InnerInvoke()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::GetAssetBundleFileResult>*>::get(),
                            "InnerInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::AuthenticationToken>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::AuthenticationToken>::*)(::System::Threading::Tasks::Task_1<::GlobalNamespace::AuthenticationToken>*, ::System::Delegate*, ::System::Object*, ::System::Threading::Tasks::TaskCreationOptions, ::System::Threading::Tasks::InternalTaskOptions)>(&::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::AuthenticationToken>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::AuthenticationToken>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<::GlobalNamespace::AuthenticationToken>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Delegate*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::InternalTaskOptions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::AuthenticationToken>.InnerInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::AuthenticationToken>::*)()>(&::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::AuthenticationToken>::InnerInvoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::AuthenticationToken>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::AuthenticationToken>*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
constexpr void System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::AuthenticationToken>::__set_m_antecedent(::System::Threading::Tasks::Task_1<::GlobalNamespace::AuthenticationToken>*  value)  {
::cordl_internals::setInstanceField<::System::Threading::Tasks::Task_1<::GlobalNamespace::AuthenticationToken>*, 0x50>(this, std::forward<::System::Threading::Tasks::Task_1<::GlobalNamespace::AuthenticationToken>*>(value));
}
constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::AuthenticationToken>* System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::AuthenticationToken>::__get_m_antecedent()  {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::Task_1<::GlobalNamespace::AuthenticationToken>*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::GlobalNamespace::AuthenticationToken>*> System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::AuthenticationToken>::__get_m_antecedent() const {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::Task_1<::GlobalNamespace::AuthenticationToken>*, 0x50>(this);
}
inline ::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::AuthenticationToken>* System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::AuthenticationToken>::New_ctor(::System::Threading::Tasks::Task_1<::GlobalNamespace::AuthenticationToken>*  antecedent, ::System::Delegate*  action, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::AuthenticationToken>*>(antecedent, action, state, creationOptions, internalOptions));
}
inline void System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::AuthenticationToken>::_ctor(::System::Threading::Tasks::Task_1<::GlobalNamespace::AuthenticationToken>*  antecedent, ::System::Delegate*  action, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::AuthenticationToken>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<::GlobalNamespace::AuthenticationToken>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Delegate*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::InternalTaskOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, antecedent, action, state, creationOptions, internalOptions);
}
inline void System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::AuthenticationToken>::InnerInvoke()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::GlobalNamespace::AuthenticationToken>*>::get(),
                            "InnerInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::System::Nullable_1<uint32_t>>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::System::Nullable_1<uint32_t>>::*)(::System::Threading::Tasks::Task_1<::System::Nullable_1<uint32_t>>*, ::System::Delegate*, ::System::Object*, ::System::Threading::Tasks::TaskCreationOptions, ::System::Threading::Tasks::InternalTaskOptions)>(&::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::System::Nullable_1<uint32_t>>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::System::Nullable_1<uint32_t>>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<::System::Nullable_1<uint32_t>>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Delegate*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::InternalTaskOptions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::System::Nullable_1<uint32_t>>.InnerInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::System::Nullable_1<uint32_t>>::*)()>(&::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::System::Nullable_1<uint32_t>>::InnerInvoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::System::Nullable_1<uint32_t>>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::System::Nullable_1<uint32_t>>*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
constexpr void System::Threading::Tasks::ContinuationTaskFromResultTask_1<::System::Nullable_1<uint32_t>>::__set_m_antecedent(::System::Threading::Tasks::Task_1<::System::Nullable_1<uint32_t>>*  value)  {
::cordl_internals::setInstanceField<::System::Threading::Tasks::Task_1<::System::Nullable_1<uint32_t>>*, 0x50>(this, std::forward<::System::Threading::Tasks::Task_1<::System::Nullable_1<uint32_t>>*>(value));
}
constexpr ::System::Threading::Tasks::Task_1<::System::Nullable_1<uint32_t>>* System::Threading::Tasks::ContinuationTaskFromResultTask_1<::System::Nullable_1<uint32_t>>::__get_m_antecedent()  {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::Task_1<::System::Nullable_1<uint32_t>>*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::System::Nullable_1<uint32_t>>*> System::Threading::Tasks::ContinuationTaskFromResultTask_1<::System::Nullable_1<uint32_t>>::__get_m_antecedent() const {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::Task_1<::System::Nullable_1<uint32_t>>*, 0x50>(this);
}
inline ::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::System::Nullable_1<uint32_t>>* System::Threading::Tasks::ContinuationTaskFromResultTask_1<::System::Nullable_1<uint32_t>>::New_ctor(::System::Threading::Tasks::Task_1<::System::Nullable_1<uint32_t>>*  antecedent, ::System::Delegate*  action, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::System::Nullable_1<uint32_t>>*>(antecedent, action, state, creationOptions, internalOptions));
}
inline void System::Threading::Tasks::ContinuationTaskFromResultTask_1<::System::Nullable_1<uint32_t>>::_ctor(::System::Threading::Tasks::Task_1<::System::Nullable_1<uint32_t>>*  antecedent, ::System::Delegate*  action, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::System::Nullable_1<uint32_t>>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<::System::Nullable_1<uint32_t>>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Delegate*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::InternalTaskOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, antecedent, action, state, creationOptions, internalOptions);
}
inline void System::Threading::Tasks::ContinuationTaskFromResultTask_1<::System::Nullable_1<uint32_t>>::InnerInvoke()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::System::Nullable_1<uint32_t>>*>::get(),
                            "InnerInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::System::Nullable_1<int32_t>>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::System::Nullable_1<int32_t>>::*)(::System::Threading::Tasks::Task_1<::System::Nullable_1<int32_t>>*, ::System::Delegate*, ::System::Object*, ::System::Threading::Tasks::TaskCreationOptions, ::System::Threading::Tasks::InternalTaskOptions)>(&::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::System::Nullable_1<int32_t>>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::System::Nullable_1<int32_t>>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<::System::Nullable_1<int32_t>>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Delegate*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::InternalTaskOptions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::System::Nullable_1<int32_t>>.InnerInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::System::Nullable_1<int32_t>>::*)()>(&::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::System::Nullable_1<int32_t>>::InnerInvoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::System::Nullable_1<int32_t>>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::System::Nullable_1<int32_t>>*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
constexpr void System::Threading::Tasks::ContinuationTaskFromResultTask_1<::System::Nullable_1<int32_t>>::__set_m_antecedent(::System::Threading::Tasks::Task_1<::System::Nullable_1<int32_t>>*  value)  {
::cordl_internals::setInstanceField<::System::Threading::Tasks::Task_1<::System::Nullable_1<int32_t>>*, 0x50>(this, std::forward<::System::Threading::Tasks::Task_1<::System::Nullable_1<int32_t>>*>(value));
}
constexpr ::System::Threading::Tasks::Task_1<::System::Nullable_1<int32_t>>* System::Threading::Tasks::ContinuationTaskFromResultTask_1<::System::Nullable_1<int32_t>>::__get_m_antecedent()  {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::Task_1<::System::Nullable_1<int32_t>>*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::System::Nullable_1<int32_t>>*> System::Threading::Tasks::ContinuationTaskFromResultTask_1<::System::Nullable_1<int32_t>>::__get_m_antecedent() const {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::Task_1<::System::Nullable_1<int32_t>>*, 0x50>(this);
}
inline ::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::System::Nullable_1<int32_t>>* System::Threading::Tasks::ContinuationTaskFromResultTask_1<::System::Nullable_1<int32_t>>::New_ctor(::System::Threading::Tasks::Task_1<::System::Nullable_1<int32_t>>*  antecedent, ::System::Delegate*  action, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::System::Nullable_1<int32_t>>*>(antecedent, action, state, creationOptions, internalOptions));
}
inline void System::Threading::Tasks::ContinuationTaskFromResultTask_1<::System::Nullable_1<int32_t>>::_ctor(::System::Threading::Tasks::Task_1<::System::Nullable_1<int32_t>>*  antecedent, ::System::Delegate*  action, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::System::Nullable_1<int32_t>>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<::System::Nullable_1<int32_t>>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Delegate*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::InternalTaskOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, antecedent, action, state, creationOptions, internalOptions);
}
inline void System::Threading::Tasks::ContinuationTaskFromResultTask_1<::System::Nullable_1<int32_t>>::InnerInvoke()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::System::Nullable_1<int32_t>>*>::get(),
                            "InnerInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::*)(::System::Threading::Tasks::Task_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>*, ::System::Delegate*, ::System::Object*, ::System::Threading::Tasks::TaskCreationOptions, ::System::Threading::Tasks::InternalTaskOptions)>(&::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Delegate*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::InternalTaskOptions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>.InnerInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::*)()>(&::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::InnerInvoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
constexpr void System::Threading::Tasks::ContinuationTaskFromResultTask_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::__set_m_antecedent(::System::Threading::Tasks::Task_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>*  value)  {
::cordl_internals::setInstanceField<::System::Threading::Tasks::Task_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>*, 0x50>(this, std::forward<::System::Threading::Tasks::Task_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>*>(value));
}
constexpr ::System::Threading::Tasks::Task_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>* System::Threading::Tasks::ContinuationTaskFromResultTask_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::__get_m_antecedent()  {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::Task_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>*> System::Threading::Tasks::ContinuationTaskFromResultTask_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::__get_m_antecedent() const {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::Task_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>*, 0x50>(this);
}
inline ::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>* System::Threading::Tasks::ContinuationTaskFromResultTask_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::New_ctor(::System::Threading::Tasks::Task_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>*  antecedent, ::System::Delegate*  action, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>*>(antecedent, action, state, creationOptions, internalOptions));
}
inline void System::Threading::Tasks::ContinuationTaskFromResultTask_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::_ctor(::System::Threading::Tasks::Task_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>*  antecedent, ::System::Delegate*  action, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Delegate*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::InternalTaskOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, antecedent, action, state, creationOptions, internalOptions);
}
inline void System::Threading::Tasks::ContinuationTaskFromResultTask_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::InnerInvoke()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>*>::get(),
                            "InnerInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::System::Threading::Tasks::ContinuationTaskFromResultTask_1<int64_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Tasks::ContinuationTaskFromResultTask_1<int64_t>::*)(::System::Threading::Tasks::Task_1<int64_t>*, ::System::Delegate*, ::System::Object*, ::System::Threading::Tasks::TaskCreationOptions, ::System::Threading::Tasks::InternalTaskOptions)>(&::System::Threading::Tasks::ContinuationTaskFromResultTask_1<int64_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ContinuationTaskFromResultTask_1<int64_t>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<int64_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Delegate*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::InternalTaskOptions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::ContinuationTaskFromResultTask_1<int64_t>.InnerInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Tasks::ContinuationTaskFromResultTask_1<int64_t>::*)()>(&::System::Threading::Tasks::ContinuationTaskFromResultTask_1<int64_t>::InnerInvoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ContinuationTaskFromResultTask_1<int64_t>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ContinuationTaskFromResultTask_1<int64_t>*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
constexpr void System::Threading::Tasks::ContinuationTaskFromResultTask_1<int64_t>::__set_m_antecedent(::System::Threading::Tasks::Task_1<int64_t>*  value)  {
::cordl_internals::setInstanceField<::System::Threading::Tasks::Task_1<int64_t>*, 0x50>(this, std::forward<::System::Threading::Tasks::Task_1<int64_t>*>(value));
}
constexpr ::System::Threading::Tasks::Task_1<int64_t>* System::Threading::Tasks::ContinuationTaskFromResultTask_1<int64_t>::__get_m_antecedent()  {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::Task_1<int64_t>*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<int64_t>*> System::Threading::Tasks::ContinuationTaskFromResultTask_1<int64_t>::__get_m_antecedent() const {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::Task_1<int64_t>*, 0x50>(this);
}
inline ::System::Threading::Tasks::ContinuationTaskFromResultTask_1<int64_t>* System::Threading::Tasks::ContinuationTaskFromResultTask_1<int64_t>::New_ctor(::System::Threading::Tasks::Task_1<int64_t>*  antecedent, ::System::Delegate*  action, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Threading::Tasks::ContinuationTaskFromResultTask_1<int64_t>*>(antecedent, action, state, creationOptions, internalOptions));
}
inline void System::Threading::Tasks::ContinuationTaskFromResultTask_1<int64_t>::_ctor(::System::Threading::Tasks::Task_1<int64_t>*  antecedent, ::System::Delegate*  action, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ContinuationTaskFromResultTask_1<int64_t>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<int64_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Delegate*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::InternalTaskOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, antecedent, action, state, creationOptions, internalOptions);
}
inline void System::Threading::Tasks::ContinuationTaskFromResultTask_1<int64_t>::InnerInvoke()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ContinuationTaskFromResultTask_1<int64_t>*>::get(),
                            "InnerInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::System::Threading::Tasks::ContinuationTaskFromResultTask_1<bool>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Tasks::ContinuationTaskFromResultTask_1<bool>::*)(::System::Threading::Tasks::Task_1<bool>*, ::System::Delegate*, ::System::Object*, ::System::Threading::Tasks::TaskCreationOptions, ::System::Threading::Tasks::InternalTaskOptions)>(&::System::Threading::Tasks::ContinuationTaskFromResultTask_1<bool>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ContinuationTaskFromResultTask_1<bool>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<bool>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Delegate*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::InternalTaskOptions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::ContinuationTaskFromResultTask_1<bool>.InnerInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Tasks::ContinuationTaskFromResultTask_1<bool>::*)()>(&::System::Threading::Tasks::ContinuationTaskFromResultTask_1<bool>::InnerInvoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ContinuationTaskFromResultTask_1<bool>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ContinuationTaskFromResultTask_1<bool>*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
constexpr void System::Threading::Tasks::ContinuationTaskFromResultTask_1<bool>::__set_m_antecedent(::System::Threading::Tasks::Task_1<bool>*  value)  {
::cordl_internals::setInstanceField<::System::Threading::Tasks::Task_1<bool>*, 0x50>(this, std::forward<::System::Threading::Tasks::Task_1<bool>*>(value));
}
constexpr ::System::Threading::Tasks::Task_1<bool>* System::Threading::Tasks::ContinuationTaskFromResultTask_1<bool>::__get_m_antecedent()  {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::Task_1<bool>*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<bool>*> System::Threading::Tasks::ContinuationTaskFromResultTask_1<bool>::__get_m_antecedent() const {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::Task_1<bool>*, 0x50>(this);
}
inline ::System::Threading::Tasks::ContinuationTaskFromResultTask_1<bool>* System::Threading::Tasks::ContinuationTaskFromResultTask_1<bool>::New_ctor(::System::Threading::Tasks::Task_1<bool>*  antecedent, ::System::Delegate*  action, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Threading::Tasks::ContinuationTaskFromResultTask_1<bool>*>(antecedent, action, state, creationOptions, internalOptions));
}
inline void System::Threading::Tasks::ContinuationTaskFromResultTask_1<bool>::_ctor(::System::Threading::Tasks::Task_1<bool>*  antecedent, ::System::Delegate*  action, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ContinuationTaskFromResultTask_1<bool>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<bool>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Delegate*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::InternalTaskOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, antecedent, action, state, creationOptions, internalOptions);
}
inline void System::Threading::Tasks::ContinuationTaskFromResultTask_1<bool>::InnerInvoke()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ContinuationTaskFromResultTask_1<bool>*>::get(),
                            "InnerInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T2_cordlgen_0>
constexpr void System::Threading::Tasks::ContinuationTaskFromResultTask_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>::__set_m_antecedent(::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>*  value)  {
::cordl_internals::setInstanceField<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>*, 0x50>(this, std::forward<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T2_cordlgen_0>
constexpr ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>* System::Threading::Tasks::ContinuationTaskFromResultTask_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>::__get_m_antecedent()  {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>*, 0x50>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T2_cordlgen_0>
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>*> System::Threading::Tasks::ContinuationTaskFromResultTask_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>::__get_m_antecedent() const {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>*, 0x50>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T2_cordlgen_0>
inline ::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>* System::Threading::Tasks::ContinuationTaskFromResultTask_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>::New_ctor(::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>*  antecedent, ::System::Delegate*  action, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>*>(antecedent, action, state, creationOptions, internalOptions));
}
template<::il2cpp_utils::il2cpp_reference_type T2_cordlgen_0>
inline void System::Threading::Tasks::ContinuationTaskFromResultTask_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>::_ctor(::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>*  antecedent, ::System::Delegate*  action, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Delegate*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::InternalTaskOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, antecedent, action, state, creationOptions, internalOptions);
}
template<::il2cpp_utils::il2cpp_reference_type T2_cordlgen_0>
inline void System::Threading::Tasks::ContinuationTaskFromResultTask_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>::InnerInvoke()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>*>::get(),
                            "InnerInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::System::Threading::Tasks::ContinuationTaskFromResultTask_1<int32_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Tasks::ContinuationTaskFromResultTask_1<int32_t>::*)(::System::Threading::Tasks::Task_1<int32_t>*, ::System::Delegate*, ::System::Object*, ::System::Threading::Tasks::TaskCreationOptions, ::System::Threading::Tasks::InternalTaskOptions)>(&::System::Threading::Tasks::ContinuationTaskFromResultTask_1<int32_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ContinuationTaskFromResultTask_1<int32_t>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<int32_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Delegate*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::InternalTaskOptions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::ContinuationTaskFromResultTask_1<int32_t>.InnerInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Tasks::ContinuationTaskFromResultTask_1<int32_t>::*)()>(&::System::Threading::Tasks::ContinuationTaskFromResultTask_1<int32_t>::InnerInvoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ContinuationTaskFromResultTask_1<int32_t>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ContinuationTaskFromResultTask_1<int32_t>*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
constexpr void System::Threading::Tasks::ContinuationTaskFromResultTask_1<int32_t>::__set_m_antecedent(::System::Threading::Tasks::Task_1<int32_t>*  value)  {
::cordl_internals::setInstanceField<::System::Threading::Tasks::Task_1<int32_t>*, 0x50>(this, std::forward<::System::Threading::Tasks::Task_1<int32_t>*>(value));
}
constexpr ::System::Threading::Tasks::Task_1<int32_t>* System::Threading::Tasks::ContinuationTaskFromResultTask_1<int32_t>::__get_m_antecedent()  {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::Task_1<int32_t>*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<int32_t>*> System::Threading::Tasks::ContinuationTaskFromResultTask_1<int32_t>::__get_m_antecedent() const {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::Task_1<int32_t>*, 0x50>(this);
}
inline ::System::Threading::Tasks::ContinuationTaskFromResultTask_1<int32_t>* System::Threading::Tasks::ContinuationTaskFromResultTask_1<int32_t>::New_ctor(::System::Threading::Tasks::Task_1<int32_t>*  antecedent, ::System::Delegate*  action, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Threading::Tasks::ContinuationTaskFromResultTask_1<int32_t>*>(antecedent, action, state, creationOptions, internalOptions));
}
inline void System::Threading::Tasks::ContinuationTaskFromResultTask_1<int32_t>::_ctor(::System::Threading::Tasks::Task_1<int32_t>*  antecedent, ::System::Delegate*  action, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ContinuationTaskFromResultTask_1<int32_t>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<int32_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Delegate*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::InternalTaskOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, antecedent, action, state, creationOptions, internalOptions);
}
inline void System::Threading::Tasks::ContinuationTaskFromResultTask_1<int32_t>::InnerInvoke()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ContinuationTaskFromResultTask_1<int32_t>*>::get(),
                            "InnerInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::*)(::System::Threading::Tasks::Task_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>*, ::System::Delegate*, ::System::Object*, ::System::Threading::Tasks::TaskCreationOptions, ::System::Threading::Tasks::InternalTaskOptions)>(&::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Delegate*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::InternalTaskOptions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>.InnerInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::*)()>(&::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::InnerInvoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
constexpr void System::Threading::Tasks::ContinuationTaskFromResultTask_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::__set_m_antecedent(::System::Threading::Tasks::Task_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>*  value)  {
::cordl_internals::setInstanceField<::System::Threading::Tasks::Task_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>*, 0x50>(this, std::forward<::System::Threading::Tasks::Task_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>*>(value));
}
constexpr ::System::Threading::Tasks::Task_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>* System::Threading::Tasks::ContinuationTaskFromResultTask_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::__get_m_antecedent()  {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::Task_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>*> System::Threading::Tasks::ContinuationTaskFromResultTask_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::__get_m_antecedent() const {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::Task_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>*, 0x50>(this);
}
inline ::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>* System::Threading::Tasks::ContinuationTaskFromResultTask_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::New_ctor(::System::Threading::Tasks::Task_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>*  antecedent, ::System::Delegate*  action, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>*>(antecedent, action, state, creationOptions, internalOptions));
}
inline void System::Threading::Tasks::ContinuationTaskFromResultTask_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::_ctor(::System::Threading::Tasks::Task_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>*  antecedent, ::System::Delegate*  action, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Delegate*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::InternalTaskOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, antecedent, action, state, creationOptions, internalOptions);
}
inline void System::Threading::Tasks::ContinuationTaskFromResultTask_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::InnerInvoke()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ContinuationTaskFromResultTask_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>*>::get(),
                            "InnerInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TAntecedentResult>
constexpr void System::Threading::Tasks::ContinuationTaskFromResultTask_1<TAntecedentResult>::__set_m_antecedent(::System::Threading::Tasks::Task_1<TAntecedentResult>*  value)  {
::cordl_internals::setInstanceField<::System::Threading::Tasks::Task_1<TAntecedentResult>*, 0x50>(this, std::forward<::System::Threading::Tasks::Task_1<TAntecedentResult>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TAntecedentResult>
constexpr ::System::Threading::Tasks::Task_1<TAntecedentResult>* System::Threading::Tasks::ContinuationTaskFromResultTask_1<TAntecedentResult>::__get_m_antecedent()  {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::Task_1<TAntecedentResult>*, 0x50>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TAntecedentResult>
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<TAntecedentResult>*> System::Threading::Tasks::ContinuationTaskFromResultTask_1<TAntecedentResult>::__get_m_antecedent() const {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::Task_1<TAntecedentResult>*, 0x50>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TAntecedentResult>
inline ::System::Threading::Tasks::ContinuationTaskFromResultTask_1<TAntecedentResult>* System::Threading::Tasks::ContinuationTaskFromResultTask_1<TAntecedentResult>::New_ctor(::System::Threading::Tasks::Task_1<TAntecedentResult>*  antecedent, ::System::Delegate*  action, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Threading::Tasks::ContinuationTaskFromResultTask_1<TAntecedentResult>*>(antecedent, action, state, creationOptions, internalOptions));
}
template<::il2cpp_utils::il2cpp_reference_type TAntecedentResult>
inline void System::Threading::Tasks::ContinuationTaskFromResultTask_1<TAntecedentResult>::_ctor(::System::Threading::Tasks::Task_1<TAntecedentResult>*  antecedent, ::System::Delegate*  action, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ContinuationTaskFromResultTask_1<TAntecedentResult>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<TAntecedentResult>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Delegate*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::InternalTaskOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, antecedent, action, state, creationOptions, internalOptions);
}
template<::il2cpp_utils::il2cpp_reference_type TAntecedentResult>
inline void System::Threading::Tasks::ContinuationTaskFromResultTask_1<TAntecedentResult>::InnerInvoke()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ContinuationTaskFromResultTask_1<TAntecedentResult>*>::get(),
                            "InnerInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
