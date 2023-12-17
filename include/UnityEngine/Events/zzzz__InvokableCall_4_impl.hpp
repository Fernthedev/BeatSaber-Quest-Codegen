#pragma once
#include "UnityEngine/Events/zzzz__BaseInvokableCall_impl.hpp"
#include "UnityEngine/Events/zzzz__InvokableCall_4_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Events/zzzz__UnityAction_4_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2,::il2cpp_utils::il2cpp_reference_type T3,::il2cpp_utils::il2cpp_reference_type T4>
constexpr void UnityEngine::Events::InvokableCall_4<T1,T2,T3,T4>::__set_Delegate(::UnityEngine::Events::UnityAction_4<T1,T2,T3,T4>*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Events::UnityAction_4<T1,T2,T3,T4>*, 0x10>(this, std::forward<::UnityEngine::Events::UnityAction_4<T1,T2,T3,T4>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2,::il2cpp_utils::il2cpp_reference_type T3,::il2cpp_utils::il2cpp_reference_type T4>
constexpr ::UnityEngine::Events::UnityAction_4<T1,T2,T3,T4>* UnityEngine::Events::InvokableCall_4<T1,T2,T3,T4>::__get_Delegate()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Events::UnityAction_4<T1,T2,T3,T4>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2,::il2cpp_utils::il2cpp_reference_type T3,::il2cpp_utils::il2cpp_reference_type T4>
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Events::UnityAction_4<T1,T2,T3,T4>*> UnityEngine::Events::InvokableCall_4<T1,T2,T3,T4>::__get_Delegate() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Events::UnityAction_4<T1,T2,T3,T4>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2,::il2cpp_utils::il2cpp_reference_type T3,::il2cpp_utils::il2cpp_reference_type T4>
inline ::UnityEngine::Events::InvokableCall_4<T1,T2,T3,T4>* UnityEngine::Events::InvokableCall_4<T1,T2,T3,T4>::New_ctor(::System::Object*  target, ::System::Reflection::MethodInfo*  theFunction)  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::Events::InvokableCall_4<T1,T2,T3,T4>*>(target, theFunction));
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2,::il2cpp_utils::il2cpp_reference_type T3,::il2cpp_utils::il2cpp_reference_type T4>
inline void UnityEngine::Events::InvokableCall_4<T1,T2,T3,T4>::_ctor(::System::Object*  target, ::System::Reflection::MethodInfo*  theFunction)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_4<T1,T2,T3,T4>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, target, theFunction);
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2,::il2cpp_utils::il2cpp_reference_type T3,::il2cpp_utils::il2cpp_reference_type T4>
inline void UnityEngine::Events::InvokableCall_4<T1,T2,T3,T4>::Invoke(::ArrayW<::System::Object*,::Array<::System::Object*>*>  args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_4<T1,T2,T3,T4>*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, args);
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2,::il2cpp_utils::il2cpp_reference_type T3,::il2cpp_utils::il2cpp_reference_type T4>
inline bool UnityEngine::Events::InvokableCall_4<T1,T2,T3,T4>::Find(::System::Object*  targetObj, ::System::Reflection::MethodInfo*  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_4<T1,T2,T3,T4>*>::get(),
                            "Find",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, targetObj, method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
