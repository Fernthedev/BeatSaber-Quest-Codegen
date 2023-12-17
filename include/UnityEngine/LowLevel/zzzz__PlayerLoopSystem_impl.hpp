#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/LowLevel/zzzz__PlayerLoopSystem_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/LowLevel/zzzz__PlayerLoopSystem_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::UnityEngine::LowLevel::__PlayerLoopSystem__UpdateFunction._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::LowLevel::__PlayerLoopSystem__UpdateFunction::*)(::System::Object*, ::cordl_internals::intptr_t)>(&::UnityEngine::LowLevel::__PlayerLoopSystem__UpdateFunction::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2cfa698;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::LowLevel::__PlayerLoopSystem__UpdateFunction*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevel::__PlayerLoopSystem__UpdateFunction.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::LowLevel::__PlayerLoopSystem__UpdateFunction::*)()>(&::UnityEngine::LowLevel::__PlayerLoopSystem__UpdateFunction::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2cfa754;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::LowLevel::__PlayerLoopSystem__UpdateFunction*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::LowLevel::__PlayerLoopSystem__UpdateFunction*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
inline ::UnityEngine::LowLevel::__PlayerLoopSystem__UpdateFunction* UnityEngine::LowLevel::__PlayerLoopSystem__UpdateFunction::New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::LowLevel::__PlayerLoopSystem__UpdateFunction*>(object, method));
}
inline void UnityEngine::LowLevel::__PlayerLoopSystem__UpdateFunction::_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::LowLevel::__PlayerLoopSystem__UpdateFunction*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, object, method);
}
inline void UnityEngine::LowLevel::__PlayerLoopSystem__UpdateFunction::Invoke()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::LowLevel::__PlayerLoopSystem__UpdateFunction*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::UnityEngine::LowLevel::PlayerLoopSystem.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::LowLevel::PlayerLoopSystem::*)()>(&::UnityEngine::LowLevel::PlayerLoopSystem::ToString)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2cfa678;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::LowLevel::PlayerLoopSystem>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::LowLevel::PlayerLoopSystem>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
constexpr void UnityEngine::LowLevel::PlayerLoopSystem::__set_type(::System::Type*  value)  {
::cordl_internals::setInstanceField<::System::Type*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Type*>(value));
}
constexpr ::System::Type* UnityEngine::LowLevel::PlayerLoopSystem::__get_type()  {
return ::cordl_internals::getInstanceField<::System::Type*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> UnityEngine::LowLevel::PlayerLoopSystem::__get_type() const {
return ::cordl_internals::getInstanceField<::System::Type*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::LowLevel::PlayerLoopSystem::__set_subSystemList(::ArrayW<::UnityEngine::LowLevel::PlayerLoopSystem,::Array<::UnityEngine::LowLevel::PlayerLoopSystem>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::LowLevel::PlayerLoopSystem,::Array<::UnityEngine::LowLevel::PlayerLoopSystem>*>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::ArrayW<::UnityEngine::LowLevel::PlayerLoopSystem,::Array<::UnityEngine::LowLevel::PlayerLoopSystem>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::LowLevel::PlayerLoopSystem,::Array<::UnityEngine::LowLevel::PlayerLoopSystem>*>& UnityEngine::LowLevel::PlayerLoopSystem::__get_subSystemList()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::LowLevel::PlayerLoopSystem,::Array<::UnityEngine::LowLevel::PlayerLoopSystem>*>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::ArrayW<::UnityEngine::LowLevel::PlayerLoopSystem,::Array<::UnityEngine::LowLevel::PlayerLoopSystem>*> const& UnityEngine::LowLevel::PlayerLoopSystem::__get_subSystemList() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::LowLevel::PlayerLoopSystem,::Array<::UnityEngine::LowLevel::PlayerLoopSystem>*>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::LowLevel::PlayerLoopSystem::__set_updateDelegate(::UnityEngine::LowLevel::__PlayerLoopSystem__UpdateFunction*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::LowLevel::__PlayerLoopSystem__UpdateFunction*, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::LowLevel::__PlayerLoopSystem__UpdateFunction*>(value));
}
constexpr ::UnityEngine::LowLevel::__PlayerLoopSystem__UpdateFunction* UnityEngine::LowLevel::PlayerLoopSystem::__get_updateDelegate()  {
return ::cordl_internals::getInstanceField<::UnityEngine::LowLevel::__PlayerLoopSystem__UpdateFunction*, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::LowLevel::__PlayerLoopSystem__UpdateFunction*> UnityEngine::LowLevel::PlayerLoopSystem::__get_updateDelegate() const {
return ::cordl_internals::getInstanceField<::UnityEngine::LowLevel::__PlayerLoopSystem__UpdateFunction*, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::LowLevel::PlayerLoopSystem::__set_updateFunction(::cordl_internals::intptr_t  value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t& UnityEngine::LowLevel::PlayerLoopSystem::__get_updateFunction()  {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::intptr_t const& UnityEngine::LowLevel::PlayerLoopSystem::__get_updateFunction() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::LowLevel::PlayerLoopSystem::__set_loopConditionFunction(::cordl_internals::intptr_t  value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t& UnityEngine::LowLevel::PlayerLoopSystem::__get_loopConditionFunction()  {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::intptr_t const& UnityEngine::LowLevel::PlayerLoopSystem::__get_loopConditionFunction() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline ::StringW UnityEngine::LowLevel::PlayerLoopSystem::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::LowLevel::PlayerLoopSystem>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "type", ty: "::System::Type*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "subSystemList", ty: "::ArrayW<::UnityEngine::LowLevel::PlayerLoopSystem,::Array<::UnityEngine::LowLevel::PlayerLoopSystem>*>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "updateDelegate", ty: "::UnityEngine::LowLevel::__PlayerLoopSystem__UpdateFunction*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "updateFunction", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "loopConditionFunction", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::LowLevel::PlayerLoopSystem::PlayerLoopSystem(::System::Type*  type, ::ArrayW<::UnityEngine::LowLevel::PlayerLoopSystem,::Array<::UnityEngine::LowLevel::PlayerLoopSystem>*>  subSystemList, ::UnityEngine::LowLevel::__PlayerLoopSystem__UpdateFunction*  updateDelegate, ::cordl_internals::intptr_t  updateFunction, ::cordl_internals::intptr_t  loopConditionFunction) noexcept : ::bs_hook::ValueTypeWrapper<0x28>() {this->type = type;
this->subSystemList = subSystemList;
this->updateDelegate = updateDelegate;
this->updateFunction = updateFunction;
this->loopConditionFunction = loopConditionFunction;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
