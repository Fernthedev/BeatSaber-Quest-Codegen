#pragma once
#include "UnityEngine/Events/zzzz__UnityEventBase_impl.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_4_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Events/zzzz__BaseInvokableCall_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/zzzz__Type_def.hpp"
template<::il2cpp_utils::il2cpp_reference_type T0,::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2,::il2cpp_utils::il2cpp_reference_type T3>
constexpr void UnityEngine::Events::UnityEvent_4<T0,T1,T2,T3>::__set_m_InvokeArray(::ArrayW<::System::Object*,::Array<::System::Object*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::System::Object*,::Array<::System::Object*>*>, 0x28>(this, std::forward<::ArrayW<::System::Object*,::Array<::System::Object*>*>>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T0,::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2,::il2cpp_utils::il2cpp_reference_type T3>
constexpr ::ArrayW<::System::Object*,::Array<::System::Object*>*>& UnityEngine::Events::UnityEvent_4<T0,T1,T2,T3>::__get_m_InvokeArray()  {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Object*,::Array<::System::Object*>*>, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T0,::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2,::il2cpp_utils::il2cpp_reference_type T3>
constexpr ::ArrayW<::System::Object*,::Array<::System::Object*>*> const& UnityEngine::Events::UnityEvent_4<T0,T1,T2,T3>::__get_m_InvokeArray() const {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Object*,::Array<::System::Object*>*>, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T0,::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2,::il2cpp_utils::il2cpp_reference_type T3>
inline ::UnityEngine::Events::UnityEvent_4<T0,T1,T2,T3>* UnityEngine::Events::UnityEvent_4<T0,T1,T2,T3>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::Events::UnityEvent_4<T0,T1,T2,T3>*>());
}
template<::il2cpp_utils::il2cpp_reference_type T0,::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2,::il2cpp_utils::il2cpp_reference_type T3>
inline void UnityEngine::Events::UnityEvent_4<T0,T1,T2,T3>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::UnityEvent_4<T0,T1,T2,T3>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T0,::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2,::il2cpp_utils::il2cpp_reference_type T3>
inline ::System::Reflection::MethodInfo* UnityEngine::Events::UnityEvent_4<T0,T1,T2,T3>::FindMethod_Impl(::StringW  name, ::System::Type*  targetObjType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::UnityEvent_4<T0,T1,T2,T3>*>::get(),
                            "FindMethod_Impl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*, false>(*this, ___internal_method, name, targetObjType);
}
template<::il2cpp_utils::il2cpp_reference_type T0,::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2,::il2cpp_utils::il2cpp_reference_type T3>
inline ::UnityEngine::Events::BaseInvokableCall* UnityEngine::Events::UnityEvent_4<T0,T1,T2,T3>::GetDelegate(::System::Object*  target, ::System::Reflection::MethodInfo*  theFunction)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::UnityEvent_4<T0,T1,T2,T3>*>::get(),
                            "GetDelegate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Events::BaseInvokableCall*, false>(*this, ___internal_method, target, theFunction);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
