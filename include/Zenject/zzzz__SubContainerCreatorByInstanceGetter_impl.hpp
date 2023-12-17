#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__SubContainerCreatorByInstanceGetter_def.hpp"
#include "Zenject/zzzz__InjectContext_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Zenject/zzzz__TypeValuePair_def.hpp"
#include "Zenject/zzzz__ISubContainerCreator_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
//  Writing Method size for method: ::Zenject::SubContainerCreatorByInstanceGetter._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::SubContainerCreatorByInstanceGetter::*)(::System::Func_2<::Zenject::InjectContext*,::Zenject::DiContainer*>*)>(&::Zenject::SubContainerCreatorByInstanceGetter::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2f0b6b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerCreatorByInstanceGetter*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::Zenject::InjectContext*,::Zenject::DiContainer*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerCreatorByInstanceGetter.CreateSubContainer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::DiContainer* (::Zenject::SubContainerCreatorByInstanceGetter::*)(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*, ::Zenject::InjectContext*)>(&::Zenject::SubContainerCreatorByInstanceGetter::CreateSubContainer)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2f0b6e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerCreatorByInstanceGetter*>::get(),
                            "CreateSubContainer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Zenject::ISubContainerCreator"
constexpr  Zenject::SubContainerCreatorByInstanceGetter::operator ::Zenject::ISubContainerCreator*() noexcept {
return static_cast<::Zenject::ISubContainerCreator*>(static_cast<void*>(this));
}
constexpr void Zenject::SubContainerCreatorByInstanceGetter::__set__subcontainerGetter(::System::Func_2<::Zenject::InjectContext*,::Zenject::DiContainer*>*  value)  {
::cordl_internals::setInstanceField<::System::Func_2<::Zenject::InjectContext*,::Zenject::DiContainer*>*, 0x10>(this, std::forward<::System::Func_2<::Zenject::InjectContext*,::Zenject::DiContainer*>*>(value));
}
constexpr ::System::Func_2<::Zenject::InjectContext*,::Zenject::DiContainer*>* Zenject::SubContainerCreatorByInstanceGetter::__get__subcontainerGetter()  {
return ::cordl_internals::getInstanceField<::System::Func_2<::Zenject::InjectContext*,::Zenject::DiContainer*>*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::Zenject::InjectContext*,::Zenject::DiContainer*>*> Zenject::SubContainerCreatorByInstanceGetter::__get__subcontainerGetter() const {
return ::cordl_internals::getInstanceField<::System::Func_2<::Zenject::InjectContext*,::Zenject::DiContainer*>*, 0x10>(this);
}
inline ::Zenject::SubContainerCreatorByInstanceGetter* Zenject::SubContainerCreatorByInstanceGetter::New_ctor(::System::Func_2<::Zenject::InjectContext*,::Zenject::DiContainer*>*  subcontainerGetter)  {
return THROW_UNLESS(::il2cpp_utils::New<::Zenject::SubContainerCreatorByInstanceGetter*>(subcontainerGetter));
}
inline void Zenject::SubContainerCreatorByInstanceGetter::_ctor(::System::Func_2<::Zenject::InjectContext*,::Zenject::DiContainer*>*  subcontainerGetter)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerCreatorByInstanceGetter*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::Zenject::InjectContext*,::Zenject::DiContainer*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, subcontainerGetter);
}
inline ::Zenject::DiContainer* Zenject::SubContainerCreatorByInstanceGetter::CreateSubContainer(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*  args, ::Zenject::InjectContext*  context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerCreatorByInstanceGetter*>::get(),
                            "CreateSubContainer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Zenject::DiContainer*, false>(*this, ___internal_method, args, context);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
