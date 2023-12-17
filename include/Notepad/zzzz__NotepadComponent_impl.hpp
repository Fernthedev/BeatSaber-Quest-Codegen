#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Notepad/zzzz__NotepadComponent_def.hpp"
#include "Notepad/zzzz__NoteSO_def.hpp"
//  Writing Method size for method: ::Notepad::NotepadComponent._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Notepad::NotepadComponent::*)()>(&::Notepad::NotepadComponent::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe26484;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Notepad::NotepadComponent*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void Notepad::NotepadComponent::__set_note(::Notepad::NoteSO*  value)  {
::cordl_internals::setInstanceField<::Notepad::NoteSO*, 0x18>(this, std::forward<::Notepad::NoteSO*>(value));
}
constexpr ::Notepad::NoteSO* Notepad::NotepadComponent::__get_note()  {
return ::cordl_internals::getInstanceField<::Notepad::NoteSO*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Notepad::NoteSO*> Notepad::NotepadComponent::__get_note() const {
return ::cordl_internals::getInstanceField<::Notepad::NoteSO*, 0x18>(this);
}
inline ::Notepad::NotepadComponent* Notepad::NotepadComponent::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::Notepad::NotepadComponent*>());
}
inline void Notepad::NotepadComponent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Notepad::NotepadComponent*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
