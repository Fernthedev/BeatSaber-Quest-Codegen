#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/zzzz__RequireComponent_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::UnityEngine::RequireComponent._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::RequireComponent::*)(::System::Type*)>(&::UnityEngine::RequireComponent::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2cd276c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RequireComponent*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RequireComponent._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::RequireComponent::*)(::System::Type*, ::System::Type*)>(&::UnityEngine::RequireComponent::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2cd2794;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RequireComponent*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::RequireComponent::__set_m_Type0(::System::Type*  value)  {
::cordl_internals::setInstanceField<::System::Type*, 0x10>(this, std::forward<::System::Type*>(value));
}
constexpr ::System::Type* UnityEngine::RequireComponent::__get_m_Type0()  {
return ::cordl_internals::getInstanceField<::System::Type*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> UnityEngine::RequireComponent::__get_m_Type0() const {
return ::cordl_internals::getInstanceField<::System::Type*, 0x10>(this);
}
constexpr void UnityEngine::RequireComponent::__set_m_Type1(::System::Type*  value)  {
::cordl_internals::setInstanceField<::System::Type*, 0x18>(this, std::forward<::System::Type*>(value));
}
constexpr ::System::Type* UnityEngine::RequireComponent::__get_m_Type1()  {
return ::cordl_internals::getInstanceField<::System::Type*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> UnityEngine::RequireComponent::__get_m_Type1() const {
return ::cordl_internals::getInstanceField<::System::Type*, 0x18>(this);
}
constexpr void UnityEngine::RequireComponent::__set_m_Type2(::System::Type*  value)  {
::cordl_internals::setInstanceField<::System::Type*, 0x20>(this, std::forward<::System::Type*>(value));
}
constexpr ::System::Type* UnityEngine::RequireComponent::__get_m_Type2()  {
return ::cordl_internals::getInstanceField<::System::Type*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> UnityEngine::RequireComponent::__get_m_Type2() const {
return ::cordl_internals::getInstanceField<::System::Type*, 0x20>(this);
}
inline ::UnityEngine::RequireComponent* UnityEngine::RequireComponent::New_ctor(::System::Type*  requiredComponent)  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::RequireComponent*>(requiredComponent));
}
inline void UnityEngine::RequireComponent::_ctor(::System::Type*  requiredComponent)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RequireComponent*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, requiredComponent);
}
inline ::UnityEngine::RequireComponent* UnityEngine::RequireComponent::New_ctor(::System::Type*  requiredComponent, ::System::Type*  requiredComponent2)  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::RequireComponent*>(requiredComponent, requiredComponent2));
}
inline void UnityEngine::RequireComponent::_ctor(::System::Type*  requiredComponent, ::System::Type*  requiredComponent2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RequireComponent*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, requiredComponent, requiredComponent2);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
