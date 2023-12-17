#pragma once
#include "UnityEngine/EventSystems/zzzz__BaseInput_impl.hpp"
#include "UnityEngine/InputSystem/UI/zzzz__BaseInputOverride_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::BaseInputOverride.get_compositionString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::InputSystem::UI::BaseInputOverride::*)()>(&::UnityEngine::InputSystem::UI::BaseInputOverride::get_compositionString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2acf728;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::BaseInputOverride*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::BaseInputOverride*>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::BaseInputOverride._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::BaseInputOverride::*)()>(&::UnityEngine::InputSystem::UI::BaseInputOverride::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2acf730;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::BaseInputOverride*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::InputSystem::UI::BaseInputOverride::__set__compositionString_k__BackingField(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& UnityEngine::InputSystem::UI::BaseInputOverride::__get__compositionString_k__BackingField()  {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr ::StringW const& UnityEngine::InputSystem::UI::BaseInputOverride::__get__compositionString_k__BackingField() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
inline ::StringW UnityEngine::InputSystem::UI::BaseInputOverride::get_compositionString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::BaseInputOverride*>::get(),
                            "get_compositionString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline ::UnityEngine::InputSystem::UI::BaseInputOverride* UnityEngine::InputSystem::UI::BaseInputOverride::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::InputSystem::UI::BaseInputOverride*>());
}
inline void UnityEngine::InputSystem::UI::BaseInputOverride::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::BaseInputOverride*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
