#pragma once
#include "UnityEngine/Events/zzzz__UnityEventBase_impl.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_3_def.hpp"
#include "UnityEngine/Events/zzzz__BaseInvokableCall_def.hpp"
#include "UnityEngine/Events/zzzz__UnityAction_3_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
template<::il2cpp_utils::il2cpp_reference_type T0,::il2cpp_utils::il2cpp_reference_type T2>
constexpr void UnityEngine::Events::UnityEvent_3<T0,bool,T2>::__set_m_InvokeArray(::ArrayW<::System::Object*,::Array<::System::Object*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::System::Object*,::Array<::System::Object*>*>, 0x28>(this, std::forward<::ArrayW<::System::Object*,::Array<::System::Object*>*>>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T0,::il2cpp_utils::il2cpp_reference_type T2>
constexpr ::ArrayW<::System::Object*,::Array<::System::Object*>*>& UnityEngine::Events::UnityEvent_3<T0,bool,T2>::__get_m_InvokeArray()  {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Object*,::Array<::System::Object*>*>, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T0,::il2cpp_utils::il2cpp_reference_type T2>
constexpr ::ArrayW<::System::Object*,::Array<::System::Object*>*> const& UnityEngine::Events::UnityEvent_3<T0,bool,T2>::__get_m_InvokeArray() const {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Object*,::Array<::System::Object*>*>, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T0,::il2cpp_utils::il2cpp_reference_type T2>
inline ::UnityEngine::Events::UnityEvent_3<T0,bool,T2>* UnityEngine::Events::UnityEvent_3<T0,bool,T2>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::Events::UnityEvent_3<T0,bool,T2>*>());
}
template<::il2cpp_utils::il2cpp_reference_type T0,::il2cpp_utils::il2cpp_reference_type T2>
inline void UnityEngine::Events::UnityEvent_3<T0,bool,T2>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::UnityEvent_3<T0,bool,T2>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T0,::il2cpp_utils::il2cpp_reference_type T2>
inline void UnityEngine::Events::UnityEvent_3<T0,bool,T2>::AddListener(::UnityEngine::Events::UnityAction_3<T0,bool,T2>*  call)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::UnityEvent_3<T0,bool,T2>*>::get(),
                            "AddListener",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction_3<T0,bool,T2>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, call);
}
template<::il2cpp_utils::il2cpp_reference_type T0,::il2cpp_utils::il2cpp_reference_type T2>
inline void UnityEngine::Events::UnityEvent_3<T0,bool,T2>::RemoveListener(::UnityEngine::Events::UnityAction_3<T0,bool,T2>*  call)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::UnityEvent_3<T0,bool,T2>*>::get(),
                            "RemoveListener",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction_3<T0,bool,T2>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, call);
}
template<::il2cpp_utils::il2cpp_reference_type T0,::il2cpp_utils::il2cpp_reference_type T2>
inline ::System::Reflection::MethodInfo* UnityEngine::Events::UnityEvent_3<T0,bool,T2>::FindMethod_Impl(::StringW  name, ::System::Type*  targetObjType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::UnityEvent_3<T0,bool,T2>*>::get(),
                            "FindMethod_Impl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*, false>(*this, ___internal_method, name, targetObjType);
}
template<::il2cpp_utils::il2cpp_reference_type T0,::il2cpp_utils::il2cpp_reference_type T2>
inline ::UnityEngine::Events::BaseInvokableCall* UnityEngine::Events::UnityEvent_3<T0,bool,T2>::GetDelegate(::System::Object*  target, ::System::Reflection::MethodInfo*  theFunction)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::UnityEvent_3<T0,bool,T2>*>::get(),
                            "GetDelegate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Events::BaseInvokableCall*, false>(*this, ___internal_method, target, theFunction);
}
template<::il2cpp_utils::il2cpp_reference_type T0,::il2cpp_utils::il2cpp_reference_type T2>
inline ::UnityEngine::Events::BaseInvokableCall* UnityEngine::Events::UnityEvent_3<T0,bool,T2>::GetDelegate(::UnityEngine::Events::UnityAction_3<T0,bool,T2>*  action)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::UnityEvent_3<T0,bool,T2>*>::get(),
                            "GetDelegate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction_3<T0,bool,T2>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Events::BaseInvokableCall*, false>(nullptr, ___internal_method, action);
}
template<::il2cpp_utils::il2cpp_reference_type T0,::il2cpp_utils::il2cpp_reference_type T2>
inline void UnityEngine::Events::UnityEvent_3<T0,bool,T2>::Invoke(T0  arg0, bool  arg1, T2  arg2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::UnityEvent_3<T0,bool,T2>*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T0>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, arg0, arg1, arg2);
}
template<::il2cpp_utils::il2cpp_reference_type T0,::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
constexpr void UnityEngine::Events::UnityEvent_3<T0,T1,T2>::__set_m_InvokeArray(::ArrayW<::System::Object*,::Array<::System::Object*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::System::Object*,::Array<::System::Object*>*>, 0x28>(this, std::forward<::ArrayW<::System::Object*,::Array<::System::Object*>*>>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T0,::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
constexpr ::ArrayW<::System::Object*,::Array<::System::Object*>*>& UnityEngine::Events::UnityEvent_3<T0,T1,T2>::__get_m_InvokeArray()  {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Object*,::Array<::System::Object*>*>, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T0,::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
constexpr ::ArrayW<::System::Object*,::Array<::System::Object*>*> const& UnityEngine::Events::UnityEvent_3<T0,T1,T2>::__get_m_InvokeArray() const {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Object*,::Array<::System::Object*>*>, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T0,::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
inline ::UnityEngine::Events::UnityEvent_3<T0,T1,T2>* UnityEngine::Events::UnityEvent_3<T0,T1,T2>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::Events::UnityEvent_3<T0,T1,T2>*>());
}
template<::il2cpp_utils::il2cpp_reference_type T0,::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
inline void UnityEngine::Events::UnityEvent_3<T0,T1,T2>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::UnityEvent_3<T0,T1,T2>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T0,::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
inline void UnityEngine::Events::UnityEvent_3<T0,T1,T2>::AddListener(::UnityEngine::Events::UnityAction_3<T0,T1,T2>*  call)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::UnityEvent_3<T0,T1,T2>*>::get(),
                            "AddListener",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction_3<T0,T1,T2>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, call);
}
template<::il2cpp_utils::il2cpp_reference_type T0,::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
inline void UnityEngine::Events::UnityEvent_3<T0,T1,T2>::RemoveListener(::UnityEngine::Events::UnityAction_3<T0,T1,T2>*  call)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::UnityEvent_3<T0,T1,T2>*>::get(),
                            "RemoveListener",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction_3<T0,T1,T2>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, call);
}
template<::il2cpp_utils::il2cpp_reference_type T0,::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
inline ::System::Reflection::MethodInfo* UnityEngine::Events::UnityEvent_3<T0,T1,T2>::FindMethod_Impl(::StringW  name, ::System::Type*  targetObjType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::UnityEvent_3<T0,T1,T2>*>::get(),
                            "FindMethod_Impl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*, false>(*this, ___internal_method, name, targetObjType);
}
template<::il2cpp_utils::il2cpp_reference_type T0,::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
inline ::UnityEngine::Events::BaseInvokableCall* UnityEngine::Events::UnityEvent_3<T0,T1,T2>::GetDelegate(::System::Object*  target, ::System::Reflection::MethodInfo*  theFunction)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::UnityEvent_3<T0,T1,T2>*>::get(),
                            "GetDelegate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Events::BaseInvokableCall*, false>(*this, ___internal_method, target, theFunction);
}
template<::il2cpp_utils::il2cpp_reference_type T0,::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
inline ::UnityEngine::Events::BaseInvokableCall* UnityEngine::Events::UnityEvent_3<T0,T1,T2>::GetDelegate(::UnityEngine::Events::UnityAction_3<T0,T1,T2>*  action)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::UnityEvent_3<T0,T1,T2>*>::get(),
                            "GetDelegate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction_3<T0,T1,T2>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Events::BaseInvokableCall*, false>(nullptr, ___internal_method, action);
}
template<::il2cpp_utils::il2cpp_reference_type T0,::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
inline void UnityEngine::Events::UnityEvent_3<T0,T1,T2>::Invoke(T0  arg0, T1  arg1, T2  arg2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::UnityEvent_3<T0,T1,T2>*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T0>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, arg0, arg1, arg2);
}
template<::il2cpp_utils::il2cpp_reference_type T0>
constexpr void UnityEngine::Events::UnityEvent_3<T0,int32_t,int32_t>::__set_m_InvokeArray(::ArrayW<::System::Object*,::Array<::System::Object*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::System::Object*,::Array<::System::Object*>*>, 0x28>(this, std::forward<::ArrayW<::System::Object*,::Array<::System::Object*>*>>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T0>
constexpr ::ArrayW<::System::Object*,::Array<::System::Object*>*>& UnityEngine::Events::UnityEvent_3<T0,int32_t,int32_t>::__get_m_InvokeArray()  {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Object*,::Array<::System::Object*>*>, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T0>
constexpr ::ArrayW<::System::Object*,::Array<::System::Object*>*> const& UnityEngine::Events::UnityEvent_3<T0,int32_t,int32_t>::__get_m_InvokeArray() const {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Object*,::Array<::System::Object*>*>, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T0>
inline ::UnityEngine::Events::UnityEvent_3<T0,int32_t,int32_t>* UnityEngine::Events::UnityEvent_3<T0,int32_t,int32_t>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::Events::UnityEvent_3<T0,int32_t,int32_t>*>());
}
template<::il2cpp_utils::il2cpp_reference_type T0>
inline void UnityEngine::Events::UnityEvent_3<T0,int32_t,int32_t>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::UnityEvent_3<T0,int32_t,int32_t>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T0>
inline void UnityEngine::Events::UnityEvent_3<T0,int32_t,int32_t>::AddListener(::UnityEngine::Events::UnityAction_3<T0,int32_t,int32_t>*  call)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::UnityEvent_3<T0,int32_t,int32_t>*>::get(),
                            "AddListener",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction_3<T0,int32_t,int32_t>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, call);
}
template<::il2cpp_utils::il2cpp_reference_type T0>
inline void UnityEngine::Events::UnityEvent_3<T0,int32_t,int32_t>::RemoveListener(::UnityEngine::Events::UnityAction_3<T0,int32_t,int32_t>*  call)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::UnityEvent_3<T0,int32_t,int32_t>*>::get(),
                            "RemoveListener",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction_3<T0,int32_t,int32_t>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, call);
}
template<::il2cpp_utils::il2cpp_reference_type T0>
inline ::System::Reflection::MethodInfo* UnityEngine::Events::UnityEvent_3<T0,int32_t,int32_t>::FindMethod_Impl(::StringW  name, ::System::Type*  targetObjType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::UnityEvent_3<T0,int32_t,int32_t>*>::get(),
                            "FindMethod_Impl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*, false>(*this, ___internal_method, name, targetObjType);
}
template<::il2cpp_utils::il2cpp_reference_type T0>
inline ::UnityEngine::Events::BaseInvokableCall* UnityEngine::Events::UnityEvent_3<T0,int32_t,int32_t>::GetDelegate(::System::Object*  target, ::System::Reflection::MethodInfo*  theFunction)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::UnityEvent_3<T0,int32_t,int32_t>*>::get(),
                            "GetDelegate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Events::BaseInvokableCall*, false>(*this, ___internal_method, target, theFunction);
}
template<::il2cpp_utils::il2cpp_reference_type T0>
inline ::UnityEngine::Events::BaseInvokableCall* UnityEngine::Events::UnityEvent_3<T0,int32_t,int32_t>::GetDelegate(::UnityEngine::Events::UnityAction_3<T0,int32_t,int32_t>*  action)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::UnityEvent_3<T0,int32_t,int32_t>*>::get(),
                            "GetDelegate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction_3<T0,int32_t,int32_t>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Events::BaseInvokableCall*, false>(nullptr, ___internal_method, action);
}
template<::il2cpp_utils::il2cpp_reference_type T0>
inline void UnityEngine::Events::UnityEvent_3<T0,int32_t,int32_t>::Invoke(T0  arg0, int32_t  arg1, int32_t  arg2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::UnityEvent_3<T0,int32_t,int32_t>*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T0>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, arg0, arg1, arg2);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
