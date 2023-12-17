#pragma once
#include "UnityEngine/Events/zzzz__BaseInvokableCall_impl.hpp"
#include "UnityEngine/Events/zzzz__InvokableCall_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "UnityEngine/Events/zzzz__UnityAction_2_def.hpp"
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
constexpr void UnityEngine::Events::InvokableCall_2<T1,T2>::__set_Delegate(::UnityEngine::Events::UnityAction_2<T1,T2>*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Events::UnityAction_2<T1,T2>*, 0x10>(this, std::forward<::UnityEngine::Events::UnityAction_2<T1,T2>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
constexpr ::UnityEngine::Events::UnityAction_2<T1,T2>* UnityEngine::Events::InvokableCall_2<T1,T2>::__get_Delegate()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Events::UnityAction_2<T1,T2>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Events::UnityAction_2<T1,T2>*> UnityEngine::Events::InvokableCall_2<T1,T2>::__get_Delegate() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Events::UnityAction_2<T1,T2>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
inline ::UnityEngine::Events::InvokableCall_2<T1,T2>* UnityEngine::Events::InvokableCall_2<T1,T2>::New_ctor(::System::Object*  target, ::System::Reflection::MethodInfo*  theFunction)  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::Events::InvokableCall_2<T1,T2>*>(target, theFunction));
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
inline void UnityEngine::Events::InvokableCall_2<T1,T2>::_ctor(::System::Object*  target, ::System::Reflection::MethodInfo*  theFunction)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_2<T1,T2>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, target, theFunction);
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
inline void UnityEngine::Events::InvokableCall_2<T1,T2>::Invoke(::ArrayW<::System::Object*,::Array<::System::Object*>*>  args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_2<T1,T2>*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, args);
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
inline bool UnityEngine::Events::InvokableCall_2<T1,T2>::Find(::System::Object*  targetObj, ::System::Reflection::MethodInfo*  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_2<T1,T2>*>::get(),
                            "Find",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, targetObj, method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
