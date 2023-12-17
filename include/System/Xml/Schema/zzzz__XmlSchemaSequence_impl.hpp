#pragma once
#include "System/Xml/Schema/zzzz__XmlSchemaGroupBase_impl.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaSequence_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaObjectCollection_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaSequence.get_Items
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaObjectCollection* (::System::Xml::Schema::XmlSchemaSequence::*)()>(&::System::Xml::Schema::XmlSchemaSequence::get_Items)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28c8da8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaSequence*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaSequence*>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaSequence._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XmlSchemaSequence::*)()>(&::System::Xml::Schema::XmlSchemaSequence::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x28c7b60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaSequence*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Xml::Schema::XmlSchemaSequence::__set_items(::System::Xml::Schema::XmlSchemaObjectCollection*  value)  {
::cordl_internals::setInstanceField<::System::Xml::Schema::XmlSchemaObjectCollection*, 0x38>(this, std::forward<::System::Xml::Schema::XmlSchemaObjectCollection*>(value));
}
constexpr ::System::Xml::Schema::XmlSchemaObjectCollection* System::Xml::Schema::XmlSchemaSequence::__get_items()  {
return ::cordl_internals::getInstanceField<::System::Xml::Schema::XmlSchemaObjectCollection*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaObjectCollection*> System::Xml::Schema::XmlSchemaSequence::__get_items() const {
return ::cordl_internals::getInstanceField<::System::Xml::Schema::XmlSchemaObjectCollection*, 0x38>(this);
}
inline ::System::Xml::Schema::XmlSchemaObjectCollection* System::Xml::Schema::XmlSchemaSequence::get_Items()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaSequence*>::get(),
                            "get_Items",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaObjectCollection*, false>(*this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchemaSequence* System::Xml::Schema::XmlSchemaSequence::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Xml::Schema::XmlSchemaSequence*>());
}
inline void System::Xml::Schema::XmlSchemaSequence::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaSequence*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
