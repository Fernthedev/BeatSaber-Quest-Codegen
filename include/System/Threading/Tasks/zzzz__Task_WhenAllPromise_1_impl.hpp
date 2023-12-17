#pragma once
#include "System/Threading/Tasks/zzzz__Task_1_impl.hpp"
#include "System/Threading/Tasks/zzzz__Task_WhenAllPromise_1_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerAvatarData_def.hpp"
#include "System/Threading/Tasks/zzzz__ITaskCompletionAction_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
/// @brief Convert operator to "::System::Threading::Tasks::ITaskCompletionAction"
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0>
constexpr  System::Threading::Tasks::__Task__WhenAllPromise_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>::operator ::System::Threading::Tasks::ITaskCompletionAction*() noexcept {
return static_cast<::System::Threading::Tasks::ITaskCompletionAction*>(static_cast<void*>(this));
}
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0>
constexpr void System::Threading::Tasks::__Task__WhenAllPromise_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>::__set_m_tasks(::ArrayW<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>*,::Array<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>*,::Array<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>*>*>, 0x58>(this, std::forward<::ArrayW<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>*,::Array<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>*>*>>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0>
constexpr ::ArrayW<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>*,::Array<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>*>*>& System::Threading::Tasks::__Task__WhenAllPromise_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>::__get_m_tasks()  {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>*,::Array<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>*>*>, 0x58>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0>
constexpr ::ArrayW<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>*,::Array<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>*>*> const& System::Threading::Tasks::__Task__WhenAllPromise_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>::__get_m_tasks() const {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>*,::Array<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>*>*>, 0x58>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0>
constexpr void System::Threading::Tasks::__Task__WhenAllPromise_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>::__set_m_count(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x60>(this, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0>
constexpr int32_t& System::Threading::Tasks::__Task__WhenAllPromise_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>::__get_m_count()  {
return ::cordl_internals::getInstanceField<int32_t, 0x60>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0>
constexpr int32_t const& System::Threading::Tasks::__Task__WhenAllPromise_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>::__get_m_count() const {
return ::cordl_internals::getInstanceField<int32_t, 0x60>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0>
inline ::System::Threading::Tasks::__Task__WhenAllPromise_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>* System::Threading::Tasks::__Task__WhenAllPromise_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>::New_ctor(::ArrayW<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>*,::Array<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>*>*>  tasks)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Threading::Tasks::__Task__WhenAllPromise_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>*>(tasks));
}
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0>
inline void System::Threading::Tasks::__Task__WhenAllPromise_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>::_ctor(::ArrayW<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>*,::Array<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>*>*>  tasks)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::__Task__WhenAllPromise_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>*,::Array<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>*>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, tasks);
}
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0>
inline void System::Threading::Tasks::__Task__WhenAllPromise_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>::Invoke(::System::Threading::Tasks::Task*  ignored)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::__Task__WhenAllPromise_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, ignored);
}
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0>
inline bool System::Threading::Tasks::__Task__WhenAllPromise_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>::get_ShouldNotifyDebuggerOfWaitCompletion()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::__Task__WhenAllPromise_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>*>::get(),
                            "get_ShouldNotifyDebuggerOfWaitCompletion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0>
inline bool System::Threading::Tasks::__Task__WhenAllPromise_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>::get_InvokeMayRunArbitraryCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::__Task__WhenAllPromise_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>*>::get(),
                            "get_InvokeMayRunArbitraryCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::System::Threading::Tasks::__Task__WhenAllPromise_1<::GlobalNamespace::MultiplayerAvatarData>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Tasks::__Task__WhenAllPromise_1<::GlobalNamespace::MultiplayerAvatarData>::*)(::ArrayW<::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarData>*,::Array<::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarData>*>*>)>(&::System::Threading::Tasks::__Task__WhenAllPromise_1<::GlobalNamespace::MultiplayerAvatarData>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::__Task__WhenAllPromise_1<::GlobalNamespace::MultiplayerAvatarData>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarData>*,::Array<::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarData>*>*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::__Task__WhenAllPromise_1<::GlobalNamespace::MultiplayerAvatarData>.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Tasks::__Task__WhenAllPromise_1<::GlobalNamespace::MultiplayerAvatarData>::*)(::System::Threading::Tasks::Task*)>(&::System::Threading::Tasks::__Task__WhenAllPromise_1<::GlobalNamespace::MultiplayerAvatarData>::Invoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::__Task__WhenAllPromise_1<::GlobalNamespace::MultiplayerAvatarData>*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::__Task__WhenAllPromise_1<::GlobalNamespace::MultiplayerAvatarData>.get_ShouldNotifyDebuggerOfWaitCompletion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Threading::Tasks::__Task__WhenAllPromise_1<::GlobalNamespace::MultiplayerAvatarData>::*)()>(&::System::Threading::Tasks::__Task__WhenAllPromise_1<::GlobalNamespace::MultiplayerAvatarData>::get_ShouldNotifyDebuggerOfWaitCompletion)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::__Task__WhenAllPromise_1<::GlobalNamespace::MultiplayerAvatarData>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::__Task__WhenAllPromise_1<::GlobalNamespace::MultiplayerAvatarData>*>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::__Task__WhenAllPromise_1<::GlobalNamespace::MultiplayerAvatarData>.get_InvokeMayRunArbitraryCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Threading::Tasks::__Task__WhenAllPromise_1<::GlobalNamespace::MultiplayerAvatarData>::*)()>(&::System::Threading::Tasks::__Task__WhenAllPromise_1<::GlobalNamespace::MultiplayerAvatarData>::get_InvokeMayRunArbitraryCode)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::__Task__WhenAllPromise_1<::GlobalNamespace::MultiplayerAvatarData>*>::get(),
                            "get_InvokeMayRunArbitraryCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Threading::Tasks::ITaskCompletionAction"
constexpr  System::Threading::Tasks::__Task__WhenAllPromise_1<::GlobalNamespace::MultiplayerAvatarData>::operator ::System::Threading::Tasks::ITaskCompletionAction*() noexcept {
return static_cast<::System::Threading::Tasks::ITaskCompletionAction*>(static_cast<void*>(this));
}
constexpr void System::Threading::Tasks::__Task__WhenAllPromise_1<::GlobalNamespace::MultiplayerAvatarData>::__set_m_tasks(::ArrayW<::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarData>*,::Array<::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarData>*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarData>*,::Array<::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarData>*>*>, 0x58>(this, std::forward<::ArrayW<::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarData>*,::Array<::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarData>*>*>>(value));
}
constexpr ::ArrayW<::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarData>*,::Array<::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarData>*>*>& System::Threading::Tasks::__Task__WhenAllPromise_1<::GlobalNamespace::MultiplayerAvatarData>::__get_m_tasks()  {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarData>*,::Array<::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarData>*>*>, 0x58>(this);
}
constexpr ::ArrayW<::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarData>*,::Array<::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarData>*>*> const& System::Threading::Tasks::__Task__WhenAllPromise_1<::GlobalNamespace::MultiplayerAvatarData>::__get_m_tasks() const {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarData>*,::Array<::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarData>*>*>, 0x58>(this);
}
constexpr void System::Threading::Tasks::__Task__WhenAllPromise_1<::GlobalNamespace::MultiplayerAvatarData>::__set_m_count(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x60>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Threading::Tasks::__Task__WhenAllPromise_1<::GlobalNamespace::MultiplayerAvatarData>::__get_m_count()  {
return ::cordl_internals::getInstanceField<int32_t, 0x60>(this);
}
constexpr int32_t const& System::Threading::Tasks::__Task__WhenAllPromise_1<::GlobalNamespace::MultiplayerAvatarData>::__get_m_count() const {
return ::cordl_internals::getInstanceField<int32_t, 0x60>(this);
}
inline ::System::Threading::Tasks::__Task__WhenAllPromise_1<::GlobalNamespace::MultiplayerAvatarData>* System::Threading::Tasks::__Task__WhenAllPromise_1<::GlobalNamespace::MultiplayerAvatarData>::New_ctor(::ArrayW<::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarData>*,::Array<::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarData>*>*>  tasks)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Threading::Tasks::__Task__WhenAllPromise_1<::GlobalNamespace::MultiplayerAvatarData>*>(tasks));
}
inline void System::Threading::Tasks::__Task__WhenAllPromise_1<::GlobalNamespace::MultiplayerAvatarData>::_ctor(::ArrayW<::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarData>*,::Array<::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarData>*>*>  tasks)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::__Task__WhenAllPromise_1<::GlobalNamespace::MultiplayerAvatarData>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarData>*,::Array<::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarData>*>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, tasks);
}
inline void System::Threading::Tasks::__Task__WhenAllPromise_1<::GlobalNamespace::MultiplayerAvatarData>::Invoke(::System::Threading::Tasks::Task*  ignored)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::__Task__WhenAllPromise_1<::GlobalNamespace::MultiplayerAvatarData>*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, ignored);
}
inline bool System::Threading::Tasks::__Task__WhenAllPromise_1<::GlobalNamespace::MultiplayerAvatarData>::get_ShouldNotifyDebuggerOfWaitCompletion()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::__Task__WhenAllPromise_1<::GlobalNamespace::MultiplayerAvatarData>*>::get(),
                            "get_ShouldNotifyDebuggerOfWaitCompletion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool System::Threading::Tasks::__Task__WhenAllPromise_1<::GlobalNamespace::MultiplayerAvatarData>::get_InvokeMayRunArbitraryCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::__Task__WhenAllPromise_1<::GlobalNamespace::MultiplayerAvatarData>*>::get(),
                            "get_InvokeMayRunArbitraryCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::System::Threading::Tasks::__Task__WhenAllPromise_1<bool>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Tasks::__Task__WhenAllPromise_1<bool>::*)(::ArrayW<::System::Threading::Tasks::Task_1<bool>*,::Array<::System::Threading::Tasks::Task_1<bool>*>*>)>(&::System::Threading::Tasks::__Task__WhenAllPromise_1<bool>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::__Task__WhenAllPromise_1<bool>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Threading::Tasks::Task_1<bool>*,::Array<::System::Threading::Tasks::Task_1<bool>*>*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::__Task__WhenAllPromise_1<bool>.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Tasks::__Task__WhenAllPromise_1<bool>::*)(::System::Threading::Tasks::Task*)>(&::System::Threading::Tasks::__Task__WhenAllPromise_1<bool>::Invoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::__Task__WhenAllPromise_1<bool>*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::__Task__WhenAllPromise_1<bool>.get_ShouldNotifyDebuggerOfWaitCompletion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Threading::Tasks::__Task__WhenAllPromise_1<bool>::*)()>(&::System::Threading::Tasks::__Task__WhenAllPromise_1<bool>::get_ShouldNotifyDebuggerOfWaitCompletion)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::__Task__WhenAllPromise_1<bool>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::__Task__WhenAllPromise_1<bool>*>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::__Task__WhenAllPromise_1<bool>.get_InvokeMayRunArbitraryCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Threading::Tasks::__Task__WhenAllPromise_1<bool>::*)()>(&::System::Threading::Tasks::__Task__WhenAllPromise_1<bool>::get_InvokeMayRunArbitraryCode)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::__Task__WhenAllPromise_1<bool>*>::get(),
                            "get_InvokeMayRunArbitraryCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Threading::Tasks::ITaskCompletionAction"
