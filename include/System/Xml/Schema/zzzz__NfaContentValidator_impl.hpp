#pragma once
#include "System/Xml/Schema/zzzz__ContentValidator_impl.hpp"
#include "System/Xml/Schema/zzzz__NfaContentValidator_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaContentType_def.hpp"
#include "System/Xml/Schema/zzzz__Positions_def.hpp"
#include "System/Xml/Schema/zzzz__BitSet_def.hpp"
#include "System/Xml/Schema/zzzz__SymbolsDictionary_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::NfaContentValidator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::NfaContentValidator::*)(::System::Xml::Schema::BitSet*, ::ArrayW<::System::Xml::Schema::BitSet*,::Array<::System::Xml::Schema::BitSet*>*>, ::System::Xml::Schema::SymbolsDictionary*, ::System::Xml::Schema::Positions*, int32_t, ::System::Xml::Schema::XmlSchemaContentType, bool, bool)>(&::System::Xml::Schema::NfaContentValidator::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x28b0ab0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::NfaContentValidator*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::BitSet*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Xml::Schema::BitSet*,::Array<::System::Xml::Schema::BitSet*>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::SymbolsDictionary*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::Positions*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaContentType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Xml::Schema::NfaContentValidator::__set_firstpos(::System::Xml::Schema::BitSet*  value)  {
::cordl_internals::setInstanceField<::System::Xml::Schema::BitSet*, 0x18>(this, std::forward<::System::Xml::Schema::BitSet*>(value));
}
constexpr ::System::Xml::Schema::BitSet* System::Xml::Schema::NfaContentValidator::__get_firstpos()  {
return ::cordl_internals::getInstanceField<::System::Xml::Schema::BitSet*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::BitSet*> System::Xml::Schema::NfaContentValidator::__get_firstpos() const {
return ::cordl_internals::getInstanceField<::System::Xml::Schema::BitSet*, 0x18>(this);
}
constexpr void System::Xml::Schema::NfaContentValidator::__set_followpos(::ArrayW<::System::Xml::Schema::BitSet*,::Array<::System::Xml::Schema::BitSet*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::System::Xml::Schema::BitSet*,::Array<::System::Xml::Schema::BitSet*>*>, 0x20>(this, std::forward<::ArrayW<::System::Xml::Schema::BitSet*,::Array<::System::Xml::Schema::BitSet*>*>>(value));
}
constexpr ::ArrayW<::System::Xml::Schema::BitSet*,::Array<::System::Xml::Schema::BitSet*>*>& System::Xml::Schema::NfaContentValidator::__get_followpos()  {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Xml::Schema::BitSet*,::Array<::System::Xml::Schema::BitSet*>*>, 0x20>(this);
}
constexpr ::ArrayW<::System::Xml::Schema::BitSet*,::Array<::System::Xml::Schema::BitSet*>*> const& System::Xml::Schema::NfaContentValidator::__get_followpos() const {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Xml::Schema::BitSet*,::Array<::System::Xml::Schema::BitSet*>*>, 0x20>(this);
}
constexpr void System::Xml::Schema::NfaContentValidator::__set_symbols(::System::Xml::Schema::SymbolsDictionary*  value)  {
::cordl_internals::setInstanceField<::System::Xml::Schema::SymbolsDictionary*, 0x28>(this, std::forward<::System::Xml::Schema::SymbolsDictionary*>(value));
}
constexpr ::System::Xml::Schema::SymbolsDictionary* System::Xml::Schema::NfaContentValidator::__get_symbols()  {
return ::cordl_internals::getInstanceField<::System::Xml::Schema::SymbolsDictionary*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::SymbolsDictionary*> System::Xml::Schema::NfaContentValidator::__get_symbols() const {
return ::cordl_internals::getInstanceField<::System::Xml::Schema::SymbolsDictionary*, 0x28>(this);
}
constexpr void System::Xml::Schema::NfaContentValidator::__set_positions(::System::Xml::Schema::Positions*  value)  {
::cordl_internals::setInstanceField<::System::Xml::Schema::Positions*, 0x30>(this, std::forward<::System::Xml::Schema::Positions*>(value));
}
constexpr ::System::Xml::Schema::Positions* System::Xml::Schema::NfaContentValidator::__get_positions()  {
return ::cordl_internals::getInstanceField<::System::Xml::Schema::Positions*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::Positions*> System::Xml::Schema::NfaContentValidator::__get_positions() const {
return ::cordl_internals::getInstanceField<::System::Xml::Schema::Positions*, 0x30>(this);
}
constexpr void System::Xml::Schema::NfaContentValidator::__set_endMarkerPos(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x38>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Xml::Schema::NfaContentValidator::__get_endMarkerPos()  {
return ::cordl_internals::getInstanceField<int32_t, 0x38>(this);
}
constexpr int32_t const& System::Xml::Schema::NfaContentValidator::__get_endMarkerPos() const {
return ::cordl_internals::getInstanceField<int32_t, 0x38>(this);
}
inline ::System::Xml::Schema::NfaContentValidator* System::Xml::Schema::NfaContentValidator::New_ctor(::System::Xml::Schema::BitSet*  firstpos, ::ArrayW<::System::Xml::Schema::BitSet*,::Array<::System::Xml::Schema::BitSet*>*>  followpos, ::System::Xml::Schema::SymbolsDictionary*  symbols, ::System::Xml::Schema::Positions*  positions, int32_t  endMarkerPos, ::System::Xml::Schema::XmlSchemaContentType  contentType, bool  isOpen, bool  isEmptiable)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Xml::Schema::NfaContentValidator*>(firstpos, followpos, symbols, positions, endMarkerPos, contentType, isOpen, isEmptiable));
}
inline void System::Xml::Schema::NfaContentValidator::_ctor(::System::Xml::Schema::BitSet*  firstpos, ::ArrayW<::System::Xml::Schema::BitSet*,::Array<::System::Xml::Schema::BitSet*>*>  followpos, ::System::Xml::Schema::SymbolsDictionary*  symbols, ::System::Xml::Schema::Positions*  positions, int32_t  endMarkerPos, ::System::Xml::Schema::XmlSchemaContentType  contentType, bool  isOpen, bool  isEmptiable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::NfaContentValidator*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::BitSet*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Xml::Schema::BitSet*,::Array<::System::Xml::Schema::BitSet*>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::SymbolsDictionary*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::Positions*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaContentType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, firstpos, followpos, symbols, positions, endMarkerPos, contentType, isOpen, isEmptiable);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
