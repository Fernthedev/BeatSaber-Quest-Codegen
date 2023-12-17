#pragma once
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "Notepad/zzzz__NoteSO_def.hpp"
#include "Notepad/zzzz__NoteURL_def.hpp"
//  Writing Method size for method: ::Notepad::NoteSO._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Notepad::NoteSO::*)()>(&::Notepad::NoteSO::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xe2648c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Notepad::NoteSO*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void Notepad::NoteSO::__set_title(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& Notepad::NoteSO::__get_title()  {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr ::StringW const& Notepad::NoteSO::__get_title() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr void Notepad::NoteSO::__set_content(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& Notepad::NoteSO::__get_content()  {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this);
}
constexpr ::StringW const& Notepad::NoteSO::__get_content() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this);
}
constexpr void Notepad::NoteSO::__set_urls(::ArrayW<::Notepad::NoteURL,::Array<::Notepad::NoteURL>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::Notepad::NoteURL,::Array<::Notepad::NoteURL>*>, 0x28>(this, std::forward<::ArrayW<::Notepad::NoteURL,::Array<::Notepad::NoteURL>*>>(value));
}
constexpr ::ArrayW<::Notepad::NoteURL,::Array<::Notepad::NoteURL>*>& Notepad::NoteSO::__get_urls()  {
return ::cordl_internals::getInstanceField<::ArrayW<::Notepad::NoteURL,::Array<::Notepad::NoteURL>*>, 0x28>(this);
}
constexpr ::ArrayW<::Notepad::NoteURL,::Array<::Notepad::NoteURL>*> const& Notepad::NoteSO::__get_urls() const {
return ::cordl_internals::getInstanceField<::ArrayW<::Notepad::NoteURL,::Array<::Notepad::NoteURL>*>, 0x28>(this);
}
inline ::Notepad::NoteSO* Notepad::NoteSO::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::Notepad::NoteSO*>());
}
inline void Notepad::NoteSO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Notepad::NoteSO*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
