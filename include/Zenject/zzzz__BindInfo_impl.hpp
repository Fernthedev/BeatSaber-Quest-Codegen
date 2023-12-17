#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__BindInfo_def.hpp"
#include "Zenject/zzzz__ToChoices_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Zenject/zzzz__BindingInheritanceMethods_def.hpp"
#include "Zenject/zzzz__InjectContext_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__ScopeTypes_def.hpp"
#include "Zenject/zzzz__InvalidBindResponses_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "Zenject/zzzz__BindingCondition_def.hpp"
#include "Zenject/zzzz__TypeValuePair_def.hpp"
//  Writing Method size for method: ::Zenject::BindInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::BindInfo::*)()>(&::Zenject::BindInfo::_ctor)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x2ede974;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::BindInfo*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::BindInfo.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::BindInfo::*)()>(&::Zenject::BindInfo::Dispose)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2edeb5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::BindInfo*>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::BindInfo.SetContextInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::BindInfo::*)(::StringW)>(&::Zenject::BindInfo::SetContextInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2edebb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::BindInfo*>::get(),
                            "SetContextInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::BindInfo.Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::BindInfo::*)()>(&::Zenject::BindInfo::Reset)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x2edea60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::BindInfo*>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IDisposable"
constexpr  Zenject::BindInfo::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr void Zenject::BindInfo::__set_MarkAsCreationBinding(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this, std::forward<bool>(value));
}
constexpr bool& Zenject::BindInfo::__get_MarkAsCreationBinding()  {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr bool const& Zenject::BindInfo::__get_MarkAsCreationBinding() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr void Zenject::BindInfo::__set_MarkAsUniqueSingleton(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x11>(this, std::forward<bool>(value));
}
constexpr bool& Zenject::BindInfo::__get_MarkAsUniqueSingleton()  {
return ::cordl_internals::getInstanceField<bool, 0x11>(this);
}
constexpr bool const& Zenject::BindInfo::__get_MarkAsUniqueSingleton() const {
return ::cordl_internals::getInstanceField<bool, 0x11>(this);
}
constexpr void Zenject::BindInfo::__set_ConcreteIdentifier(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0x18>(this, std::forward<::System::Object*>(value));
}
constexpr ::System::Object* Zenject::BindInfo::__get_ConcreteIdentifier()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> Zenject::BindInfo::__get_ConcreteIdentifier() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0x18>(this);
}
constexpr void Zenject::BindInfo::__set_SaveProvider(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this, std::forward<bool>(value));
}
constexpr bool& Zenject::BindInfo::__get_SaveProvider()  {
return ::cordl_internals::getInstanceField<bool, 0x20>(this);
}
constexpr bool const& Zenject::BindInfo::__get_SaveProvider() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this);
}
constexpr void Zenject::BindInfo::__set_OnlyBindIfNotBound(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x21>(this, std::forward<bool>(value));
}
constexpr bool& Zenject::BindInfo::__get_OnlyBindIfNotBound()  {
return ::cordl_internals::getInstanceField<bool, 0x21>(this);
}
constexpr bool const& Zenject::BindInfo::__get_OnlyBindIfNotBound() const {
return ::cordl_internals::getInstanceField<bool, 0x21>(this);
}
constexpr void Zenject::BindInfo::__set_RequireExplicitScope(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x22>(this, std::forward<bool>(value));
}
constexpr bool& Zenject::BindInfo::__get_RequireExplicitScope()  {
return ::cordl_internals::getInstanceField<bool, 0x22>(this);
}
constexpr bool const& Zenject::BindInfo::__get_RequireExplicitScope() const {
return ::cordl_internals::getInstanceField<bool, 0x22>(this);
}
constexpr void Zenject::BindInfo::__set_Identifier(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0x28>(this, std::forward<::System::Object*>(value));
}
constexpr ::System::Object* Zenject::BindInfo::__get_Identifier()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> Zenject::BindInfo::__get_Identifier() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0x28>(this);
}
constexpr void Zenject::BindInfo::__set_ContractTypes(::System::Collections::Generic::List_1<::System::Type*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::System::Type*>*, 0x30>(this, std::forward<::System::Collections::Generic::List_1<::System::Type*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::System::Type*>* Zenject::BindInfo::__get_ContractTypes()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::System::Type*>*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Type*>*> Zenject::BindInfo::__get_ContractTypes() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::System::Type*>*, 0x30>(this);
}
constexpr void Zenject::BindInfo::__set_BindingInheritanceMethod(::Zenject::BindingInheritanceMethods  value)  {
::cordl_internals::setInstanceField<::Zenject::BindingInheritanceMethods, 0x38>(this, std::forward<::Zenject::BindingInheritanceMethods>(value));
}
constexpr ::Zenject::BindingInheritanceMethods& Zenject::BindInfo::__get_BindingInheritanceMethod()  {
return ::cordl_internals::getInstanceField<::Zenject::BindingInheritanceMethods, 0x38>(this);
}
constexpr ::Zenject::BindingInheritanceMethods const& Zenject::BindInfo::__get_BindingInheritanceMethod() const {
return ::cordl_internals::getInstanceField<::Zenject::BindingInheritanceMethods, 0x38>(this);
}
constexpr void Zenject::BindInfo::__set_InvalidBindResponse(::Zenject::InvalidBindResponses  value)  {
::cordl_internals::setInstanceField<::Zenject::InvalidBindResponses, 0x3c>(this, std::forward<::Zenject::InvalidBindResponses>(value));
}
constexpr ::Zenject::InvalidBindResponses& Zenject::BindInfo::__get_InvalidBindResponse()  {
return ::cordl_internals::getInstanceField<::Zenject::InvalidBindResponses, 0x3c>(this);
}
constexpr ::Zenject::InvalidBindResponses const& Zenject::BindInfo::__get_InvalidBindResponse() const {
return ::cordl_internals::getInstanceField<::Zenject::InvalidBindResponses, 0x3c>(this);
}
constexpr void Zenject::BindInfo::__set_NonLazy(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x40>(this, std::forward<bool>(value));
}
constexpr bool& Zenject::BindInfo::__get_NonLazy()  {
return ::cordl_internals::getInstanceField<bool, 0x40>(this);
}
constexpr bool const& Zenject::BindInfo::__get_NonLazy() const {
return ::cordl_internals::getInstanceField<bool, 0x40>(this);
}
constexpr void Zenject::BindInfo::__set_Condition(::Zenject::BindingCondition*  value)  {
::cordl_internals::setInstanceField<::Zenject::BindingCondition*, 0x48>(this, std::forward<::Zenject::BindingCondition*>(value));
}
constexpr ::Zenject::BindingCondition* Zenject::BindInfo::__get_Condition()  {
return ::cordl_internals::getInstanceField<::Zenject::BindingCondition*, 0x48>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::BindingCondition*> Zenject::BindInfo::__get_Condition() const {
return ::cordl_internals::getInstanceField<::Zenject::BindingCondition*, 0x48>(this);
}
constexpr void Zenject::BindInfo::__set_ToChoice(::Zenject::ToChoices  value)  {
::cordl_internals::setInstanceField<::Zenject::ToChoices, 0x50>(this, std::forward<::Zenject::ToChoices>(value));
}
constexpr ::Zenject::ToChoices& Zenject::BindInfo::__get_ToChoice()  {
return ::cordl_internals::getInstanceField<::Zenject::ToChoices, 0x50>(this);
}
constexpr ::Zenject::ToChoices const& Zenject::BindInfo::__get_ToChoice() const {
return ::cordl_internals::getInstanceField<::Zenject::ToChoices, 0x50>(this);
}
constexpr void Zenject::BindInfo::__set_ContextInfo(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x58>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& Zenject::BindInfo::__get_ContextInfo()  {
return ::cordl_internals::getInstanceField<::StringW, 0x58>(this);
}
constexpr ::StringW const& Zenject::BindInfo::__get_ContextInfo() const {
return ::cordl_internals::getInstanceField<::StringW, 0x58>(this);
}
constexpr void Zenject::BindInfo::__set_ToTypes(::System::Collections::Generic::List_1<::System::Type*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::System::Type*>*, 0x60>(this, std::forward<::System::Collections::Generic::List_1<::System::Type*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::System::Type*>* Zenject::BindInfo::__get_ToTypes()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::System::Type*>*, 0x60>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Type*>*> Zenject::BindInfo::__get_ToTypes() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::System::Type*>*, 0x60>(this);
}
constexpr void Zenject::BindInfo::__set_Scope(::Zenject::ScopeTypes  value)  {
::cordl_internals::setInstanceField<::Zenject::ScopeTypes, 0x68>(this, std::forward<::Zenject::ScopeTypes>(value));
}
constexpr ::Zenject::ScopeTypes& Zenject::BindInfo::__get_Scope()  {
return ::cordl_internals::getInstanceField<::Zenject::ScopeTypes, 0x68>(this);
}
constexpr ::Zenject::ScopeTypes const& Zenject::BindInfo::__get_Scope() const {
return ::cordl_internals::getInstanceField<::Zenject::ScopeTypes, 0x68>(this);
}
constexpr void Zenject::BindInfo::__set_Arguments(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*, 0x70>(this, std::forward<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* Zenject::BindInfo::__get_Arguments()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*, 0x70>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*> Zenject::BindInfo::__get_Arguments() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*, 0x70>(this);
}
constexpr void Zenject::BindInfo::__set_InstantiatedCallback(::System::Action_2<::Zenject::InjectContext*,::System::Object*>*  value)  {
::cordl_internals::setInstanceField<::System::Action_2<::Zenject::InjectContext*,::System::Object*>*, 0x78>(this, std::forward<::System::Action_2<::Zenject::InjectContext*,::System::Object*>*>(value));
}
constexpr ::System::Action_2<::Zenject::InjectContext*,::System::Object*>* Zenject::BindInfo::__get_InstantiatedCallback()  {
return ::cordl_internals::getInstanceField<::System::Action_2<::Zenject::InjectContext*,::System::Object*>*, 0x78>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::Zenject::InjectContext*,::System::Object*>*> Zenject::BindInfo::__get_InstantiatedCallback() const {
return ::cordl_internals::getInstanceField<::System::Action_2<::Zenject::InjectContext*,::System::Object*>*, 0x78>(this);
}
inline ::Zenject::BindInfo* Zenject::BindInfo::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::Zenject::BindInfo*>());
}
inline void Zenject::BindInfo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::BindInfo*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void Zenject::BindInfo::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::BindInfo*>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void Zenject::BindInfo::SetContextInfo(::StringW  contextInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::BindInfo*>::get(),
                            "SetContextInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, contextInfo);
}
inline void Zenject::BindInfo::Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::BindInfo*>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