constexpr  System::Threading::Tasks::__Task__WhenAllPromise_1<bool>::operator ::System::Threading::Tasks::ITaskCompletionAction*() noexcept {
return static_cast<::System::Threading::Tasks::ITaskCompletionAction*>(static_cast<void*>(this));
}
constexpr void System::Threading::Tasks::__Task__WhenAllPromise_1<bool>::__set_m_tasks(::ArrayW<::System::Threading::Tasks::Task_1<bool>*,::Array<::System::Threading::Tasks::Task_1<bool>*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::System::Threading::Tasks::Task_1<bool>*,::Array<::System::Threading::Tasks::Task_1<bool>*>*>, 0x58>(this, std::forward<::ArrayW<::System::Threading::Tasks::Task_1<bool>*,::Array<::System::Threading::Tasks::Task_1<bool>*>*>>(value));
}
constexpr ::ArrayW<::System::Threading::Tasks::Task_1<bool>*,::Array<::System::Threading::Tasks::Task_1<bool>*>*>& System::Threading::Tasks::__Task__WhenAllPromise_1<bool>::__get_m_tasks()  {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Threading::Tasks::Task_1<bool>*,::Array<::System::Threading::Tasks::Task_1<bool>*>*>, 0x58>(this);
}
constexpr ::ArrayW<::System::Threading::Tasks::Task_1<bool>*,::Array<::System::Threading::Tasks::Task_1<bool>*>*> const& System::Threading::Tasks::__Task__WhenAllPromise_1<bool>::__get_m_tasks() const {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Threading::Tasks::Task_1<bool>*,::Array<::System::Threading::Tasks::Task_1<bool>*>*>, 0x58>(this);
}
constexpr void System::Threading::Tasks::__Task__WhenAllPromise_1<bool>::__set_m_count(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x60>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Threading::Tasks::__Task__WhenAllPromise_1<bool>::__get_m_count()  {
return ::cordl_internals::getInstanceField<int32_t, 0x60>(this);
}
constexpr int32_t const& System::Threading::Tasks::__Task__WhenAllPromise_1<bool>::__get_m_count() const {
return ::cordl_internals::getInstanceField<int32_t, 0x60>(this);
}
inline ::System::Threading::Tasks::__Task__WhenAllPromise_1<bool>* System::Threading::Tasks::__Task__WhenAllPromise_1<bool>::New_ctor(::ArrayW<::System::Threading::Tasks::Task_1<bool>*,::Array<::System::Threading::Tasks::Task_1<bool>*>*>  tasks)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Threading::Tasks::__Task__WhenAllPromise_1<bool>*>(tasks));
}
inline void System::Threading::Tasks::__Task__WhenAllPromise_1<bool>::_ctor(::ArrayW<::System::Threading::Tasks::Task_1<bool>*,::Array<::System::Threading::Tasks::Task_1<bool>*>*>  tasks)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::__Task__WhenAllPromise_1<bool>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Threading::Tasks::Task_1<bool>*,::Array<::System::Threading::Tasks::Task_1<bool>*>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, tasks);
}
inline void System::Threading::Tasks::__Task__WhenAllPromise_1<bool>::Invoke(::System::Threading::Tasks::Task*  ignored)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::__Task__WhenAllPromise_1<bool>*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, ignored);
}
inline bool System::Threading::Tasks::__Task__WhenAllPromise_1<bool>::get_ShouldNotifyDebuggerOfWaitCompletion()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::__Task__WhenAllPromise_1<bool>*>::get(),
                            "get_ShouldNotifyDebuggerOfWaitCompletion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool System::Threading::Tasks::__Task__WhenAllPromise_1<bool>::get_InvokeMayRunArbitraryCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::__Task__WhenAllPromise_1<bool>*>::get(),
                            "get_InvokeMayRunArbitraryCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::Threading::Tasks::ITaskCompletionAction"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr  System::Threading::Tasks::__Task__WhenAllPromise_1<T>::operator ::System::Threading::Tasks::ITaskCompletionAction*() noexcept {
return static_cast<::System::Threading::Tasks::ITaskCompletionAction*>(static_cast<void*>(this));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void System::Threading::Tasks::__Task__WhenAllPromise_1<T>::__set_m_tasks(::ArrayW<::System::Threading::Tasks::Task_1<T>*,::Array<::System::Threading::Tasks::Task_1<T>*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::System::Threading::Tasks::Task_1<T>*,::Array<::System::Threading::Tasks::Task_1<T>*>*>, 0x58>(this, std::forward<::ArrayW<::System::Threading::Tasks::Task_1<T>*,::Array<::System::Threading::Tasks::Task_1<T>*>*>>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::ArrayW<::System::Threading::Tasks::Task_1<T>*,::Array<::System::Threading::Tasks::Task_1<T>*>*>& System::Threading::Tasks::__Task__WhenAllPromise_1<T>::__get_m_tasks()  {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Threading::Tasks::Task_1<T>*,::Array<::System::Threading::Tasks::Task_1<T>*>*>, 0x58>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::ArrayW<::System::Threading::Tasks::Task_1<T>*,::Array<::System::Threading::Tasks::Task_1<T>*>*> const& System::Threading::Tasks::__Task__WhenAllPromise_1<T>::__get_m_tasks() const {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Threading::Tasks::Task_1<T>*,::Array<::System::Threading::Tasks::Task_1<T>*>*>, 0x58>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void System::Threading::Tasks::__Task__WhenAllPromise_1<T>::__set_m_count(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x60>(this, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t& System::Threading::Tasks::__Task__WhenAllPromise_1<T>::__get_m_count()  {
return ::cordl_internals::getInstanceField<int32_t, 0x60>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t const& System::Threading::Tasks::__Task__WhenAllPromise_1<T>::__get_m_count() const {
return ::cordl_internals::getInstanceField<int32_t, 0x60>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Threading::Tasks::__Task__WhenAllPromise_1<T>* System::Threading::Tasks::__Task__WhenAllPromise_1<T>::New_ctor(::ArrayW<::System::Threading::Tasks::Task_1<T>*,::Array<::System::Threading::Tasks::Task_1<T>*>*>  tasks)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Threading::Tasks::__Task__WhenAllPromise_1<T>*>(tasks));
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::Threading::Tasks::__Task__WhenAllPromise_1<T>::_ctor(::ArrayW<::System::Threading::Tasks::Task_1<T>*,::Array<::System::Threading::Tasks::Task_1<T>*>*>  tasks)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::__Task__WhenAllPromise_1<T>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Threading::Tasks::Task_1<T>*,::Array<::System::Threading::Tasks::Task_1<T>*>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, tasks);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::Threading::Tasks::__Task__WhenAllPromise_1<T>::Invoke(::System::Threading::Tasks::Task*  ignored)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::__Task__WhenAllPromise_1<T>*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, ignored);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline bool System::Threading::Tasks::__Task__WhenAllPromise_1<T>::get_ShouldNotifyDebuggerOfWaitCompletion()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::__Task__WhenAllPromise_1<T>*>::get(),
                            "get_ShouldNotifyDebuggerOfWaitCompletion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline bool System::Threading::Tasks::__Task__WhenAllPromise_1<T>::get_InvokeMayRunArbitraryCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::__Task__WhenAllPromise_1<T>*>::get(),
                            "get_InvokeMayRunArbitraryCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
